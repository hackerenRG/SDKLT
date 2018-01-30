/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/vlan/bcm56960_a0/bcm56960_a0_VLAN_ING_XLATE_ITAG_TRUNK.map.ltl for
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
/* VLAN_ING_XLATE_ITAG_TRUNK field init */
static const bcmlrd_field_data_t bcm56960_a0_lrd_vlan_ing_xlate_itag_trunk_map_field_data_mmd[] = {
    { /* 0 ICFI */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 1 IPRI */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56960_a0_lrd_ifd_u8_0x0,
      .def = &bcm56960_a0_lrd_ifd_u8_0x0,
      .max = &bcm56960_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 2 IVID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 3 TRUNK_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0x3ff,
      .depth = 0,
      .width = 10,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 4 VLAN_ING_TAG_ACTION_PROFILE_ID */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u8_0x0,
      .def = &bcm56960_a0_lrd_ifd_u8_0x0,
      .max = &bcm56960_a0_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 5 VLAN_ACTION */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 6 NEW_OVID */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 7 NEW_OPRI */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u8_0x0,
      .def = &bcm56960_a0_lrd_ifd_u8_0x0,
      .max = &bcm56960_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 8 NEW_OCFI */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 9 NEW_IVID */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u16_0x0,
      .def = &bcm56960_a0_lrd_ifd_u16_0x0,
      .max = &bcm56960_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 10 NEW_IPRI */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u8_0x0,
      .def = &bcm56960_a0_lrd_ifd_u8_0x0,
      .max = &bcm56960_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 11 NEW_ICFI */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 12 SKIP_VLAN_CHECK */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 13 L3_IIF_VALID */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56960_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56960_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .num_sym = 0,
      .sym = NULL,
    },
    { /* 14 L3_IIF_ID */
      .flags = 0,
      .min = &bcm56960_a0_lrd_ifd_u32_0x0,
      .def = &bcm56960_a0_lrd_ifd_u32_0x0,
      .max = &bcm56960_a0_lrd_ifd_u32_0x1fff,
      .depth = 0,
      .width = 13,
      .num_sym = 0,
      .sym = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56960_a0_lrd_vlan_ing_xlate_itag_trunk_map_field_data = {
    .fields = 15,
    .field = bcm56960_a0_lrd_vlan_ing_xlate_itag_trunk_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56960_a0_lrd_vlan_ing_xlate_itag_trunkt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 16384,
    },
};

static const bcmlrd_map_attr_t bcm56960_a0_lrd_vlan_ing_xlate_itag_trunkt_attr_group = {
    .attributes = 2,
    .attr = bcm56960_a0_lrd_vlan_ing_xlate_itag_trunkt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56960_a0_lrd_vlan_ing_xlate_itag_trunkt_vlan_xlate_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = VALIDf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 1,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 2,
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = XLATEv_ITAGf,
            .field_idx = 0,
            .minbit    = 40,
            .maxbit    = 40,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_ICFIf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = XLATEv_ITAGf,
            .field_idx = 0,
            .minbit    = 37,
            .maxbit    = 39,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_IPRIf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = XLATEv_ITAGf,
            .field_idx = 0,
            .minbit    = 25,
            .maxbit    = 36,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_IVIDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = SOURCE_TYPEf,
            .field_idx = 0,
            .minbit    = 6,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = XLATEv_Tf,
            .field_idx = 0,
            .minbit    = 24,
            .maxbit    = 24,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = XLATEv_TGIDf,
            .field_idx = 0,
            .minbit    = 8,
            .maxbit    = 17,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_TRUNK_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 9,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = XLATEv_TAG_ACTION_PROFILE_PTRf,
            .field_idx = 0,
            .minbit    = 88,
            .maxbit    = 93,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_VLAN_ING_TAG_ACTION_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = XLATEv_VLAN_ACTION_VALIDf,
            .field_idx = 0,
            .minbit    = 123,
            .maxbit    = 123,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_VLAN_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = XLATEv_NEW_VLAN_IDf,
            .field_idx = 0,
            .minbit    = 51,
            .maxbit    = 62,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_NEW_OVIDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = XLATEv_NEW_OPRIf,
            .field_idx = 0,
            .minbit    = 94,
            .maxbit    = 96,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_NEW_OPRIf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = XLATEv_NEW_OCFIf,
            .field_idx = 0,
            .minbit    = 117,
            .maxbit    = 117,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_NEW_OCFIf,
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
            .field_id  = XLATEv_NEW_IVIDf,
            .field_idx = 0,
            .minbit    = 63,
            .maxbit    = 74,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_NEW_IVIDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = XLATEv_NEW_IPRIf,
            .field_idx = 0,
            .minbit    = 119,
            .maxbit    = 121,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_NEW_IPRIf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 15 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = XLATEv_NEW_ICFIf,
            .field_idx = 0,
            .minbit    = 118,
            .maxbit    = 118,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_NEW_ICFIf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 16 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = XLATEv_DISABLE_VLAN_CHECKSf,
            .field_idx = 0,
            .minbit    = 122,
            .maxbit    = 122,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_SKIP_VLAN_CHECKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 17 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = XLATEv_L3_IIF_VALIDf,
            .field_idx = 0,
            .minbit    = 50,
            .maxbit    = 50,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_L3_IIF_VALIDf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = XLATEv_L3_IIFf,
            .field_idx = 0,
            .minbit    = 75,
            .maxbit    = 87,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = VLAN_ING_XLATE_ITAG_TRUNKt_L3_IIF_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 12,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56960_a0_lrd_vlan_ing_xlate_itag_trunk_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = VLAN_XLATEm,
        },
        .entries = 19,
        .entry = bcm56960_a0_lrd_vlan_ing_xlate_itag_trunkt_vlan_xlate_map_entry
    },
};
const bcmlrd_map_t bcm56960_a0_lrd_vlan_ing_xlate_itag_trunk_map = {
    .src_id = VLAN_ING_XLATE_ITAG_TRUNKt,
    .field_data = &bcm56960_a0_lrd_vlan_ing_xlate_itag_trunk_map_field_data,
    .groups = 1,
    .group  = bcm56960_a0_lrd_vlan_ing_xlate_itag_trunk_map_group,
    .table_attr = &bcm56960_a0_lrd_vlan_ing_xlate_itag_trunkt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
