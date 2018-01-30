/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table mapping files.
 * Edits to this file will be lost when it is regenerated.
 *
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
/* Logical Table Adaptor for component bcmtm */
/* Handler: bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmtm/wred/bcmtm_wred_pipe_sp_field.h>
#include <bcmdrd/chip/bcm56960_a0_enum.h>

static const bcmltd_field_desc_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_src_field_desc_s0[5] = {
    {
        .field_id  = TM_WRED_PIPE_SERVICE_POOLt_DRAIN_TRACKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = TM_WRED_PIPE_SERVICE_POOLt_WEIGHTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = TM_WRED_PIPE_SERVICE_POOLt_WREDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = TM_WRED_PIPE_SERVICE_POOLt_TM_WRED_TIMER_PROFILE_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = TM_WRED_PIPE_SERVICE_POOLt_TM_WRED_DROP_CURVE_SET_PROFILE_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_dst_field_desc_d0[5] = {
    {
        .field_id  = CAP_AVERAGEf,
        .field_idx = 0,
        .minbit    = 4,
        .maxbit    = 4,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = WEIGHTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 3,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = WRED_ENf,
        .field_idx = 0,
        .minbit    = 5,
        .maxbit    = 5,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = TIME_DOMAIN_SELf,
        .field_idx = 0,
        .minbit    = 6,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = PROFILE_INDEXf,
        .field_idx = 0,
        .minbit    = 8,
        .maxbit    = 14,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const
bcmltd_field_list_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_src_list_s0 = {
    .field_num = 5,
    .field_array = bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_src_field_desc_s0
};

static const bcmltd_field_list_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_dst_list_d0 = {
    .field_num = 5,
    .field_array = bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_dst_field_desc_d0
};

static const uint32_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_transform_src_s0[5] = {
    TM_WRED_PIPE_SERVICE_POOLt_DRAIN_TRACKf,
    TM_WRED_PIPE_SERVICE_POOLt_WEIGHTf,
    TM_WRED_PIPE_SERVICE_POOLt_WREDf,
    TM_WRED_PIPE_SERVICE_POOLt_TM_WRED_TIMER_PROFILE_IDf,
    TM_WRED_PIPE_SERVICE_POOLt_TM_WRED_DROP_CURVE_SET_PROFILE_IDf,
};

static const uint32_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_transform_dst_d0[5] = {
    CAP_AVERAGEf,
    WEIGHTf,
    WRED_ENf,
    TIME_DOMAIN_SELf,
    PROFILE_INDEXf,
};

static const uint32_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_transform_tbl_t0[4] = {
    MMU_WRED_CONFIG_MMU_XPE0_EPIPE0m,
    MMU_WRED_CONFIG_MMU_XPE0_EPIPE1m,
    MMU_WRED_CONFIG_MMU_XPE1_EPIPE2m,
    MMU_WRED_CONFIG_MMU_XPE1_EPIPE3m,
};

static const uint32_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_transform_tbl_t1[4] = {
    MMU_WRED_CONFIG_MMU_XPE2_EPIPE0m,
    MMU_WRED_CONFIG_MMU_XPE2_EPIPE1m,
    MMU_WRED_CONFIG_MMU_XPE3_EPIPE2m,
    MMU_WRED_CONFIG_MMU_XPE3_EPIPE3m,
};

static const bcmltd_generic_arg_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_comp_data = {
    .sid       = TM_WRED_PIPE_SERVICE_POOLt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_xfrm_handler_fwd_arg_s0_d0_t0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 4,
    .table       = bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_transform_tbl_t0,
    .fields      = 5,
    .field       = bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_transform_src_s0,
    .field_list  = &bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_src_list_s0,
    .rfields     = 5,
    .rfield      = bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_transform_dst_d0,
    .rfield_list = &bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_dst_list_d0,
    .comp_data   = &bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_comp_data
};

static const bcmltd_transform_arg_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_xfrm_handler_rev_arg_s0_d0_t0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 4,
    .table       = bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_transform_tbl_t0,
    .fields      = 5,
    .field       = bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_transform_dst_d0,
    .field_list  = &bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_dst_list_d0,
    .rfields     = 5,
    .rfield      = bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_transform_src_s0,
    .rfield_list = &bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_src_list_s0,
    .comp_data   = &bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_comp_data
};

static const bcmltd_transform_arg_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_xfrm_handler_fwd_arg_s0_d0_t1 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 4,
    .table       = bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_transform_tbl_t1,
    .fields      = 5,
    .field       = bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_transform_src_s0,
    .field_list  = &bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_src_list_s0,
    .rfields     = 5,
    .rfield      = bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_transform_dst_d0,
    .rfield_list = &bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_dst_list_d0,
    .comp_data   = &bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_comp_data
};

const bcmltd_xfrm_handler_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_xfrm_handler_fwd_s0_d0_t0 = {
    .transform     = bcmtm_wred_pipe_sp_field_transform,
    .arg           = &bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_xfrm_handler_fwd_arg_s0_d0_t0
};

const bcmltd_xfrm_handler_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_xfrm_handler_fwd_s0_d0_t1 = {
    .transform     = bcmtm_wred_pipe_sp_field_transform,
    .arg           = &bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_xfrm_handler_fwd_arg_s0_d0_t1
};

const bcmltd_xfrm_handler_t
bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_xfrm_handler_rev_s0_d0_t0 = {
    .transform     = bcmtm_wred_pipe_sp_field_rev_transform,
    .arg           = &bcm56960_a0_lta_bcmtm_wred_pipe_sp_field_xfrm_handler_rev_arg_s0_d0_t0
};


