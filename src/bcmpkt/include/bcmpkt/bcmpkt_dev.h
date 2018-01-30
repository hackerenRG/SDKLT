/*! \file bcmpkt_dev.h
 *
 * Interfaces for packet device configuration access.
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

#ifndef BCMPKT_DEV_H
#define BCMPKT_DEV_H

#include <sal/sal_types.h>
#include <shr/shr_types.h>
#include <shr/shr_pb.h>
#include <bcmdrd/bcmdrd_types.h>
#include <bcmpkt/bcmpkt_rcpu_hdr.h>

/*! Maximum chars are allowed in packet device name.  */
#define BCMPKT_DEV_NAME_MAX        16

/*!
 * Device driver types.
 * BCMPKT_DEV_DRV_T_AUTO type is for attach function ONLY. When it's input type,
 * Packet I/O module will select an appropriate packet device driver by taking
 * KNET as priority.
 */
typedef enum bcmpkt_dev_drv_types_e {
    BCMPKT_DEV_DRV_T_NONE, /*! No device driver. */
    BCMPKT_DEV_DRV_T_AUTO, /*! Automatically select driver. */
    BCMPKT_DEV_DRV_T_CNET, /*! User land DMA driver. */
    BCMPKT_DEV_DRV_T_KNET, /*! KNET Packet_mmap driver. */
    BCMPKT_DEV_DRV_T_COUNT /*! Must be end. */
} bcmpkt_dev_drv_types_t;

/*!
 * \name DMA channel direction flags.
 * \anchor BCMPKT_DMA_CH_DIR_XXX
 */
/*! \{ */
/*! For "direction", DMA channel is RX */
#define BCMPKT_DMA_CH_DIR_RX       0
/*! For "direction", DMA channel is TX */
#define BCMPKT_DMA_CH_DIR_TX       1
/*! \} */

/*! \brief DMA channel configuration structure.
 *
 * This structure defines DMA channel configuration parameters.
 *
 * DMA channel may work for transmitting or for receiving. The user configures
 * "dir" to set the channel for transmitting or for receiving.
 *
 * "ring_size" is the maximum number of packet descriptors supported by the
 * ring. Each descriptor is for one packet transmitting or receiving. So, it
 * may be taken as maximum packet number. 0 means the channel was not
 * initialized.
 *
 * "max_frame_size" means the maximum size packets are allowed to pass through
 * the DMA channel.
 */
typedef struct bcmpkt_dma_chan_s {
    /*! DMA channel index. */
    int id;

    /*! Channel direction, refer to \ref BCMPKT_DMA_CH_DIR_XXX. */
    uint32_t dir;

    /*!
     * Maximum number of buffers in the ring.
     * Configurable range [16, 512].
     */
    uint32_t ring_size;

    /*!
     * Maximum frame size (bytes).
     * This is for RX only.
     * Configurable range [512, 16384].
     */
    uint32_t max_frame_size;

} bcmpkt_dma_chan_t;

/*!
 * \brief Packet device configuration structure.
 *
 * This structure defines netdevice hardware configuration parameters.
 * The cgrp_size and cgrp_bmp could be got from bcmdrd APIs.
 */
typedef struct bcmpkt_dev_init_s {
    /*! Packet device name. */
    char name[BCMPKT_DEV_NAME_MAX];

    /*! MAC address for default network interface. */
    shr_mac_t mac_addr;

    /*! Number of channels in each group. */
    uint32_t cgrp_size;

    /*! Channel Group bitmap. */
    uint32_t cgrp_bmp;

} bcmpkt_dev_init_t;

/*!
 * \brief Packet device driver's statistics.
 *
 * This structure defines packet device driver's basic counters.
 */
typedef struct bcmpkt_dev_stat_s {
    /*! Number of successfully received packets */
    uint64_t rx_packets;

    /*! Number of dropped packets */
    uint64_t rx_dropped;

    /*! Number of successfully transmitted packets */
    uint64_t tx_packets;

    /*! Number of dropped packets */
    uint64_t tx_dropped;

    /*! Number of interrupts */
    uint64_t intrs;

}bcmpkt_dev_stat_t;

/*!
 * \brief DMA channel configuration function.
 *
 * \param [in] unit Switch unit number.
 * \param [in] chan DMA channel config handle.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_FAIL Access driver failed.
 */
typedef int (*bcmpkt_dma_chan_set_f) (int unit, bcmpkt_dma_chan_t *chan);

/*!
 * \brief DMA channel setting retrieve function.
 *
 * \param [in] unit Switch unit number.
 * \param [in] chan_id DMA channel number.
 * \param [out] chan DMA channel config handle.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_FAIL Access driver failed.
 */
typedef int (*bcmpkt_dma_chan_get_f) (int unit, int chan_id,
                                      bcmpkt_dma_chan_t *chan);

/*!
 * \brief DMA channel list retrieve function.
 *
 * Retrieve a list of DMA channels' configurations.
 *
 * \param [in] unit Switch unit number.
 * \param [in] size  The maximum number of \ref bcmpkt_dma_chan_t elements
 *                   can be held.
 * \param [out] chans The \ref bcmpkt_dma_chan_t elements array.
 * \param [out] num_elements The number of \ref bcmpkt_dma_chan_t elements
 *                           copied to 'chans', if size > 0; total number of
 *                           DMA channel in the unit can be used by packet
 *                           APIs, if size = 0.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_FAIL Access driver failed.
 */
typedef int (*bcmpkt_dma_chan_get_list_f) (int unit, uint32_t size,
                                           bcmpkt_dma_chan_t *chans,
                                           uint32_t *num_elements);

/*!
 * \brief Packet module initial function.
 *
 * This function is to be called for packet module initialization:
 * - Initialize packet device driver.
 * - Setup RX DMA channels and TX DMA channels.
 * - Create default netif (Netif index is 0).
 * - Optionally create UNET on default netif.
 *
 * \param [in] unit Switch unit number.
 * \param [in] init Packet module initiation handle.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_EXISTS Net Device already initialized.
 * \retval SHR_E_FAIL Access driver failed.
 */
typedef int (*bcmpkt_dev_init_f) (int unit, const bcmpkt_dev_init_t *init);

/*!
 * \brief Packet device clean up function.
 *
 * This function is to be called for packet device clean up.
 * - Cleanup all packet I/O DMA channels;
 * - Free allocated memories;
 * - Destroy netifs and UNETs;
 *
 * \param [in] unit Switch unit number.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_FAIL Cleanup failed.
 */
typedef int (*bcmpkt_dev_cleanup_f) (int unit);

/*!
 * \brief Enable a packet device.
 *
 * This function is used for activating an initialized packet device. If the
 * UNET was created on the defualt network interface, the device was enabled
 * when created the UNET, and the device is not allowed to enable/disable
 * through these APIs before destroy it.
 *
 * \param [in] unit Switch unit number.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_FAIL Enable failed.
 */
typedef int (*bcmpkt_dev_enable_f) (int unit);

/*!
 * \brief Disable a packet device.
 *
 * This function is used for deactivating an initialized packet device. If the
 * UNET was created on the defualt network interface, the device was enabled
 * when created the UNET, and the device is not allowed to enable/disable
 * through these APIs before destroy it.
 *
 * \param [in] unit Switch unit number.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_FAIL Disable failed.
 */
typedef int (*bcmpkt_dev_disable_f) (int unit);

/*!
 * \brief Dump packet device information into \c pb.
 *
 * \param [in] unit Switch unit number.
 * \param [out] pb Print buffer handle.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_FAIL Device info access failed.
 */
typedef int (*bcmpkt_dev_info_dump_f) (int unit, shr_pb_t *pb);

/*!
 * \brief Packet device statistics dump function.
 *
 *
 * \param [in] unit Switch unit number.
 * \param [out] stats Device statistics in driver.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_FAIL Device statistics access failed.
 */
typedef int (*bcmpkt_dev_stats_get_f) (int unit, bcmpkt_dev_stat_t *stats);

/*!
 * \brief Dump packet device statistics into \c pb.
 *
 * \param [in] unit Switch unit number.
 * \param [out] pb Print buffer handle.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_FAIL Device info access failed.
 */
typedef int (*bcmpkt_dev_stats_dump_f) (int unit, shr_pb_t *pb);

/*!
 * \brief Packet device statistics clear function.
 *
 * \param [in] unit Switch unit number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_FAIL Device info access failed.
 */
typedef int (*bcmpkt_dev_stats_clear_f) (int unit);

/*!
 * \brief RCPU header format configuration function.
 *
 * RCPU header is used for delivering packet metadata between SDK API and
 * network driver.
 *
 * SDK has default RCPU header format configuration support. The user may
 * use this API to configure special RCPU header format.
 *
 * \param [in] unit Switch unit number.
 * \param [in] hdr RCPU header configuration handle.
 *
 * \retval SHR_E_NONE success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_FAIL Transmit failed.
 */
typedef int (*bcmpkt_rcpu_hdr_set_f)(int unit, bcmpkt_rcpu_hdr_t *hdr);

/*!
 * \brief RCPU header format retrieve function.
 *
 * Fetch current RCPU header format configuration.
 *
 * \param [in] unit Switch unit number.
 * \param [in] hdr RCPU header configuration handle.
 *
 * \retval SHR_E_NONE success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_FAIL Transmit failed.
 */
typedef int (*bcmpkt_rcpu_hdr_get_f)(int unit, bcmpkt_rcpu_hdr_t *hdr);

/*!
 * \brief DMA channel operations structure.
 */
typedef struct bcmpkt_dma_chan_ops_s {

    /*! Configure a DMA channel. */
    bcmpkt_dma_chan_set_f   set;

    /*! Retrieve a DMA channel's configuration. */
    bcmpkt_dma_chan_get_f   get;

    /*! Get multiple DMA channels' configuration. */
    bcmpkt_dma_chan_get_list_f get_list;

} bcmpkt_dma_chan_ops_t;

/*!
 * \brief RX rate limit set function.
 *
 * This function is used for setting RX speed limit in terms of PPS.
 * The \c rate = -1 means to disable rate limit.
 *
 * \param [in] unit Switch unit number.
 * \param [in] rate RX maximum rate.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_UNAVAIL function is not supported.
 */
typedef int (*bcmpkt_rx_rate_limit_set_f) (int unit, int rate);

/*!
 * \brief RX rate limit get function.
 *
 * This function is used for getting RX speed limit in terms of PPS.
 * The \c rate = -1 means rate limit is disabled.
 *
 * \param [in] unit Switch unit number.
 * \param [out] rate RX maximum rate.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_PARAM Invalid rate point value.
 * \retval SHR_E_UNAVAIL function is not supported.
 */
typedef int (*bcmpkt_rx_rate_limit_get_f) (int unit, int *rate);

/*!
 * \brief Packet device rate limit operation vector.
 */
typedef struct bcmpkt_rx_rate_limit_ops_s {

    /*! Set RX rate limit. */
    bcmpkt_rx_rate_limit_set_f set;

    /*! Get RX rate limit. */
    bcmpkt_rx_rate_limit_get_f get;
} bcmpkt_rx_rate_limit_ops_t;

/*!
 * \brief Network device operations vector.
 */
typedef struct bcmpkt_dev_s {
    /*! Inited flag: 0 - uninitialized 1 - initialized. */
    int inited;

    /*! Packet device driver name. */
    char driver_name[128];

    /*! Packet device driver type. */
    bcmpkt_dev_drv_types_t driver_type;

    /*! Packet device initial function. */
    bcmpkt_dev_init_f       init;

    /*! Packet device cleanup function */
    bcmpkt_dev_cleanup_f    cleanup;

    /*! Packet device enable function. */
    bcmpkt_dev_enable_f     enable;

    /*! Packet device enable function. */
    bcmpkt_dev_disable_f    disable;

    /*! DMA channel operations vector. */
    bcmpkt_dma_chan_ops_t   dma_chan_ops;

    /*! Dump device information. */
    bcmpkt_dev_info_dump_f  info_dump;

    /*! Get device statistics. */
    bcmpkt_dev_stats_get_f stats_get;

    /*! Dump device statistics. */
    bcmpkt_dev_stats_dump_f stats_dump;

    /*! Clear device statistics. */
    bcmpkt_dev_stats_clear_f stats_clear;

    /*! Configure RCPU header format. */
    bcmpkt_rcpu_hdr_set_f rcpu_hdr_set;

    /*! Retrieve RCPU header format. */
    bcmpkt_rcpu_hdr_get_f rcpu_hdr_get;

    /*! Rate limit operations vector. */
    bcmpkt_rx_rate_limit_ops_t rx_rate_limit_ops;

} bcmpkt_dev_t;

/*!
 * \brief DMA channel Configuration function.
 *
 * \param [in] unit Switch unit number.
 * \param [in] chan DMA channel config handle.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_FAIL Access driver failed.
 */
extern int
bcmpkt_dma_chan_set(int unit, bcmpkt_dma_chan_t *chan);

/*!
 * \brief DMA channel setting retrieve function.
 *
 *
 * \param [in] unit Switch unit number.
 * \param [in] chan_id DMA channel number.
 * \param [out] chan DMA channel config handle.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_FAIL Access driver failed.
 */
extern int
bcmpkt_dma_chan_get(int unit, int chan_id, bcmpkt_dma_chan_t *chan);

/*!
 * \brief DMA channel list retrieve function.
 *
 * Retrieve a list of DMA channels' configurations.
 *
 * \param [in] unit Switch unit number.
 * \param [in] size  The maximum number of \ref bcmpkt_dma_chan_t elements
 *                   can be held.
 * \param [out] chans The \ref bcmpkt_dma_chan_t elements array.
 * \param [out] num_elements The number of \ref bcmpkt_dma_chan_t elements
 *                           copied to 'chans', if size > 0; total number of
 *                           DMA channel in the unit can be used by packet
 *                           APIs, if size = 0.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_FAIL Access driver failed.
 */
extern int
bcmpkt_dma_chan_get_list(int unit, uint32_t size, bcmpkt_dma_chan_t *chans,
                         uint32_t *num_elements);

/*!
 * \brief Packet module initial function.
 *
 * This function is to be called for packet module initialization:
 * - Initialize packet device driver.
 * - Setup RX DMA channels and TX DMA channels.
 * - Create default netif (Netif index is 0).
 * - Optionally create UNET on default netif.
 *
 * \param [in] unit Switch unit number.
 * \param [in] init Packet module initiation handle.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_EXISTS Net Device already initialized.
 * \retval SHR_E_FAIL Access driver failed.
 */
extern int
bcmpkt_dev_init(int unit, const bcmpkt_dev_init_t *init);

/*!
 * \brief Packet device clean up function.
 *
 * This function is to be called for packet device clean up.
 * - Cleanup all packet I/O DMA channels;
 * - Free allocated memories;
 * - Destroy netifs and UNETs;
 *
 * \param [in] unit Switch unit number.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_FAIL Cleanup failed.
 */
extern int
bcmpkt_dev_cleanup(int unit);

/*!
 * \brief Enable a packet device.
 *
 * This function is used for activating an initialized packet device. If the
 * UNET was created on the defualt network interface, the device was enabled
 * when created the UNET, and the device is not allowed to enable/disable
 * through these APIs before destroy it.
 *
 * \param [in] unit Switch unit number.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_FAIL Enable failed.
 */
extern int
bcmpkt_dev_enable(int unit);

/*!
 * \brief Disable a packet device.
 *
 * This function is used for deactivating an initialized packet device. If the
 * UNET was created on the defualt network interface, the device was enabled
 * when created the UNET, and the device is not allowed to enable/disable
 * through these APIs before destroy it.
 *
 * \param [in] unit Switch unit number.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_FAIL Disable failed.
 */
extern int
bcmpkt_dev_disable(int unit);

/*!
 * \brief Dump packet device information into \c pb.
 *
 * \param [in] unit Switch unit number.
 * \param [out] pb Print buffer handle.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_FAIL Device info access failed.
 */
extern int
bcmpkt_dev_info_dump(int unit, shr_pb_t *pb);

/*!
 * \brief Packet device statistics get function.
 *
 *
 * \param [in] unit Switch unit number.
 * \param [out] stats Device statistics in driver.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_FAIL Device statistics access failed.
 */
extern int
bcmpkt_dev_stats_get(int unit, bcmpkt_dev_stat_t *stats);

/*!
 * \brief Dump packet device statistics into \c pb.
 *
 * \param [in] unit Switch unit number.
 * \param [out] pb Print buffer handle.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_FAIL Device info access failed.
 */
extern int
bcmpkt_dev_stats_dump(int unit, shr_pb_t *pb);

/*!
 * \brief Packet device statistics clear function.
 *
 * \param [in] unit Switch unit number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_FAIL Device info access failed.
 */
extern int
bcmpkt_dev_stats_clear(int unit);

/*!
 * \brief Register a device driver.
 *
 * \param [in] dev_drv Device driver handle.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_CONFIG Invalid driver.
 * \retval SHR_E_PARAM Invalid parameter.
 * \retval SHR_E_EXISTS Driver registered already.
 */
extern int
bcmpkt_dev_drv_register(bcmpkt_dev_t *dev_drv);

/*!
 * \brief Unregister a device driver.
 *
 * \param [in] type Device driver type.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_PARAM Invalid type.
 * \retval SHR_E_BUSY The driver is in using.
 */
extern int
bcmpkt_dev_drv_unregister(bcmpkt_dev_drv_types_t type);

/*!
 * \brief Attach packet device driver.
 *
 * This function is used for attach a driver onto a packet device.
 *
 * The BCMPKT_DEV_DRV_T_AUTO type is used for automatically select device
 * driver. In this case, if linux_ngknet.ko was loaded, the KNET driver will be
 * selected; otherwise, the corret CMIC driver will be attached onto the device.
 *
 * \param [in] unit Switch unit number.
 * \param [in] type Device driver type.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_PARAM Invalid type.
 * \retval SHR_E_EXISTS Driver exists.
 * \retval SHR_E_FAIL Attach failed.
 */
extern int
bcmpkt_dev_drv_attach(int unit, bcmpkt_dev_drv_types_t type);

/*!
 * \brief Get device driver's type.
 *
 * \param [in] unit Switch unit number.
 * \param [out] type Device driver type.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit number.
 */
extern int
bcmpkt_dev_drv_type_get(int unit, bcmpkt_dev_drv_types_t *type);

/*!
 * \brief Detach a device driver.
 *
 * This function will call \ref bcmpkt_dev_t.cleanup to cleanup the packet device,
 * and then remove device driver from it.
 *
 * \param [in] unit Switch unit number.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit number.
 */
extern int
bcmpkt_dev_drv_detach(int unit);

/*!
 * \brief Get device type.
 *
 * \param [in] unit Unit number.
 * \param [out] type Device type.
 *
 * \retval SHR_E_NONE Succeed.
 * \retval SHR_E_UNIT Invalid unit number.
 * \retval SHR_E_PARAM Input len is too small.
 * \retval SHR_E_NOT_FOUND Devuce name not found.
 */
extern int
bcmpkt_dev_type_get(int unit, bcmdrd_dev_type_t *type);

/*!
 * \brief RCPU header format configuration function.
 *
 * RCPU header is used for delivering packet metadata between SDK API and
 * network driver.
 *
 * SDK has default RCPU header format configuration support. The user may
 * use this API to configure special RCPU header format.
 *
 * \param [in] unit Switch unit number.
 * \param [in] hdr RCPU header configuration handle.
 *
 * \retval SHR_E_NONE success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_FAIL Transmit failed.
 */
extern int
bcmpkt_rcpu_hdr_set(int unit, bcmpkt_rcpu_hdr_t *hdr);

/*!
 * \brief RCPU header format retrieve function.
 *
 * Fetch current RCPU header format configuration.
 *
 * \param [in] unit Switch unit number.
 * \param [in] hdr RCPU header configuration handle.
 *
 * \retval SHR_E_NONE success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_PARAM Check parameters failed.
 * \retval SHR_E_FAIL Transmit failed.
 */
extern int
bcmpkt_rcpu_hdr_get(int unit, bcmpkt_rcpu_hdr_t *hdr);

/*!
 * \brief RX rate limit set function.
 *
 * This function is used for setting RX speed limit in terms of KPPS.
 * The \c rate = -1 means to disable rate limit.
 *
 * \param [in] unit Switch unit number.
 * \param [in] rate RX maximum rate.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_UNAVAIL function is not supported.
 */
extern int
bcmpkt_rx_rate_limit_set(int unit, int rate);

/*!
 * \brief RX rate limit get function.
 *
 * This function is used for getting RX speed limit in terms of KPPS.
 * The \c rate = -1 means rate limit is disabled.
 *
 * \param [in] unit Switch unit number.
 * \param [out] rate RX maximum rate.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_UNIT Invalid unit.
 * \retval SHR_E_CONFIG Network device was not initialized.
 * \retval SHR_E_PARAM Invalid rate pointer value.
 * \retval SHR_E_UNAVAIL function is not supported.
 */
extern int
bcmpkt_rx_rate_limit_get(int unit, int *rate);

#endif /* BCMPKT_DEV_H */
