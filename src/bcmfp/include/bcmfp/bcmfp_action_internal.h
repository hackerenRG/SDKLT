/*! \file bcmfp_action_internal.h
 *
 * Enumerations for all actions supported on all FP stages of all devices.
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

#ifndef BCMFP_ACTION_INTERNAL_H
#define BCMFP_ACTION_INTERNAL_H

/* Actions Supported in all different "Field Processors"
 * across all devices.
 */
typedef enum bcmfp_action_s {

    BCMFP_ACTION_R_DROP = 0,

    BCMFP_ACTION_Y_DROP,

    BCMFP_ACTION_G_DROP,

    BCMFP_ACTION_NEW_UNTAG_PKT_PRIORITY,

    BCMFP_ACTION_NEW_R_COLOR,

    BCMFP_ACTION_NEW_Y_COLOR,

    BCMFP_ACTION_NEW_G_COLOR,

    BCMFP_ACTION_NEW_R_COS_MAP,

    BCMFP_ACTION_NEW_R_COSQ,

    BCMFP_ACTION_R_INTPRI_TO_INNER_DOT1P,

    BCMFP_ACTION_NEW_R_INTPRI,

    BCMFP_ACTION_R_INTPRI_TO_TOS,

    BCMFP_ACTION_R_INTPRI_UPDATES_CANCEL,

    BCMFP_ACTION_NEW_R_UC_COS,

    BCMFP_ACTION_NEW_R_MC_COS,

    BCMFP_ACTION_NEW_Y_COS_MAP,

    BCMFP_ACTION_NEW_Y_COSQ,

    BCMFP_ACTION_Y_INTPRI_TO_INNER_DOT1P,

    BCMFP_ACTION_NEW_Y_INTPRI,

    BCMFP_ACTION_Y_INTPRI_TO_TOS,

    BCMFP_ACTION_Y_INTPRI_UPDATES_CANCEL,

    BCMFP_ACTION_NEW_Y_UC_COS,

    BCMFP_ACTION_NEW_Y_MC_COS,

    BCMFP_ACTION_NEW_G_COSQ,

    BCMFP_ACTION_NEW_G_COS_MAP,

    BCMFP_ACTION_G_INTPRI_TO_INNER_DOT1P,

    BCMFP_ACTION_NEW_G_INTPRI,

    BCMFP_ACTION_G_INTPRI_TO_TOS,

    BCMFP_ACTION_G_INTPRI_UPDATES_CANCEL,

    BCMFP_ACTION_NEW_G_UC_COS,

    BCMFP_ACTION_NEW_G_MC_COS,

    BCMFP_ACTION_MIRROR_SET,

    BCMFP_ACTION_MIRROR_INST_0,

    BCMFP_ACTION_MIRROR_INST_1,

    BCMFP_ACTION_MIRROR_INST_2,

    BCMFP_ACTION_MIRROR_INST_3,

    BCMFP_ACTION_HGT_SPRAY_HASH_CANCEL,

    BCMFP_ACTION_TRUNK_SPARY_HASH_CANCEL,

    BCMFP_ACTION_ECMP_SPRAY_HASH_CANCEL,

    BCMFP_ACTION_DO_NOT_NAT,

    BCMFP_ACTION_R_COPY_TO_CPU,

    BCMFP_ACTION_MATCH_ID,

    BCMFP_ACTION_R_COPY_TO_CPU_CANCEL,

    BCMFP_ACTION_R_SWITCH_TO_CPU_CANCEL,

    BCMFP_ACTION_R_SWITCH_TO_CPU_REINSATE,

    BCMFP_ACTION_R_COPY_TO_CPU_WITH_TIMESTAMP,

    BCMFP_ACTION_Y_COPY_TO_CPU,

    BCMFP_ACTION_Y_COPY_TO_CPU_CANCEL,

    BCMFP_ACTION_Y_SWITCH_TO_CPU_CANCEL,

    BCMFP_ACTION_Y_SWITCH_TO_CPU_REINSATE,

    BCMFP_ACTION_Y_COPY_TO_CPU_WITH_TIMESTAMP,

    BCMFP_ACTION_G_COPY_TO_CPU,

    BCMFP_ACTION_G_COPY_TO_CPU_CANCEL,

    BCMFP_ACTION_G_SWITCH_TO_CPU_CANCEL,

    BCMFP_ACTION_G_SWITCH_TO_CPU_REINSATE,

    BCMFP_ACTION_G_COPY_TO_CPU_WITH_TIMESTAMP,

    BCMFP_ACTION_DO_NOT_CUT_THROUGH,

    BCMFP_ACTION_DO_NOT_URPF,

    BCMFP_ACTION_DO_NOT_CHANGE_TTL,

    BCMFP_ACTION_NEW_ECN,

    BCMFP_ACTION_NEW_R_ECN,

    BCMFP_ACTION_NEW_Y_ECN,

    BCMFP_ACTION_NEW_G_ECN,

    BCMFP_ACTION_R_PRESERVE_DOT1P,

    BCMFP_ACTION_R_OUTER_DOT1P_TO_INNER_DOT1P,

    BCMFP_ACTION_NEW_R_OUTER_DOT1P,

    BCMFP_ACTION_R_OUTER_DOT1P_TO_TOS,

    BCMFP_ACTION_R_DOT1P_UPDATES_CANCEL,

    BCMFP_ACTION_Y_PRESERVE_DOT1P,

    BCMFP_ACTION_Y_OUTER_DOT1P_TO_INNER_DOT1P,

    BCMFP_ACTION_NEW_Y_OUTER_DOT1P,

    BCMFP_ACTION_Y_OUTER_DOT1P_TO_TOS,

    BCMFP_ACTION_Y_DOT1P_UPDATES_CANCEL,

    BCMFP_ACTION_G_PRESERVE_DOT1P,

    BCMFP_ACTION_G_OUTER_DOT1P_TO_INNER_DOT1P,

    BCMFP_ACTION_NEW_G_OUTER_DOT1P,

    BCMFP_ACTION_G_OUTER_DOT1P_TO_TOS,

    BCMFP_ACTION_G_DOT1P_UPDATES_CANCEL,

    BCMFP_ACTION_NEW_DSCP,

    BCMFP_ACTION_NEW_R_DSCP,

    BCMFP_ACTION_R_DSCP_UPDATES_CANCEL,

    BCMFP_ACTION_R_PRESERVE_DSCP,

    BCMFP_ACTION_NEW_Y_DSCP,

    BCMFP_ACTION_Y_DSCP_UPDATES_CANCEL,

    BCMFP_ACTION_Y_PRESERVE_DSCP,

    BCMFP_ACTION_NEW_G_DSCP,

    BCMFP_ACTION_G_DSCP_UPDATES_CANCEL,

    BCMFP_ACTION_G_PRESERVE_DSCP,

    BCMFP_ACTION_NEW_G_TOS,

    BCMFP_ACTION_G_TOS_TO_PRE_FP_ING_OUTER_DOT1P,

    BCMFP_ACTION_CHANGE_PKT_L2_FIELDS,

    BCMFP_ACTION_CHANGE_PKT_L2_FIELDS_CANCEL,

    BCMFP_ACTION_NEW_CLASSIFICATION_TAG,

    BCMFP_ACTION_L3SWITCH_NEXT_HOP,

    BCMFP_ACTION_SWITCH_TO_L3UC,

    BCMFP_ACTION_SWITCH_TO_ECMP,

    BCMFP_ACTION_ECMP_HASH,

    BCMFP_ACTION_L3_SWITCH_CANCEL,

    BCMFP_ACTION_I2E_CLASSID_SELECT,

    BCMFP_ACTION_HIGIG_CLASSID_SYSTEM_PORT,

    BCMFP_ACTION_NEW_I2E_CLASSID,

    BCMFP_ACTION_NEW_BFD_SEESSION_IDX,

    BCMFP_ACTION_NEW_SERVICE_POOL_ID,

    BCMFP_ACTION_R_DROP_CANCEL,

    BCMFP_ACTION_Y_DROP_CANCEL,

    BCMFP_ACTION_G_DROP_CANCEL,

    BCMFP_ACTION_NO_EM_SUPPORT,

    BCMFP_ACTION_NEW_G_INTCN,

    BCMFP_ACTION_NEW_Y_INTCN,

    BCMFP_ACTION_NEW_R_INTCN,

    BCMFP_ACTION_MIRROR_OVERRIDE,

    BCMFP_ACTION_SFLOW_ENABLE,

    BCMFP_ACTION_ENABLE_PKT_VISIBILITY,

    BCMFP_ACTION_REDIRECT_TO_MODULE,

    BCMFP_ACTION_REDIRECT_TO_PORT,

    BCMFP_ACTION_REDIRECT_TO_DVP,

    BCMFP_ACTION_REDIRECT_TO_TRUNK,

    BCMFP_ACTION_UNMODIFIED_REDIRECT_TO_MODULE,

    BCMFP_ACTION_UNMODIFIED_REDIRECT_TO_TRUNK,

    BCMFP_ACTION_UNMODIFIED_REDIRECT_TO_PORT,

    BCMFP_ACTION_REDIRECT_NEXT_HOP,

    BCMFP_ACTION_REDIRECT_TO_NHOP,

    BCMFP_ACTION_REDIRECT_TO_ECMP,

    BCMFP_ACTION_REDIRECT_UC_CANCEL,

    BCMFP_ACTION_REDIRECT_TO_FP_ING_PBM,

    BCMFP_ACTION_REDIRECT_TO_INGRESS_VLAN_BMP,

    BCMFP_ACTION_REDIRECT_TO_INGRESS_VLAN_FP_ING_PBM,

    BCMFP_ACTION_REDIRECT_TO_L2MC_GROUP,

    BCMFP_ACTION_REDIRECT_TO_L3MC_GROUP,

    BCMFP_ACTION_MASK_EGRESS_PBMP,

    BCMFP_ACTION_EGRESS_PORTS_ADD,

    BCMFP_ACTION_NEW_HIGIG_EH,

    BCMFP_ACTION_HIGIG_EH_MASK_PROFILE_ID,

    BCMFP_ACTION_NAT_EGRESS_OVERRIDE,

    BCMFP_ACTION_AUX_TAG_D_SEL,

    BCMFP_ACTION_AUX_TAG_C_SEL,

    BCMFP_ACTION_SRC_DST_CONTAINER_1_SEL,

    BCMFP_ACTION_SRC_DST_CONTAINER_0_SEL,

    BCMFP_ACTION_SRC_CONTAINER_A_SEL,

    BCMFP_ACTION_SRC_CONTAINER_B_SEL,

    BCMFP_ACTION_CLASS_ID_CONTAINER_D_SEL,

    BCMFP_ACTION_CLASS_ID_CONTAINER_C_SEL,

    BCMFP_ACTION_CLASS_ID_CONTAINER_B_SEL,

    BCMFP_ACTION_CLASS_ID_CONTAINER_A_SEL,

    BCMFP_ACTION_TCP_FN_SEL,

    BCMFP_ACTION_TOS_FN_SEL,

    BCMFP_ACTION_TTL_FN_SEL,

    BCMFP_ACTION_AUX_TAG_B_SEL,

    BCMFP_ACTION_AUX_TAG_A_SEL,

    BCMFP_ACTION_NORMALIZE_L2,

    BCMFP_ACTION_NORMALIZE_L3_L4,

    BCMFP_ACTION_MULTIWIDE_MODE,

    BCMFP_ACTION_IPBM_SOURCE,

    BCMFP_ACTION_IPBM_PRESENT,

    BCMFP_ACTION_LOGICAL_TABLE_CLASS_ID,

    BCMFP_ACTION_LOGICAL_TABLE_ID,

    BCMFP_ACTION_KEY_GEN_PROGRAM_PROFILE_INDEX,

    BCMFP_ACTION_PRESEL_ENABLE,

    BCMFP_ACTION_DROP,

    BCMFP_ACTION_DROP_CANCEL,

    BCMFP_ACTION_COPY_TO_CPU,

    BCMFP_ACTION_COPY_TO_CPU_CANCEL,

    BCMFP_ACTION_NEW_OUTER_DOT1P,

    BCMFP_ACTION_DST_CONTAINER_0_SEL,

    BCMFP_ACTION_DST_CONTAINER_1_SEL,

    BCMFP_ACTION_UDF_SEL,

    BCMFP_ACTION_DATA,

    BCMFP_ACTION_ADD_INNER_TAG,

    BCMFP_ACTION_REPLACE_INNER_TAG,

    BCMFP_ACTION_DELETE_INNER_TAG,

    BCMFP_ACTION_ADD_OUTER_TAG,

    BCMFP_ACTION_REPLACE_OUTER_TAG,

    BCMFP_ACTION_SET_FWD_VLAN_TAG,

    BCMFP_ACTION_NEW_CPU_COS,

    BCMFP_ACTION_NEW_INTPRI,

    BCMFP_ACTION_NEW_INNER_DOT1P,

    BCMFP_ACTION_NEW_COLOR,

    BCMFP_ACTION_DO_NOT_LEARN,

    BCMFP_ACTION_DISABLE_VLAN_CHECKS,

    BCMFP_ACTION_ENABLE_VLAN_CHECKS,

    BCMFP_ACTION_DST_CLASS_ID_SET,

    BCMFP_ACTION_SRC_CLASS_ID_SET,

    BCMFP_ACTION_VRF_SET,

    BCMFP_ACTION_SVP_SET,

    BCMFP_ACTION_OUTER_DOT1P_TO_INNER_DOT1P,

    BCMFP_ACTION_INNER_DOT1P_TO_OUTER_DOT1P,

    BCMFP_ACTION_NEW_INNER_CFI,

    BCMFP_ACTION_OUTER_CFI_TO_INNER_CFI,

    BCMFP_ACTION_NEW_OUTER_CFI,

    BCMFP_ACTION_INNER_CFI_TO_OUTER_CFI,

    BCMFP_ACTION_INNER_VLANID_TO_OUTER_VLANID,

    BCMFP_ACTION_OUTER_VLANID_TO_INNER_VLANID,

    BCMFP_ACTION_NEW_INNER_VLANID,

    BCMFP_ACTION_NEW_OUTER_VLANID,

    BCMFP_ACTION_NEW_OUTER_TPID,

    BCMFP_ACTION_NEW_R_INNER_PRI,

    BCMFP_ACTION_NEW_Y_INNER_PRI,

    BCMFP_ACTION_NEW_G_INNER_PRI,

    BCMFP_ACTION_NEW_R_OUTER_CFI,

    BCMFP_ACTION_NEW_Y_OUTER_CFI,

    BCMFP_ACTION_NEW_G_OUTER_CFI,

    BCMFP_ACTION_NEW_R_INNER_CFI,

    BCMFP_ACTION_NEW_Y_INNER_CFI,

    BCMFP_ACTION_NEW_G_INNER_CFI,

    BCMFP_ACTION_NEW_R_HG_CONGESTION_CLASS,

    BCMFP_ACTION_NEW_Y_HG_CONGESTION_CLASS,

    BCMFP_ACTION_NEW_G_HG_CONGESTION_CLASS,

    BCMFP_ACTION_NEW_HG_DST_MODULE,

    BCMFP_ACTION_NEW_HG_DST_PORT,

    BCMFP_ACTION_NEW_G_HG_COLOR,

    BCMFP_ACTION_NEW_Y_HG_COLOR,

    BCMFP_ACTION_NEW_R_HG_COLOR,

    BCMFP_ACTION_NEW_G_HG_INTPRI,

    BCMFP_ACTION_NEW_Y_HG_INTPRI,

    BCMFP_ACTION_NEW_R_HG_INTPRI,

    BCMFP_ACTION_NEW_LB_SRC_MODULE,

    BCMFP_ACTION_NEW_LB_SRC_PORT,

    BCMFP_ACTION_NEW_LB_PKT_PROFILE,

    BCMFP_ACTION_NEW_LB_PP_PORT,

    BCMFP_ACTION_NEW_LB_TYPE,

    BCMFP_ACTION_SET_VXLAN_HEADER_8_31,

    BCMFP_ACTION_SET_VXLAN_HEADER_56_63,

    BCMFP_ACTION_SET_VXLAN_FLAGS,

    BCMFP_ACTION_METER_TEST_ODD,

    BCMFP_ACTION_METER_UPDATE_ODD,

    BCMFP_ACTION_METER_TEST_EVEN,

    BCMFP_ACTION_METER_UPDATE_EVEN,

    BCMFP_ACTION_METER_PAIR_INDEX,

    BCMFP_ACTION_METER_PAIR_MODE,

    BCMFP_ACTION_METER_PAIR_MODE_MODIFIER,

    BCMFP_ACTION_METER_INDEX_ODD,

    BCMFP_ACTION_METER_INDEX_EVEN,

    BCMFP_ACTION_EM_KEY_TYPE,

    BCMFP_ACTION_DEFAULT_POLICY_ENABLE,

    BCMFP_ACTION_EXACT_MATCH_CLASS_ID,

    BCMFP_ACTION_COUNT
} bcmfp_action_t;

#define BCMFP_ACTION_STRINGS \
{ \
    "R_DROP", \
    "Y_DROP", \
    "G_DROP", \
    "NEW_UNTAG_PKT_PRIORITY", \
    "NEW_R_COLOR", \
    "NEW_Y_COLOR", \
    "NEW_G_COLOR", \
    "NEW_R_COS_MAP", \
    "NEW_R_COSQ", \
    "R_INTPRI_TO_INNER_DOT1P", \
    "NEW_R_INTPRI", \
    "R_INTPRI_TO_TOS", \
    "R_INTPRI_UPDATES_CANCEL", \
    "NEW_R_UC_COS", \
    "NEW_R_MC_COS", \
    "NEW_Y_COS_MAP", \
    "NEW_Y_COSQ", \
    "Y_INTPRI_TO_INNER_DOT1P", \
    "NEW_Y_INTPRI", \
    "Y_INTPRI_TO_TOS", \
    "Y_INTPRI_UPDATES_CANCEL", \
    "NEW_Y_UC_COS", \
    "NEW_Y_MC_COS", \
    "NEW_G_COS_MAP", \
    "NEW_G_COSQ", \
    "G_INTPRI_TO_INNER_DOT1P", \
    "NEW_G_INTPRI", \
    "G_INTPRI_TO_TOS", \
    "G_INTPRI_UPDATES_CANCEL", \
    "NEW_G_UC_COS", \
    "NEW_G_MC_COS", \
    "MIRROR_SET", \
    "MIRROR_INST_0", \
    "MIRROR_INST_1", \
    "MIRROR_INST_2", \
    "MIRROR_INST_3", \
    "HGT_SPRAY_HASH_CANCEL", \
    "TRUNK_SPARY_HASH_CANCEL", \
    "ECMP_SPRAY_HASH_CANCEL", \
    "DO_NOT_NAT", \
    "R_COPY_TO_CPU", \
    "MATCH_ID", \
    "R_COPY_TO_CPU_CANCEL", \
    "R_SWITCH_TO_CPU_CANCEL", \
    "R_SWITCH_TO_CPU_REINSATE", \
    "R_COPY_TO_CPU_WITH_TIMESTAMP", \
    "Y_COPY_TO_CPU", \
    "Y_COPY_TO_CPU_CANCEL", \
    "Y_SWITCH_TO_CPU_CANCEL", \
    "Y_SWITCH_TO_CPU_REINSATE", \
    "Y_COPY_TO_CPU_WITH_TIMESTAMP", \
    "G_COPY_TO_CPU", \
    "G_COPY_TO_CPU_CANCEL", \
    "G_SWITCH_TO_CPU_CANCEL", \
    "G_SWITCH_TO_CPU_REINSATE", \
    "G_COPY_TO_CPU_WITH_TIMESTAMP", \
    "DO_NOT_CUT_THROUGH", \
    "DO_NOT_URPF", \
    "DO_NOT_CHANGE_TTL", \
    "NEW_ECN", \
    "NEW_R_ECN", \
    "NEW_Y_ECN", \
    "NEW_G_ECN", \
    "R_PRESERVE_DOT1P", \
    "R_OUTER_DOT1P_TO_INNER_DOT1P", \
    "NEW_R_OUTER_DOT1P", \
    "R_OUTER_DOT1P_TO_TOS", \
    "R_DOT1P_UPDATES_CANCEL", \
    "Y_PRESERVE_DOT1P", \
    "Y_OUTER_DOT1P_TO_INNER_DOT1P", \
    "NEW_Y_OUTER_DOT1P", \
    "Y_OUTER_DOT1P_TO_TOS", \
    "Y_DOT1P_UPDATES_CANCEL", \
    "G_PRESERVE_DOT1P", \
    "G_OUTER_DOT1P_TO_INNER_DOT1P", \
    "NEW_G_OUTER_DOT1P", \
    "G_OUTER_DOT1P_TO_TOS", \
    "G_DOT1P_UPDATES_CANCEL", \
    "NEW_DSCP", \
    "NEW_R_DSCP", \
    "R_DSCP_UPDATES_CANCEL", \
    "R_PRESERVE_DSCP", \
    "NEW_Y_DSCP", \
    "Y_DSCP_UPDATES_CANCEL", \
    "Y_PRESERVE_DSCP", \
    "NEW_G_DSCP", \
    "G_DSCP_UPDATES_CANCEL", \
    "G_PRESERVE_DSCP", \
    "NEW_G_TOS", \
    "G_TOS_TO_PRE_FP_ING_OUTER_DOT1P", \
    "CHANGE_PKT_L2_FIELDS", \
    "CHANGE_PKT_L2_FIELDS_CANCEL", \
    "NEW_CLASSIFICATION_TAG", \
    "L3SWITCH_NEXT_HOP", \
    "SWITCH_TO_L3UC", \
    "SWITCH_TO_ECMP", \
    "ECMP_HASH", \
    "L3_SWITCH_CANCEL", \
    "I2E_CLASSID_SELECT", \
    "HIGIG_CLASSID_SYSTEM_PORT", \
    "NEW_I2E_CLASSID", \
    "NEW_BFD_SEESSION_IDX", \
    "NEW_SERVICE_POOL_ID", \
    "R_DROP_CANCEL", \
    "Y_DROP_CANCEL", \
    "G_DROP_CANCEL", \
    "NO_EM_SUPPORT", \
    "NEW_G_INTCN", \
    "NEW_Y_INTCN", \
    "NEW_R_INTCN", \
    "MIRROR_OVERRIDE", \
    "SFLOW_ENABLE", \
    "ENABLE_PKT_VISIBILITY", \
    "REDIRECT_TO_MODULE", \
    "REDIRECT_TO_PORT", \
    "REDIRECT_TO_DVP", \
    "REDIRECT_TO_TRUNK", \
    "UNMODIFIED_REDIRECT_TO_MODULE", \
    "UNMODIFIED_REDIRECT_TO_TRUNK", \
    "UNMODIFIED_REDIRECT_TO_PORT", \
    "REDIRECT_NEXT_HOP", \
    "REDIRECT_TO_NHOP", \
    "REDIRECT_TO_ECMP", \
    "REDIRECT_UC_CANCEL", \
    "REDIRECT_TO_FP_ING_PBM", \
    "REDIRECT_TO_INGRESS_VLAN_BMP", \
    "REDIRECT_TO_INGRESS_VLAN_FP_ING_PBM", \
    "REDIRECT_TO_L2MC_GROUP", \
    "REDIRECT_TO_L3MC_GROUP", \
    "MASK_EGRESS_PBMP", \
    "EGRESS_PORTS_ADD", \
    "NEW_HIGIG_EH", \
    "HIGIG_EH_MASK_PROFILE_ID", \
    "NAT_EGRESS_OVERRIDE", \
    "AUX_TAG_D_SEL", \
    "AUX_TAG_C_SEL", \
    "SRC_DST_CONTAINER_1_SEL", \
    "SRC_DST_CONTAINER_0_SEL", \
    "SRC_CONTAINER_A_SEL", \
    "SRC_CONTAINER_B_SEL", \
    "CLASS_ID_CONTAINER_D_SEL", \
    "CLASS_ID_CONTAINER_C_SEL", \
    "CLASS_ID_CONTAINER_B_SEL", \
    "CLASS_ID_CONTAINER_A_SEL", \
    "TCP_FN_SEL", \
    "TOS_FN_SEL", \
    "TTL_FN_SEL", \
    "AUX_TAG_B_SEL", \
    "AUX_TAG_A_SEL", \
    "NORMALIZE_L2", \
    "NORMALIZE_L3_L4", \
    "MULTIWIDE_MODE", \
    "IPBM_SOURCE", \
    "IPBM_PRESENT", \
    "LOGICAL_TABLE_CLASS_ID", \
    "LOGICAL_TABLE_ID", \
    "KEY_GEN_PROGRAM_PROFILE_INDEX", \
    "PRESEL_ENABLE", \
    "DROP", \
    "DROP_CANCEL", \
    "COPY_TO_CPU", \
    "COPY_TO_CPU_CANCEL", \
    "NEW_OUTER_DOT1P", \
    "DST_CONTAINER_0_SEL", \
    "DST_CONTAINER_1_SEL", \
    "UDF_SEL", \
    "DATA", \
    "ADD_INNER_TAG", \
    "REPLACE_INNER_TAG", \
    "DELETE_INNER_TAG", \
    "ADD_OUTER_TAG", \
    "REPLACE_OUTER_TAG", \
    "SET_FWD_VLAN_TAG", \
    "NEW_CPU_COS", \
    "NEW_INTPRI", \
    "NEW_INNER_DOT1P", \
    "NEW_COLOR", \
    "DO_NOT_LEARN", \
    "DISABLE_VLAN_CHECKS", \
    "ENABLE_VLAN_CHECKS", \
    "DST_CLASS_ID_SET", \
    "SRC_CLASS_ID_SET", \
    "VRF_SET", \
    "SVP_SET", \
    "OUTER_DOT1P_TO_INNER_DOT1P", \
    "INNER_DOT1P_TO_OUTER_DOT1P", \
    "NEW_INNER_CFI", \
    "OUTER_CFI_TO_INNER_CFI", \
    "NEW_OUTER_CFI", \
    "INNER_CFI_TO_OUTER_CFI", \
    "INNER_VLANID_TO_OUTER_VLANID", \
    "OUTER_VLANID_TO_INNER_VLANID", \
    "NEW_INNER_VLANID", \
    "NEW_OUTER_VLANID", \
    "NEW_OUTER_TPID", \
    "NEW_R_INNER_PRI", \
    "NEW_Y_INNER_PRI", \
    "NEW_G_INNER_PRI", \
    "NEW_R_OUTER_CFI", \
    "NEW_Y_OUTER_CFI", \
    "NEW_G_OUTER_CFI", \
    "NEW_R_INNER_CFI", \
    "NEW_Y_INNER_CFI", \
    "NEW_G_INNER_CFI", \
    "NEW_R_HG_CONGESTION_CLASS", \
    "NEW_Y_HG_CONGESTION_CLASS", \
    "NEW_G_HG_CONGESTION_CLASS", \
    "NEW_HG_DST_MODULE", \
    "NEW_HG_DST_PORT", \
    "NEW_G_HG_COLOR", \
    "NEW_Y_HG_COLOR", \
    "NEW_R_HG_COLOR", \
    "NEW_G_HG_INTPRI", \
    "NEW_Y_HG_INTPRI", \
    "NEW_R_HG_INTPRI", \
    "NEW_LB_SRC_MODULE", \
    "NEW_LB_SRC_PORT", \
    "NEW_LB_PKT_PROFILE", \
    "NEW_LB_PP_PORT", \
    "NEW_LB_TYPE", \
    "SET_VXLAN_HEADER_8_31", \
    "SET_VXLAN_HEADER_56_63", \
    "SET_VXLAN_FLAGS", \
    "METER_TEST_ODD", \
    "METER_UPDATE_ODD", \
    "METER_TEST_EVEN", \
    "METER_UPDATE_EVEN", \
    "METER_PAIR_INDEX", \
    "METER_PAIR_MODE", \
    "METER_PAIR_MODE_MODIFIER", \
    "METER_INDEX_ODD", \
    "METER_INDEX_EVEN", \
    "EM_KEY_TYPE", \
    "DEFAULT_POLICY_ENABLE", \
    "EXACT_MATCH_CLASS_ID", \
    "COUNT", \
}

/* Action Set's Supported in all different
 * "Field Processors" across all devices.
 */
typedef enum bcmfp_action_set_s {
    BCMFP_ACTION_SET_NONE = 0,

    BCMFP_ACTION_SET_PROTECTION_SWITCHING,

    BCMFP_ACTION_SET_DLB_ALTERNATE_PATH_CONTROL,

    BCMFP_ACTION_SET_ECMP_DLB,

    BCMFP_ACTION_SET_HGT_LAG_DLB,

    BCMFP_ACTION_SET_ECMP2_RH,

    BCMFP_ACTION_SET_ECMP1_RH,

    BCMFP_ACTION_SET_LAG_RH,

    BCMFP_ACTION_SET_HGT_RH,

    BCMFP_ACTION_SET_LOOPBACK_PROFILE,

    BCMFP_ACTION_SET_EXTRACTION_CTRL_ID,

    BCMFP_ACTION_SET_OPAQUE_4,

    BCMFP_ACTION_SET_OPAQUE_3,

    BCMFP_ACTION_SET_OPAQUE_2,

    BCMFP_ACTION_SET_OPAQUE_1,

    BCMFP_ACTION_SET_RX_TIMESTAMP_INSERTION,

    BCMFP_ACTION_SET_TX_TIMESTAMP_INSERTION,

    BCMFP_ACTION_SET_IGNORE_FCOE_ZONE_CHECK,

    BCMFP_ACTION_SET_GREEN_TO_PID,

    BCMFP_ACTION_SET_MIRROR_OVERRIDE,

    BCMFP_ACTION_SET_NAT_OVERRIDE,

    BCMFP_ACTION_SET_SFLOW,

    BCMFP_ACTION_SET_CUT_THRU_OVERRIDE,

    BCMFP_ACTION_SET_URPF_OVERRIDE,

    BCMFP_ACTION_SET_TTL_OVERRIDE,

    BCMFP_ACTION_SET_LB_CONTROL,

    BCMFP_ACTION_SET_DROP,

    BCMFP_ACTION_SET_CPU_COS,

    BCMFP_ACTION_SET_MIRROR,

    BCMFP_ACTION_SET_NAT,

    BCMFP_ACTION_SET_COPY_TO_CPU,

    BCMFP_ACTION_SET_L3_SW_CHANGE_L2,

    BCMFP_ACTION_SET_REDIRECT,

    BCMFP_ACTION_SET_COUNTER,

    BCMFP_ACTION_SET_CHANGE_ECN,

    BCMFP_ACTION_SET_CHANGE_PKT_PRI,

    BCMFP_ACTION_SET_DSCP_TOS,

    BCMFP_ACTION_SET_DROP_PRECEDENCE,

    BCMFP_ACTION_SET_COS_OR_INT_PRI,

    BCMFP_ACTION_SET_INT_CN,

    BCMFP_ACTION_SET_INPUT_PRIORITY,

    BCMFP_ACTION_SET_INSTRUMENTATION,

    BCMFP_ACTION_SET_EDIT_CTRL_ID,

    BCMFP_ACTION_SET_FCOE_VSAN,

    BCMFP_ACTION_SET_METER,

    BCMFP_ACTION_SET_TIMESTAMP_INSERTION,

    BCMFP_ACTION_MPLS_ENABLE,

    BCMFP_ACTION_RESET_MPLS_ENABLE,

    BCMFP_ACTION_MPLS_TERMINATION_ALLOWED,

    BCMFP_ACTION_IPV4_TERMINATION_ALLOWED,

    BCMFP_ACTION_IPV4_MC_TERMINATION_ALLOWED,

    BCMFP_ACTION_IPV6_TERMINATION_ALLOWED,

    BCMFP_ACTION_IPV6_MC_TERMINATION_ALLOWED,

    BCMFP_ACTION_ARP_RARP_TERMINATION_ALLOWED,

    BCMFP_ACTION_RESET_MY_STATION_LOOKUP_RESULT,

    BCMFP_ACTION_SET_COUNT
} bcmfp_action_set_t;

typedef struct bcmfp_aset_s {
    SHR_BITDCL w[SHRi_BITDCLSIZE(BCMFP_ACTION_COUNT)];
} bcmfp_aset_t;

#define BCMFP_ASET_ADD(aset, a)  SHR_BITSET(((aset).w), (a))

#endif /* BCMFP_ACTION_INTERNAL_H */
