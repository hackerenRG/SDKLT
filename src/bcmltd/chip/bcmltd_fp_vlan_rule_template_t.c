/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from INTERNAL/fltg/xgs/fp/FP_VLAN_RULE_TEMPLATE.tbl.ltl
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
static const bcmltd_field_rep_t bcmltd_fp_vlan_rule_template_t_fields[] = {
    {
        .name  = bcmltd_strpool_fp_vlan_rule_template_id,  /* FP_VLAN_RULE_TEMPLATE_ID */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 32,
        .depth = 0,
        .desc = "Vlan FP Rule Identifier.",
    },
    {
        .name  = bcmltd_strpool_qual_vlan_outer_present,  /* QUAL_VLAN_OUTER_PRESENT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for Packet Outer Vlan Tag Status.",
    },
    {
        .name  = bcmltd_strpool_qual_vlan_outer_present_mask,  /* QUAL_VLAN_OUTER_PRESENT_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_VLAN_OUTER_PRESENT.",
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
        .desc = "Qualifier of QUAL_OUTER_VLAN_CFI.",
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
        .desc = "Qualifier for Packet Inner Vlan Tag Status.",
    },
    {
        .name  = bcmltd_strpool_qual_vlan_inner_present_mask,  /* QUAL_VLAN_INNER_PRESENT_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_VLAN_INNER_PRESENT.",
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
        .name  = bcmltd_strpool_qual_inner_ip_proto_common,  /* QUAL_INNER_IP_PROTO_COMMON */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for Inner IP Protocol Common field.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_proto_common,  /* QUAL_IP_PROTO_COMMON */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for Common IP protocols.",
    },
    {
        .name  = bcmltd_strpool_qual_tunnel_terminated,  /* QUAL_TUNNEL_TERMINATED */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for Tunnel terminated traffic.",
    },
    {
        .name  = bcmltd_strpool_qual_tunnel_terminated_mask,  /* QUAL_TUNNEL_TERMINATED_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_TUNNEL_TERMINATED.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_checksum_valid,  /* QUAL_IP_CHECKSUM_VALID */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier to check if Packet has matching IP Checksum.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_checksum_valid_mask,  /* QUAL_IP_CHECKSUM_VALID_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_IP_CHECKSUM_VALID.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_tpid,  /* QUAL_INNER_TPID */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for Inner TPID of the Packet.",
    },
    {
        .name  = bcmltd_strpool_qual_outer_tpid,  /* QUAL_OUTER_TPID */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for Outer TPID of the packet",
    },
    {
        .name  = bcmltd_strpool_qual_l2_format,  /* QUAL_L2_FORMAT */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for L2 packet format",
    },
    {
        .name  = bcmltd_strpool_qual_higiglookup_pkt,  /* QUAL_HIGIGLOOKUP_PKT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for Packet is received on HiGiG Port and Table\n lookup happened.\n",
    },
    {
        .name  = bcmltd_strpool_qual_higiglookup_pkt_mask,  /* QUAL_HIGIGLOOKUP_PKT_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_HIGIGLOOKUP_PKT.",
    },
    {
        .name  = bcmltd_strpool_qual_higig_pkt,  /* QUAL_HIGIG_PKT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for Packet Received on HiGiG Port.",
    },
    {
        .name  = bcmltd_strpool_qual_higig_pkt_mask,  /* QUAL_HIGIG_PKT_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_HIGIG_PKT.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_ip_type,  /* QUAL_INNER_IP_TYPE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for Inner ip header IP Type.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_type,  /* QUAL_IP_TYPE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for IP Type.",
    },
    {
        .name  = bcmltd_strpool_qual_src_trunk,  /* QUAL_SRC_TRUNK */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier for SGLP - Source Trunk Group ID.",
    },
    {
        .name  = bcmltd_strpool_qual_src_trunk_mask,  /* QUAL_SRC_TRUNK_MASK */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_SRC_TRUNK.",
    },
    {
        .name  = bcmltd_strpool_qual_src_vp,  /* QUAL_SRC_VP */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier for Source VP.",
    },
    {
        .name  = bcmltd_strpool_qual_src_vp_mask,  /* QUAL_SRC_VP_MASK */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_SRC_VP.",
    },
    {
        .name  = bcmltd_strpool_qual_src_port,  /* QUAL_SRC_PORT */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Source Port.",
    },
    {
        .name  = bcmltd_strpool_qual_src_port_mask,  /* QUAL_SRC_PORT_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_SRC_PORT.",
    },
    {
        .name  = bcmltd_strpool_qual_src_module,  /* QUAL_SRC_MODULE */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Source Module.",
    },
    {
        .name  = bcmltd_strpool_qual_src_module_mask,  /* QUAL_SRC_MODULE_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_SRC_MODULE.",
    },
    {
        .name  = bcmltd_strpool_qual_inport,  /* QUAL_INPORT */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Single Input Port.",
    },
    {
        .name  = bcmltd_strpool_qual_inport_mask,  /* QUAL_INPORT_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INPORT.",
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
        .name  = bcmltd_strpool_qual_l4_pkt,  /* QUAL_L4_PKT */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for L4 Packet (has Valid L4 Source and Destination\n Port).\n",
    },
    {
        .name  = bcmltd_strpool_qual_l4_pkt_mask,  /* QUAL_L4_PKT_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_L4_PKT.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_ttl,  /* QUAL_INNER_TTL */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Inner Packet TTL.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_ttl_mask,  /* QUAL_INNER_TTL_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_TTL.",
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
        .name  = bcmltd_strpool_qual_tcp_control_flags,  /* QUAL_TCP_CONTROL_FLAGS */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for TCP control flags.",
    },
    {
        .name  = bcmltd_strpool_qual_tcp_control_flags_mask,  /* QUAL_TCP_CONTROL_FLAGS_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_TCP_CONTROL_FLAGS.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_ip_flags_mf,  /* QUAL_INNER_IP_FLAGS_MF */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for Flags in Inner IP Header - More Fragment.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_ip_flags_mf_mask,  /* QUAL_INNER_IP_FLAGS_MF_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_IP_FLAGS_MF.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_ip_flags_df,  /* QUAL_INNER_IP_FLAGS_DF */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for Flags in Inner IP Header - Dont Fragment.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_ip_flags_df_mask,  /* QUAL_INNER_IP_FLAGS_DF_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_IP_FLAGS_DF.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_flags_mf,  /* QUAL_IP_FLAGS_MF */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for Flags in IP Header - More Fragment.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_flags_mf_mask,  /* QUAL_IP_FLAGS_MF_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_IP_FLAGS_MF.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_flags_df,  /* QUAL_IP_FLAGS_DF */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier for Flags in IP Header - Dont Fragment.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_flags_df_mask,  /* QUAL_IP_FLAGS_DF_MASK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_IP_FLAGS_DF.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_tos,  /* QUAL_INNER_TOS */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Inner Packet TOS.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_tos_mask,  /* QUAL_INNER_TOS_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_TOS.",
    },
    {
        .name  = bcmltd_strpool_qual_tos,  /* QUAL_TOS */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Packet TOS.",
    },
    {
        .name  = bcmltd_strpool_qual_tos_mask,  /* QUAL_TOS_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_TOS.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_l4dst_port,  /* QUAL_INNER_L4DST_PORT */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier for Inner L4 Header Destination Port.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_l4dst_port_mask,  /* QUAL_INNER_L4DST_PORT_MASK */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_L4DST_PORT.",
    },
    {
        .name  = bcmltd_strpool_qual_l4dst_port,  /* QUAL_L4DST_PORT */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier for L4 Header Destination Port.",
    },
    {
        .name  = bcmltd_strpool_qual_l4dst_port_mask,  /* QUAL_L4DST_PORT_MASK */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_L4DST_PORT.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_l4src_port,  /* QUAL_INNER_L4SRC_PORT */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier for Inner L4 Header Source Port.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_l4src_port_mask,  /* QUAL_INNER_L4SRC_PORT_MASK */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_L4SRC_PORT.",
    },
    {
        .name  = bcmltd_strpool_qual_l4src_port,  /* QUAL_L4SRC_PORT */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier for L4 Header Source Port.",
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
        .name  = bcmltd_strpool_qual_inner_ip_protocol,  /* QUAL_INNER_IP_PROTOCOL */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for IP Protocol Field.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_ip_protocol_mask,  /* QUAL_INNER_IP_PROTOCOL_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_IP_PROTOCOL.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_protocol,  /* QUAL_IP_PROTOCOL */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for IP protocol.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_protocol_mask,  /* QUAL_IP_PROTOCOL_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_IP_PROTOCOL.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_dst_ip4,  /* QUAL_INNER_DST_IP4 */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for Inner Destination IPv4 address.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_dst_ip4_mask,  /* QUAL_INNER_DST_IP4_MASK */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_DST_IP4.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip4,  /* QUAL_DST_IP4 */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for Destination IPv4 address.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip4_mask,  /* QUAL_DST_IP4_MASK */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_DST_IP4.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_src_ip4,  /* QUAL_INNER_SRC_IP4 */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for Inner Source IPv4 address.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_src_ip4_mask,  /* QUAL_INNER_SRC_IP4_MASK */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_SRC_IP4.",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip4,  /* QUAL_SRC_IP4 */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for Source IPv4 address.",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip4_mask,  /* QUAL_SRC_IP4_MASK */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_SRC_IP4.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_src_ip6_upper,  /* QUAL_INNER_SRC_IP6_UPPER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for Inner IP header source IPv6 address.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_src_ip6_lower,  /* QUAL_INNER_SRC_IP6_LOWER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for Inner IP header source IPv6 address.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_src_ip6_mask_upper,  /* QUAL_INNER_SRC_IP6_MASK_UPPER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_SRC_IP6.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_src_ip6_mask_lower,  /* QUAL_INNER_SRC_IP6_MASK_LOWER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_SRC_IP6.",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip6_upper,  /* QUAL_SRC_IP6_UPPER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for Source IPv6 Address.",
    },
    {
        .name  = bcmltd_strpool_qual_src_ip6_lower,  /* QUAL_SRC_IP6_LOWER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for Source IPv6 Address.",
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
        .name  = bcmltd_strpool_qual_inner_dst_ip6_upper,  /* QUAL_INNER_DST_IP6_UPPER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for Inner IP header destination IPv6 address.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_dst_ip6_lower,  /* QUAL_INNER_DST_IP6_LOWER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for Inner IP header destination IPv6 address.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_dst_ip6_mask_upper,  /* QUAL_INNER_DST_IP6_MASK_UPPER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_DST_IP6.",
    },
    {
        .name  = bcmltd_strpool_qual_inner_dst_ip6_mask_lower,  /* QUAL_INNER_DST_IP6_MASK_LOWER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_DST_IP6.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip6_upper,  /* QUAL_DST_IP6_UPPER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for Destination IPV6 Address.",
    },
    {
        .name  = bcmltd_strpool_qual_dst_ip6_lower,  /* QUAL_DST_IP6_LOWER */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for Destination IPV6 Address.",
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
        .name  = bcmltd_strpool_qual_inner_src_ip6_high,  /* QUAL_INNER_SRC_IP6_HIGH */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for Inner IP header Source IPv6 Address\n (High\n",
    },
    {
        .name  = bcmltd_strpool_qual_inner_src_ip6_high_mask,  /* QUAL_INNER_SRC_IP6_HIGH_MASK */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_SRC_IP6_HIGH.",
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
        .name  = bcmltd_strpool_qual_inner_dst_ip6_high,  /* QUAL_INNER_DST_IP6_HIGH */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier for Inner IP header Destination IPv6 Address\n (High\n",
    },
    {
        .name  = bcmltd_strpool_qual_inner_dst_ip6_high_mask,  /* QUAL_INNER_DST_IP6_HIGH_MASK */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_INNER_DST_IP6_HIGH.",
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
        .name  = bcmltd_strpool_qual_vntag,  /* QUAL_VNTAG */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for NIV VN tag (Network Interface Virtualization virtual\n network tag).\n",
    },
    {
        .name  = bcmltd_strpool_qual_vntag_mask,  /* QUAL_VNTAG_MASK */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_VNTAG.",
    },
    {
        .name  = bcmltd_strpool_qual_snap_header,  /* QUAL_SNAP_HEADER */
        .flags = 0,
        .width = 40,
        .depth = 0,
        .desc = "Qualifier for Sub-Network Attachment Point header (SNAP header).",
    },
    {
        .name  = bcmltd_strpool_qual_snap_header_mask,  /* QUAL_SNAP_HEADER_MASK */
        .flags = 0,
        .width = 40,
        .depth = 0,
        .desc = "Qualifier for Sub-Network Attachment Point header (SNAP header).",
    },
    {
        .name  = bcmltd_strpool_qual_llc_header,  /* QUAL_LLC_HEADER */
        .flags = 0,
        .width = 24,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_SNAP_HEADER.",
    },
    {
        .name  = bcmltd_strpool_qual_llc_header_mask,  /* QUAL_LLC_HEADER_MASK */
        .flags = 0,
        .width = 24,
        .depth = 0,
        .desc = "Qualifier Mask of LLC_HEADER.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_inner_header_type,  /* QUAL_FIBRE_INNER_HEADER_TYPE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for Fibre channel Inner Header Type.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_outer_header_type,  /* QUAL_FIBRE_OUTER_HEADER_TYPE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for Fibre channel Outer Header Type.",
    },
    {
        .name  = bcmltd_strpool_qual_fcoe_sof,  /* QUAL_FCOE_SOF */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for FCoE Start of Frame.",
    },
    {
        .name  = bcmltd_strpool_qual_fcoe_sof_mask,  /* QUAL_FCOE_SOF_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_FCOE_SOF.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_data_field_ctrl,  /* QUAL_FIBRE_DATA_FIELD_CTRL */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for  Fibre Channel's Data Field Control flags.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_data_field_ctrl_mask,  /* QUAL_FIBRE_DATA_FIELD_CTRL_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_FIBRE_DATA_FIELD_CTRL.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_class_spec_ctrl,  /* QUAL_FIBRE_CLASS_SPEC_CTRL */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Fibre Channel's Class Specified Control flags.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_class_spec_ctrl_mask,  /* QUAL_FIBRE_CLASS_SPEC_CTRL_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_FIBRE_CLASS_SPEC_CTRL.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_frame_ctrl,  /* QUAL_FIBRE_FRAME_CTRL */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for Fibre Channel's Frame Control flags.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_frame_ctrl_mask,  /* QUAL_FIBRE_FRAME_CTRL_MASK */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_FIBRE_FRAME_CTRL.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_type,  /* QUAL_FIBRE_TYPE */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Fibre Channel's type.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_type_mask,  /* QUAL_FIBRE_TYPE_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_FIBRE_TYPE.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_dst_id,  /* QUAL_FIBRE_DST_ID */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for Fibre Channel's Destination ID",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_dst_id_mask,  /* QUAL_FIBRE_DST_ID_MASK */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_FIBRE_DST_ID.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_src_id,  /* QUAL_FIBRE_SRC_ID */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier for Fibre Channel's Source ID.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_src_id_mask,  /* QUAL_FIBRE_SRC_ID_MASK */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_FIBRE_SRC_ID.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_routing_ctrl,  /* QUAL_FIBRE_ROUTING_CTRL */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Fibre Channel's Routing Control flags.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_routing_ctrl_mask,  /* QUAL_FIBRE_ROUTING_CTRL_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_FIBRE_ROUTING_CTRL.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_first_eh_subcode,  /* QUAL_IP_FIRST_EH_SUBCODE */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for First byte after the extension header length field.",
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
        .desc = "Qualifier for Next header field in first header extension header.",
    },
    {
        .name  = bcmltd_strpool_qual_ip_first_eh_proto_mask,  /* QUAL_IP_FIRST_EH_PROTO_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_IP_FIRST_EH_PROTO.",
    },
    {
        .name  = bcmltd_strpool_qual_l3_intf_class,  /* QUAL_L3_INTF_CLASS */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier for L3 interface Class ID.",
    },
    {
        .name  = bcmltd_strpool_qual_l3_intf_class_mask,  /* QUAL_L3_INTF_CLASS_MASK */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_L3_INTF_CLASS.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_vft_hop_count,  /* QUAL_FIBRE_VFT_HOP_COUNT */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Fibre Channel's VFT Hop Count.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_vft_hop_count_mask,  /* QUAL_FIBRE_VFT_HOP_COUNT_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_FIBRE_VFT_HOP_COUNT.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_vft_vsan_id,  /* QUAL_FIBRE_VFT_VSAN_ID */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier for Fibre Channel's VFT Internal VSAN ID.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_vft_vsan_id_mask,  /* QUAL_FIBRE_VFT_VSAN_ID_MASK */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_FIBRE_VFT_VSAN_ID.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_vft_vsan_pri,  /* QUAL_FIBRE_VFT_VSAN_PRI */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Fibre Channel's VFT VSAN(virtual storage area network)\n Priority.\n",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_vft_vsan_pri_mask,  /* QUAL_FIBRE_VFT_VSAN_PRI_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_FIBRE_VFT_VSAN_PRI.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_vft_version,  /* QUAL_FIBRE_VFT_VERSION */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier for Fibre Channel's VFT(Virtual Fabric Tagging) version.",
    },
    {
        .name  = bcmltd_strpool_qual_fibre_vft_version_mask,  /* QUAL_FIBRE_VFT_VERSION_MASK */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Qualifier Mask of QUAL_FIBRE_VFT_VERSION.",
    },
    {
        .name  = bcmltd_strpool_qual_udf_chunks,  /* QUAL_UDF_CHUNKS */
        .flags = 0,
        .width = 16,
        .depth = 16,
        .desc = "Qualifier for UDF chunks.",
    },
    {
        .name  = bcmltd_strpool_qual_udf_chunks_mask,  /* QUAL_UDF_CHUNKS_MASK */
        .flags = 0,
        .width = 16,
        .depth = 16,
        .desc = "Qualifier Mask for QUAL_UDF_CHUNKS.",
    },
};
const bcmltd_table_rep_t bcmltd_fp_vlan_rule_template_t = {
    .name = bcmltd_strpool_fp_vlan_rule_template, /* FP_VLAN_RULE_TEMPLATE */
    .flags = 0,
    .fields = 156,
    .field = bcmltd_fp_vlan_rule_template_t_fields,
    .desc = "The FP_VLAN_RULE_TEMPLATE Logical Table create Rules in the Vlan\n FP Group.\n",
};
