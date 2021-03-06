/*! \file bcmbd_cmicm_tbl.c
 *
 * Table operations in CMICm
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
#include <bcmdrd/bcmdrd_types.h>

#include <bcmbd/bcmbd.h>
#include <bcmbd/bcmbd_cmicm.h>
#include <bcmbd/bcmbd_cmicm_tbl.h>
#include <bcmbd/bcmbd_cmicm_dump.h>

#include "bcmbd_cmicm_schan.h"

/* Log source for this component */
#define BSL_LOG_MODULE  BSL_LS_BCMBD_SOCMEM

static int
cmicm_default_tbl_insert(int unit, uint32_t adext, uint32_t addr,
                         uint32_t *data, size_t wsize, uint32_t bank_ignore_mask,
                         bcmbd_tbl_resp_info_t *resp_info, uint32_t *resp_data)
{
    int rv;
    int acctype, dstblk, datalen;
    unsigned int idx;
    schan_msg_t schan_msg;

    /* Configure S-Channel parameters */
    acctype = BCMBD_CMICM_ADEXT2ACCTYPE(adext);
    dstblk = BCMBD_CMICM_ADEXT2BLOCK(adext);
    datalen = 4 * wsize;

    /* Setup S-Channel command packet */
    SCHAN_MSG_CLEAR(&schan_msg);
    SCMH_OPCODE_SET(schan_msg.gencmd.header, TABLE_INSERT_CMD_MSG);
    SCMH_ACCTYPE_SET(schan_msg.gencmd.header, acctype);
    SCMH_DSTBLK_SET(schan_msg.gencmd.header, dstblk);
    SCMH_DATALEN_SET(schan_msg.gencmd.header, datalen);
    SCMH_BANK_SET(schan_msg.gencmd.header, bank_ignore_mask);

    schan_msg.gencmd.address = addr;
    for (idx = 0; idx < wsize; idx++) {
        schan_msg.gencmd.data[idx] = data[idx];
    }

    rv = bcmbd_cmicm_schan_op(unit, &schan_msg, 2 + wsize, 2 + wsize);
    if (SHR_FAILURE(rv) && !SCMH_NACK_GET(schan_msg.genresp.header)) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit,
                              "SOC table insert error: "
                              "addr=0x%03"PRIx32"%08"PRIx32"\n"),
                   adext, addr));
        /* SHR_E_FAIL is reserved for NACK-bit inserted condition. */
        return (rv == SHR_E_FAIL) ? SHR_E_INTERNAL : rv;
    }

    /* Check result */
    if (SCMH_OPCODE_GET(schan_msg.genresp.header) != TABLE_INSERT_DONE_MSG) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit,
                              "SOC table insert invalid ACK: "
                              "%"PRIu32" (expected %d) addr=0x%08"PRIx32"\n"),
                   SCMH_OPCODE_GET(schan_msg.readresp.header),
                   TABLE_INSERT_DONE_MSG, addr));
        return SHR_E_INTERNAL;
    }

    /* Get response information */
    if (resp_info) {
        resp_info->resp_word = schan_msg.genresp.response;
    }

    if (SCMH_NACK_GET(schan_msg.genresp.header)) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit,
                              "SOC table insert NACK: "
                              "resp_word=0x%08"PRIx32" addr=0x%08"PRIx32"\n"),
                   schan_msg.genresp.response, addr));
        return SHR_E_FAIL;
    }

    /* Get response data if NACK is not set. */
    if (resp_data) {
        for (idx = 0; idx < wsize; idx++) {
            resp_data[idx] = schan_msg.genresp.data[idx];
        }
    }

    /* Debug output */
    if (LOG_CHECK_VERBOSE(BSL_LOG_MODULE)) {
        shr_pb_t *pb = shr_pb_create();
        bcmbd_cmicm_dump_mem(pb, unit, adext, addr, data, wsize);
        LOG_VERBOSE(BSL_LOG_MODULE,
                    (BSL_META_U(unit,
                                "SOC table insert: %s\n"), shr_pb_str(pb)));
        shr_pb_destroy(pb);
    }

    return SHR_E_NONE;
}

static int
cmicm_default_tbl_delete(int unit, uint32_t adext, uint32_t addr,
                         uint32_t *data, size_t wsize, uint32_t bank_ignore_mask,
                         bcmbd_tbl_resp_info_t *resp_info, uint32_t *resp_data)
{
    int rv;
    int acctype, dstblk, datalen;
    unsigned int idx;
    schan_msg_t schan_msg;

    /* Configure S-Channel parameters */
    acctype = BCMBD_CMICM_ADEXT2ACCTYPE(adext);
    dstblk = BCMBD_CMICM_ADEXT2BLOCK(adext);
    datalen = 4 * wsize;

    /* Setup S-Channel command packet */
    SCHAN_MSG_CLEAR(&schan_msg);
    SCMH_OPCODE_SET(schan_msg.gencmd.header, TABLE_DELETE_CMD_MSG);
    SCMH_ACCTYPE_SET(schan_msg.gencmd.header, acctype);
    SCMH_DSTBLK_SET(schan_msg.gencmd.header, dstblk);
    SCMH_DATALEN_SET(schan_msg.gencmd.header, datalen);
    SCMH_BANK_SET(schan_msg.gencmd.header, bank_ignore_mask);

    schan_msg.gencmd.address = addr;
    for (idx = 0; idx < wsize; idx++) {
        schan_msg.gencmd.data[idx] = data[idx];
    }

    rv = bcmbd_cmicm_schan_op(unit, &schan_msg, 2 + wsize, 2 + wsize);
    if (SHR_FAILURE(rv) && !SCMH_NACK_GET(schan_msg.genresp.header)) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit,
                              "SOC table delete error: "
                              "addr=0x%03"PRIx32"%08"PRIx32"\n"),
                   adext, addr));
        /* SHR_E_FAIL is reserved for NACK-bit inserted condition. */
        return (rv == SHR_E_FAIL) ? SHR_E_INTERNAL : rv;
    }

    /* Check result */
    if (SCMH_OPCODE_GET(schan_msg.genresp.header) != TABLE_DELETE_DONE_MSG) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit,
                              "SOC table delete invalid ACK: "
                              "%"PRIu32" (expected %d) addr=0x%08"PRIx32"\n"),
                   SCMH_OPCODE_GET(schan_msg.readresp.header),
                   TABLE_DELETE_DONE_MSG, addr));
        return SHR_E_INTERNAL;
    }

    /* Get response information */
    if (resp_info) {
        resp_info->resp_word = schan_msg.genresp.response;
    }

    if (SCMH_NACK_GET(schan_msg.genresp.header)) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit,
                              "SOC table delete NACK: "
                              "resp_word=0x%08"PRIx32" addr=0x%08"PRIx32"\n"),
                   schan_msg.genresp.response, addr));
        return SHR_E_FAIL;
    }

    /* Get response data if NACK is not set. */
    if (resp_data) {
        for (idx = 0; idx < wsize; idx++) {
            resp_data[idx] = schan_msg.genresp.data[idx];
        }
    }

    /* Debug output */
    if (LOG_CHECK_VERBOSE(BSL_LOG_MODULE)) {
        shr_pb_t *pb = shr_pb_create();
        bcmbd_cmicm_dump_mem(pb, unit, adext, addr, data, wsize);
        LOG_VERBOSE(BSL_LOG_MODULE,
                    (BSL_META_U(unit,
                                "SOC table delete: %s\n"), shr_pb_str(pb)));
        shr_pb_destroy(pb);
    }

    return SHR_E_NONE;
}

static int
cmicm_default_tbl_lookup(int unit, uint32_t adext, uint32_t addr,
                         uint32_t *data, size_t wsize, uint32_t bank_ignore_mask,
                         bcmbd_tbl_resp_info_t *resp_info, uint32_t *resp_data)
{
    int rv;
    int acctype, dstblk, datalen;
    unsigned int idx;
    schan_msg_t schan_msg;

    /* Configure S-Channel parameters */
    acctype = BCMBD_CMICM_ADEXT2ACCTYPE(adext);
    dstblk = BCMBD_CMICM_ADEXT2BLOCK(adext);
    datalen = 4 * wsize;

    /* Setup S-Channel command packet */
    SCHAN_MSG_CLEAR(&schan_msg);
    SCMH_OPCODE_SET(schan_msg.gencmd.header, TABLE_LOOKUP_CMD_MSG);
    SCMH_ACCTYPE_SET(schan_msg.gencmd.header, acctype);
    SCMH_DSTBLK_SET(schan_msg.gencmd.header, dstblk);
    SCMH_DATALEN_SET(schan_msg.gencmd.header, datalen);
    SCMH_BANK_SET(schan_msg.gencmd.header, bank_ignore_mask);

    schan_msg.gencmd.address = addr;
    for (idx = 0; idx < wsize; idx++) {
        schan_msg.gencmd.data[idx] = data[idx];
    }

    rv = bcmbd_cmicm_schan_op(unit, &schan_msg, 2 + wsize, 2 + wsize);
    if (SHR_FAILURE(rv) && !SCMH_NACK_GET(schan_msg.genresp.header)) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit,
                              "SOC table lookup error: "
                              "addr=0x%03"PRIx32"%08"PRIx32"\n"),
                   adext, addr));
        /* SHR_E_FAIL is reserved for NACK-bit inserted condition. */
        return (rv == SHR_E_FAIL) ? SHR_E_INTERNAL : rv;
    }

    /* Check result */
    if (SCMH_OPCODE_GET(schan_msg.genresp.header) != TABLE_LOOKUP_DONE_MSG) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit,
                              "SOC table lookup invalid ACK: "
                              "%"PRIu32" (expected %d) addr=0x%08"PRIx32"\n"),
                   SCMH_OPCODE_GET(schan_msg.readresp.header),
                   TABLE_LOOKUP_DONE_MSG, addr));
        return SHR_E_INTERNAL;
    }

    /* Get response information */
    if (resp_info) {
        resp_info->resp_word = schan_msg.genresp.response;
    }

    if (SCMH_NACK_GET(schan_msg.genresp.header)) {
        LOG_ERROR(BSL_LOG_MODULE,
                  (BSL_META_U(unit,
                              "SOC table lookup NACK: "
                              "resp_word=0x%08"PRIx32" addr=0x%08"PRIx32"\n"),
                   schan_msg.genresp.response, addr));
        return SHR_E_FAIL;
    }

    /* Get response data if NACK is not set. */
    if (resp_data) {
        for (idx = 0; idx < wsize; idx++) {
            resp_data[idx] = schan_msg.genresp.data[idx];
        }
    }

    /* Debug output */
    if (LOG_CHECK_VERBOSE(BSL_LOG_MODULE)) {
        shr_pb_t *pb = shr_pb_create();
        bcmbd_cmicm_dump_mem(pb, unit, adext, addr, data, wsize);
        LOG_VERBOSE(BSL_LOG_MODULE,
                    (BSL_META_U(unit,
                                "SOC table lookup: %s\n"), shr_pb_str(pb)));
        shr_pb_destroy(pb);
    }

    return SHR_E_NONE;
}

int
bcmbd_cmicm_tbl_insert(int unit, uint32_t adext, uint32_t addr,
                       uint32_t *data, size_t wsize, uint32_t bank_ignore_mask,
                       bcmbd_tbl_resp_info_t *resp_info, uint32_t *resp_data)
{
    return cmicm_default_tbl_insert(unit, adext, addr, data, wsize,
                                    bank_ignore_mask, resp_info, resp_data);
}

int
bcmbd_cmicm_tbl_delete(int unit, uint32_t adext, uint32_t addr,
                       uint32_t *data, size_t wsize, uint32_t bank_ignore_mask,
                       bcmbd_tbl_resp_info_t *resp_info, uint32_t *resp_data)
{
    return cmicm_default_tbl_delete(unit, adext, addr, data, wsize,
                                    bank_ignore_mask, resp_info, resp_data);
}

int
bcmbd_cmicm_tbl_lookup(int unit, uint32_t adext, uint32_t addr,
                       uint32_t *data, size_t wsize, uint32_t bank_ignore_mask,
                       bcmbd_tbl_resp_info_t *resp_info, uint32_t *resp_data)
{
    return cmicm_default_tbl_lookup(unit, adext, addr, data, wsize,
                                    bank_ignore_mask, resp_info, resp_data);
}
