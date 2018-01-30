/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from INTERNAL/fltg/xgs/fp/FP_EGR_RULE_TEMPLATE.tbl.ltl
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
#include <bcmltd/bcmltd_internal.h>
#include "bcmltd_strpool.h"
static const bcmltd_field_rep_t bcmltd_fp_egr_rule_template_t_fields[] = {
    {
        .name  = bcmltd_strpool_fp_egr_rule_template_id,  /* FP_EGR_RULE_TEMPLATE_ID */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 32,
        .depth = 0,
        .desc = "Egress FP Rule Identifier.",
    },
    {
        .name  = bcmltd_strpool_qual_egr_nhop_class_id,  /* QUAL_EGR_NHOP_CLASS_ID */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier for Class ID assigned by next hop",
    },
    {
        .name  = bcmltd_strpool_qual_egr_nhop_class_id_mask,  /* QUAL_EGR_NHOP_CLASS_ID_MASK */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier Mask for QUAL_EGR_NHOP_CLASS_ID",
    },
    {
        .name  = bcmltd_strpool_qual_egr_l3_intf_class_id,  /* QUAL_EGR_L3_INTF_CLASS_ID */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Class ID assigned by Egress interface",
    },
    {
        .name  = bcmltd_strpool_qual_egr_l3_intf_class_id_mask,  /* QUAL_EGR_L3_INTF_CLASS_ID_MASK */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier Mask for QUAL_EGR_L3_INTF_CLASS_ID",
    },
    {
        .name  = bcmltd_strpool_qual_egr_dvp_class_id,  /* QUAL_EGR_DVP_CLASS_ID */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Class ID assigned by DVP",
    },
    {
        .name  = bcmltd_strpool_qual_egr_dvp_class_id_mask,  /* QUAL_EGR_DVP_CLASS_ID_MASK */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier Mask for QUAL_EGR_DVP_CLASS_ID",
    },
    {
        .name  = bcmltd_strpool_qual_l4_pkt,  /* QUAL_L4_PKT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for L4 Packet (Valid L4 Src and Dest Port).",
    },
    {
        .name  = bcmltd_strpool_qual_l4_pkt_mask,  /* QUAL_L4_PKT_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_L4_PKT.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_vp_valid,  /* QUAL_DST_VP_VALID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier to check if destination VP valid.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_vp_valid_mask,  /* QUAL_DST_VP_VALID_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Mask of QUAL_DST_VP_VALID.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_vp,  /* QUAL_DST_VP */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier for Destination VP (DVP).",
    },
    {
        .name  = bcmltd_strpool_qual_dst_vp_mask,  /* QUAL_DST_VP_MASK */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_DST_VP",
    },
    {
        .name  = bcmltd_strpool_qual_int_pri,  /* QUAL_INT_PRI */
        .flags = 0,
        .width = 4,
        .depth = 0,
        .desc = "Qualifer for Internal Priority of Packet.",
    },
    {
        .name  = bcmltd_strpool_qual_int_pri_mask,  /* QUAL_INT_PRI_MASK */
        .flags = 0,
        .width = 4,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INT_PRI.",
    },
    {
        .name  = bcmltd_strpool_qual_color,  /* QUAL_COLOR */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier Enum for packet Color.",
    },
    {
        .name  = bcmltd_strpool_qual_l2_format,  /* QUAL_L2_FORMAT */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier Enum for L2 Format in Packet.",
    },
    {
        .name  = bcmltd_strpool_qual_ethertype,  /* QUAL_ETHERTYPE */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier for Ethertype.",
    },
    {
        .name  = bcmltd_strpool_qual_ethertype_mask,  /* QUAL_ETHERTYPE_MASK */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_ETHERTYPE.",
    },
    {
        .name  = bcmltd_strpool_qual_src_mac,  /* QUAL_SRC_MAC */
        .flags = 0,
        .width = 48,
        .depth = 0,
        .desc = "Qualifier for Source MAC address.",
    },
    {
        .name  = bcmltd_strpool_qual_src_mac_mask,  /* QUAL_SRC_MAC_MASK */
        .flags = 0,
        .width = 48,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_SRC_MAC.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_mac,  /* QUAL_DST_MAC */
        .flags = 0,
        .width = 48,
        .depth = 0,
        .desc = "Qualifier for Destination MAC address.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_mac_mask,  /* QUAL_DST_MAC_MASK */
        .flags = 0,
        .width = 48,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_DST_MAC.",
    },
    {
        .name  = bcmltd_strpool_qual_vxlt_lookup_hit,  /* QUAL_VXLT_LOOKUP_HIT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Look up hit for VLAN tranlation",
    },
    {
        .name  = bcmltd_strpool_qual_vxlt_lookup_hit_mask,  /* QUAL_VXLT_LOOKUP_HIT_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_VXLT_LOOKUP_HIT.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_vlan_cfi,  /* QUAL_INNER_VLAN_CFI */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for Inner Vlan CFI.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_vlan_cfi_mask,  /* QUAL_INNER_VLAN_CFI_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_VLAN_CFI.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_vlan_pri,  /* QUAL_INNER_VLAN_PRI */
        .flags = 0,
        .width = 3,
        .depth = 0,
        .desc = "Qualifier for Inner Vlan Priority.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_vlan_pri_mask,  /* QUAL_INNER_VLAN_PRI_MASK */
        .flags = 0,
        .width = 3,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_VLAN_PRI.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_vlan_id,  /* QUAL_INNER_VLAN_ID */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier for Inner Vlan Id.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_vlan_id_mask,  /* QUAL_INNER_VLAN_ID_MASK */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_VLAN_ID.",
    },
    {
        .name  = bcmltd_strpool_qual_inport,  /* QUAL_INPORT */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Inport.",
    },
    {
        .name  = bcmltd_strpool_qual_inport_mask,  /* QUAL_INPORT_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INPORT.",
    },
    {
        .name  = bcmltd_strpool_qual_l3_routable_pkt,  /* QUAL_L3_ROUTABLE_PKT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for Packet is L3 Routable Status.",
    },
    {
        .name  = bcmltd_strpool_qual_l3_routable_pkt_mask,  /* QUAL_L3_ROUTABLE_PKT_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_L3_ROUTABLE_PKT.",
    },
    {
        .name  = bcmltd_strpool_qual_outer_vlan_id,  /* QUAL_OUTER_VLAN_ID */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier for Outer Vlan Id.",
    },
    {
        .name  = bcmltd_strpool_qual_outer_vlan_id_mask,  /* QUAL_OUTER_VLAN_ID_MASK */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_OUTER_VLAN_ID.",
    },
    {
        .name  = bcmltd_strpool_qual_outer_vlan_cfi,  /* QUAL_OUTER_VLAN_CFI */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for Outer Vlan CFI.",
    },
    {
        .name  = bcmltd_strpool_qual_outer_vlan_cfi_mask,  /* QUAL_OUTER_VLAN_CFI_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_OUTER_VLAN_CFI.",
    },
    {
        .name  = bcmltd_strpool_qual_outer_vlan_pri,  /* QUAL_OUTER_VLAN_PRI */
        .flags = 0,
        .width = 3,
        .depth = 0,
        .desc = "Qualifier for Outer Vlan Priority.",
    },
    {
        .name  = bcmltd_strpool_qual_outer_vlan_pri_mask,  /* QUAL_OUTER_VLAN_PRI_MASK */
        .flags = 0,
        .width = 3,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_OUTER_VLAN_PRI.",
    },
    {
        .name  = bcmltd_strpool_qual_vlan_inner_present,  /* QUAL_VLAN_INNER_PRESENT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier to check if Inner Vlan Present in Packet.",
    },
    {
        .name  = bcmltd_strpool_qual_vlan_inner_present_mask,  /* QUAL_VLAN_INNER_PRESENT_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_VLAN_INNER_PRESENT.",
    },
    {
        .name  = bcmltd_strpool_qual_vlan_outer_present,  /* QUAL_VLAN_OUTER_PRESENT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier to check if Outer Vlan Present in Packet.",
    },
    {
        .name  = bcmltd_strpool_qual_vlan_outer_present_mask,  /* QUAL_VLAN_OUTER_PRESENT_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Mask of QUAL_VLAN_OUTER_PRESENT.",
    },
    {
        .name  = bcmltd_strpool_qual_system_port_class,  /* QUAL_SYSTEM_PORT_CLASS */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier for Port Class Id.",
    },
    {
        .name  = bcmltd_strpool_qual_system_port_class_mask,  /* QUAL_SYSTEM_PORT_CLASS_MASK */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_SYSTEM_PORT_CLASS.",
    },
    {
        .name  = bcmltd_strpool_qual_fp_ing_classid_type,  /* QUAL_FP_ING_CLASSID_TYPE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier to mention the IFP class Id type",
    },
    {
        .name  = bcmltd_strpool_qual_fp_ing_classid,  /* QUAL_FP_ING_CLASSID */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier for IFP Class Id.",
    },
    {
        .name  = bcmltd_strpool_qual_fp_ing_classid_mask,  /* QUAL_FP_ING_CLASSID_MASK */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_FP_ING_CLASSID",
    },
    {
        .name  = bcmltd_strpool_qual_outport,  /* QUAL_OUTPORT */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Outport.",
    },
    {
        .name  = bcmltd_strpool_qual_outport_mask,  /* QUAL_OUTPORT_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_OUTPORT.",
    },
    {
        .name  = bcmltd_strpool_qual_cpu_cos,  /* QUAL_CPU_COS */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for CPU Cos queue value.",
    },
    {
        .name  = bcmltd_strpool_qual_cpu_cos_mask,  /* QUAL_CPU_COS_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_CPU_COS_MASK.",
    },
    {
        .name  = bcmltd_strpool_qual_l3_type,  /* QUAL_L3_TYPE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier Enum for L3 Type in Packet.",
    },
    {
        .name  = bcmltd_strpool_qual_fwd_vlan_id,  /* QUAL_FWD_VLAN_ID */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier for Forwarding Vlan Id.",
    },
    {
        .name  = bcmltd_strpool_qual_fwd_vlan_id_mask,  /* QUAL_FWD_VLAN_ID_MASK */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_FWD_VLAN_ID.",
    },
    {
        .name  = bcmltd_strpool_qual_vrf,  /* QUAL_VRF */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifer for VRF.",
    },
    {
        .name  = bcmltd_strpool_qual_vrf_mask,  /* QUAL_VRF_MASK */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_VRF.",
    },
    {
        .name  = bcmltd_strpool_qual_vpn,  /* QUAL_VPN */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier for VPN.",
    },
    {
        .name  = bcmltd_strpool_qual_vpn_mask,  /* QUAL_VPN_MASK */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifer Mask of QUAL_VPN.",
    },
    {
        .name  = bcmltd_strpool_qual_forwarding_type,  /* QUAL_FORWARDING_TYPE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Qualifer Enum for Forwarding Type.",
    },
    {
        .name  = bcmltd_strpool_qual_int_cn,  /* QUAL_INT_CN */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Internal Congestion.",
    },
    {
        .name  = bcmltd_strpool_qual_int_cn_mask,  /* QUAL_INT_CN_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INT_CN.",
    },
    {
        .name  = bcmltd_strpool_qual_drop_pkt,  /* QUAL_DROP_PKT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for Packet is flagged to be dropped.",
    },
    {
        .name  = bcmltd_strpool_qual_drop_pkt_mask,  /* QUAL_DROP_PKT_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_DROP_PKT.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_flags_mf,  /* QUAL_IP_FLAGS_MF */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for More Fragment Flag in IP Header.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_flags_mf_mask,  /* QUAL_IP_FLAGS_MF_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_IP_FLAGS_MF.",
    },
    {
        .name  = bcmltd_strpool_qual_mirr_copy,  /* QUAL_MIRR_COPY */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mirrored traffic.",
    },
    {
        .name  = bcmltd_strpool_qual_mirr_copy_mask,  /* QUAL_MIRR_COPY_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_MIRR_COPY.",
    },
    {
        .name  = bcmltd_strpool_qual_tcp_control_flags,  /* QUAL_TCP_CONTROL_FLAGS */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for TCP Control flags.",
    },
    {
        .name  = bcmltd_strpool_qual_tcp_control_flags_mask,  /* QUAL_TCP_CONTROL_FLAGS_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_TCP_CONTROL_FLAGS.",
    },
    {
        .name  = bcmltd_strpool_qual_l4dst_port,  /* QUAL_L4DST_PORT */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier for L4 Destination Port.",
    },
    {
        .name  = bcmltd_strpool_qual_l4dst_port_mask,  /* QUAL_L4DST_PORT_MASK */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_L4DST_PORT.",
    },
    {
        .name  = bcmltd_strpool_qual_l4src_port,  /* QUAL_L4SRC_PORT */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier for L4 Source Port.",
    },
    {
        .name  = bcmltd_strpool_qual_l4src_port_mask,  /* QUAL_L4SRC_PORT_MASK */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_L4SRC_PORT.",
    },
    {
        .name  = bcmltd_strpool_qual_icmp_type_code,  /* QUAL_ICMP_TYPE_CODE */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier for ICMP type code.",
    },
    {
        .name  = bcmltd_strpool_qual_icmp_type_code_mask,  /* QUAL_ICMP_TYPE_CODE_MASK */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_ICMP_TYPE_CODE.",
    },
    {
        .name  = bcmltd_strpool_qual_ttl,  /* QUAL_TTL */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Packet TTL.",
    },
    {
        .name  = bcmltd_strpool_qual_ttl_mask,  /* QUAL_TTL_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_TTL.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_protocol,  /* QUAL_IP_PROTOCOL */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Protocol Number in IPv4/IPv6 packets.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_protocol_mask,  /* QUAL_IP_PROTOCOL_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_IP_PROTO.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip4,  /* QUAL_DST_IP4 */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for IPv4 Destination Address.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip4_mask,  /* QUAL_DST_IP4_MASK */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_DST_IP4.",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip4,  /* QUAL_SRC_IP4 */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for IPv4 Source Address.",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip4_mask,  /* QUAL_SRC_IP4_MASK */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_SRC_IP4.",
    },
    {
        .name  = bcmltd_strpool_qual_tos,  /* QUAL_TOS */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Type of Service.",
    },
    {
        .name  = bcmltd_strpool_qual_tos_mask,  /* QUAL_TOS_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_TOS.",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip6_upper,  /* QUAL_SRC_IP6_UPPER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for IPv6 Source Address.",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip6_lower,  /* QUAL_SRC_IP6_LOWER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for IPv6 Source Address.",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip6_mask_upper,  /* QUAL_SRC_IP6_MASK_UPPER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_SRC_IP6.",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip6_mask_lower,  /* QUAL_SRC_IP6_MASK_LOWER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_SRC_IP6.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip6_upper,  /* QUAL_DST_IP6_UPPER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for IPv6 Destination Address.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip6_lower,  /* QUAL_DST_IP6_LOWER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for IPv6 Destination Address.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip6_mask_upper,  /* QUAL_DST_IP6_MASK_UPPER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_DST_IP6.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip6_mask_lower,  /* QUAL_DST_IP6_MASK_LOWER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_DST_IP6.",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip6_high,  /* QUAL_SRC_IP6_HIGH */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for Source IPv6 Address (High/Upper 64 bits).",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip6_high_mask,  /* QUAL_SRC_IP6_HIGH_MASK */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_SRC_IP6_HIGH.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip6_high,  /* QUAL_DST_IP6_HIGH */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for Destination IPv6 Address (High/Upper 64 bits).",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip6_high_mask,  /* QUAL_DST_IP6_HIGH_MASK */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_DST_IP6_HIGH.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_first_eh_subcode,  /* QUAL_IP_FIRST_EH_SUBCODE */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for IP First Extension Header Subcode.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_first_eh_subcode_mask,  /* QUAL_IP_FIRST_EH_SUBCODE_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_IP_FIRST_EH_SUBCODE.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_first_eh_proto,  /* QUAL_IP_FIRST_EH_PROTO */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for IP First Extension Header Protocol Type.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_first_eh_proto_mask,  /* QUAL_IP_FIRST_EH_PROTO_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_IP_FIRST_EH_PROTO.",
    },
    {
        .name  = bcmltd_strpool_qual_mpls_fwd_label_exp,  /* QUAL_MPLS_FWD_LABEL_EXP */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for MPLS Forwarding Exp Label.",
    },
    {
        .name  = bcmltd_strpool_qual_mpls_fwd_label_exp_mask,  /* QUAL_MPLS_FWD_LABEL_EXP_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_MPLS_FWD_LABEL_EXP.",
    },
    {
        .name  = bcmltd_strpool_qual_pkt_is_visible,  /* QUAL_PKT_IS_VISIBLE */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for packet used for debugging.",
    },
    {
        .name  = bcmltd_strpool_qual_pkt_is_visible_mask,  /* QUAL_PKT_IS_VISIBLE_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUA_PKT_IS_VISIBLE.",
    },
    {
        .name  = bcmltd_strpool_qual_bytes_after_l2header,  /* QUAL_BYTES_AFTER_L2HEADER */
        .flags = 0,
        .width = 256,
        .depth = 0,
        .desc = "Qualifier for 256 Bytes after L2 Header.",
    },
    {
        .name  = bcmltd_strpool_qual_bytes_after_l2header_mask,  /* QUAL_BYTES_AFTER_L2HEADER_MASK */
        .flags = 0,
        .width = 256,
        .depth = 0,
        .desc = "Qualifer Mask of QUAL_BYTES_AFTER_L2HEADER.",
    },
};
const bcmltd_table_rep_t bcmltd_fp_egr_rule_template_t = {
    .name = bcmltd_strpool_fp_egr_rule_template, /* FP_EGR_RULE_TEMPLATE */
    .flags = 0,
    .fields = 110,
    .field = bcmltd_fp_egr_rule_template_t_fields,
    .desc = "The FP_EGR_RULE_TEMPLATE Logical Table create Rules in the Egress\n FP Group.\n",
};
