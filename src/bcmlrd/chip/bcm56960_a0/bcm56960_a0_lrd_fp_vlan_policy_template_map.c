/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/fp/bcm56960_a0/bcm56960_a0_FP_VLAN_POLICY_TEMPLATE.map.ltl for
 *      bcm56960_a0
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
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56960_a0/bcm56960_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56960_a0/bcm56960_a0_lrd_ltm_intf.h>
#include <bcmdrd/chip/bcm56960_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56960_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* FP_VLAN_POLICY_TEMPLATE field init */
static const bcmlrd_field_data_t bcm56960_a0_lrd_fp_vlan_policy_template_map_field_data_mmd[] = {
    { /* 0 FP_VLAN_POLICY_TEMPLATE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56960_a0_lrd_ifd_u32_0x1,
      .def = &bcm56960_a0_lrd_ifd_u32_0x1,
      .max = &bcm56960_a0_lrd_ifd_u32_0x1000,
      .depth = 0,
      .width = 13,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 1 ACTION_DROP */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 2 ACTION_DROP_CANCEL */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 3 ACTION_COPY_TO_CPU */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 4 ACTION_COPY_TO_CPU_CANCEL */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 5 ACTION_NEW_OUTER_DOT1P */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u8_0x0,
      .def = &bcm56960_a0_lrd_ifd_u8_0x0,
      .max = &bcm56960_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 6 ACTION_ADD_INNER_TAG */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 7 ACTION_REPLACE_INNER_TAG */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 8 ACTION_DELETE_INNER_TAG */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 9 ACTION_ADD_OUTER_TAG */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 10 ACTION_REPLACE_OUTER_TAG */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 11 ACTION_SET_FWD_VLAN_TAG */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 12 ACTION_NEW_CPU_COS */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u8_0x0,
      .def = &bcm56960_a0_lrd_ifd_u8_0x0,
      .max = &bcm56960_a0_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 13 ACTION_NEW_INTPRI */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u8_0x0,
      .def = &bcm56960_a0_lrd_ifd_u8_0x0,
      .max = &bcm56960_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 14 ACTION_NEW_COLOR */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56960_a0_lrd_ifd_u32_0x0,
      .def = &bcm56960_a0_lrd_ifd_u32_0x0,
      .max = &bcm56960_a0_lrd_ifd_u32_0x3,
      .depth = 0,
      .width = 2,
      .num_sym = 3,
      .sym = bcm56960_a0_lrd_fp_vlan_action_color_t_enum,
    },
    { /* 15 ACTION_DO_NOT_LEARN */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 16 ACTION_DISABLE_VLAN_CHECK */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 17 ACTION_ENABLE_VLAN_CHECK */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 18 ACTION_DST_CLASS_ID_SET */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0x3ff,
      .depth = 0,
      .width = 10,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 19 ACTION_SRC_CLASS_ID_SET */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0x3ff,
      .depth = 0,
      .width = 10,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 20 ACTION_SVP_SET */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0x7fff,
      .depth = 0,
      .width = 15,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 21 ACTION_INNER_DOT1P_TO_OUTER_DOT1P */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 22 ACTION_NEW_INNER_DOT1P */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u8_0x0,
      .def = &bcm56960_a0_lrd_ifd_u8_0x0,
      .max = &bcm56960_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 23 ACTION_OUTER_DOT1P_TO_INNER_DOT1P */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 24 ACTION_VRF_SET */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0x7ff,
      .depth = 0,
      .width = 11,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 25 ACTION_NEW_OUTER_CFI */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 26 ACTION_OUTER_CFI_TO_INNER_CFI */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 27 ACTION_NEW_INNER_CFI */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 28 ACTION_INNER_CFI_TO_OUTER_CFI */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 29 ACTION_INNER_VLANID_TO_OUTER_VLANID */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 30 ACTION_OUTER_VLANID_TO_INNER_VLANID */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 31 ACTION_ARP_RARP_TERMINATION_ALLOWED */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 32 ACTION_IPV4_MC_TERMINATION_ALLOWED */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 33 ACTION_IPV4_TERMINATION_ALLOWED */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 34 ACTION_IPV6_MC_TERMINATION_ALLOWED */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 35 ACTION_IPV6_TERMINATION_ALLOWED */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 36 ACTION_MPLS_ENABLE */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 37 ACTION_RESET_MPLS_ENABLE */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 38 ACTION_MPLS_TERMINATION_ALLOWED */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 39 ACTION_RESET_MY_STATION_LOOKUP_RESULT */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .num_sym = 0,
      .sym = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56960_a0_lrd_fp_vlan_policy_template_map_field_data = {
    .fields = 40,
    .field = bcm56960_a0_lrd_fp_vlan_policy_template_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56960_a0_lrd_fp_vlan_policy_templatet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 4096,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 1,
    },
};

static const bcmlrd_map_attr_t bcm56960_a0_lrd_fp_vlan_policy_templatet_attr_group = {
    .attributes = 3,
    .attr = bcm56960_a0_lrd_fp_vlan_policy_templatet_attr_entry,
};

static const bcmlrd_map_entry_t bcm56960_a0_lrd_bcmimm_fp_vlan_policy_template_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56960_a0_lta_bcmimm_fp_vlan_policy_template_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56960_A0_LTA_BCMIMM_FP_VLAN_POLICY_TEMPLATE_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56960_a0_lrd_fp_vlan_policy_template_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56960_a0_lrd_bcmimm_fp_vlan_policy_template_entry
    },
};
const bcmlrd_map_t bcm56960_a0_lrd_fp_vlan_policy_template_map = {
    .src_id = FP_VLAN_POLICY_TEMPLATEt,
    .field_data = &bcm56960_a0_lrd_fp_vlan_policy_template_map_field_data,
    .groups = 1,
    .group  = bcm56960_a0_lrd_fp_vlan_policy_template_map_group,
    .table_attr = &bcm56960_a0_lrd_fp_vlan_policy_templatet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
