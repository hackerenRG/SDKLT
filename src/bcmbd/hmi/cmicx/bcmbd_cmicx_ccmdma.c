/*! \file bcmbd_cmicx_ccmdma.c
 *
 * CMICx CCMDMA routines
 */
/*
 * Copyright: (c) 2018 Broadcom. All Rights Reserved. "Broadcom" refers to 
 * Broadcom Limited and/or its subsidiaries.
 * 
 * Broadcom Switch Software License
 * 
 * This license governs the use of the accompanying Broadcom software. Your 
 * use of the software indicates your acceptance of the terms and conditions 
 * of this license. If you do not agree to the terms and conditions of this 
 * license, do not use the software.
 * 1. Definitions
 *    "Licensor" means any person or entity that distributes its Work.
 *    "Software" means the original work of authorship made available under 
 *    this license.
 *    "Work" means the Software and any additions to or derivative works of 
 *    the Software that are made available under this license.
 *    The terms "reproduce," "reproduction," "derivative works," and 
 *    "distribution" have the meaning as provided under U.S. copyright law.
 *    Works, including the Software, are "made available" under this license 
 *    by including in or with the Work either (a) a copyright notice 
 *    referencing the applicability of this license to the Work, or (b) a copy 
 *    of this license.
 * 2. Grant of Copyright License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    copyright license to reproduce, prepare derivative works of, publicly 
 *    display, publicly perform, sublicense and distribute its Work and any 
 *    resulting derivative works in any form.
 * 3. Grant of Patent License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    patent license to make, have made, use, offer to sell, sell, import, and 
 *    otherwise transfer its Work, in whole or in part. This patent license 
 *    applies only to the patent claims licensable by Licensor that would be 
 *    infringed by Licensor's Work (or portion thereof) individually and 
 *    excluding any combinations with any other materials or technology.
 *    If you institute patent litigation against any Licensor (including a 
 *    cross-claim or counterclaim in a lawsuit) to enforce any patents that 
 *    you allege are infringed by any Work, then your patent license from such 
 *    Licensor to the Work shall terminate as of the date such litigation is 
 *    filed.
 * 4. Redistribution
 *    You may reproduce or distribute the Work only if (a) you do so under 
 *    this License, (b) you include a complete copy of this License with your 
 *    distribution, and (c) you retain without modification any copyright, 
 *    patent, trademark, or attribution notices that are present in the Work.
 * 5. Derivative Works
 *    You may specify that additional or different terms apply to the use, 
 *    reproduction, and distribution of your derivative works of the Work 
 *    ("Your Terms") only if (a) Your Terms provide that the limitations of 
 *    Section 7 apply to your derivative works, and (b) you identify the 
 *    specific derivative works that are subject to Your Terms. 
 *    Notwithstanding Your Terms, this license (including the redistribution 
 *    requirements in Section 4) will continue to apply to the Work itself.
 * 6. Trademarks
 *    This license does not grant any rights to use any Licensor's or its 
 *    affiliates' names, logos, or trademarks, except as necessary to 
 *    reproduce the notices described in this license.
 * 7. Limitations
 *    Platform. The Work and any derivative works thereof may only be used, or 
 *    intended for use, with a Broadcom switch integrated circuit.
 *    No Reverse Engineering. You will not use the Work to disassemble, 
 *    reverse engineer, decompile, or attempt to ascertain the underlying 
 *    technology of a Broadcom switch integrated circuit.
 * 8. Termination
 *    If you violate any term of this license, then your rights under this 
 *    license (including the license grants of Sections 2 and 3) will 
 *    terminate immediately.
 * 9. Disclaimer of Warranty
 *    THE WORK IS PROVIDED "AS IS" WITHOUT WARRANTIES OR CONDITIONS OF ANY 
 *    KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WARRANTIES OR CONDITIONS OF 
 *    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE OR 
 *    NON-INFRINGEMENT. YOU BEAR THE RISK OF UNDERTAKING ANY ACTIVITIES UNDER 
 *    THIS LICENSE. SOME STATES' CONSUMER LAWS DO NOT ALLOW EXCLUSION OF AN 
 *    IMPLIED WARRANTY, SO THIS DISCLAIMER MAY NOT APPLY TO YOU.
 * 10. Limitation of Liability
 *    EXCEPT AS PROHIBITED BY APPLICABLE LAW, IN NO EVENT AND UNDER NO LEGAL 
 *    THEORY, WHETHER IN TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE 
 *    SHALL ANY LICENSOR BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY DIRECT, 
 *    INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF 
 *    OR RELATED TO THIS LICENSE, THE USE OR INABILITY TO USE THE WORK 
 *    (INCLUDING BUT NOT LIMITED TO LOSS OF GOODWILL, BUSINESS INTERRUPTION, 
 *    LOST PROFITS OR DATA, COMPUTER FAILURE OR MALFUNCTION, OR ANY OTHER 
 *    COMMERCIAL DAMAGES OR LOSSES), EVEN IF THE LICENSOR HAS BEEN ADVISED OF 
 *    THE POSSIBILITY OF SUCH DAMAGES.
 */

#include <bsl/bsl.h>
#include <shr/shr_error.h>
#include <shr/shr_debug.h>
#include <sal_config.h>
#include <sal/sal_types.h>
#include <sal/sal_alloc.h>
#include <sal/sal_libc.h>
#include <sal/sal_sem.h>
#include <sal/sal_sleep.h>
#include <sal/sal_spinlock.h>
#include <sal/sal_thread.h>
#include <sal/sal_time.h>
#include <bcmdrd/bcmdrd_dev.h>
#include <bcmdrd/bcmdrd_feature.h>
#include <bcmbd/bcmbd_cmicx_acc.h>
#include <bcmbd/bcmbd_cmicx_intr.h>
#include <bcmbd/bcmbd_ccmdma.h>
#include <bcmbd/bcmbd_internal.h>
#include "bcmbd_cmicx_ccmdma.h"

#define BSL_LOG_MODULE  BSL_LS_BCMBD_CCMDMA


#define BCMBD_CMICX_SLAVE_OFFSET    BCMBD_CMICX_PCIE_SLAVE_OFFSET

static cmicx_ccmdma_dev_t ccmdma_dev[CCMDMA_DEV_NUM_MAX];

static uint32_t cmicx_ccmdma_intr[CMICX_CCMDMA_CMC_MAX][CMICX_CCMDMA_CMC_CHAN] = {
    {CMICX_IRQ_CMC0_XC_MEMDMA_CH0_DONE, CMICX_IRQ_CMC0_XC_MEMDMA_CH1_DONE},
    {CMICX_IRQ_CMC1_XC_MEMDMA_CH0_DONE, CMICX_IRQ_CMC1_XC_MEMDMA_CH1_DONE}
};

/*!
 * Allocate a CCMDMA channel
 */
inline static int
cmicx_ccmdma_chan_get(cmicx_ccmdma_dev_t *dev, int *cmc, int *chan)
{
    int ch;

    while (1) {
        sal_spinlock_lock(dev->lock);
        if (!dev->bm_cmc) {
            sal_spinlock_unlock(dev->lock);
            return SHR_E_UNAVAIL;
        }
        for (ch = 0; ch < CMICX_CCMDMA_CHAN_MAX; ch++) {
            if (1 << ch & dev->bm_chan) {
                *cmc = ch / CMICX_CCMDMA_CMC_CHAN;
                *chan = ch % CMICX_CCMDMA_CMC_CHAN;
                dev->bm_chan &= ~(1 << ch);
                sal_spinlock_unlock(dev->lock);
                return SHR_E_NONE;
            }
        }
        dev->status |= CCMDMA_DS_CHAN_BUSY;
        sal_spinlock_unlock(dev->lock);
        sal_sem_take(dev->sem, SAL_SEM_FOREVER);
    }
}

/*!
 * Release a CCMDMA channel
 */
inline static int
cmicx_ccmdma_chan_put(cmicx_ccmdma_dev_t *dev, int cmc, int chan)
{
    int ch;

    if ((cmc < 0 || cmc >= CMICX_CCMDMA_CMC_MAX) ||
        (chan < 0 || chan >= CMICX_CCMDMA_CHAN_MAX)) {
        return SHR_E_PARAM;
    }

    sal_spinlock_lock(dev->lock);
    ch = chan + cmc * CMICX_CCMDMA_CMC_CHAN;
    dev->bm_chan |= 1 << ch;
    if (dev->status & CCMDMA_DS_CHAN_BUSY) {
        dev->status &= ~CCMDMA_DS_CHAN_BUSY;
        sal_spinlock_unlock(dev->lock);
        sal_sem_give(dev->sem);
        return SHR_E_NONE;
    }
    sal_spinlock_unlock(dev->lock);

    return SHR_E_NONE;
}

/*!
 * Report CCMDMA errors
 */
static void
cmicx_ccmdma_error_report(cmicx_ccmdma_dev_t *dev, CMIC_CMC_CCMDMA_STATr_t *stat,
                          int cmc, int ch)
{
    int unit = dev->unit;
    CMIC_CMC_CCMDMA_CUR_HOST0_ADDR_LOr_t cha0;
    CMIC_CMC_CCMDMA_CUR_HOST1_ADDR_LOr_t cha1;

    if (CMIC_CMC_CCMDMA_STATr_ERRORf_GET(*stat)) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit,
                              "Error happened on CCMDMA.\n")));
    }
    if (CMIC_CMC_CCMDMA_STATr_ECC_2BIT_CHECK_FAILf_GET(*stat)) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit,
                              "Received sbus ack with ECC_2BIT_CHECK_FAIL set.\n")));
    }
    READ_CMIC_CMC_CCMDMA_CUR_HOST0_ADDR_LOr(unit, cmc, ch, &cha0);
    READ_CMIC_CMC_CCMDMA_CUR_HOST1_ADDR_LOr(unit, cmc, ch, &cha1);
    LOG_ERROR(BSL_LOG_MODULE,
              (BSL_META_U(unit,
                          "Current src addr: 0x%x, dst addr: 0x%x.\n"),
               CMIC_CMC_CCMDMA_CUR_HOST0_ADDR_LOr_ADDRf_GET(cha0),
               CMIC_CMC_CCMDMA_CUR_HOST1_ADDR_LOr_ADDRf_GET(cha1)));
}

/*!
 * Reset CCMDMA channel
 */
static void
cmicx_ccmdma_chan_reset(cmicx_ccmdma_dev_t *dev, int cmc, int ch)
{
    int unit = dev->unit;
    CMIC_CMC_CCMDMA_CFGr_t cfg;
    CMIC_CMC_CCMDMA_STATr_t stat;
    int retry = CMICX_CCMDMA_RETRY;

    if (bcmdrd_feature_enabled(unit, BCMDRD_FT_PASSIVE_SIM)) {
        return;
    }

    /* Configure registers */
    CMIC_CMC_CCMDMA_CFGr_CLR(cfg);
    CMIC_CMC_CCMDMA_CFGr_ENf_SET(cfg, 1);
    CMIC_CMC_CCMDMA_CFGr_ABORTf_SET(cfg, 1);
    WRITE_CMIC_CMC_CCMDMA_CFGr(unit, cmc, ch, cfg);

    /* Wait the reset complete */
    do {
        READ_CMIC_CMC_CCMDMA_STATr(unit, cmc, ch, &stat);
        if (CMIC_CMC_CCMDMA_STATr_DONEf_GET(stat)) {
            break;
        }
        sal_usleep(CMICX_CCMDMA_WAIT);
    } while (retry--);
    if (retry <= 0) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit, "Ccmdma abort failed on %d/%d\n"), cmc, ch));
    }

    CMIC_CMC_CCMDMA_CFGr_CLR(cfg);
    WRITE_CMIC_CMC_CCMDMA_CFGr(unit, cmc, ch, cfg);
}

/*!
 * Wait for CCMDMA operation complete
 */
static int
cmicx_ccmdma_op_wait(cmicx_ccmdma_dev_t *dev, bcmbd_ccmdma_work_t *work,
                     int cmc, int ch)
{
    int unit = dev->unit;
    CMIC_CMC_CCMDMA_CFGr_t cfg;
    CMIC_CMC_CCMDMA_STATr_t stat;
    int retry = CMICX_CCMDMA_RETRY;
    int rv = SHR_E_NONE;

    if (work->flags & CCMDMA_WF_INT_MODE) {
        /* Wait interrupt raise */
        if (sal_sem_take(dev->ctrl->intr[ch + cmc * CMICX_CCMDMA_CMC_CHAN], SECOND_USEC)) {
            /* Operation timeout */
            rv = SHR_E_TIMEOUT;
        } else {
            READ_CMIC_CMC_CCMDMA_STATr(unit, cmc, ch, &stat);
            if (CMIC_CMC_CCMDMA_STATr_DONEf_GET(stat)) {
                if (CMIC_CMC_CCMDMA_STATr_ERRORf_GET(stat)) {
                    /* Report details if operation failed */
                    cmicx_ccmdma_error_report(dev, &stat, cmc, ch);
                    rv = SHR_E_FAIL;
                }
            } else {
                /* Operation timeout */
                rv = SHR_E_TIMEOUT;
            }
            CMIC_CMC_CCMDMA_CFGr_CLR(cfg);
            WRITE_CMIC_CMC_CCMDMA_CFGr(unit, cmc, ch, cfg);
        }
    } else {
        /* Poll transaction done indicator */
        while (retry--) {
            READ_CMIC_CMC_CCMDMA_STATr(unit, cmc, ch, &stat);
            if (CMIC_CMC_CCMDMA_STATr_DONEf_GET(stat)) {
                if (CMIC_CMC_CCMDMA_STATr_ERRORf_GET(stat)) {
                    /* Report details if operation failed */
                    cmicx_ccmdma_error_report(dev, &stat, cmc, ch);
                    rv = SHR_E_FAIL;
                }
                break;
            }
            sal_usleep(CMICX_CCMDMA_WAIT);
        }
        if (retry <= 0) {
            /* Operation timeout */
            rv = SHR_E_TIMEOUT;
        }
    }

    if (SHR_FAILURE(rv)) {
        if (rv == SHR_E_TIMEOUT) {
            LOG_ERROR(BSL_LOG_MODULE,
                      (BSL_META_U(unit, "Ccmdma timeout on %d/%d\n"), cmc, ch));

            /* Reset the channel if timeout happened */
            cmicx_ccmdma_chan_reset(dev, cmc, ch);
        }
    }

    return rv;
}

/*!
 * Operate CCMDMA
 */
static int
cmicx_ccmdma_op(cmicx_ccmdma_dev_t *dev, bcmbd_ccmdma_work_t *work)
{
    int unit = dev->unit;
    CMIC_CMC_CCMDMA_CFGr_t cfg;
    CMIC_CMC_CCMDMA_HOST0_MEM_START_ADDR_HIr_t hsah0;
    CMIC_CMC_CCMDMA_HOST0_MEM_START_ADDR_LOr_t hsal0;
    CMIC_CMC_CCMDMA_HOST1_MEM_START_ADDR_HIr_t hsah1;
    CMIC_CMC_CCMDMA_HOST1_MEM_START_ADDR_LOr_t hsal1;
    CMIC_CMC_CCMDMA_ENTRY_COUNTr_t cnt;
    int cmc, ch;
    int rv;

    /* Allocate a channel */
    rv = cmicx_ccmdma_chan_get(dev, &cmc, &ch);
    if (SHR_FAILURE(rv)) {
        return rv;
    }

    /* Configure registers */
    CMIC_CMC_CCMDMA_CFGr_CLR(cfg);
    if (dev->flags & CCMDMA_CF_BIGENDIAN && !(work->flags & CCMDMA_WF_SRC_INNER)) {
        CMIC_CMC_CCMDMA_CFGr_PROCESSOR0_ENDIANESSf_SET(cfg, 1);
    }
    if (dev->flags & CCMDMA_CF_BIGENDIAN && work->flags & CCMDMA_WF_DST_OUTER) {
        CMIC_CMC_CCMDMA_CFGr_PROCESSOR1_ENDIANESSf_SET(cfg, 1);
    }
    WRITE_CMIC_CMC_CCMDMA_CFGr(unit, cmc, ch, cfg);

    CMIC_CMC_CCMDMA_HOST0_MEM_START_ADDR_HIr_SET(hsah0, BCMBD_CMICX_SLAVE_OFFSET |
                                                        work->src_paddr >> 32);
    WRITE_CMIC_CMC_CCMDMA_HOST0_MEM_START_ADDR_HIr(unit, cmc, ch, hsah0);
    CMIC_CMC_CCMDMA_HOST0_MEM_START_ADDR_LOr_SET(hsal0, work->src_paddr);
    WRITE_CMIC_CMC_CCMDMA_HOST0_MEM_START_ADDR_LOr(unit, cmc, ch, hsal0);
    CMIC_CMC_CCMDMA_HOST1_MEM_START_ADDR_HIr_SET(hsah1, BCMBD_CMICX_SLAVE_OFFSET |
                                                        work->dst_paddr >> 32);
    WRITE_CMIC_CMC_CCMDMA_HOST1_MEM_START_ADDR_HIr(unit, cmc, ch, hsah1);
    CMIC_CMC_CCMDMA_HOST1_MEM_START_ADDR_LOr_SET(hsal1, work->dst_paddr);
    WRITE_CMIC_CMC_CCMDMA_HOST1_MEM_START_ADDR_LOr(unit, cmc, ch, hsal1);
    CMIC_CMC_CCMDMA_ENTRY_COUNTr_SET(cnt, work->xfer_count);
    WRITE_CMIC_CMC_CCMDMA_ENTRY_COUNTr(unit, cmc, ch, cnt);

    /* Enable interrupt if in interrupt mode */
    if (work->flags & CCMDMA_WF_INT_MODE) {
        bcmbd_cmicx_intr_enable(unit, cmicx_ccmdma_intr[cmc][ch]);
    }

    /* Start operation */
    CMIC_CMC_CCMDMA_CFGr_ENf_SET(cfg, 1);
    WRITE_CMIC_CMC_CCMDMA_CFGr(unit, cmc, ch, cfg);

    /* Wait operation complete */
    rv = cmicx_ccmdma_op_wait(dev, work, cmc, ch);

    /* Release the channel */
    cmicx_ccmdma_chan_put(dev, cmc, ch);

    return rv;
}

/*!
 * Interrupt service routine
 */
static void
cmicx_ccmdma_work_isr(int unit, uint32_t chan)
{
    cmicx_ccmdma_dev_t *dev = &ccmdma_dev[unit];
    ccmdma_ctrl_t *ctrl = dev->ctrl;
    int cmc, ch;

    /* Disable the interrupt */
    cmc = chan / CMICX_CCMDMA_CMC_CHAN;
    ch = chan % CMICX_CCMDMA_CMC_CHAN;
    bcmbd_cmicx_intr_disable_deferred(unit, cmicx_ccmdma_intr[cmc][ch]);

    sal_sem_give(ctrl->intr[chan]);
}

/*!
 * Execute work
 */
static int
bcmbd_cmicx_ccmdma_work_execute(ccmdma_ctrl_t *ctrl, bcmbd_ccmdma_work_t *work)
{
    cmicx_ccmdma_dev_t *dev = &ccmdma_dev[ctrl->unit];

    if (!dev->inited) {
        return SHR_E_UNAVAIL;
    }

    return cmicx_ccmdma_op(dev, work);
}

static const ccmdma_ops_t cmicx_ccmdma_ops = {
    .work_execute       = bcmbd_cmicx_ccmdma_work_execute
};

/*!
 * Transfer work
 */
int
bcmbd_cmicx_ccmdma_xfer(int unit, bcmbd_ccmdma_work_t *work)
{
    cmicx_ccmdma_dev_t *dev = &ccmdma_dev[unit];

    if (!dev->inited) {
        return SHR_E_UNAVAIL;
    }

    return cmicx_ccmdma_op(dev, work);
}

/*!
 * Initialize CCMDMA device
 */
int
bcmbd_cmicx_ccmdma_init(int unit)
{
    ccmdma_ctrl_t *ctrl = bcmbd_ccmdma_ctrl_get(unit);
    cmicx_ccmdma_dev_t *dev = &ccmdma_dev[unit];
    int cmc, ch;

    SHR_FUNC_ENTER(unit);

    if (!ctrl || !ctrl->active) {
        SHR_IF_ERR_EXIT(SHR_E_UNAVAIL);
    }

    sal_memset(dev, 0, sizeof(*dev));
    dev->unit = unit;
    dev->ctrl = ctrl;
    dev->bm_cmc = CMICX_CCMDMA_CMC_MASK;

    if (bcmdrd_dev_byte_swap_non_packet_dma_get(unit)) {
        dev->flags |= CCMDMA_CF_BIGENDIAN;
    }

    /* Resolve all the available channels */
    for (cmc = 0; cmc < CMICX_CCMDMA_CMC_MAX; cmc++) {
        if (1 << cmc & dev->bm_cmc) {
            dev->bm_chan |= CMICX_CCMDMA_CHAN_MASK << (cmc * CMICX_CCMDMA_CMC_CHAN);
            for (ch = 0; ch < CMICX_CCMDMA_CMC_CHAN; ch++) {
                /* Connect respective interrupt */
                bcmbd_cmicx_intr_func_set(unit, cmicx_ccmdma_intr[cmc][ch],
                                          (bcmbd_intr_f)cmicx_ccmdma_work_isr,
                                          ch + cmc * CMICX_CCMDMA_CMC_CHAN);
            }
        }
    }

    dev->sem = sal_sem_create("ccmdma_dev_sem", SAL_SEM_BINARY, 0);
    if (!dev->sem) {
        SHR_IF_ERR_EXIT(SHR_E_MEMORY);
    }

    dev->lock = sal_spinlock_create("ccmdma_dev_lock");
    if (!dev->lock) {
        SHR_IF_ERR_EXIT(SHR_E_MEMORY);
    }

    dev->inited = 1;

    ctrl->bm_grp = dev->bm_cmc;
    ctrl->bm_chan = dev->bm_chan;
    ctrl->ops = (ccmdma_ops_t *)&cmicx_ccmdma_ops;

exit:
    if (SHR_FUNC_ERR()) {
        if (dev->lock) {
            sal_spinlock_destroy(dev->lock);
            dev->lock = NULL;
        }

        if (dev->sem) {
            sal_sem_destroy(dev->sem);
            dev->sem = NULL;
        }
    }

    SHR_FUNC_EXIT();
}

/*!
 * Clean up CCMDMA device
 */
int
bcmbd_cmicx_ccmdma_cleanup(int unit)
{
    ccmdma_ctrl_t *ctrl = bcmbd_ccmdma_ctrl_get(unit);
    cmicx_ccmdma_dev_t *dev = &ccmdma_dev[unit];
    int cmc, ch;
    int retry = CMICX_CCMDMA_RETRY * 10;

    if (!ctrl) {
        return SHR_E_UNAVAIL;
    }

    if (!dev->inited) {
        return SHR_E_NONE;
    }

    dev->inited = 0;

    ctrl->ops = NULL;

    /* Drain all channels */
    sal_spinlock_lock(dev->lock);
    dev->bm_cmc = 0;
    while (dev->bm_chan != ctrl->bm_chan && retry--) {
        sal_spinlock_unlock(dev->lock);
        sal_usleep(CMICX_CCMDMA_WAIT);
        sal_spinlock_lock(dev->lock);
    }
    sal_spinlock_unlock(dev->lock);
    if (retry <= 0) {
        LOG_WARN(BSL_LOG_MODULE,
                 (BSL_META_U(unit, "Cannot clean up all channels.\n")));
    }

    /* Disable all interrupts */
    for (cmc = 0; cmc < CMICX_CCMDMA_CMC_MAX; cmc++) {
        if (1 << cmc & ctrl->bm_grp) {
            for (ch = 0; ch < CMICX_CCMDMA_CMC_CHAN; ch++) {
                bcmbd_cmicx_intr_disable_deferred(unit, cmicx_ccmdma_intr[cmc][ch]);
            }
        }
    }

    if (dev->lock) {
        sal_spinlock_destroy(dev->lock);
        dev->lock = NULL;
    }

    if (dev->sem) {
        sal_sem_destroy(dev->sem);
        dev->sem = NULL;
    }

    return SHR_E_NONE;
}

