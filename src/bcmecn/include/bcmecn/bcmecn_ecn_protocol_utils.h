/*! \file bcmecn_ecn_protocol_utils.h
 *
 * This file contains helper functions
 * for ECN protocol custom handler.
 */
/*
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

#ifndef BCMECN_ECN_PROTOCOL_UTILS_H
#define BCMECN_ECN_PROTOCOL_UTILS_H

#include <shr/shr_debug.h>
#include <shr/shr_bitop.h>
#include <bsl/bsl.h>
#include <bcmltd/bcmltd_handler.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmdrd_config.h>

/*!
 *\brief ECN driver structure
 *
 * Used to save information about the driver.
 */
typedef struct bcmecn_drv_s {
    /*! Maximum number of protocols supported. */
    uint16_t max_proto;
    /*! Number of protocols supported per hw entry. */
    uint16_t num_proto_per_entry;
    /*! Protocol match table id. */
    uint32_t protocol_match_sid;
    /*! Protocol match field id. */
    uint32_t responsive_fid;
} bcmecn_drv_t;

/*! ECN driver structure. */
extern bcmecn_drv_t *bcmecn_drv[BCMDRD_CONFIG_MAX_UNITS];

/*! Maximum number of protocols supported. */
#define BCMECN_MAX_PROCOTOLS(unit)          bcmecn_drv[unit]->max_proto
/*! Number of protocols supported per hw entry. */
#define BCMECN_PROTOCOLS_PER_ENTRY(unit)    bcmecn_drv[unit]->num_proto_per_entry
/*! Protocol match table id. */
#define BCMECN_PROTO_MATCH_HW_SID(unit)     bcmecn_drv[unit]->protocol_match_sid
/*! Protocol match field id. */
#define BCMECN_PROTO_RESPONSIVE_FID(unit)   bcmecn_drv[unit]->responsive_fid

/*! Get the minimum supported value of an LT field. */
#define BCMECN_FIELD_MIN(dtag)   ((dtag == BCMLT_FIELD_DATA_TAG_U8) ?       \
                                  (field_def.min.u8) :                      \
                                  ((dtag == BCMLT_FIELD_DATA_TAG_U16) ?     \
                                   (field_def.min.u16) :                    \
                                   ((dtag == BCMLT_FIELD_DATA_TAG_U32) ?    \
                                    (field_def.min.u32) :                   \
                                    ((dtag == BCMLT_FIELD_DATA_TAG_U64) ?   \
                                     (field_def.min.u64) :                  \
                                     (field_def.min.is_true)))))

/*! Get the maximum supported value of an LT field. */
#define BCMECN_FIELD_MAX(dtag)   ((dtag == BCMLT_FIELD_DATA_TAG_U8) ?       \
                                  (field_def.max.u8) :                      \
                                  ((dtag == BCMLT_FIELD_DATA_TAG_U16) ?     \
                                   (field_def.max.u16) :                    \
                                   ((dtag == BCMLT_FIELD_DATA_TAG_U32) ?    \
                                    (field_def.max.u32) :                   \
                                    ((dtag == BCMLT_FIELD_DATA_TAG_U64) ?   \
                                     (field_def.max.u64) :                  \
                                     (field_def.max.is_true)))))

/*!
 *\brief ECN software state structure
 *
 * Used to track which LT entries are being used.
 */
typedef struct bcmecn_sw_state_s {
    /*! Status of each ECN protocol entry. */
    uint8_t *entry_in_use;
    /*! Status of each ECN protocol entry - backup copy. */
    uint8_t *entry_in_use_bkp;
} bcmecn_sw_state_t;

#define BCMECN_SW_STATE_ACTIVE(unit)    (bcmecn_sw_state[unit].entry_in_use)
#define BCMECN_SW_STATE_BKP(unit)       (bcmecn_sw_state[unit].entry_in_use_bkp)

#define BCMECN_PROTOCOL_IN_USE_GET(unit, proto) \
    (bcmecn_sw_state[unit].entry_in_use[proto])

#define BCMECN_PROTOCOL_IN_USE_SET(unit, proto) \
    bcmecn_sw_state[unit].entry_in_use[proto] = 1;

#define BCMECN_PROTOCOL_IN_USE_CLR(unit, proto) \
    bcmecn_sw_state[unit].entry_in_use[proto] = 0;

#define BCMECN_PROTO_SUB_COMP_ID            1
#define BCMECN_PROTO_BKP_SUB_COMP_ID        2

#define BCMECN_PROTO_SW_STATE_T_VER         1
#define BCMECN_PROTO_SW_STATE_T_SIG         0x08450fdaefde34a5

#define BCMECN_PROTO_BKP_SW_STATE_T_VER     1
#define BCMECN_PROTO_BKP_SW_STATE_T_SIG     0x39670edcefdf34b5

/*!
 * \brief bcmecn_ecn_protocol_pt_write
 *
 * Write ecn protocol entry into physical table.
 *
 * \param [in] unit          Unit number.
 * \param [in] trans_id      LT Transaction identifier.
 * \param [in] ip_protocol   Internet protocol.
 * \param [in] responsive    Responsiveness of the protocol.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_FAIL Hardware write operation unsuccessful.
 */

extern int
bcmecn_ecn_protocol_pt_write(int unit, uint32_t trans_id,
                                   uint32_t ip_protocol,
                                   uint32_t responsive);


/*!
 * \brief bcmecn_ecn_protocol_pt_read
 *
 * Read ecn protocol entry into physical table.
 *
 * \param [in] unit          Unit number.
 * \param [in] trans_id      LT Transaction identifier.
 * \param [in] ip_protocol   Internet protocol.
 * \param [in] responsive    Responsiveness of the protocol.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_FAIL Hardware write operation unsuccessful.
 */
extern int
bcmecn_ecn_protocol_pt_read(int unit, uint32_t trans_id,
                            uint32_t ip_protocol,
                            uint32_t *responsive);

/*!
 * \brief Set pointer to ecn driver device structure.
 *
 * \param [in] unit Unit number.
 * \param [in] drv  Chip driver structure.
 *
 * \return SHR_E_NONE
 */
extern int bcmecn_drv_set(int unit, bcmecn_drv_t *drv);

/*!
 * \brief Get pointer to ecn driver device structure.
 *
 * \param [in] unit Unit number.
 * \param [out] drv Chip driver structure.
 *
 * \return Pointer to device structure, or NULL if not found.
 */
extern int bcmecn_drv_get(int unit, bcmecn_drv_t **drv);

#endif /* BCMECN_ECN_PROTOCOL_UTILS_H */
