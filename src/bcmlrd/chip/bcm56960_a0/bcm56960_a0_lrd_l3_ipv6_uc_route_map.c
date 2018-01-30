/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/l3/bcm56960_a0/bcm56960_a0_L3_IPV6_UC_ROUTE.map.ltl for
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
/* L3_IPV6_UC_ROUTE field init */
static const bcmlrd_field_data_t bcm56960_a0_lrd_l3_ipv6_uc_route_map_field_data_mmd[] = {
    { /* 0 IPV6_UPPER */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56960_a0_lrd_ifd_u64_0x0,
      .def = &bcm56960_a0_lrd_ifd_u64_0x0,
      .max = &bcm56960_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 1 IPV6_UPPER_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56960_a0_lrd_ifd_u64_0x0,
      .def = &bcm56960_a0_lrd_ifd_u64_0x0,
      .max = &bcm56960_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 2 IPV6_LOWER */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56960_a0_lrd_ifd_u64_0x0,
      .def = &bcm56960_a0_lrd_ifd_u64_0x0,
      .max = &bcm56960_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 3 IPV6_LOWER_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56960_a0_lrd_ifd_u64_0x0,
      .def = &bcm56960_a0_lrd_ifd_u64_0x0,
      .max = &bcm56960_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 4 ECMP_NHOP */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 5 ECMP_ID */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0x7ff,
      .depth = 0,
      .width = 11,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 6 NHOP_ID */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0x7fff,
      .depth = 0,
      .width = 15,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 7 REPLACE_INT_PRI */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 8 INT_PRI */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u8_0x0,
      .def = &bcm56960_a0_lrd_ifd_u8_0x0,
      .max = &bcm56960_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 9 DROP_ON_DIP_MATCH */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 10 CLASS_ID */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0x3f,
      .depth = 0,
      .width = 6,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 11 FLEX_CTR_GRP_ID */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u32_0x0,
      .def = &bcm56960_a0_lrd_ifd_u32_0x0,
      .max = &bcm56960_a0_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 12 HIT */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56960_a0_lrd_l3_ipv6_uc_route_map_field_data = {
    .fields = 13,
    .field = bcm56960_a0_lrd_l3_ipv6_uc_route_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56960_a0_lrd_l3_ipv6_uc_routet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 4096,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TCAM_ORDERING,
        .value = LPM,
    },
};

static const bcmlrd_map_attr_t bcm56960_a0_lrd_l3_ipv6_uc_routet_attr_group = {
    .attributes = 3,
    .attr = bcm56960_a0_lrd_l3_ipv6_uc_routet_attr_entry,
};

static const bcmlrd_map_entry_t bcm56960_a0_lrd_l3_ipv6_uc_routet_l3_defip_pair_128_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = VRF_ID_0_LWRf,
            .field_idx = 0,
            .minbit    = 39,
            .maxbit    = 49,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = VRF_ID_MASK0_LWRf,
            .field_idx = 0,
            .minbit    = 231,
            .maxbit    = 241,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = ENTRY_TYPE0_UPRf,
            .field_idx = 0,
            .minbit    = 102,
            .maxbit    = 102,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = ENTRY_TYPE0_LWRf,
            .field_idx = 0,
            .minbit    = 6,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = ENTRY_TYPE1_UPRf,
            .field_idx = 0,
            .minbit    = 150,
            .maxbit    = 150,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = ENTRY_TYPE1_LWRf,
            .field_idx = 0,
            .minbit    = 54,
            .maxbit    = 54,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = ENTRY_TYPE_MASK0_LWRf,
            .field_idx = 0,
            .minbit    = 198,
            .maxbit    = 198,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = ENTRY_TYPE_MASK0_UPRf,
            .field_idx = 0,
            .minbit    = 294,
            .maxbit    = 294,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = ENTRY_TYPE_MASK1_LWRf,
            .field_idx = 0,
            .minbit    = 246,
            .maxbit    = 246,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = ENTRY_TYPE_MASK1_UPRf,
            .field_idx = 0,
            .minbit    = 342,
            .maxbit    = 342,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = RPEf,
            .field_idx = 0,
            .minbit    = 409,
            .maxbit    = 409,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_IPV6_UC_ROUTEt_REPLACE_INT_PRIf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = PRIf,
            .field_idx = 0,
            .minbit    = 405,
            .maxbit    = 408,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_IPV6_UC_ROUTEt_INT_PRIf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DST_DISCARDf,
            .field_idx = 0,
            .minbit    = 410,
            .maxbit    = 410,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_IPV6_UC_ROUTEt_DROP_ON_DIP_MATCHf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CLASS_IDf,
            .field_idx = 0,
            .minbit    = 411,
            .maxbit    = 416,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_IPV6_UC_ROUTEt_CLASS_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = GLOBAL_ROUTEf,
            .field_idx = 0,
            .minbit    = 417,
            .maxbit    = 417,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 15 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = GLOBAL_HIGHf,
            .field_idx = 0,
            .minbit    = 455,
            .maxbit    = 455,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 16 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = FLEX_CTR_POOL_NUMBERf,
            .field_idx = 0,
            .minbit    = 418,
            .maxbit    = 421,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_IPV6_UC_ROUTEt_FLEX_CTR_GRP_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 17 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = HITf,
            .field_idx = 0,
            .minbit    = 473,
            .maxbit    = 473,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_IPV6_UC_ROUTEt_HITf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 18 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = VALIDS_UPRf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 19 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = VALIDS_LWRf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 20 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56960_a0_lta_bcmltx_l3uc_ecmp_or_nhop_fwd_handler_s5_d3 */
            .handler_id = BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_FWD_S5_D3_ID
        }
    },
    { /* 21 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56960_a0_lta_bcmltx_l3uc_ecmp_or_nhop_rev_handler_s5_d3 */
            .handler_id = BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_L3UC_ECMP_OR_NHOP_XFRM_HANDLER_REV_S5_D3_ID
        }
    },
    { /* 22 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56960_a0_lta_bcmltx_field_demux_l3_ipv6_uc_routet_0_fwd_handler_s0_d0 */
            .handler_id = BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_0_XFRM_HANDLER_FWD_S0_D0_ID
        }
    },
    { /* 23 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56960_a0_lta_bcmltx_field_demux_l3_ipv6_uc_routet_0_rev_handler_s0_d0 */
            .handler_id = BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_0_XFRM_HANDLER_REV_S0_D0_ID
        }
    },
    { /* 24 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56960_a0_lta_bcmltx_field_demux_l3_ipv6_uc_routet_1_fwd_handler_s0_d0 */
            .handler_id = BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_1_XFRM_HANDLER_FWD_S0_D0_ID
        }
    },
    { /* 25 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56960_a0_lta_bcmltx_field_demux_l3_ipv6_uc_routet_1_rev_handler_s0_d0 */
            .handler_id = BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_1_XFRM_HANDLER_REV_S0_D0_ID
        }
    },
    { /* 26 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56960_a0_lta_bcmltx_field_demux_l3_ipv6_uc_routet_2_fwd_handler_s0_d0 */
            .handler_id = BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_2_XFRM_HANDLER_FWD_S0_D0_ID
        }
    },
    { /* 27 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56960_a0_lta_bcmltx_field_demux_l3_ipv6_uc_routet_2_rev_handler_s0_d0 */
            .handler_id = BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_2_XFRM_HANDLER_REV_S0_D0_ID
        }
    },
    { /* 28 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56960_a0_lta_bcmltx_field_demux_l3_ipv6_uc_routet_3_fwd_handler_s0_d0 */
            .handler_id = BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_3_XFRM_HANDLER_FWD_S0_D0_ID
        }
    },
    { /* 29 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56960_a0_lta_bcmltx_field_demux_l3_ipv6_uc_routet_3_rev_handler_s0_d0 */
            .handler_id = BCMLTD_TRANSFORM_BCM56960_A0_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_UC_ROUTET_3_XFRM_HANDLER_REV_S0_D0_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56960_a0_lrd_l3_ipv6_uc_route_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = L3_DEFIP_PAIR_128m,
        },
        .entries = 30,
        .entry = bcm56960_a0_lrd_l3_ipv6_uc_routet_l3_defip_pair_128_map_entry
    },
};
const bcmlrd_map_t bcm56960_a0_lrd_l3_ipv6_uc_route_map = {
    .src_id = L3_IPV6_UC_ROUTEt,
    .field_data = &bcm56960_a0_lrd_l3_ipv6_uc_route_map_field_data,
    .groups = 1,
    .group  = bcm56960_a0_lrd_l3_ipv6_uc_route_map_group,
    .table_attr = &bcm56960_a0_lrd_l3_ipv6_uc_routet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
