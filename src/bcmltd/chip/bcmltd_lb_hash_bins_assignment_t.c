/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from INTERNAL/fltg/xgs/lb_hash/LB_HASH_BINS_ASSIGNMENT.tbl.ltl
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
static const bcmltd_field_rep_t bcmltd_lb_hash_bins_assignment_t_fields[] = {
    {
        .name  = bcmltd_strpool_hash0_bin0,  /* HASH0_BIN0 */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Per-chip control that indicates whether hash bin 0 in\n field selection block 0\n ID or the source virtual interface from the VNTAG.\n",
    },
    {
        .name  = bcmltd_strpool_hash1_bin0,  /* HASH1_BIN0 */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash0_bin1,  /* HASH0_BIN1 */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Per-chip control that indicates whether hash bin 1 in\n field selection block 0\n ID or the destination virtual interface from the VNTAG.\n",
    },
    {
        .name  = bcmltd_strpool_hash1_bin1,  /* HASH1_BIN1 */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash0_bins0_1_ipv6_flow_label_en,  /* HASH0_BINS0_1_IPV6_FLOW_LABEL_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable IPv6 flow label hashing.",
    },
    {
        .name  = bcmltd_strpool_hash1_bins0_1_ipv6_flow_label_en,  /* HASH1_BINS0_1_IPV6_FLOW_LABEL_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash0_bin2_flex_en,  /* HASH0_BIN2_FLEX_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable flexible hashing scheme on 1st byte of hash key 0 or 1.",
    },
    {
        .name  = bcmltd_strpool_hash1_bin2_flex_en,  /* HASH1_BIN2_FLEX_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash0_bin3_flex_en,  /* HASH0_BIN3_FLEX_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable flexible hashing scheme on 2nd byte of hash key 0 or 1.",
    },
    {
        .name  = bcmltd_strpool_hash1_bin3_flex_en,  /* HASH1_BIN3_FLEX_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash0_bin2_udf_en,  /* HASH0_BIN2_UDF_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable driving UDF1.6 and UDF1.7 output vectors\n to hash bin 2 of hash key 0 or 1.\n",
    },
    {
        .name  = bcmltd_strpool_hash1_bin2_udf_en,  /* HASH1_BIN2_UDF_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash0_bin3_udf_en,  /* HASH0_BIN3_UDF_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable driving UDF2.6 and UDF2.7 output vectors\n to hash bin 3 of hash key 0 or 1.\n",
    },
    {
        .name  = bcmltd_strpool_hash1_bin3_udf_en,  /* HASH1_BIN3_UDF_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash0_bins5_6_gtp_en,  /* HASH0_BINS5_6_GTP_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable driving GTP tunnel endpoint identifier to hash bin 5 and 6\n on hash key 0 or 1.\n",
    },
    {
        .name  = bcmltd_strpool_hash1_bins5_6_gtp_en,  /* HASH1_BINS5_6_GTP_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash0_bins5_6_l2gre_key_en,  /* HASH0_BINS5_6_L2GRE_KEY_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to place GRE key extracted from the L2 GRE header in hash\n bins 5 and 6 of hash key 0 or 1.\n",
    },
    {
        .name  = bcmltd_strpool_hash1_bins5_6_l2gre_key_en,  /* HASH1_BINS5_6_L2GRE_KEY_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash0_bin5_6_l2gre_mask,  /* HASH0_BIN5_6_L2GRE_MASK */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Mask used for the GRE key in hash bin 5 and 6 of hash key 0 or 1.\n Applicable only if HASH0_BINS5_6_L2GRE_KEY_EN or\n HASH1_BINS5_6_L2GRE_KEY_EN is enabled.\n",
    },
    {
        .name  = bcmltd_strpool_hash1_bin5_6_l2gre_mask,  /* HASH1_BIN5_6_L2GRE_MASK */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash0_bin12_seed_overlay_en,  /* HASH0_BIN12_SEED_OVERLAY_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable overlay where the 224-bit input to CRC\n be\n {LB_HASH_SEED_CONTROL.HASH0\n",
    },
    {
        .name  = bcmltd_strpool_hash1_bin12_seed_overlay_en,  /* HASH1_BIN12_SEED_OVERLAY_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash0_all_bins_pre_processing_en,  /* HASH0_ALL_BINS_PRE_PROCESSING_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enables the pre-processing function\n to each of the hash bins in hash computation block 0 or 1.\n",
    },
    {
        .name  = bcmltd_strpool_hash1_all_bins_pre_processing_en,  /* HASH1_ALL_BINS_PRE_PROCESSING_EN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "",
    },
    {
        .name  = bcmltd_strpool_hash0_bin_flex_field_select,  /* HASH0_BIN_FLEX_FIELD_SELECT */
        .flags = 0,
        .width = 1,
        .depth = 11,
        .desc = "Enable to use flex fields 3 to 13 for flexible hash key 0 or 1:\n Flex fields 1 and 2 are mapped to bins 2 and 3 by\n LB_HASH_BINS_ASSIGNMENT.HASH0\n LB_HASH_BINS_ASSIGNMENT.HASH0\n When flex fields 3 to 13 are enabled, flex field 3 is mapped to\n bin 4, flex field 4 to bin 5 until wrap around, and\n flex field 13 is mapped to bin 1.\n",
    },
    {
        .name  = bcmltd_strpool_hash1_bin_flex_field_select,  /* HASH1_BIN_FLEX_FIELD_SELECT */
        .flags = 0,
        .width = 1,
        .depth = 11,
        .desc = "",
    },
};
const bcmltd_table_rep_t bcmltd_lb_hash_bins_assignment_t = {
    .name = bcmltd_strpool_lb_hash_bins_assignment, /* LB_HASH_BINS_ASSIGNMENT */
    .flags = 0,
    .fields = 26,
    .field = bcmltd_lb_hash_bins_assignment_t_fields,
    .desc = "The LB_HASH_BINS_ASSIGNMENT table specifies the hash bin assignment\n for various hash types.\n",
};
