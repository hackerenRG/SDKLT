/*! \file bcmecmp_types.h
 *
 * This file contains ECMP custom table handler data type definitions.
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

#ifndef BCMECMP_TYPES_H
#define BCMECMP_TYPES_H

#include <sal/sal_types.h>
#include <shr/shr_bitop.h>
#include <bcmdrd_config.h>

/*! Maximum number of BCM Units supported. */
#define BCMECMP_NUM_UNITS_MAX BCMDRD_CONFIG_MAX_UNITS

/*! Invalid Index or ID. */
#define BCMECMP_INVALID (-1)

/*! Install hardware entry in all pipe instances. */
#define BCMECMP_ALL_PIPES_INST (-1)

/*! Logical table entry staged status indicator. */
#define BCMECMP_ENTRY_STAGED (1 << 0)

/*!
 * \brief ECMP Memory allocation macro.
 *
 * Allocates \c _size bytes, clears the memory and returns a pointer to the
 * allocated memory \c in _ptr.
 *
 * \param [in] _ptr Pointer to the allocated memory.
 * \param [in] _size Size in bytes.
 * \param [in] _descr Description for the allocated memory.
 *
 * \returns Pointer to allocated memory.
 */
#define BCMECMP_ALLOC(_ptr, _size, _descr)      \
    do {                                        \
        SHR_ALLOC((_ptr), (_size), _descr);     \
        SHR_NULL_CHECK((_ptr), SHR_E_MEMORY);   \
        sal_memset((_ptr), 0, (_size));         \
    } while(0)

/*!
 * \brief ECMP Memory free macro.
 *
 * Frees the memory space pointed by \c _ptr, which must have been returned
 * by a previous call to BCMECMP_ALLOC() macro.
 *
 * \param [in] _ptr Pointer to the memory space to be freed.
 *
 * \returns Nothing.
 */
#define BCMECMP_FREE(_ptr) SHR_FREE(_ptr)

/*! ECMP Group Identifier.  */
typedef int bcmecmp_id_t;

/*! NextHop index. */
typedef int bcmecmp_nhop_id_t;

/*! Logical Table Definition Field Identifier. */
typedef uint32_t bcmecmp_ltd_fid_t;

/*!
 * \brief Device ECMP modes.
 *
 * List of ECMP modes supported by the device.
 */
typedef enum bcmecmp_mode_e {
    /*! Full feature single level ECMP resolution. */
    BCMECMP_MODE_FULL = 0,

    /*! Two level hierarchical ECMP resolution. */
    BCMECMP_MODE_HIER = 1,

    /*! Fast single level ECMP resolution. */
    BCMECMP_MODE_FAST = 2,

    /*! Must be the last one. */
    BCMECMP_MODE_COUNT
} bcmecmp_mode_t;

/*! \brief Device ECMP mode names. */
#define BCMECMP_MODE_NAME { \
            "FULL",         \
            "HIERARCHICAL", \
            "FAST"          \
}

/*!
 * \brief ECMP resilient hashing group members operation type enum.
 */
typedef enum bcmecmp_rh_oper_e {
    /*! Invalid RH group members operation, initial value. */
    BCMECMP_RH_OPER_INVALID = 0,

    /*! RH group members add operation. */
    BCMECMP_RH_OPER_ADD = 1,

    /*! RH group members delete operation. */
    BCMECMP_RH_OPER_DELETE = 2,

    /*! RH group members replace operation. */
    BCMECMP_RH_OPER_REPLACE = 3,

    /*! RH group members add and replace operation. */
    BCMECMP_RH_OPER_ADD_REPLACE = 4,

    /*! RH group members delete and replace operation. */
    BCMECMP_RH_OPER_DELETE_REPLACE = 5,

    /*! Must be last one. */
    BCMECMP_RH_OPER_COUNT = 6
} bcmecmp_rh_oper_t;

/*! \brief ECMP resilient hashing group members operation name. */
#define BCMECMP_RH_OPER_NAME { \
            "INVALID",         \
            "ADD",             \
            "DELETE",          \
            "REPLACE",         \
            "ADD_REPLACE",     \
            "DELETE_REPLACE"   \
}

#endif /* BCMECMP_TYPES_H */
