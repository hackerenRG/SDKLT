/*! \file bcmfp_egr_policy_map.c
 *
 * APIs for Egress Policy LT fields to internal value mapping
 *
 * This file contains function definitions for Ingress Policy LT template
 * fields to action mapping.
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

/*******************************************************************************
  Includes
 */
#include <shr/shr_debug.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmfp/bcmfp_internal.h>
#include <bcmfp/map/bcmfp_lt_policy_map.h>

#define BSL_LOG_MODULE BSL_LS_BCMFP_COMMON

/*! Ingress FP Policy Field Identifiers that needs individual handling. */
bcmfp_lt_policy_sp_fids_t bcmfp_egr_policy_sp_fids = {
    .policy_id_fid = FP_EGR_POLICY_TEMPLATEt_FP_EGR_POLICY_TEMPLATE_IDf,
    .policy_fid_count = FP_EGR_POLICY_TEMPLATEt_FIELD_COUNT
};

/*******************************************************************************
 * Public functions
 */
int
bcmfp_egr_policy_init(int unit,
                      bcmfp_lt_info_t *lt_info)
{
    SHR_FUNC_ENTER(unit)

    lt_info->flags |= BCMFP_LT_FLAGS_INMEM_SUPPORT;
    lt_info->map_get = bcmfp_egr_policy_action_map_get;
    lt_info->key_fid = FP_EGR_POLICY_TEMPLATEt_FP_EGR_POLICY_TEMPLATE_IDf;
    lt_info->sp_fids = (void *) &bcmfp_egr_policy_sp_fids;
    lt_info->comp_id = BCMMGMT_FP_COMP_ID;
    lt_info->sub_id = BCMFP_LT_IMM_SUBID_EGR_POLICY_TEMPLATE;
    lt_info->key_sz = BCMFP_LT_IMM_KEY_SZ_4BYTE;
    lt_info->fdata_format = BCMFP_LT_IMM_FDATA_FORMAT_I1D3;
    lt_info->rows = 1024;

    SHR_FUNC_EXIT();
}

/* Mapping of LT fields to Action */
int
bcmfp_egr_policy_action_map_get(int unit,
                                uint32_t fid,
                                uint32_t idx,
                                void *map)
{
    bcmfp_action_t action;
    bcmfp_lt_policy_action_map_t *policy_map = NULL;
    SHR_FUNC_ENTER(unit);

    policy_map = (bcmfp_lt_policy_action_map_t *) map;

    switch(fid) {

        case FP_EGR_POLICY_TEMPLATEt_ACTION_DROPf:
            action = BCMFP_ACTION_DROP;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_R_DROPf:
            action = BCMFP_ACTION_R_DROP;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_DROP_CANCELf:
            action = BCMFP_ACTION_DROP_CANCEL;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_R_DROP_CANCELf:
            action = BCMFP_ACTION_R_DROP_CANCEL;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_DSCPf:
            action = BCMFP_ACTION_NEW_DSCP;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_R_DSCPf:
            action = BCMFP_ACTION_NEW_R_DSCP;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_ECNf:
            action = BCMFP_ACTION_NEW_ECN;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_R_ECNf:
            action = BCMFP_ACTION_NEW_R_ECN;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_Y_DROPf:
            action = BCMFP_ACTION_Y_DROP;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_Y_DROP_CANCELf:
            action = BCMFP_ACTION_Y_DROP_CANCEL;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_Y_DSCPf:
            action = BCMFP_ACTION_NEW_Y_DSCP;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_Y_ECNf:
            action = BCMFP_ACTION_NEW_Y_ECN;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_G_DROPf:
            action = BCMFP_ACTION_G_DROP;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_G_DROP_CANCELf:
            action = BCMFP_ACTION_G_DROP_CANCEL;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_G_DSCPf:
            action = BCMFP_ACTION_NEW_G_DSCP;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_G_ECNf:
            action = BCMFP_ACTION_NEW_G_ECN;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_INNER_VLANIDf:
            action = BCMFP_ACTION_NEW_INNER_VLANID;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_OUTER_VLANIDf:
            action = BCMFP_ACTION_NEW_OUTER_VLANID;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_OUTER_TPIDf:
            action = BCMFP_ACTION_NEW_OUTER_TPID;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_OUTER_DOT1Pf:
            action = BCMFP_ACTION_NEW_OUTER_DOT1P;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_R_OUTER_DOT1Pf:
            action = BCMFP_ACTION_NEW_R_OUTER_DOT1P;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_Y_OUTER_DOT1Pf:
            action = BCMFP_ACTION_NEW_Y_OUTER_DOT1P;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_G_OUTER_DOT1Pf:
            action = BCMFP_ACTION_NEW_G_OUTER_DOT1P;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_R_INNER_PRIf:
            action = BCMFP_ACTION_NEW_R_INNER_PRI;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_Y_INNER_PRIf:
            action = BCMFP_ACTION_NEW_Y_INNER_PRI;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_G_INNER_PRIf:
            action = BCMFP_ACTION_NEW_G_INNER_PRI;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_OUTER_CFIf:
            action = BCMFP_ACTION_NEW_OUTER_CFI;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_R_OUTER_CFIf:
            action = BCMFP_ACTION_NEW_R_OUTER_CFI;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_Y_OUTER_CFIf:
            action = BCMFP_ACTION_NEW_Y_OUTER_CFI;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_G_OUTER_CFIf:
            action = BCMFP_ACTION_NEW_G_OUTER_CFI;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_R_INNER_CFIf:
            action = BCMFP_ACTION_NEW_R_INNER_CFI;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_Y_INNER_CFIf:
            action = BCMFP_ACTION_NEW_Y_INNER_CFI;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_G_INNER_CFIf:
            action = BCMFP_ACTION_NEW_G_INNER_CFI;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_LB_SRC_MODULEf:
            action = BCMFP_ACTION_NEW_LB_SRC_MODULE;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_LB_SRC_PORTf:
            action = BCMFP_ACTION_NEW_LB_SRC_PORT;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_LB_PKT_PROFILEf:
            action = BCMFP_ACTION_NEW_LB_PKT_PROFILE;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_LB_PP_PORTf:
            action = BCMFP_ACTION_NEW_LB_PP_PORT;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_NEW_LB_TYPEf:
            action = BCMFP_ACTION_NEW_LB_TYPE;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_SET_VXLAN_HEADER_8_31f:
            action = BCMFP_ACTION_SET_VXLAN_HEADER_8_31;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_SET_VXLAN_HEADER_56_63f:
            action = BCMFP_ACTION_SET_VXLAN_HEADER_56_63;
            break;
        case FP_EGR_POLICY_TEMPLATEt_ACTION_SET_VXLAN_FLAGSf:
            action = BCMFP_ACTION_SET_VXLAN_FLAGS;
            break;
        default:
            SHR_RETURN_VAL_EXIT(SHR_E_NOT_FOUND);
    }

    policy_map->fid = fid;
    policy_map->action = action;

exit:

    SHR_FUNC_EXIT();
}
