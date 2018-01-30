/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
 *
 * $Id: $
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
 * 
 * 
 *
 * This file provides TXPMD access functions for BCM56960_A0
 */

#include <sal/sal_types.h>
#include <bsl/bsl.h>
#include <bcmpkt/bcmpkt_txpmd_internal.h>

#define MASK(_bn) (((uint32_t)0x1<<(_bn))-1)
#define WORD_FIELD_GET(_d,_s,_l) (((_d) >> (_s)) & MASK(_l))
#define WORD_FIELD_SET(_d,_s,_l,_v) (_d)=(((_d) & ~(MASK(_l) << (_s))) | (((_v) & MASK(_l)) << (_s)))
#define WORD_FIELD_MASK(_d,_s,_l) (_d)=((_d) | (MASK(_l) << (_s)))
/*******************************************************************************
 * SWFORMAT:  TXPMD
 * BLOCKS:
 * SIZE:     128
 */
static void bcmpkt_txpmd_start_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_START with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[0], 30, 2, val);
}

static uint32_t bcmpkt_txpmd_start_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_START on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[0], 30, 2);
}

static void bcmpkt_txpmd_header_type_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_HEADER_TYPE with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[0], 24, 6, val);
}

static uint32_t bcmpkt_txpmd_header_type_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_HEADER_TYPE on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[0], 24, 6);
}

static void bcmpkt_txpmd_pkt_length_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_PKT_LENGTH with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[3], 10, 14, val);
}

static uint32_t bcmpkt_txpmd_pkt_length_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_PKT_LENGTH on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[3], 10, 14);
}

static void bcmpkt_txpmd_ipcf_ptr_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_IPCF_PTR with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[3], 24, 8, val);
}

static uint32_t bcmpkt_txpmd_ipcf_ptr_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_IPCF_PTR on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[3], 24, 8);
}

static void bcmpkt_txpmd_sop_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_SOP with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[3], 9, 1, val);
}

static uint32_t bcmpkt_txpmd_sop_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_SOP on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[3], 9, 1);
}

static void bcmpkt_txpmd_eop_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_EOP with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[3], 8, 1, val);
}

static uint32_t bcmpkt_txpmd_eop_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_EOP on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[3], 8, 1);
}

static void bcmpkt_txpmd_cell_length_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_CELL_LENGTH with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[3], 0, 8, val);
}

static uint32_t bcmpkt_txpmd_cell_length_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_CELL_LENGTH on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[3], 0, 8);
}

static void bcmpkt_txpmd_cell_error_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_CELL_ERROR with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[1], 20, 1, val);
}

static uint32_t bcmpkt_txpmd_cell_error_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_CELL_ERROR on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[1], 20, 1);
}

static void bcmpkt_txpmd_local_dest_port_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_LOCAL_DEST_PORT with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[1], 0, 8, val);
}

static uint32_t bcmpkt_txpmd_local_dest_port_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_LOCAL_DEST_PORT on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[1], 0, 8);
}

static void bcmpkt_txpmd_src_modid_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_SRC_MODID with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[2], 0, 8, val);
}

static uint32_t bcmpkt_txpmd_src_modid_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_SRC_MODID on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[2], 0, 8);
}

static void bcmpkt_txpmd_cos_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_COS with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[2], 8, 6, val);
}

static uint32_t bcmpkt_txpmd_cos_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_COS on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[2], 8, 6);
}

static void bcmpkt_txpmd_input_pri_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_INPUT_PRI with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[2], 25, 4, val);
}

static uint32_t bcmpkt_txpmd_input_pri_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_INPUT_PRI on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[2], 25, 4);
}

static void bcmpkt_txpmd_unicast_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_UNICAST with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[2], 14, 1, val);
}

static uint32_t bcmpkt_txpmd_unicast_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_UNICAST on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[2], 14, 1);
}

static void bcmpkt_txpmd_rqe_q_num_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_RQE_Q_NUM with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[2], 16, 4, val);
}

static uint32_t bcmpkt_txpmd_rqe_q_num_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_RQE_Q_NUM on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[2], 16, 4);
}

static void bcmpkt_txpmd_set_l2bm_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_SET_L2BM with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[2], 15, 1, val);
}

static uint32_t bcmpkt_txpmd_set_l2bm_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_SET_L2BM on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[2], 15, 1);
}

static void bcmpkt_txpmd_ieee1588_one_step_enable_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_IEEE1588_ONE_STEP_ENABLE with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[1], 19, 1, val);
}

static uint32_t bcmpkt_txpmd_ieee1588_one_step_enable_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_IEEE1588_ONE_STEP_ENABLE on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[1], 19, 1);
}

static void bcmpkt_txpmd_ieee1588_regen_udp_checksum_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_IEEE1588_REGEN_UDP_CHECKSUM with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[1], 18, 1, val);
}

static uint32_t bcmpkt_txpmd_ieee1588_regen_udp_checksum_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_IEEE1588_REGEN_UDP_CHECKSUM on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[1], 18, 1);
}

static void bcmpkt_txpmd_ieee1588_ingress_timestamp_sign_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_IEEE1588_INGRESS_TIMESTAMP_SIGN with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[1], 17, 1, val);
}

static uint32_t bcmpkt_txpmd_ieee1588_ingress_timestamp_sign_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_IEEE1588_INGRESS_TIMESTAMP_SIGN on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[1], 17, 1);
}

static void bcmpkt_txpmd_ieee1588_timestamp_hdr_offset_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_IEEE1588_TIMESTAMP_HDR_OFFSET with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[1], 8, 8, val);
}

static uint32_t bcmpkt_txpmd_ieee1588_timestamp_hdr_offset_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_IEEE1588_TIMESTAMP_HDR_OFFSET on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[1], 8, 8);
}

static void bcmpkt_txpmd_tx_ts_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_TX_TS with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[1], 16, 1, val);
}

static uint32_t bcmpkt_txpmd_tx_ts_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_TX_TS on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[1], 16, 1);
}

static void bcmpkt_txpmd_spid_override_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_SPID_OVERRIDE with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[2], 24, 1, val);
}

static uint32_t bcmpkt_txpmd_spid_override_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_SPID_OVERRIDE on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[2], 24, 1);
}

static void bcmpkt_txpmd_spid_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_SPID with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[2], 22, 2, val);
}

static uint32_t bcmpkt_txpmd_spid_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_SPID on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[2], 22, 2);
}

static void bcmpkt_txpmd_spap_set(uint32_t *data, uint32_t val)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Set field BCMPKT_TXPMD_SPAP with value %u on device BCM56960_A0.\n"), val));
    WORD_FIELD_SET(data[2], 20, 2, val);
}

static uint32_t bcmpkt_txpmd_spap_get(uint32_t *data)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get field BCMPKT_TXPMD_SPAP on device BCM56960_A0.\n")));
    return WORD_FIELD_GET(data[2], 20, 2);
}

static uint32_t bcmpkt_txpmd_size_get(uint32_t *data, uint32_t **addr)
{
    LOG_DEBUG(BSL_LS_BCMPKT_TXPMD, (BSL_META("Get BCMPKT_TXPMD_SIZE on device BCM56960_A0.\n")));
    return 4;
}


const bcmpkt_txpmd_fget_t bcm56960_a0_txpmd_fget = {
    {
        bcmpkt_txpmd_start_get,
        bcmpkt_txpmd_header_type_get,
        bcmpkt_txpmd_pkt_length_get,
        bcmpkt_txpmd_ipcf_ptr_get,
        bcmpkt_txpmd_sop_get,
        bcmpkt_txpmd_eop_get,
        bcmpkt_txpmd_cell_length_get,
        bcmpkt_txpmd_cell_error_get,
        bcmpkt_txpmd_local_dest_port_get,
        bcmpkt_txpmd_src_modid_get,
        bcmpkt_txpmd_cos_get,
        bcmpkt_txpmd_input_pri_get,
        bcmpkt_txpmd_unicast_get,
        bcmpkt_txpmd_rqe_q_num_get,
        bcmpkt_txpmd_set_l2bm_get,
        bcmpkt_txpmd_ieee1588_one_step_enable_get,
        bcmpkt_txpmd_ieee1588_regen_udp_checksum_get,
        bcmpkt_txpmd_ieee1588_ingress_timestamp_sign_get,
        bcmpkt_txpmd_ieee1588_timestamp_hdr_offset_get,
        bcmpkt_txpmd_tx_ts_get,
        bcmpkt_txpmd_spid_override_get,
        bcmpkt_txpmd_spid_get,
        bcmpkt_txpmd_spap_get,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};


const bcmpkt_txpmd_fset_t bcm56960_a0_txpmd_fset = {
    {
        bcmpkt_txpmd_start_set,
        bcmpkt_txpmd_header_type_set,
        bcmpkt_txpmd_pkt_length_set,
        bcmpkt_txpmd_ipcf_ptr_set,
        bcmpkt_txpmd_sop_set,
        bcmpkt_txpmd_eop_set,
        bcmpkt_txpmd_cell_length_set,
        bcmpkt_txpmd_cell_error_set,
        bcmpkt_txpmd_local_dest_port_set,
        bcmpkt_txpmd_src_modid_set,
        bcmpkt_txpmd_cos_set,
        bcmpkt_txpmd_input_pri_set,
        bcmpkt_txpmd_unicast_set,
        bcmpkt_txpmd_rqe_q_num_set,
        bcmpkt_txpmd_set_l2bm_set,
        bcmpkt_txpmd_ieee1588_one_step_enable_set,
        bcmpkt_txpmd_ieee1588_regen_udp_checksum_set,
        bcmpkt_txpmd_ieee1588_ingress_timestamp_sign_set,
        bcmpkt_txpmd_ieee1588_timestamp_hdr_offset_set,
        bcmpkt_txpmd_tx_ts_set,
        bcmpkt_txpmd_spid_override_set,
        bcmpkt_txpmd_spid_set,
        bcmpkt_txpmd_spap_set,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};


const bcmpkt_txpmd_figet_t bcm56960_a0_txpmd_figet = {
    {
        bcmpkt_txpmd_size_get
    }
};

static shr_enum_map_t bcm56960_a0_txpmd_view_types[] = {
    {NULL, -1},
};

static int bcm56960_a0_txpmd_view_infos[BCMPKT_TXPMD_FID_COUNT] = {
     -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2, -2, -2, -2, -2,
};


void bcm56960_a0_txpmd_view_info_get(bcmpkt_pmd_view_info_t *info)
{
    info->view_infos = bcm56960_a0_txpmd_view_infos;
    info->view_types = bcm56960_a0_txpmd_view_types;
    info->view_type_get = NULL;
}
