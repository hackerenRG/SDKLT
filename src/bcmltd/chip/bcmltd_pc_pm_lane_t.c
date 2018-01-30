/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from INTERNAL/fltg/xgs/pc/PC_PM_LANE.tbl.ltl
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
#include <bcmltd/chip/bcmltd_common_enumpool.h>
#include "bcmltd_strpool.h"
static const bcmltd_field_rep_t bcmltd_pc_pm_lane_t_fields[] = {
    {
        .name  = bcmltd_strpool_pc_pm_id,  /* PC_PM_ID */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 8,
        .depth = 0,
        .desc = "Port macro ID.",
    },
    {
        .name  = bcmltd_strpool_core_index,  /* CORE_INDEX */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 8,
        .depth = 0,
        .desc = "Core index within port macro (typically 0).",
    },
    {
        .name  = bcmltd_strpool_core_lane,  /* CORE_LANE */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 8,
        .depth = 0,
        .desc = "Lane number within core.",
    },
    {
        .name  = bcmltd_strpool_port_opmode,  /* PORT_OPMODE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 16,
        .num_sym = 39,
        .sym = bcmltd_common_pc_port_opmode_t_enum,
        .desc = "Array of port operating modes.",
    },
    {
        .name  = bcmltd_strpool_pc_pm_tx_lane_profile_id,  /* PC_PM_TX_LANE_PROFILE_ID */
        .flags = 0,
        .width = 16,
        .depth = 16,
        .desc = "Array of Tx lane profile IDs.",
    },
    {
        .name  = bcmltd_strpool_pc_pm_rx_lane_profile_id,  /* PC_PM_RX_LANE_PROFILE_ID */
        .flags = 0,
        .width = 16,
        .depth = 16,
        .desc = "Array of Rx lane profile IDs.",
    },
};
const bcmltd_table_rep_t bcmltd_pc_pm_lane_t = {
    .name = bcmltd_strpool_pc_pm_lane, /* PC_PM_LANE */
    .flags = 0,
    .fields = 6,
    .field = bcmltd_pc_pm_lane_t_fields,
    .desc = "Port macro lane configuration.\n\n This table is used to configure the board-related properties of a\n port macro lane. The actual lane configuration resides in a\n separate profile table.\n\n Once a port operating mode has been established (forced or\n auto-negotiated), the active port operating mode is matched against\n the PORT_OPMODE array, and if a match is found, then the lane\n configuration from the corresponding lane profiles is applied.\n\n For example, if the port operating mode is PC_PORT_OPMODE_10G_SFI\n and PORT_OPMODE[3]=PC_PORT_OPMODE_10G_SFI, then the settings from\n PC_PM_TX_LANE_PROFILE_ID[3] and PC_PM_RX_LANE_PROFILE_ID[3] will be\n used.\n\n If no matching mode is found then the PORT_OPMODE array will be\n searched for PC_PORT_OPMODE_ANY, and if found, the corresponding\n lane profiles will be used.\n\n If there is no entry for PC_PORT_OPMODE_ANY either, then the\n current\n",
};
