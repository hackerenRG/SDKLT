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
#ifndef BCM56960_A0_LRD_LTM_INTF_H
#define BCM56960_A0_LRD_LTM_INTF_H
#ifndef DOXYGEN_IGNORE_AUTOGEN

#define BCMLTD_INIT_BCM56960_A0_LTA_BCMIMM_BASIC_LC_HANDLER_ID 0
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMCFG_ECMP_CONFIG_CTH_HANDLER_ID 10
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMCFG_FP_CONFIG_CTH_HANDLER_ID 16
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMCFG_METER_FP_EGR_CONFIG_CTH_HANDLER_ID 41
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMCFG_METER_FP_ING_CONFIG_CTH_HANDLER_ID 45
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMCFG_SER_CONFIG_CTH_HANDLER_ID 67
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMCFG_TM_SHAPER_CONFIG_CTH_HANDLER_ID 81
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMCFG_TM_THD_CONFIG_CTH_HANDLER_ID 83
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMCFG_TRUNK_CONFIG_CTH_HANDLER_ID 103
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMCFG_UDF_CONFIG_CTH_HANDLER_ID 106
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMCFG_VLAN_XLATE_CONFIG_CTH_HANDLER_ID 107
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMECMP_ECMP_CTH_HANDLER_ID 9
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMECMP_ECMP_FAST_CTH_HANDLER_ID 11
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMECMP_ECMP_HIERARCHICAL_CTH_HANDLER_ID 12
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMECMP_ECMP_OVERLAY_CTH_HANDLER_ID 13
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMECMP_ECMP_UNDERLAY_CTH_HANDLER_ID 14
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMECN_ECN_PROTOCOL_CTH_HANDLER_ID 15
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_CTR_CONTROL_CTH_HANDLER_ID 0
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_CTR_EGR_FLEX_POOL_CONTROL_CTH_HANDLER_ID 1
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_CTR_EGR_FP_CONTROL_CTH_HANDLER_ID 2
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_CTR_EGR_Q_CONTROL_CTH_HANDLER_ID 3
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_CTR_ING_FLEX_POOL_CONTROL_CTH_HANDLER_ID 4
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_DEVICE_EM_BANK_CTH_HANDLER_ID 5
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_DEVICE_EM_BANK_INFO_CTH_HANDLER_ID 6
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_DEVICE_EM_GROUP_CTH_HANDLER_ID 7
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_DEVICE_PKT_RX_Q_CTH_HANDLER_ID 8
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_EGR_ENTRY_CTH_HANDLER_ID 17
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_EGR_GRP_TEMPLATE_CTH_HANDLER_ID 18
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_EGR_POLICY_TEMPLATE_CTH_HANDLER_ID 19
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_EGR_RULE_TEMPLATE_CTH_HANDLER_ID 20
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_EM_ENTRY_CTH_HANDLER_ID 21
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_EM_GRP_TEMPLATE_CTH_HANDLER_ID 22
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_EM_POLICY_TEMPLATE_CTH_HANDLER_ID 23
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_EM_PRESEL_ENTRY_TEMPLATE_CTH_HANDLER_ID 24
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_EM_RULE_TEMPLATE_CTH_HANDLER_ID 25
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_EM_SRC_CLASS_MODE_CTH_HANDLER_ID 26
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_ING_ENTRY_CTH_HANDLER_ID 27
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_ING_GRP_TEMPLATE_CTH_HANDLER_ID 28
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_ING_POLICY_TEMPLATE_CTH_HANDLER_ID 29
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_ING_PRESEL_ENTRY_TEMPLATE_CTH_HANDLER_ID 30
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_ING_RULE_TEMPLATE_CTH_HANDLER_ID 31
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_ING_SRC_CLASS_MODE_CTH_HANDLER_ID 32
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_VLAN_ENTRY_CTH_HANDLER_ID 33
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_VLAN_GRP_TEMPLATE_CTH_HANDLER_ID 34
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_VLAN_POLICY_TEMPLATE_CTH_HANDLER_ID 35
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_VLAN_RULE_TEMPLATE_CTH_HANDLER_ID 36
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_L3_ALPM_CONTROL_CTH_HANDLER_ID 37
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_LM_CONTROL_CTH_HANDLER_ID 38
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_LM_LINK_STATE_CTH_HANDLER_ID 39
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_LM_PORT_CONTROL_CTH_HANDLER_ID 40
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_MIRROR_INSTANCE_CTH_HANDLER_ID 50
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_PC_AUTONEG_PROFILE_CTH_HANDLER_ID 51
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_PC_PFC_PROFILE_CTH_HANDLER_ID 52
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_PC_PM_CORE_CTH_HANDLER_ID 55
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_PC_PM_CTH_HANDLER_ID 54
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_PC_PM_LANE_CTH_HANDLER_ID 56
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_PC_PM_RX_LANE_PROFILE_CTH_HANDLER_ID 59
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_PC_PM_TX_LANE_PROFILE_CTH_HANDLER_ID 60
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_PC_PORT_CTH_HANDLER_ID 61
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_PORT_BRIDGE_CTH_HANDLER_ID 63
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_PORT_EGR_MIRROR_CTH_HANDLER_ID 64
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_PORT_ING_MIRROR_CTH_HANDLER_ID 65
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_PORT_MEMBERSHIP_POLICY_CTH_HANDLER_ID 66
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_SER_CONTROL_CTH_HANDLER_ID 68
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_SER_CONTROL_PT_CTH_HANDLER_ID 69
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_SER_INJECTION_CTH_HANDLER_ID 70
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_SER_INJECTION_STATUS_CTH_HANDLER_ID 71
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_SER_NOTIFICATION_CTH_HANDLER_ID 72
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_SER_STATS_CTH_HANDLER_ID 73
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TABLE_EM_CONTROL_CTH_HANDLER_ID 74
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TABLE_OP_PT_INFO_CTH_HANDLER_ID 75
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_SCHEDULER_SHAPER_CPU_NODE_CTH_HANDLER_ID 79
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_SHAPER_PORT_CTH_HANDLER_ID 82
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_EGR_MC_PORT_SERVICE_POOL_CTH_HANDLER_ID 84
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_EGR_SERVICE_POOL_CTH_HANDLER_ID 85
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_EGR_UC_PORT_SERVICE_POOL_CTH_HANDLER_ID 86
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_ING_HEADROOM_POOL_CTH_HANDLER_ID 87
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_ING_SERVICE_POOL_CTH_HANDLER_ID 88
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_MC_Q_CTH_HANDLER_ID 89
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_PORT_INT_PRI_TO_PRI_GRP_CTH_HANDLER_ID 90
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_PORT_MC_Q_TO_SERVICE_POOL_CTH_HANDLER_ID 91
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_PORT_PRI_GRP_CTH_HANDLER_ID 92
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_PORT_PRI_GRP_TO_HEADROOM_POOL_CTH_HANDLER_ID 93
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_PORT_PRI_GRP_TO_SERVICE_POOL_CTH_HANDLER_ID 94
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_PORT_UC_Q_TO_SERVICE_POOL_CTH_HANDLER_ID 95
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_UC_Q_CTH_HANDLER_ID 96
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_UC_Q_GRP_CTH_HANDLER_ID 97
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_TM_THD_UC_Q_TO_UC_Q_GRP_CTH_HANDLER_ID 98
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMMETER_METER_FP_EGR_DEVICE_INFO_CTH_HANDLER_ID 42
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMMETER_METER_FP_EGR_GRANULARITY_INFO_CTH_HANDLER_ID 43
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMMETER_METER_FP_EGR_TEMPLATE_CTH_HANDLER_ID 44
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMMETER_METER_FP_ING_DEVICE_INFO_CTH_HANDLER_ID 46
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMMETER_METER_FP_ING_GRANULARITY_INFO_CTH_HANDLER_ID 47
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMMETER_METER_FP_ING_TEMPLATE_CTH_HANDLER_ID 48
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMMETER_METER_STORM_CONTROL_CTH_HANDLER_ID 49
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMPC_PC_PHYS_PORT_CTH_HANDLER_ID 53
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMPC_PC_PM_LANE_STATUS_CTH_HANDLER_ID 57
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMPC_PC_PM_PROP_CTH_HANDLER_ID 58
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMPC_PC_PORT_STATUS_CTH_HANDLER_ID 62
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMTM_TM_DEVICE_INFO_CTH_HANDLER_ID 76
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMTM_TM_PIPE_MAP_INFO_CTH_HANDLER_ID 77
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMTM_TM_PORT_MAP_INFO_CTH_HANDLER_ID 78
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMTM_TM_SCHEDULER_SHAPER_NODES_CTH_HANDLER_ID 80
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMTNL_TNL_IPV4_ENCAP_CTH_HANDLER_ID 99
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMTNL_TNL_IPV6_ENCAP_CTH_HANDLER_ID 100
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMTNL_TNL_MPLS_ENCAP_CTH_HANDLER_ID 101
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMTRUNK_TRUNK_CTH_HANDLER_ID 102
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMTRUNK_TRUNK_FAILOVER_CTH_HANDLER_ID 104
#define BCMLTD_TABLE_BCM56960_A0_LTA_BCMTRUNK_TRUNK_FAST_CTH_HANDLER_ID 105
#define BCMLTD_TABLE_COMMIT_BCM56960_A0_LTA_BCMTNL_L3_EIF_L3_INTF_TABLE_COMMIT_HANDLER_C0_ID 0
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCML2_L2_FDB_VLAN_DEST_RESOLVE_XFRM_HANDLER_FWD_S0_D0_C0_ID 8
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCML2_L2_FDB_VLAN_DEST_RESOLVE_XFRM_HANDLER_REV_S0_D0_C0_ID 9
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCML2_L2_FDB_VLAN_MAC_ADDR_XFRM_HANDLER_FWD_S0_D0_C0_ID 6
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCML2_L2_FDB_VLAN_MAC_ADDR_XFRM_HANDLER_REV_S0_D0_C0_ID 7
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_EGR_MOD_ID_SET_XFRM_HANDLER_FWD_S0_D0_ID 76
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_EGR_MOD_ID_SET_XFRM_HANDLER_FWD_S1_D0_ID 98
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_EGR_MTP_INDEX_XFRM_HANDLER_FWD_S0_D0_ID 78
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_EGR_MTP_INDEX_XFRM_HANDLER_FWD_S1_D0_ID 100
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_EGR_MTP_INDEX_XFRM_HANDLER_REV_S0_D0_ID 79
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_EGR_MTP_INDEX_XFRM_HANDLER_REV_S1_D0_ID 101
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_EGR_PORT_ID_SET_XFRM_HANDLER_FWD_S0_D0_ID 77
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_EGR_PORT_ID_SET_XFRM_HANDLER_FWD_S1_D0_ID 99
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_CTR_EGR_DEBUG_SELECTT_0_XFRM_HANDLER_FWD_S0_D0_ID 0
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_CTR_EGR_DEBUG_SELECTT_0_XFRM_HANDLER_REV_S0_D0_ID 1
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_CTR_ING_DEBUG_SELECTT_0_XFRM_HANDLER_FWD_S0_D0_ID 2
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_CTR_ING_DEBUG_SELECTT_0_XFRM_HANDLER_REV_S0_D0_ID 3
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_0_XFRM_HANDLER_FWD_S0_D0_ID 28
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_0_XFRM_HANDLER_REV_S0_D0_ID 29
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_1_XFRM_HANDLER_FWD_S0_D0_ID 30
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_1_XFRM_HANDLER_REV_S0_D0_ID 31
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_2_XFRM_HANDLER_FWD_S0_D0_ID 32
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_2_XFRM_HANDLER_REV_S0_D0_ID 33
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_3_XFRM_HANDLER_FWD_S0_D0_ID 34
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_3_XFRM_HANDLER_REV_S0_D0_ID 35
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_0_XFRM_HANDLER_FWD_S0_D0_ID 38
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_0_XFRM_HANDLER_REV_S0_D0_ID 39
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_1_XFRM_HANDLER_FWD_S0_D0_ID 40
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_1_XFRM_HANDLER_REV_S0_D0_ID 41
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_2_XFRM_HANDLER_FWD_S0_D0_ID 42
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_2_XFRM_HANDLER_REV_S0_D0_ID 43
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_3_XFRM_HANDLER_FWD_S0_D0_ID 44
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_OVERRIDET_3_XFRM_HANDLER_REV_S0_D0_ID 45
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_VRFT_0_XFRM_HANDLER_FWD_S0_D0_ID 48
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_VRFT_0_XFRM_HANDLER_REV_S0_D0_ID 49
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_VRFT_1_XFRM_HANDLER_FWD_S0_D0_ID 50
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_VRFT_1_XFRM_HANDLER_REV_S0_D0_ID 51
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_VRFT_2_XFRM_HANDLER_FWD_S0_D0_ID 52
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_VRFT_2_XFRM_HANDLER_REV_S0_D0_ID 53
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_VRFT_3_XFRM_HANDLER_FWD_S0_D0_ID 54
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTE_VRFT_3_XFRM_HANDLER_REV_S0_D0_ID 55
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_UDF_FLEX_HASH_COND_CHECKT_0_XFRM_HANDLER_FWD_S0_D0_ID 142
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_UDF_FLEX_HASH_COND_CHECKT_0_XFRM_HANDLER_REV_S0_D0_ID 143
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_UDF_FLEX_HASH_COND_CHECKT_1_XFRM_HANDLER_FWD_S0_D0_ID 144
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_UDF_FLEX_HASH_COND_CHECKT_1_XFRM_HANDLER_REV_S0_D0_ID 145
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L2_FDB_VLAN_STATIC_GLP_XFRM_HANDLER_FWD_S0_D0_ID 10
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L2_FDB_VLAN_STATIC_GLP_XFRM_HANDLER_REV_S0_D0_ID 11
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_FWD_S0_D0_ID 16
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_FWD_S1_D1_ID 18
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_FWD_S2_D1_ID 20
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_FWD_S3_D1_ID 22
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_FWD_S4_D2_ID 24
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_FWD_S5_D3_ID 26
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_FWD_S6_D3_ID 36
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_FWD_S7_D3_ID 46
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_REV_S0_D0_ID 17
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_REV_S1_D1_ID 19
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_REV_S2_D1_ID 21
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_REV_S3_D1_ID 23
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_REV_S4_D2_ID 25
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_REV_S5_D3_ID 27
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_REV_S6_D3_ID 37
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_REV_S7_D3_ID 47
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_LB_HASH_OUTPUT_SELECT_PORT_INDEX_XFRM_HANDLER_FWD_S0_D0_X0_ID 56
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_LB_HASH_OUTPUT_SELECT_PORT_INDEX_XFRM_HANDLER_FWD_S1_D0_X0_ID 58
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_LB_HASH_OUTPUT_SELECT_PORT_INDEX_XFRM_HANDLER_FWD_S2_D0_X0_ID 60
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_LB_HASH_OUTPUT_SELECT_PORT_INDEX_XFRM_HANDLER_FWD_S3_D0_X0_ID 62
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_LB_HASH_OUTPUT_SELECT_PORT_INDEX_XFRM_HANDLER_FWD_S4_D0_X0_ID 64
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_LB_HASH_OUTPUT_SELECT_PORT_INDEX_XFRM_HANDLER_FWD_S5_D0_X0_ID 66
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_LB_HASH_OUTPUT_SELECT_PORT_INDEX_XFRM_HANDLER_FWD_S6_D0_X0_ID 68
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_LB_HASH_OUTPUT_SELECT_PORT_INDEX_XFRM_HANDLER_REV_S0_D0_X0_ID 57
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_LB_HASH_OUTPUT_SELECT_PORT_INDEX_XFRM_HANDLER_REV_S1_D0_X0_ID 59
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_LB_HASH_OUTPUT_SELECT_PORT_INDEX_XFRM_HANDLER_REV_S2_D0_X0_ID 61
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_LB_HASH_OUTPUT_SELECT_PORT_INDEX_XFRM_HANDLER_REV_S3_D0_X0_ID 63
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_LB_HASH_OUTPUT_SELECT_PORT_INDEX_XFRM_HANDLER_REV_S4_D0_X0_ID 65
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_LB_HASH_OUTPUT_SELECT_PORT_INDEX_XFRM_HANDLER_REV_S5_D0_X0_ID 67
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_LB_HASH_OUTPUT_SELECT_PORT_INDEX_XFRM_HANDLER_REV_S6_D0_X0_ID 69
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MEMBER_CNT_SET_XFRM_HANDLER_FWD_S0_D0_ID 70
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MEMBER_CNT_SET_XFRM_HANDLER_FWD_S1_D0_ID 92
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MEMBER_CNT_SET_XFRM_HANDLER_REV_S0_D0_ID 71
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MEMBER_CNT_SET_XFRM_HANDLER_REV_S1_D0_ID 93
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MIRROR_ENCAP_IPV4_XFRM_HANDLER_FWD_S0_D0_ID 82
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MIRROR_ENCAP_IPV4_XFRM_HANDLER_FWD_S1_D1_ID 90
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MIRROR_ENCAP_IPV4_XFRM_HANDLER_REV_S0_D0_ID 83
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MIRROR_ENCAP_IPV4_XFRM_HANDLER_REV_S1_D1_ID 91
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MIRROR_ENCAP_UDP_XFRM_HANDLER_FWD_S0_D0_ID 88
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MIRROR_ENCAP_UDP_XFRM_HANDLER_REV_S0_D0_ID 89
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MIRROR_ENCAP_VLAN_TAG_XFRM_HANDLER_FWD_S0_D0_ID 80
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MIRROR_ENCAP_VLAN_TAG_XFRM_HANDLER_FWD_S1_D1_ID 84
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MIRROR_ENCAP_VLAN_TAG_XFRM_HANDLER_FWD_S2_D2_ID 86
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MIRROR_ENCAP_VLAN_TAG_XFRM_HANDLER_REV_S0_D0_ID 81
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MIRROR_ENCAP_VLAN_TAG_XFRM_HANDLER_REV_S1_D1_ID 85
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MIRROR_ENCAP_VLAN_TAG_XFRM_HANDLER_REV_S2_D2_ID 87
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MOD_ID_SET_XFRM_HANDLER_FWD_S0_D0_ID 72
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MOD_ID_SET_XFRM_HANDLER_FWD_S1_D0_ID 94
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MOD_ID_SET_XFRM_HANDLER_REV_S0_D0_ID 73
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_MOD_ID_SET_XFRM_HANDLER_REV_S1_D0_ID 95
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_PORT_ID_SET_XFRM_HANDLER_FWD_S0_D0_ID 74
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_PORT_ID_SET_XFRM_HANDLER_FWD_S1_D0_ID 96
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_PORT_ID_SET_XFRM_HANDLER_REV_S0_D0_ID 75
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_PORT_ID_SET_XFRM_HANDLER_REV_S1_D0_ID 97
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_UDF_CHUNK_XFRM_HANDLER_FWD_S0_D0_X0_ID 140
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_UDF_CHUNK_XFRM_HANDLER_REV_S0_D0_X0_ID 141
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_WRED_INDEX_XFRM_HANDLER_FWD_S0_D0_ID 4
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_WRED_INDEX_XFRM_HANDLER_REV_S0_D0_ID 5
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_POLICY_DROP_ON_PRI_XFRM_HANDLER_FWD_S0_D0_ID 102
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_POLICY_DROP_ON_PRI_XFRM_HANDLER_REV_S0_D0_ID 103
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_POLICY_EGR_CFI_AS_CNG_XFRM_HANDLER_FWD_S0_D0_ID 108
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_POLICY_EGR_CFI_AS_CNG_XFRM_HANDLER_REV_S0_D0_ID 109
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_POLICY_ING_CFI_AS_CNG_XFRM_HANDLER_FWD_S0_D0_ID 106
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_POLICY_ING_CFI_AS_CNG_XFRM_HANDLER_REV_S0_D0_ID 107
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_POLICY_PASS_ON_OUTER_TPID_MATCH_XFRM_HANDLER_FWD_S0_D0_ID 104
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_POLICY_PASS_ON_OUTER_TPID_MATCH_XFRM_HANDLER_REV_S0_D0_ID 105
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_SYSTEM_TABLE_INDEX_XFRM_HANDLER_FWD_S0_D0_ID 110
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_VLAN_XLATE_ICFI_MAPPED_XFRM_HANDLER_FWD_S0_D0_ID 123
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_VLAN_XLATE_ICFI_MAPPED_XFRM_HANDLER_REV_S0_D0_ID 124
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_VLAN_XLATE_ING_MISS_ACTION_XFRM_HANDLER_FWD_S0_D0_ID 115
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_VLAN_XLATE_ING_MISS_ACTION_XFRM_HANDLER_REV_S0_D0_ID 116
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_VLAN_XLATE_ING_XLATE_TBL_SEL_FIRST_LOOKUP_XFRM_HANDLER_FWD_S0_D0_ID 111
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_VLAN_XLATE_ING_XLATE_TBL_SEL_FIRST_LOOKUP_XFRM_HANDLER_REV_S0_D0_ID 112
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_VLAN_XLATE_ING_XLATE_TBL_SEL_SECOND_LOOKUP_XFRM_HANDLER_FWD_S0_D0_ID 113
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_VLAN_XLATE_ING_XLATE_TBL_SEL_SECOND_LOOKUP_XFRM_HANDLER_REV_S0_D0_ID 114
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_VLAN_XLATE_IPRI_MAPPED_XFRM_HANDLER_FWD_S0_D0_ID 121
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_VLAN_XLATE_IPRI_MAPPED_XFRM_HANDLER_REV_S0_D0_ID 122
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_VLAN_XLATE_OCFI_MAPPED_XFRM_HANDLER_FWD_S0_D0_ID 119
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_VLAN_XLATE_OCFI_MAPPED_XFRM_HANDLER_REV_S0_D0_ID 120
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_VLAN_XLATE_OPRI_MAPPED_XFRM_HANDLER_FWD_S0_D0_ID 117
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMPORT_PORT_VLAN_XLATE_OPRI_MAPPED_XFRM_HANDLER_REV_S0_D0_ID 118
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_PIPE_SP_FIELD_XFRM_HANDLER_FWD_S0_D0_T0_ID 127
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_PIPE_SP_FIELD_XFRM_HANDLER_FWD_S0_D0_T1_ID 129
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_PIPE_SP_FIELD_XFRM_HANDLER_REV_S0_D0_T0_ID 128
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_PIPE_SP_IDX_XFRM_HANDLER_FWD_S0_D0_X0_T0_ID 125
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_PIPE_SP_IDX_XFRM_HANDLER_FWD_S0_D0_X0_T1_ID 126
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_PORT_SP_FIELD_XFRM_HANDLER_FWD_S0_D0_T0_ID 132
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_PORT_SP_FIELD_XFRM_HANDLER_FWD_S0_D0_T1_ID 134
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_PORT_SP_FIELD_XFRM_HANDLER_REV_S0_D0_T0_ID 133
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_PORT_SP_IDX_XFRM_HANDLER_FWD_S0_D0_X0_T0_ID 130
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_PORT_SP_IDX_XFRM_HANDLER_FWD_S0_D0_X0_T1_ID 131
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_UCQ_FIELD_XFRM_HANDLER_FWD_S0_D0_T0_ID 137
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_UCQ_FIELD_XFRM_HANDLER_FWD_S0_D0_T1_ID 139
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_UCQ_FIELD_XFRM_HANDLER_REV_S0_D0_T0_ID 138
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_UCQ_IDX_XFRM_HANDLER_FWD_S0_D0_X0_T0_ID 135
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTM_WRED_UCQ_IDX_XFRM_HANDLER_FWD_S0_D0_X0_T1_ID 136
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTNL_ENCAP_ID_XFRM_HANDLER_FWD_S0_D0_X0_C0_ID 14
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTNL_ENCAP_ID_XFRM_HANDLER_REV_S0_D0_X0_C0_ID 15
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTNL_L3_EIF_ID_XFRM_HANDLER_FWD_S0_D0_C0_ID 12
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMTNL_L3_EIF_ID_XFRM_HANDLER_REV_S0_D0_C0_ID 13
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMVLAN_STG_XFRM_HANDLER_FWD_S0_D0_ID 150
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMVLAN_STG_XFRM_HANDLER_REV_S0_D0_ID 151
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMVLAN_VLAN_ASSIGNMENT_VLAN_RANGE_VLAN_ID_MAX_XFRM_HANDLER_FWD_S0_D0_ID 148
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMVLAN_VLAN_ASSIGNMENT_VLAN_RANGE_VLAN_ID_MAX_XFRM_HANDLER_REV_S0_D0_ID 149
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMVLAN_VLAN_ASSIGNMENT_VLAN_RANGE_VLAN_ID_MIN_XFRM_HANDLER_FWD_S0_D0_ID 146
#define BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMVLAN_VLAN_ASSIGNMENT_VLAN_RANGE_VLAN_ID_MIN_XFRM_HANDLER_REV_S0_D0_ID 147
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_CTR_CONTROL_STD_VAL_FV_HANDLER_ID 0
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_DEVICE_EM_GROUP_STD_VAL_FV_HANDLER_ID 1
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_FP_EGR_ENTRY_STD_VAL_FV_HANDLER_ID 2
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_FP_EGR_RULE_TEMPLATE_STD_VAL_FV_HANDLER_ID 3
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_FP_EM_ENTRY_STD_VAL_FV_HANDLER_ID 4
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_FP_EM_GRP_TEMPLATE_STD_VAL_FV_HANDLER_ID 5
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_FP_EM_RULE_TEMPLATE_STD_VAL_FV_HANDLER_ID 6
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_FP_ING_ENTRY_STD_VAL_FV_HANDLER_ID 7
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_FP_ING_GRP_TEMPLATE_STD_VAL_FV_HANDLER_ID 8
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_FP_ING_REDIRECT_DATA_STD_VAL_FV_HANDLER_ID 9
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_FP_ING_RULE_TEMPLATE_STD_VAL_FV_HANDLER_ID 10
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_FP_VLAN_ENTRY_STD_VAL_FV_HANDLER_ID 11
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_FP_VLAN_GRP_TEMPLATE_STD_VAL_FV_HANDLER_ID 12
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_METER_FP_EGR_TEMPLATE_STD_VAL_FV_HANDLER_ID 13
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_METER_FP_ING_TEMPLATE_STD_VAL_FV_HANDLER_ID 14
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_METER_STORM_CONTROL_STD_VAL_FV_HANDLER_ID 15
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_MIRROR_EGR_INSTANCE_MEMBER_CNT_VAL_FV_HANDLER_ID 16
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_MIRROR_ING_INSTANCE_MEMBER_CNT_VAL_FV_HANDLER_ID 17
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_PORT_SYSTEM_STD_VAL_FV_HANDLER_ID 18
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_SER_CONTROL_PT_STD_VAL_FV_HANDLER_ID 19
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_SCHEDULER_SHAPER_CPU_NODE_STD_VAL_FV_HANDLER_ID 20
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_SCHEDULER_SHAPER_NODES_STD_VAL_FV_HANDLER_ID 21
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_SHAPER_PORT_STD_VAL_FV_HANDLER_ID 22
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_THD_EGR_MC_PORT_SERVICE_POOL_STD_VAL_FV_HANDLER_ID 23
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_THD_EGR_UC_PORT_SERVICE_POOL_STD_VAL_FV_HANDLER_ID 24
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_THD_MC_Q_STD_VAL_FV_HANDLER_ID 25
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_THD_PORT_INT_PRI_TO_PRI_GRP_STD_VAL_FV_HANDLER_ID 26
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_THD_PORT_MC_Q_TO_SERVICE_POOL_STD_VAL_FV_HANDLER_ID 27
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_THD_PORT_PRI_GRP_STD_VAL_FV_HANDLER_ID 28
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_THD_PORT_PRI_GRP_TO_HEADROOM_POOL_STD_VAL_FV_HANDLER_ID 29
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_THD_PORT_PRI_GRP_TO_SERVICE_POOL_STD_VAL_FV_HANDLER_ID 30
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_THD_PORT_UC_Q_TO_SERVICE_POOL_STD_VAL_FV_HANDLER_ID 31
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_THD_UC_Q_GRP_STD_VAL_FV_HANDLER_ID 33
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_THD_UC_Q_STD_VAL_FV_HANDLER_ID 32
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TM_THD_UC_Q_TO_UC_Q_GRP_STD_VAL_FV_HANDLER_ID 34
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TNL_IPV4_DECAP_STD_VAL_FV_HANDLER_ID 35
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_TNL_IPV6_DECAP_STD_VAL_FV_HANDLER_ID 36
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_VLAN_PROFILE_STD_VAL_FV_HANDLER_ID 40
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMLTX_VLAN_STD_VAL_FV_HANDLER_ID 37
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMVLAN_VLAN_EGR_XLATE_MODPORT_EGR_XLATE_MODPORT_FV_HANDLER_ID 38
#define BCMLTD_VALIDATE_BCM56960_A0_LTA_BCMVLAN_VLAN_EGR_XLATE_PORT_GRP_EGR_XLATE_PORT_GRP_FV_HANDLER_ID 39
#endif /* DOXYGEN_IGNORE_AUTOGEN */
#endif /* BCM56960_A0_LRD_LTM_INTF_H */
