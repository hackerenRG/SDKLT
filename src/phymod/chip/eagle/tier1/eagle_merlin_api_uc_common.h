/*****************************************************************************************
*****************************************************************************************
*                                                                                       *
*  Revision      :  $Id: eagle_merlin_api_uc_common.h 1138 2015-09-17 20:58:34Z kirand $ *
*                                                                                       *
*  Description   :  Defines and Enumerations required by Eagle/Merlin APIs              *
*                                                                                       *
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
* 
*                                                                  *
*  No portions of this material may be reproduced in any form without                   *
*  the written permission of:                                                           *
*      Broadcom Corporation                                                             *
*      5300 California Avenue                                                           *
*      Irvine, CA  92617                                                                *
*                                                                                       *
*  All information contained in this document is Broadcom Corporation                   *
*  company private proprietary, and trade secret.                                       *
 */

/** @file eagle_merlin_api_uc_common.h
 * Defines and Enumerations shared by Eagle & Merlin IP Specific API and Microcode
 */

#ifndef EAGLE_MERLIN_API_UC_COMMON_H
#define EAGLE_MERLIN_API_UC_COMMON_H

/* Add Eagle/Merlin specific items below this */

/** Translate between a VCO frequency in MHz and the vco_rate that is **\
*** found in the Core Config Variable Structure using the formula:    ***
***                                                                   ***
***     vco_rate = (frequency_in_ghz * 4.0) - 22.0                    ***
***                                                                   ***
*** Both functions round to the nearest resulting value.  This        ***
*** provides the highest accuracy possible, and ensures that:         ***
***                                                                   ***
***     vco_rate == MHZ_TO_VCO_RATE(VCO_RATE_TO_MHZ(vco_rate))        ***
***                                                                   ***
*** In the microcode, this should only be called with a numeric       ***
*** literal parameter.                                                ***
\**                                                                   **/
#define MHZ_TO_VCO_RATE(mhz) ((uint8_t)((((uint16_t)(mhz)) / 250) - 22))
#define VCO_RATE_TO_MHZ(vco_rate) ((((uint16_t)(vco_rate) + 22) * 1000) >> 2)

/* Please note that when adding entries here you should update the #defines in the eagle_tsc_common.h */

/** OSR_MODES Enum */
enum eagle_tsc_osr_mode_enum {
	EAGLE_TSC_OSX1    = 0,
	EAGLE_TSC_OSX2    = 1,
	EAGLE_TSC_OSX3    = 2,
	EAGLE_TSC_OSX3P3  = 3,
	EAGLE_TSC_OSX4    = 4,
	EAGLE_TSC_OSX5    = 5,
	EAGLE_TSC_OSX7P5  = 6,
	EAGLE_TSC_OSX8    = 7,
	EAGLE_TSC_OSX8P25 = 8,
	EAGLE_TSC_OSX10   = 9
};


/** VCO_RATE Enum */
enum eagle_tsc_vco_rate_enum {
	EAGLE_TSC_VCO_5P5G = 0,
	EAGLE_TSC_VCO_5P75G,
	EAGLE_TSC_VCO_6G,
	EAGLE_TSC_VCO_6P25G,
	EAGLE_TSC_VCO_6P5G,
	EAGLE_TSC_VCO_6P75G,
	EAGLE_TSC_VCO_7G,
	EAGLE_TSC_VCO_7P25G,
	EAGLE_TSC_VCO_7P5G,
	EAGLE_TSC_VCO_7P75G,
	EAGLE_TSC_VCO_8G,
	EAGLE_TSC_VCO_8P25G,
	EAGLE_TSC_VCO_8P5G,
	EAGLE_TSC_VCO_8P75G,
	EAGLE_TSC_VCO_9G,
	EAGLE_TSC_VCO_9P25G,
	EAGLE_TSC_VCO_9P5G,
	EAGLE_TSC_VCO_9P75G,
	EAGLE_TSC_VCO_10G,
	EAGLE_TSC_VCO_10P25G,
	EAGLE_TSC_VCO_10P5G,
	EAGLE_TSC_VCO_10P75G,
	EAGLE_TSC_VCO_11G,
	EAGLE_TSC_VCO_11P25G,
	EAGLE_TSC_VCO_11P5G,
	EAGLE_TSC_VCO_11P75G,
	EAGLE_TSC_VCO_12G,
	EAGLE_TSC_VCO_12P25G,
	EAGLE_TSC_VCO_12P5G,
	EAGLE_TSC_VCO_12P75G,
	EAGLE_TSC_VCO_13G,
	EAGLE_TSC_VCO_13P25G
};

#endif
