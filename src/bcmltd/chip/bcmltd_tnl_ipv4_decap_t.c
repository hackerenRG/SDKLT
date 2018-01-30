/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from INTERNAL/fltg/xgs/tnl/TNL_IPV4_DECAP.tbl.ltl
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
static const bcmltd_field_rep_t bcmltd_tnl_ipv4_decap_t_fields[] = {
    {
        .name  = bcmltd_strpool_src_ipv4,  /* SRC_IPV4 */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 32,
        .depth = 0,
        .desc = "Source IP address of the tunnel.",
    },
    {
        .name  = bcmltd_strpool_src_ipv4_mask,  /* SRC_IPV4_MASK */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 32,
        .depth = 0,
        .desc = "Source IP address mask of the tunnel.",
    },
    {
        .name  = bcmltd_strpool_dst_ipv4,  /* DST_IPV4 */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 32,
        .depth = 0,
        .desc = "Destination IP address of the tunnel.",
    },
    {
        .name  = bcmltd_strpool_dst_ipv4_mask,  /* DST_IPV4_MASK */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 32,
        .depth = 0,
        .desc = "Destination IP address mask of the tunnel.",
    },
    {
        .name  = bcmltd_strpool_ip_protocol,  /* IP_PROTOCOL */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 8,
        .depth = 0,
        .desc = "IP protocol used in data portion of the tunnel.",
    },
    {
        .name  = bcmltd_strpool_ip_protocol_mask,  /* IP_PROTOCOL_MASK */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 8,
        .depth = 0,
        .desc = "IP protocol mask used in data portion of the tunnel.",
    },
    {
        .name  = bcmltd_strpool_src_l4_port,  /* SRC_L4_PORT */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 16,
        .depth = 0,
        .desc = "Layer 4 source port.",
    },
    {
        .name  = bcmltd_strpool_src_l4_port_mask,  /* SRC_L4_PORT_MASK */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 16,
        .depth = 0,
        .desc = "Layer 4 source port mask.",
    },
    {
        .name  = bcmltd_strpool_dst_l4_port,  /* DST_L4_PORT */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 16,
        .depth = 0,
        .desc = "Layer 4 destination port.",
    },
    {
        .name  = bcmltd_strpool_dst_l4_port_mask,  /* DST_L4_PORT_MASK */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 16,
        .depth = 0,
        .desc = "Layer 4 destination port mask.",
    },
    {
        .name  = bcmltd_strpool_ipv6_gre_payload,  /* IPV6_GRE_PAYLOAD */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to allow IPv6 GRE payload.",
    },
    {
        .name  = bcmltd_strpool_ipv4_gre_payload,  /* IPV4_GRE_PAYLOAD */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to allow IPv4 GRE payload.",
    },
    {
        .name  = bcmltd_strpool_ipv6_payload,  /* IPV6_PAYLOAD */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to allow IPv6 payload.",
    },
    {
        .name  = bcmltd_strpool_ipv4_payload,  /* IPV4_PAYLOAD */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to allow IPv4 payload.",
    },
    {
        .name  = bcmltd_strpool_type,  /* TYPE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Specifies L3 tunnel type.",
    },
    {
        .name  = bcmltd_strpool_mode,  /* MODE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Specifies whether the tunnel is an auto or configured one.",
    },
    {
        .name  = bcmltd_strpool_udp_type,  /* UDP_TYPE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Specifies UDP tunnel type. Applicable if tunneled protocol is UDP.",
    },
    {
        .name  = bcmltd_strpool_tnl_hdr_dscp_for_phb,  /* TNL_HDR_DSCP_FOR_PHB */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to use outer header's DSCP value for PHB.",
    },
    {
        .name  = bcmltd_strpool_use_tnl_hdr_ttl,  /* USE_TNL_HDR_TTL */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to use outer header's TTL value.",
    },
    {
        .name  = bcmltd_strpool_keep_payload_dscp,  /* KEEP_PAYLOAD_DSCP */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to preserve the inner header's DSCP value.",
    },
    {
        .name  = bcmltd_strpool_l3_iif_id,  /* L3_IIF_ID */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "L3_IIF logical table index.",
    },
    {
        .name  = bcmltd_strpool_class_id,  /* CLASS_ID */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Tunnel class ID based on a tunnel termination hit.",
    },
    {
        .name  = bcmltd_strpool_ignore_udp_checksum,  /* IGNORE_UDP_CHECKSUM */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to ignore the UDP checksum for tunneled UDP packets.",
    },
    {
        .name  = bcmltd_strpool_ctrl_pkts_to_cpu,  /* CTRL_PKTS_TO_CPU */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to copy control packets to the CPU.",
    },
    {
        .name  = bcmltd_strpool_bfd,  /* BFD */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to detect BFD packets.",
    },
    {
        .name  = bcmltd_strpool_decap_ports,  /* DECAP_PORTS */
        .flags = 0,
        .width = 256,
        .depth = 0,
        .desc = "Bitmap of all ports that are allowed end points for this tunnel.",
    },
    {
        .name  = bcmltd_strpool_tnl_decap_port_profile_id,  /* TNL_DECAP_PORT_PROFILE_ID */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "TNL_DECAP_PORT_PROFILE logical table index.",
    },
};
const bcmltd_table_rep_t bcmltd_tnl_ipv4_decap_t = {
    .name = bcmltd_strpool_tnl_ipv4_decap, /* TNL_IPV4_DECAP */
    .flags = BCMLTD_TABLE_F_TYPE_MAPPED,
    .fields = 27,
    .field = bcmltd_tnl_ipv4_decap_t_fields,
    .desc = "\n The TNL_IPV4_DECAP table is used to specify IPv4 tunnel termination\n parameters.\n\n",
};
