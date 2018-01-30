/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by c-struct-gen from PTRM data files.
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
/* This structure needs to be defined somewhere */
typedef struct ptrm_table_s {
  bcmltd_sid_t sid;
  const lt_mreq_info_t *handler;
} ptrm_table_t;

static const ptrm_table_t ptrm_table[62];

static const ptrm_table_t ptrm_table[62] = {
    {
        .handler = &th_a0_l3_ipv4_uc_host_lt_mreq_info,
        .sid = L3_IPV4_UC_HOSTt,
    },
    {
        .handler = &th_a0_l3_ipv6_uc_host_lt_mreq_info,
        .sid = L3_IPV6_UC_HOSTt,
    },
    {
        .handler = &th_a0_vlan_assignment_mac_lt_mreq_info,
        .sid = VLAN_ASSIGNMENT_MACt,
    },
    {
        .handler = &th_a0_vlan_assignment_mac_modport_lt_mreq_info,
        .sid = VLAN_ASSIGNMENT_MAC_MODPORTt,
    },
    {
        .handler = &th_a0_vlan_assignment_mac_port_grp_lt_mreq_info,
        .sid = VLAN_ASSIGNMENT_MAC_PORT_GRPt,
    },
    {
        .handler = &th_a0_vlan_assignment_mac_trunk_lt_mreq_info,
        .sid = VLAN_ASSIGNMENT_MAC_TRUNKt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_ivid_ovid_lt_mreq_info,
        .sid = VLAN_ING_XLATE_IVID_OVIDt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_ivid_ovid_modport_lt_mreq_info,
        .sid = VLAN_ING_XLATE_IVID_OVID_MODPORTt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_ivid_ovid_port_grp_lt_mreq_info,
        .sid = VLAN_ING_XLATE_IVID_OVID_PORT_GRPt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_ivid_ovid_trunk_lt_mreq_info,
        .sid = VLAN_ING_XLATE_IVID_OVID_TRUNKt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_otag_lt_mreq_info,
        .sid = VLAN_ING_XLATE_OTAGt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_otag_modport_lt_mreq_info,
        .sid = VLAN_ING_XLATE_OTAG_MODPORTt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_otag_port_grp_lt_mreq_info,
        .sid = VLAN_ING_XLATE_OTAG_PORT_GRPt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_otag_trunk_lt_mreq_info,
        .sid = VLAN_ING_XLATE_OTAG_TRUNKt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_itag_lt_mreq_info,
        .sid = VLAN_ING_XLATE_ITAGt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_itag_modport_lt_mreq_info,
        .sid = VLAN_ING_XLATE_ITAG_MODPORTt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_itag_port_grp_lt_mreq_info,
        .sid = VLAN_ING_XLATE_ITAG_PORT_GRPt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_itag_trunk_lt_mreq_info,
        .sid = VLAN_ING_XLATE_ITAG_TRUNKt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_ovid_lt_mreq_info,
        .sid = VLAN_ING_XLATE_OVIDt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_ovid_modport_lt_mreq_info,
        .sid = VLAN_ING_XLATE_OVID_MODPORTt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_ovid_port_grp_lt_mreq_info,
        .sid = VLAN_ING_XLATE_OVID_PORT_GRPt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_ovid_trunk_lt_mreq_info,
        .sid = VLAN_ING_XLATE_OVID_TRUNKt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_ivid_lt_mreq_info,
        .sid = VLAN_ING_XLATE_IVIDt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_ivid_modport_lt_mreq_info,
        .sid = VLAN_ING_XLATE_IVID_MODPORTt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_ivid_port_grp_lt_mreq_info,
        .sid = VLAN_ING_XLATE_IVID_PORT_GRPt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_ivid_trunk_lt_mreq_info,
        .sid = VLAN_ING_XLATE_IVID_TRUNKt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_cfi_pri_lt_mreq_info,
        .sid = VLAN_ING_XLATE_CFI_PRIt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_cfi_pri_modport_lt_mreq_info,
        .sid = VLAN_ING_XLATE_CFI_PRI_MODPORTt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_cfi_pri_port_grp_lt_mreq_info,
        .sid = VLAN_ING_XLATE_CFI_PRI_PORT_GRPt,
    },
    {
        .handler = &th_a0_vlan_ing_xlate_cfi_pri_trunk_lt_mreq_info,
        .sid = VLAN_ING_XLATE_CFI_PRI_TRUNKt,
    },
    {
        .handler = &th_a0_vlan_egr_xlate_modport_lt_mreq_info,
        .sid = VLAN_EGR_XLATE_MODPORTt,
    },
    {
        .handler = &th_a0_vlan_egr_xlate_port_grp_lt_mreq_info,
        .sid = VLAN_EGR_XLATE_PORT_GRPt,
    },
    {
        .handler = &th_a0_fp_em_entry_lt_mreq_info,
        .sid = FP_EM_ENTRYt,
    },
    {
        .handler = &th_a0_tnl_mpls_decap_lt_mreq_info,
        .sid = TNL_MPLS_DECAPt,
    },
    {
        .handler = &th_a0_tnl_mpls_decap_trunk_lt_mreq_info,
        .sid = TNL_MPLS_DECAP_TRUNKt,
    },
    {
        .handler = &th_a0_l2_fdb_vlan_lt_mreq_info,
        .sid = L2_FDB_VLANt,
    },
    {
        .handler = &th_a0_l2_my_station_tcam_lt_mreq_info,
        .sid = L2_MY_STATIONt,
    },
    {
        .handler = &th_a0_l2_my_station_tcam_lt_mreq_info,
        .sid = L2_MY_STATION_MODPORTt,
    },
    {
        .handler = &th_a0_l2_my_station_tcam_lt_mreq_info,
        .sid = L2_MY_STATION_TRUNKt,
    },
    {
        .handler = &th_a0_udf_lt_mreq_info,
        .sid = UDFt,
    },
    {
        .handler = &th_a0_udf_flex_hash_lt_mreq_info,
        .sid = UDF_FLEX_HASH_COND_CHECKt,
    },
    {
        .handler = &th_a0_l2_user_entry_lt_mreq_info,
        .sid = L2_FDB_VLAN_STATICt,
    },
    {
        .handler = &th_a0_vlan_subnet_tcam_lt_mreq_info,
        .sid = VLAN_ASSIGNMENT_IPV4t,
    },
    {
        .handler = &th_a0_fp_compression_src_lt_mreq_info,
        .sid = FP_COMPRESSION_SRC_IPV4t,
    },
    {
        .handler = &th_a0_fp_compression_src_lt_mreq_info,
        .sid = FP_COMPRESSION_SRC_IPV6t,
    },
    {
        .handler = &th_a0_fp_compression_src_lt_mreq_info,
        .sid = FP_COMPRESSION_SRC_FCOEt,
    },
    {
        .handler = &th_a0_fp_compression_dst_lt_mreq_info,
        .sid = FP_COMPRESSION_DST_IPV4t,
    },
    {
        .handler = &th_a0_fp_compression_dst_lt_mreq_info,
        .sid = FP_COMPRESSION_DST_IPV6t,
    },
    {
        .handler = &th_a0_fp_compression_dst_lt_mreq_info,
        .sid = FP_COMPRESSION_DST_FCOEt,
    },
    {
        .handler = &th_a0_tnl_ipv4_decap_lt_mreq_info,
        .sid = TNL_IPV4_DECAPt,
    },
    {
        .handler = &th_a0_tnl_ipv6_decap_lt_mreq_info,
        .sid = TNL_IPV6_DECAPt,
    },
    {
        .handler = &th_a0_l3_ipv4_uc_route_lt_mreq_info,
        .sid = L3_IPV4_UC_ROUTEt,
    },
    {
        .handler = &th_a0_l3_ipv4_uc_route_vrf_lt_mreq_info,
        .sid = L3_IPV4_UC_ROUTE_VRFt,
    },
    {
        .handler = &th_a0_l3_ipv4_uc_route_override_lt_mreq_info,
        .sid = L3_IPV4_UC_ROUTE_OVERRIDEt,
    },
    {
        .handler = &th_a0_l3_ipv6_uc_route_lt_mreq_info,
        .sid = L3_IPV6_UC_ROUTEt,
    },
    {
        .handler = &th_a0_l3_ipv6_uc_route_vrf_lt_mreq_info,
        .sid = L3_IPV6_UC_ROUTE_VRFt,
    },
    {
        .handler = &th_a0_l3_ipv6_uc_route_override_lt_mreq_info,
        .sid = L3_IPV6_UC_ROUTE_OVERRIDEt,
    },
    {
        .handler = &th_a0_fp_ing_entry_lt_mreq_info,
        .sid = FP_ING_ENTRYt,
    },
    {
        .handler = &th_a0_fp_ing_presel_entry_lt_mreq_info,
        .sid = FP_ING_PRESEL_ENTRY_TEMPLATEt,
    },
    {
        .handler = &th_a0_fp_vlan_entry_lt_mreq_info,
        .sid = FP_VLAN_ENTRYt,
    },
    {
        .handler = &th_a0_fp_egr_entry_lt_mreq_info,
        .sid = FP_EGR_ENTRYt,
    },
    {
        .handler = &th_a0_fp_em_presel_entry_lt_mreq_info,
        .sid = FP_EM_PRESEL_ENTRY_TEMPLATEt,
    },
};

