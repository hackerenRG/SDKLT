/*! \file bcmlt_bitop.h
 *  \brief BCMLT Bit Array Macros Header File
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

#ifndef   BCMLT_BITOP_H
#define   BCMLT_BITOP_H

#include <bcmltd/bcmltd_bitop.h>

/*!
 * Base type for bit arrays. This type is essentially a block of bits,
 * and each block contains \ref BCMLT_BITWID bits.
 */
#define BCMLT_BITDCL     BCMLTD_BITDCL

/*!
 * Number of bits in a bit array base type (\ref BCMLT_BITDCL). An
 * applcation should normally not care about the size of the bit
 * array base type.
 */
#define BCMLT_BITWID     BCMLTD_BITWID

/*!
 * Size in bytes of a bit array containing _max bits.
 *
 * This size is useful when calling malloc, memcpy, etc.
 */
#define BCMLT_BIT_ALLOCSIZE(_max)  \
    BCMLTD_BIT_ALLOCSIZE(_max)

/*!
 * Declare bit array _name of size _max bits.
 *
 * Used for declaring a bit array on the stack (or as a static).
 *
 * For example, to declare an array containing 80 bits:
 *
 * \code{.c}
 * void my_func(void)
 * {
 *     BCMLT_BIT_DCLNAME(my_bit_array, 80);
 *     ...
 * }
 * \endcode
 */
#define BCMLT_BIT_DCLNAME(_name, _max)  \
    BCMLTD_BIT_DCLNAME(_name, _max)

/*!
 * \brief Test if a bit is set in a bit array.
 *
 * \param [in] _a Bit array to operate on
 * \param [in] _b Bit number to test (first is 0)
 *
 * \return 0 if not set, otherwise non-zero.
 */
#define BCMLT_BIT_GET(_a, _b) \
    BCMLTD_BIT_GET(_a, _b)

/*!
 * \brief Set a bit in a bit array.
 *
 * \param [in] _a Bit array to operate on
 * \param [in] _b Bit number to set (first is 0)
 *
 * \return Nothing
 */
#define BCMLT_BIT_SET(_a, _b) \
    BCMLTD_BIT_SET(_a, _b)

/*!
 * \brief Clear a bit in a bit array.
 *
 * \param [in] _a Bit array to operate on
 * \param [in] _b Bit number to clear (first is 0)
 *
 * \return Nothing
 */
#define BCMLT_BIT_CLR(_a, _b) \
    BCMLTD_BIT_CLR(_a, _b)

/*!
 * \brief Iterate over bits in bit array.
 *
 * Used to perform a specific action for all the bits which are set in
 * a bit array.
 *
 * Example:
 *
 * \code{.c}
 * #define MAX_BITS 80
 *
 * static BCMLT_BITDCLNAME(my_bit_array, MAX_BITS);
 *
 * void my_biterator(void)
 * {
 *  int bitnum;
 *
 *  BCMLT_BIT_ITER(my_bit_array, MAX_BITS, bitnum) {
 *  printf("Bit number %d is set\n", bitnum);
 *  }
 * }
 * \endcode
 *
 * \param [in] _a Bit array to iterate over
 * \param [in] _max Number of bits to iterate over (starting from 0)
 * \param [in] _b Iterator variable (should be same type as _max)
 */
#define BCMLT_BIT_ITER(_a, _max, _b)               \
    BCMLTD_BIT_ITER(_a, _max, _b)

/*!
 * \brief Set range of bits in a bit array.
 *
 * This macro sets a specified range of bits within a bit array.
 *
 * \param [in] _a Bit array in which to set bits
 * \param [in] _offs Offset (in bits) into the array
 * \param [in] _n Number of bits to set
 *
 * \return Nothing
 */
#define BCMLT_BIT_SET_RANGE(_a, _offs, _n) \
    BCMLTD_BIT_SET_RANGE(_a, _offs, _n)

/*!
 * \brief Clear range of bits in a bit array.
 *
 * This macro clears a specified range of bits within a bit array.
 *
 * \param [in] _a Bit array in which to clear bits
 * \param [in] _offs Offset (in bits) into the array
 * \param [in] _n Number of bits to clear
 *
 * \return Nothing
 */
#define BCMLT_BIT_CLR_RANGE(_a, _offs, _n) \
    BCMLTD_BIT_CLR_RANGE(_a, _offs, _n)

/*!
 * \brief Copy a range of bits between two bit arrays.
 *
 * This macro copies a range of bits from one bit array to
 * another. The bit range may reside at different offsets within the
 * source and destination bit arrays.
 *
 * If source and destination are within the same bit array, then the
 * ranges must not overlap.
 *
 * \param [in] _a1 Destination bit array
 * \param [in] _offs1 Offset (in bits) in destination bit array
 * \param [in] _a2 Source bit array
 * \param [in] _offs2 Offset (in bits) in source bit array
 * \param [in] _n Number of bits to copy
 *
 * \return Nothing
 */
#define BCMLT_BIT_COPY_RANGE(_a1, _offs1, _a2, _offs2, _n)  \
    BCMLTD_BIT_COPY_RANGE(_a1, _offs1, _a2, _offs2, _n)

/*!
 * \brief Perform bitwise AND for a range of bits in two bit arrays.
 *
 * The destination bit array may the same as one of the source bit
 * arrays.
 *
 * \param [in] _a1 First source bit array
 * \param [in] _a2 Second source bit array
 * \param [in] _offs Offset (in bits) in bit array
 * \param [in] _n Number of bits to operate on
 * \param [in] _dest Destination bit array
 *
 * \return Nothing
 */
#define BCMLT_BIT_AND_RANGE(_a1, _a2, _offs, _n, _dest) \
    BCMLTD_BIT_AND_RANGE(_a1, _a2, _offs, _n, _dest)

/*!
 * \brief Perform bitwise OR for a range of bits in two bit arrays.
 *
 * This macro performs a logical AND operation between each bit of a
 *  specified range of bits within two bit arrays.
 *
 * The destination bit array may the same as one of the source bit
 *  arrays.
 *
 * \param [in] _a1 First bit array for operation
 * \param [in] _a2 Second bit array for operation
 * \param [in] _offs Offset (in bits) into the arrays
 * \param [in] _n Number of bits to operate on
 * \param [in] _dest Destination bit array
 *
 * \return Nothing
 */
#define BCMLT_BIT_OR_RANGE(_a1, _a2, _offs, _n, _dest) \
    BCMLTD_BIT_OR_RANGE(_a1, _a2, _offs, _n, _dest)

/*!
 * \brief Perform bitwise XOR operation on bit arrays.
 *
 * This macro performs a logical XOR operation between each bit of a
 * specified range of bits within two bit arrays.
 *
 * The destination bit array may the same as one of the source bit
 * arrays.
 *
 * \param [in] _a1 First bit array for operation
 * \param [in] _a2 Second bit array for operation
 * \param [in] _offs Offset (in bits) into the arrays
 * \param [in] _n Number of bits to operate on
 * \param [in] _dest Destination bit array
 *
 * \return Nothing
 */
#define BCMLT_BIT_XOR_RANGE(_a1, _a2, _offs, _n, _dest) \
    BCMLTD_BIT_XOR_RANGE(_a1, _a2, _offs, _n, _dest)

/*!
 * \brief Clear select bits in a bit array.
 *
 * This macro clears bits within a specified range of bits in a bit
 * array. Only the bits which are set in the supplied mask bit array
 * will be cleared, i.e. any bit not set in the mask (or outside the
 * range) are unaffected.
 *
 * The destination bit array may the same as the source bit array.
 *
 * \param [in] _a1 Source bit array
 * \param [in] _a2 Mask bit array
 * \param [in] _offs Offset (in bits) into the arrays
 * \param [in] _n Number of bits to operate on
 * \param [in] _dest Destination bit array
 *
 * \return Nothing
 */
#define BCMLT_BIT_REMOVE_RANGE(_a1, _a2, _offs, _n, _dest) \
    BCMLTD_BIT_REMOVE_RANGE(_a1, _a2, _offs, _n, _dest)

/*!
 * \brief Negate a range of bits in a bit array.
 *
 * This operation is essentially the same as performing an XOR with a
 * array consisting of all 1s.
 *
 * \param [in] _a Source bit array
 * \param [in] _offs Offset (in bits) into the array
 * \param [in] _n Number of bits to negate
 * \param [in] _dest Destination bit array
 */
#define BCMLT_BIT_NEGATE_RANGE(_a, _offs, _n, _dest) \
    BCMLTD_BIT_NEGATE_RANGE(_a, _offs, _n, _dest)

/*!
 * \brief Test if bits are cleared in a bit array.
 *
 *  <long-description>
 *
 * \param [in] _a Source bit array
 * \param [in] _offs Offset (in bits) into the array
 * \param [in] _n Number of bits to negate
 *
 * \return 1 if all bits in range are cleared, otherwise 0.
 */
#define BCMLT_BIT_NULL_RANGE(_a, _offs, _n) \
    BCMLTD_BIT_NULL_RANGE(_a, _offs, _n)

/*!
 * \brief Test if two bit array bit ranges are equal.
 *
 * This macro compares a range of bits at the same offset within two
 * bit arrays.
 *
 * \param [in] _a1 First bit array
 * \param [in] _a2 Second bit array
 * \param [in] _offs Offset (in bits) into the arrays
 * \param [in] _n Number of bits to compare
 *
 * \return 1 if all bits in range are equal, otherwise 0.
 */
#define BCMLT_BIT_EQ_RANGE(_a1, _a2, _offs, _n) \
    BCMLTD_BIT_EQ_RANGE(_a1, _a2, _offs, _n)

/*!
 * \brief Count the number of bits set in a range of bits in a bit array.
 *
 * This macro counts the number of bits that are set in a range of \c
 * _n bits starting at offset \c _offs within bit array \c _a.
 *
 * \param [in] _bits
 * \param [in] _count
 * \param [in] _first
 * \param [in] _range
 */
#define BCMLT_BIT_COUNT_RANGE(_bits, _count, _first, _range) \
    BCMLTD_BIT_COUNT_RANGE(_bits, _count, _first, _range)

/*!
 * \brief Decode a string in hex format into a bitmap.
 *
 * The string can be more than 32 bits worth of data if it is in hex
 * format (0x...).  If not hex, it is treated as a 32 bit value.
 *
 * \param [in] _str
 * \param [in] _a
 * \param [in] _max
 *
 * \retval 0 No errors
 */
#define BCMLT_BIT_STR_DECODE(_str, _a, _max) \
    BCMLTD_BIT_STR_DECODE(_str, _a, _max)

#endif /* BCMLT_BITOP_H */
