#ifndef __BCMI_SGMIIP2X4_SERDES_DEFS_H__
#define __BCMI_SGMIIP2X4_SERDES_DEFS_H__
/*******************************************************************************
 *
 * $Id: $
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
 * 
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
 *
 * Definition file for the BCMI_SGMIIP2X4_SERDES.
 * This file provides all basic definitions required to program the BCMI_SGMIIP2X4_SERDES.
 *
 * This file is autogenerated. Please do not edit.
 */

#ifndef _DV_TB_
#include <phymod/acc/phymod_tsc_iblk.h>
#endif /* _DV_TB_ */

/*******************************************************************************
 *
 *                    CHIP DEFINITIONS BEGIN HERE
 */



/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_MIICTL
 * BLOCKS:   CL22_B0
 * REGADDR:  0x0000
 * DESC:     IEEE MII control register
 * RESETVAL: 0x140 (320)
 * ACCESS:   R/W
 * FIELDS:
 *     MANUAL_SPEED1    Bits6 13----1 1 = Reserved1 0 = SGMII 1000 Mb/s0 1 = SGMII 100 Mb/s0 0 = SGMII 10 Mb/sNote: speed1 & speed0 bits for SGMII mode only
 *     COLLISION_TEST_EN 1 = collision test mode enabled0 = collision test mode disabled
 *     DUPLEX           1 = full duplex0 = half duplex
 *     RESTART_AUTONEG  1 = restart auto-negotiation process0 = normal operation
 *     PWRDWN_SW        1 = low power mode0 = normal operation
 *     AUTONEG_ENABLE   1 = auto-negotiation enabled0 = auto-negotiation disabled
 *     MANUAL_SPEED0    Bits6 13----1 1 = Reserved1 0 = SGMII 1000 Mb/s0 1 = SGMII 100 Mb/s0 0 = SGMII 10 Mb/sNote: speed1 & speed0 bits for SGMII mode only
 *     GLOOPBACK        1 = Global loopback mode is enabled (i.e. TX->RX)0 = normal operation
 *     RST_HW           1 = PHY Reset0 = normal operation
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr (0x00000000 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_SIZE 4

/*
 * This structure should be used to declare and program SP2_MIICTL.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_s {
	uint32_t v[1];
	uint32_t sp2_miictl[1];
	uint32_t _sp2_miictl;
} BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_CLR(r) (r).sp2_miictl[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_SET(r,d) (r).sp2_miictl[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_GET(r) (r).sp2_miictl[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_RST_HWf_GET(r) ((((r).sp2_miictl[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_RST_HWf_SET(r,f) (r).sp2_miictl[0]=(((r).sp2_miictl[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_GLOOPBACKf_GET(r) ((((r).sp2_miictl[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_GLOOPBACKf_SET(r,f) (r).sp2_miictl[0]=(((r).sp2_miictl[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_MANUAL_SPEED0f_GET(r) ((((r).sp2_miictl[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_MANUAL_SPEED0f_SET(r,f) (r).sp2_miictl[0]=(((r).sp2_miictl[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_AUTONEG_ENABLEf_GET(r) ((((r).sp2_miictl[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_AUTONEG_ENABLEf_SET(r,f) (r).sp2_miictl[0]=(((r).sp2_miictl[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_PWRDWN_SWf_GET(r) ((((r).sp2_miictl[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_PWRDWN_SWf_SET(r,f) (r).sp2_miictl[0]=(((r).sp2_miictl[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_RESTART_AUTONEGf_GET(r) ((((r).sp2_miictl[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_RESTART_AUTONEGf_SET(r,f) (r).sp2_miictl[0]=(((r).sp2_miictl[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_DUPLEXf_GET(r) ((((r).sp2_miictl[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_DUPLEXf_SET(r,f) (r).sp2_miictl[0]=(((r).sp2_miictl[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_COLLISION_TEST_ENf_GET(r) ((((r).sp2_miictl[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_COLLISION_TEST_ENf_SET(r,f) (r).sp2_miictl[0]=(((r).sp2_miictl[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_MANUAL_SPEED1f_GET(r) ((((r).sp2_miictl[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_MANUAL_SPEED1f_SET(r,f) (r).sp2_miictl[0]=(((r).sp2_miictl[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))

/*
 * These macros can be used to access SP2_MIICTL.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_MIICTLr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr,(_r._sp2_miictl))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MIICTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr,(_r._sp2_miictl)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MIICTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr,(_r._sp2_miictl))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_MIICTLr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_miictl))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MIICTLr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_miictl))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MIICTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_miictl))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_MIICTLr BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr
#define SP2_MIICTLr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_t SP2_MIICTLr_t;
#define SP2_MIICTLr_CLR BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_CLR
#define SP2_MIICTLr_SET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_SET
#define SP2_MIICTLr_GET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_GET
#define SP2_MIICTLr_RST_HWf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_RST_HWf_GET
#define SP2_MIICTLr_RST_HWf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_RST_HWf_SET
#define SP2_MIICTLr_GLOOPBACKf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_GLOOPBACKf_GET
#define SP2_MIICTLr_GLOOPBACKf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_GLOOPBACKf_SET
#define SP2_MIICTLr_MANUAL_SPEED0f_GET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_MANUAL_SPEED0f_GET
#define SP2_MIICTLr_MANUAL_SPEED0f_SET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_MANUAL_SPEED0f_SET
#define SP2_MIICTLr_AUTONEG_ENABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_AUTONEG_ENABLEf_GET
#define SP2_MIICTLr_AUTONEG_ENABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_AUTONEG_ENABLEf_SET
#define SP2_MIICTLr_PWRDWN_SWf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_PWRDWN_SWf_GET
#define SP2_MIICTLr_PWRDWN_SWf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_PWRDWN_SWf_SET
#define SP2_MIICTLr_RESTART_AUTONEGf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_RESTART_AUTONEGf_GET
#define SP2_MIICTLr_RESTART_AUTONEGf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_RESTART_AUTONEGf_SET
#define SP2_MIICTLr_DUPLEXf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_DUPLEXf_GET
#define SP2_MIICTLr_DUPLEXf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_DUPLEXf_SET
#define SP2_MIICTLr_COLLISION_TEST_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_COLLISION_TEST_ENf_GET
#define SP2_MIICTLr_COLLISION_TEST_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_COLLISION_TEST_ENf_SET
#define SP2_MIICTLr_MANUAL_SPEED1f_GET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_MANUAL_SPEED1f_GET
#define SP2_MIICTLr_MANUAL_SPEED1f_SET BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr_MANUAL_SPEED1f_SET
#define READ_SP2_MIICTLr BCMI_SGMIIP2X4_SERDES_READ_SP2_MIICTLr
#define WRITE_SP2_MIICTLr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MIICTLr
#define MODIFY_SP2_MIICTLr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MIICTLr
#define READLN_SP2_MIICTLr BCMI_SGMIIP2X4_SERDES_READLN_SP2_MIICTLr
#define WRITELN_SP2_MIICTLr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MIICTLr
#define WRITEALL_SP2_MIICTLr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MIICTLr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_MIICTLr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_MIISTAT
 * BLOCKS:   CL22_B0
 * REGADDR:  0x0001
 * DESC:     IEEE MII status register
 * RESETVAL: 0x109 (265)
 * ACCESS:   R/O
 * FIELDS:
 *     EXTENDED_CAPABILITY 1 = extended register capabilities supported0 = basic register set capabilities only
 *     JABBER_DETECT    1 = jabber condition detected0 = no jabber condition detected
 *     LINK_STATUS      1 = link pass0 = link faillatching-low
 *     AUTONEG_ABILITY  1 = auto-negotiation capable0 = not auto-negotiation capable
 *     REMOTE_FAULT_STAT 1 = remote fault detected0 = no remote fault detectedlatching-high
 *     AUTONEG_COMPLETE 1 = auto-negotiation complete0 = auto-negotiation in progress
 *     MF_PREAMBLE_SUPRESSION 1 = PHY will accept management frames with preamble suppressed0 = PHY will not accept management frames with
 *     EXTENDED_STATUS  1 = extended status information in register 0Fh0 = no extended status info in register 0Fh
 *     S100BASE_T2_HALF_DUPLEX_CAPABLE 1 = 100Base-T2 half duplex capable0 = not 100Base-T2 half duplex capable
 *     S100BASE_T2_FULL_DUPLEX_CAPABLE 1 = 100Base-T2 full duplex capable0 = not 100Base-T2 full duplex capable
 *     S10BASE_T_HALF_DUPLEX_CAPABLE 1 = 10Base-T half duplex capable0 = not 10Base-T half duplex capable
 *     S10BASE_T_FULL_DUPLEX_CAPABLE 1 = 10Base-T full duplex capable0 = not 10Base-T full duplex capable
 *     S100BASE_X_HALF_DUPLEX_CAPABLE 1 = 100Base-X half duplex capable0 = not 100Base-X half duplex capable
 *     S100BASE_X_FULL_DUPLEX_CAPABLE 1 = 100Base-X full duplex capable0 = not 100Base-X full duplex capable
 *     S100BASE_T4_CAPABLE 1 = 100Base-T4 capable0 = not 100Base-T4 capable
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr (0x00000001 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_SIZE 4

/*
 * This structure should be used to declare and program SP2_MIISTAT.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_s {
	uint32_t v[1];
	uint32_t sp2_miistat[1];
	uint32_t _sp2_miistat;
} BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_CLR(r) (r).sp2_miistat[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_SET(r,d) (r).sp2_miistat[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_GET(r) (r).sp2_miistat[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_T4_CAPABLEf_GET(r) ((((r).sp2_miistat[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_T4_CAPABLEf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_X_FULL_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_miistat[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_X_FULL_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_X_HALF_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_miistat[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_X_HALF_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S10BASE_T_FULL_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_miistat[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S10BASE_T_FULL_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S10BASE_T_HALF_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_miistat[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S10BASE_T_HALF_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_T2_FULL_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_miistat[0]) >> 10) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_T2_FULL_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1 << 10)) | ((((uint32_t)f) & 0x1) << 10)) | (1 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_T2_HALF_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_miistat[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_T2_HALF_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_EXTENDED_STATUSf_GET(r) ((((r).sp2_miistat[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_EXTENDED_STATUSf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_MF_PREAMBLE_SUPRESSIONf_GET(r) ((((r).sp2_miistat[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_MF_PREAMBLE_SUPRESSIONf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_AUTONEG_COMPLETEf_GET(r) ((((r).sp2_miistat[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_AUTONEG_COMPLETEf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_REMOTE_FAULT_STATf_GET(r) ((((r).sp2_miistat[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_REMOTE_FAULT_STATf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_AUTONEG_ABILITYf_GET(r) ((((r).sp2_miistat[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_AUTONEG_ABILITYf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_LINK_STATUSf_GET(r) ((((r).sp2_miistat[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_LINK_STATUSf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_JABBER_DETECTf_GET(r) ((((r).sp2_miistat[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_JABBER_DETECTf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_EXTENDED_CAPABILITYf_GET(r) (((r).sp2_miistat[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_EXTENDED_CAPABILITYf_SET(r,f) (r).sp2_miistat[0]=(((r).sp2_miistat[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_MIISTAT.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_MIISTATr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr,(_r._sp2_miistat))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MIISTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr,(_r._sp2_miistat)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MIISTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr,(_r._sp2_miistat))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_MIISTATr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_miistat))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MIISTATr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_miistat))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MIISTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_miistat))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_MIISTATr BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr
#define SP2_MIISTATr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_t SP2_MIISTATr_t;
#define SP2_MIISTATr_CLR BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_CLR
#define SP2_MIISTATr_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_SET
#define SP2_MIISTATr_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_GET
#define SP2_MIISTATr_S100BASE_T4_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_T4_CAPABLEf_GET
#define SP2_MIISTATr_S100BASE_T4_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_T4_CAPABLEf_SET
#define SP2_MIISTATr_S100BASE_X_FULL_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_X_FULL_DUPLEX_CAPABLEf_GET
#define SP2_MIISTATr_S100BASE_X_FULL_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_X_FULL_DUPLEX_CAPABLEf_SET
#define SP2_MIISTATr_S100BASE_X_HALF_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_X_HALF_DUPLEX_CAPABLEf_GET
#define SP2_MIISTATr_S100BASE_X_HALF_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_X_HALF_DUPLEX_CAPABLEf_SET
#define SP2_MIISTATr_S10BASE_T_FULL_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S10BASE_T_FULL_DUPLEX_CAPABLEf_GET
#define SP2_MIISTATr_S10BASE_T_FULL_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S10BASE_T_FULL_DUPLEX_CAPABLEf_SET
#define SP2_MIISTATr_S10BASE_T_HALF_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S10BASE_T_HALF_DUPLEX_CAPABLEf_GET
#define SP2_MIISTATr_S10BASE_T_HALF_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S10BASE_T_HALF_DUPLEX_CAPABLEf_SET
#define SP2_MIISTATr_S100BASE_T2_FULL_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_T2_FULL_DUPLEX_CAPABLEf_GET
#define SP2_MIISTATr_S100BASE_T2_FULL_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_T2_FULL_DUPLEX_CAPABLEf_SET
#define SP2_MIISTATr_S100BASE_T2_HALF_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_T2_HALF_DUPLEX_CAPABLEf_GET
#define SP2_MIISTATr_S100BASE_T2_HALF_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_S100BASE_T2_HALF_DUPLEX_CAPABLEf_SET
#define SP2_MIISTATr_EXTENDED_STATUSf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_EXTENDED_STATUSf_GET
#define SP2_MIISTATr_EXTENDED_STATUSf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_EXTENDED_STATUSf_SET
#define SP2_MIISTATr_MF_PREAMBLE_SUPRESSIONf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_MF_PREAMBLE_SUPRESSIONf_GET
#define SP2_MIISTATr_MF_PREAMBLE_SUPRESSIONf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_MF_PREAMBLE_SUPRESSIONf_SET
#define SP2_MIISTATr_AUTONEG_COMPLETEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_AUTONEG_COMPLETEf_GET
#define SP2_MIISTATr_AUTONEG_COMPLETEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_AUTONEG_COMPLETEf_SET
#define SP2_MIISTATr_REMOTE_FAULT_STATf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_REMOTE_FAULT_STATf_GET
#define SP2_MIISTATr_REMOTE_FAULT_STATf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_REMOTE_FAULT_STATf_SET
#define SP2_MIISTATr_AUTONEG_ABILITYf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_AUTONEG_ABILITYf_GET
#define SP2_MIISTATr_AUTONEG_ABILITYf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_AUTONEG_ABILITYf_SET
#define SP2_MIISTATr_LINK_STATUSf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_LINK_STATUSf_GET
#define SP2_MIISTATr_LINK_STATUSf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_LINK_STATUSf_SET
#define SP2_MIISTATr_JABBER_DETECTf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_JABBER_DETECTf_GET
#define SP2_MIISTATr_JABBER_DETECTf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_JABBER_DETECTf_SET
#define SP2_MIISTATr_EXTENDED_CAPABILITYf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_EXTENDED_CAPABILITYf_GET
#define SP2_MIISTATr_EXTENDED_CAPABILITYf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr_EXTENDED_CAPABILITYf_SET
#define READ_SP2_MIISTATr BCMI_SGMIIP2X4_SERDES_READ_SP2_MIISTATr
#define WRITE_SP2_MIISTATr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MIISTATr
#define MODIFY_SP2_MIISTATr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MIISTATr
#define READLN_SP2_MIISTATr BCMI_SGMIIP2X4_SERDES_READLN_SP2_MIISTATr
#define WRITELN_SP2_MIISTATr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MIISTATr
#define WRITEALL_SP2_MIISTATr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MIISTATr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_MIISTATr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_ID1
 * BLOCKS:   CL22_B0
 * REGADDR:  0x0002
 * DESC:     IEEE phy ID LSByte register
 * RESETVAL: 0x143 (323)
 * ACCESS:   R/O
 * FIELDS:
 *     REGID            PHYID register, MSB
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_ID1r (0x00000002 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_ID1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_ID1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_ID1r_s {
	uint32_t v[1];
	uint32_t sp2_id1[1];
	uint32_t _sp2_id1;
} BCMI_SGMIIP2X4_SERDES_SP2_ID1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_ID1r_CLR(r) (r).sp2_id1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_ID1r_SET(r,d) (r).sp2_id1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_ID1r_GET(r) (r).sp2_id1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_ID1r_REGIDf_GET(r) (((r).sp2_id1[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_ID1r_REGIDf_SET(r,f) (r).sp2_id1[0]=(((r).sp2_id1[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_ID1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_ID1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_ID1r,(_r._sp2_id1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_ID1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_ID1r,(_r._sp2_id1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_ID1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_ID1r,(_r._sp2_id1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_ID1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_ID1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_id1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_ID1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_ID1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_id1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_ID1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_ID1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_id1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_ID1r BCMI_SGMIIP2X4_SERDES_SP2_ID1r
#define SP2_ID1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_ID1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_ID1r_t SP2_ID1r_t;
#define SP2_ID1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_ID1r_CLR
#define SP2_ID1r_SET BCMI_SGMIIP2X4_SERDES_SP2_ID1r_SET
#define SP2_ID1r_GET BCMI_SGMIIP2X4_SERDES_SP2_ID1r_GET
#define SP2_ID1r_REGIDf_GET BCMI_SGMIIP2X4_SERDES_SP2_ID1r_REGIDf_GET
#define SP2_ID1r_REGIDf_SET BCMI_SGMIIP2X4_SERDES_SP2_ID1r_REGIDf_SET
#define READ_SP2_ID1r BCMI_SGMIIP2X4_SERDES_READ_SP2_ID1r
#define WRITE_SP2_ID1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_ID1r
#define MODIFY_SP2_ID1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_ID1r
#define READLN_SP2_ID1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_ID1r
#define WRITELN_SP2_ID1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_ID1r
#define WRITEALL_SP2_ID1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_ID1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_ID1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_ID2
 * BLOCKS:   CL22_B0
 * REGADDR:  0x0003
 * DESC:     IEEE phy ID MSByte register
 * RESETVAL: 0xbff0 (49136)
 * ACCESS:   R/O
 * FIELDS:
 *     REGID            PHYID register, LSB
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_ID2r (0x00000003 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_ID2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_ID2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_ID2r_s {
	uint32_t v[1];
	uint32_t sp2_id2[1];
	uint32_t _sp2_id2;
} BCMI_SGMIIP2X4_SERDES_SP2_ID2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_ID2r_CLR(r) (r).sp2_id2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_ID2r_SET(r,d) (r).sp2_id2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_ID2r_GET(r) (r).sp2_id2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_ID2r_REGIDf_GET(r) (((r).sp2_id2[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_ID2r_REGIDf_SET(r,f) (r).sp2_id2[0]=(((r).sp2_id2[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_ID2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_ID2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_ID2r,(_r._sp2_id2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_ID2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_ID2r,(_r._sp2_id2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_ID2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_ID2r,(_r._sp2_id2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_ID2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_ID2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_id2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_ID2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_ID2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_id2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_ID2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_ID2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_id2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_ID2r BCMI_SGMIIP2X4_SERDES_SP2_ID2r
#define SP2_ID2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_ID2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_ID2r_t SP2_ID2r_t;
#define SP2_ID2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_ID2r_CLR
#define SP2_ID2r_SET BCMI_SGMIIP2X4_SERDES_SP2_ID2r_SET
#define SP2_ID2r_GET BCMI_SGMIIP2X4_SERDES_SP2_ID2r_GET
#define SP2_ID2r_REGIDf_GET BCMI_SGMIIP2X4_SERDES_SP2_ID2r_REGIDf_GET
#define SP2_ID2r_REGIDf_SET BCMI_SGMIIP2X4_SERDES_SP2_ID2r_REGIDf_SET
#define READ_SP2_ID2r BCMI_SGMIIP2X4_SERDES_READ_SP2_ID2r
#define WRITE_SP2_ID2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_ID2r
#define MODIFY_SP2_ID2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_ID2r
#define READLN_SP2_ID2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_ID2r
#define WRITELN_SP2_ID2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_ID2r
#define WRITEALL_SP2_ID2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_ID2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_ID2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_AUTONEGADV
 * BLOCKS:   CL22_B0
 * REGADDR:  0x0004
 * DESC:     IEEE auto-negotiation advertised abilities register
 * RESETVAL: 0x20 (32)
 * ACCESS:   R/W
 * FIELDS:
 *     FULL_DUPLEX      1 = advertise full-duplex0 = do not advertise full-duplex
 *     HALF_DUPLEX      1 = advertise half-duplex0 = do not advertise half-duplex
 *     PAUSE            Bits8 7---0 0 = no pause0 1 = symmetric pause1 0 = asymmetric pause toward link partner1 1 = both symmetric pause and asymmetricpause toward local device
 *     REMOTE_FAULT     Bits13 12-----0 0 = no_remote_fault0 1 = link_failure1 0 = offline1 1 = autoneg_error
 *     NEXT_PAGE        1 = supports additional pages using NP function0 = does not support additional pages using NP function
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr (0x00000004 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_SIZE 4

/*
 * This structure should be used to declare and program SP2_AUTONEGADV.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_s {
	uint32_t v[1];
	uint32_t sp2_autonegadv[1];
	uint32_t _sp2_autonegadv;
} BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_CLR(r) (r).sp2_autonegadv[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_SET(r,d) (r).sp2_autonegadv[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_GET(r) (r).sp2_autonegadv[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_NEXT_PAGEf_GET(r) ((((r).sp2_autonegadv[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_NEXT_PAGEf_SET(r,f) (r).sp2_autonegadv[0]=(((r).sp2_autonegadv[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_REMOTE_FAULTf_GET(r) ((((r).sp2_autonegadv[0]) >> 12) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_REMOTE_FAULTf_SET(r,f) (r).sp2_autonegadv[0]=(((r).sp2_autonegadv[0] & ~((uint32_t)0x3 << 12)) | ((((uint32_t)f) & 0x3) << 12)) | (3 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_PAUSEf_GET(r) ((((r).sp2_autonegadv[0]) >> 7) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_PAUSEf_SET(r,f) (r).sp2_autonegadv[0]=(((r).sp2_autonegadv[0] & ~((uint32_t)0x3 << 7)) | ((((uint32_t)f) & 0x3) << 7)) | (3 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_HALF_DUPLEXf_GET(r) ((((r).sp2_autonegadv[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_HALF_DUPLEXf_SET(r,f) (r).sp2_autonegadv[0]=(((r).sp2_autonegadv[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_FULL_DUPLEXf_GET(r) ((((r).sp2_autonegadv[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_FULL_DUPLEXf_SET(r,f) (r).sp2_autonegadv[0]=(((r).sp2_autonegadv[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))

/*
 * These macros can be used to access SP2_AUTONEGADV.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_AUTONEGADVr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr,(_r._sp2_autonegadv))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_AUTONEGADVr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr,(_r._sp2_autonegadv)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_AUTONEGADVr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr,(_r._sp2_autonegadv))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_AUTONEGADVr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_autonegadv))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_AUTONEGADVr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_autonegadv))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_AUTONEGADVr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_autonegadv))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_AUTONEGADVr BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr
#define SP2_AUTONEGADVr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_t SP2_AUTONEGADVr_t;
#define SP2_AUTONEGADVr_CLR BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_CLR
#define SP2_AUTONEGADVr_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_SET
#define SP2_AUTONEGADVr_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_GET
#define SP2_AUTONEGADVr_NEXT_PAGEf_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_NEXT_PAGEf_GET
#define SP2_AUTONEGADVr_NEXT_PAGEf_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_NEXT_PAGEf_SET
#define SP2_AUTONEGADVr_REMOTE_FAULTf_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_REMOTE_FAULTf_GET
#define SP2_AUTONEGADVr_REMOTE_FAULTf_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_REMOTE_FAULTf_SET
#define SP2_AUTONEGADVr_PAUSEf_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_PAUSEf_GET
#define SP2_AUTONEGADVr_PAUSEf_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_PAUSEf_SET
#define SP2_AUTONEGADVr_HALF_DUPLEXf_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_HALF_DUPLEXf_GET
#define SP2_AUTONEGADVr_HALF_DUPLEXf_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_HALF_DUPLEXf_SET
#define SP2_AUTONEGADVr_FULL_DUPLEXf_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_FULL_DUPLEXf_GET
#define SP2_AUTONEGADVr_FULL_DUPLEXf_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr_FULL_DUPLEXf_SET
#define READ_SP2_AUTONEGADVr BCMI_SGMIIP2X4_SERDES_READ_SP2_AUTONEGADVr
#define WRITE_SP2_AUTONEGADVr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_AUTONEGADVr
#define MODIFY_SP2_AUTONEGADVr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_AUTONEGADVr
#define READLN_SP2_AUTONEGADVr BCMI_SGMIIP2X4_SERDES_READLN_SP2_AUTONEGADVr
#define WRITELN_SP2_AUTONEGADVr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_AUTONEGADVr
#define WRITEALL_SP2_AUTONEGADVr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_AUTONEGADVr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGADVr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_AUTONEGLPABIL
 * BLOCKS:   CL22_B0
 * REGADDR:  0x0005
 * DESC:     IEEE auto-negotiation link partner abilities register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/O
 * FIELDS:
 *     MR_LP_ADV_ABILITY bit15, next page, 1 = link partner is next page ablebit14, ack, 1 = link partner has received link code wordbit13:12, lp remote faultbit8:7, lp pausebit6, 1 = link partner is half-duplex capablebit5, 1 = link partner is full duplex capablebit0, 1 = SGMII mode, 0 = fiber modeNote: When the link partner is in SGMII mode (bit 0 = 1), then bit 15 = link, bit 12 = duplex, bits 11:10 = speed, bit 14 = acknowledge. The other bits are reserved and should be zero.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr (0x00000005 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_SIZE 4

/*
 * This structure should be used to declare and program SP2_AUTONEGLPABIL.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_s {
	uint32_t v[1];
	uint32_t sp2_autoneglpabil[1];
	uint32_t _sp2_autoneglpabil;
} BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_CLR(r) (r).sp2_autoneglpabil[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_SET(r,d) (r).sp2_autoneglpabil[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_GET(r) (r).sp2_autoneglpabil[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_MR_LP_ADV_ABILITYf_GET(r) (((r).sp2_autoneglpabil[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_MR_LP_ADV_ABILITYf_SET(r,f) (r).sp2_autoneglpabil[0]=(((r).sp2_autoneglpabil[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_AUTONEGLPABIL.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_AUTONEGLPABILr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr,(_r._sp2_autoneglpabil))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_AUTONEGLPABILr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr,(_r._sp2_autoneglpabil)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_AUTONEGLPABILr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr,(_r._sp2_autoneglpabil))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_AUTONEGLPABILr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_autoneglpabil))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_AUTONEGLPABILr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_autoneglpabil))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_AUTONEGLPABILr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_autoneglpabil))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_AUTONEGLPABILr BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr
#define SP2_AUTONEGLPABILr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_t SP2_AUTONEGLPABILr_t;
#define SP2_AUTONEGLPABILr_CLR BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_CLR
#define SP2_AUTONEGLPABILr_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_SET
#define SP2_AUTONEGLPABILr_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_GET
#define SP2_AUTONEGLPABILr_MR_LP_ADV_ABILITYf_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_MR_LP_ADV_ABILITYf_GET
#define SP2_AUTONEGLPABILr_MR_LP_ADV_ABILITYf_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr_MR_LP_ADV_ABILITYf_SET
#define READ_SP2_AUTONEGLPABILr BCMI_SGMIIP2X4_SERDES_READ_SP2_AUTONEGLPABILr
#define WRITE_SP2_AUTONEGLPABILr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_AUTONEGLPABILr
#define MODIFY_SP2_AUTONEGLPABILr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_AUTONEGLPABILr
#define READLN_SP2_AUTONEGLPABILr BCMI_SGMIIP2X4_SERDES_READLN_SP2_AUTONEGLPABILr
#define WRITELN_SP2_AUTONEGLPABILr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_AUTONEGLPABILr
#define WRITEALL_SP2_AUTONEGLPABILr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_AUTONEGLPABILr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABILr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_AUTONEGEXP
 * BLOCKS:   CL22_B0
 * REGADDR:  0x0006
 * DESC:     IEEE auto-negotiation expansion register
 * RESETVAL: 0x4 (4)
 * ACCESS:   R/O
 * FIELDS:
 *     LATCH_PAGE_RX    1 = new link code word has been received0 = new link code word has not been received
 *     NEXT_PAGE_ABILITY 1 = local device is next page able0 = local device is not next page able
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr (0x00000006 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_SIZE 4

/*
 * This structure should be used to declare and program SP2_AUTONEGEXP.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_s {
	uint32_t v[1];
	uint32_t sp2_autonegexp[1];
	uint32_t _sp2_autonegexp;
} BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_CLR(r) (r).sp2_autonegexp[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_SET(r,d) (r).sp2_autonegexp[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_GET(r) (r).sp2_autonegexp[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_NEXT_PAGE_ABILITYf_GET(r) ((((r).sp2_autonegexp[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_NEXT_PAGE_ABILITYf_SET(r,f) (r).sp2_autonegexp[0]=(((r).sp2_autonegexp[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_LATCH_PAGE_RXf_GET(r) ((((r).sp2_autonegexp[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_LATCH_PAGE_RXf_SET(r,f) (r).sp2_autonegexp[0]=(((r).sp2_autonegexp[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))

/*
 * These macros can be used to access SP2_AUTONEGEXP.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_AUTONEGEXPr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr,(_r._sp2_autonegexp))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_AUTONEGEXPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr,(_r._sp2_autonegexp)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_AUTONEGEXPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr,(_r._sp2_autonegexp))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_AUTONEGEXPr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_autonegexp))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_AUTONEGEXPr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_autonegexp))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_AUTONEGEXPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_autonegexp))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_AUTONEGEXPr BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr
#define SP2_AUTONEGEXPr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_t SP2_AUTONEGEXPr_t;
#define SP2_AUTONEGEXPr_CLR BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_CLR
#define SP2_AUTONEGEXPr_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_SET
#define SP2_AUTONEGEXPr_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_GET
#define SP2_AUTONEGEXPr_NEXT_PAGE_ABILITYf_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_NEXT_PAGE_ABILITYf_GET
#define SP2_AUTONEGEXPr_NEXT_PAGE_ABILITYf_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_NEXT_PAGE_ABILITYf_SET
#define SP2_AUTONEGEXPr_LATCH_PAGE_RXf_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_LATCH_PAGE_RXf_GET
#define SP2_AUTONEGEXPr_LATCH_PAGE_RXf_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr_LATCH_PAGE_RXf_SET
#define READ_SP2_AUTONEGEXPr BCMI_SGMIIP2X4_SERDES_READ_SP2_AUTONEGEXPr
#define WRITE_SP2_AUTONEGEXPr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_AUTONEGEXPr
#define MODIFY_SP2_AUTONEGEXPr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_AUTONEGEXPr
#define READLN_SP2_AUTONEGEXPr BCMI_SGMIIP2X4_SERDES_READLN_SP2_AUTONEGEXPr
#define WRITELN_SP2_AUTONEGEXPr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_AUTONEGEXPr
#define WRITEALL_SP2_AUTONEGEXPr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_AUTONEGEXPr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGEXPr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_AUTONEGNP
 * BLOCKS:   CL22_B0
 * REGADDR:  0x0007
 * DESC:     IEEE auto-negotiation next page register
 * RESETVAL: 0x2001 (8193)
 * ACCESS:   R/W
 * FIELDS:
 *     MESSAGE          Message or Unformatted Code Field11'h400 = Over 1G Message Page11'h410 = Remote CuPHY Message Page11'h411 = MDIO Register Write Message Page11'h412 = MDIO Register Read Request Message Page11'h413 = MDIO Register Response Message PageSee IEEE 802.3 Annex 28C for more standard next page detailsSee BRCM-Serdes-AN for BAM specific details
 *     TOGGLE           Opposite value of bit in previous page
 *     ACK2             Acknowledge 2 bit
 *     MESSAGE_PAGE     0 = Unformatted Page1 = Message Page
 *     ACK              Acknowledge bit
 *     NEXT_PAGE        0 = last page1 = additional next page(s) follow
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr (0x00000007 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_SIZE 4

/*
 * This structure should be used to declare and program SP2_AUTONEGNP.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_s {
	uint32_t v[1];
	uint32_t sp2_autonegnp[1];
	uint32_t _sp2_autonegnp;
} BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_CLR(r) (r).sp2_autonegnp[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_SET(r,d) (r).sp2_autonegnp[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_GET(r) (r).sp2_autonegnp[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_NEXT_PAGEf_GET(r) ((((r).sp2_autonegnp[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_NEXT_PAGEf_SET(r,f) (r).sp2_autonegnp[0]=(((r).sp2_autonegnp[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_ACKf_GET(r) ((((r).sp2_autonegnp[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_ACKf_SET(r,f) (r).sp2_autonegnp[0]=(((r).sp2_autonegnp[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_MESSAGE_PAGEf_GET(r) ((((r).sp2_autonegnp[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_MESSAGE_PAGEf_SET(r,f) (r).sp2_autonegnp[0]=(((r).sp2_autonegnp[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_ACK2f_GET(r) ((((r).sp2_autonegnp[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_ACK2f_SET(r,f) (r).sp2_autonegnp[0]=(((r).sp2_autonegnp[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_TOGGLEf_GET(r) ((((r).sp2_autonegnp[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_TOGGLEf_SET(r,f) (r).sp2_autonegnp[0]=(((r).sp2_autonegnp[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_MESSAGEf_GET(r) (((r).sp2_autonegnp[0]) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_MESSAGEf_SET(r,f) (r).sp2_autonegnp[0]=(((r).sp2_autonegnp[0] & ~((uint32_t)0x7ff)) | (((uint32_t)f) & 0x7ff)) | (0x7ff << 16)

/*
 * These macros can be used to access SP2_AUTONEGNP.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_AUTONEGNPr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr,(_r._sp2_autonegnp))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_AUTONEGNPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr,(_r._sp2_autonegnp)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_AUTONEGNPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr,(_r._sp2_autonegnp))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_AUTONEGNPr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_autonegnp))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_AUTONEGNPr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_autonegnp))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_AUTONEGNPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_autonegnp))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_AUTONEGNPr BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr
#define SP2_AUTONEGNPr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_t SP2_AUTONEGNPr_t;
#define SP2_AUTONEGNPr_CLR BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_CLR
#define SP2_AUTONEGNPr_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_SET
#define SP2_AUTONEGNPr_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_GET
#define SP2_AUTONEGNPr_NEXT_PAGEf_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_NEXT_PAGEf_GET
#define SP2_AUTONEGNPr_NEXT_PAGEf_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_NEXT_PAGEf_SET
#define SP2_AUTONEGNPr_ACKf_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_ACKf_GET
#define SP2_AUTONEGNPr_ACKf_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_ACKf_SET
#define SP2_AUTONEGNPr_MESSAGE_PAGEf_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_MESSAGE_PAGEf_GET
#define SP2_AUTONEGNPr_MESSAGE_PAGEf_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_MESSAGE_PAGEf_SET
#define SP2_AUTONEGNPr_ACK2f_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_ACK2f_GET
#define SP2_AUTONEGNPr_ACK2f_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_ACK2f_SET
#define SP2_AUTONEGNPr_TOGGLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_TOGGLEf_GET
#define SP2_AUTONEGNPr_TOGGLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_TOGGLEf_SET
#define SP2_AUTONEGNPr_MESSAGEf_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_MESSAGEf_GET
#define SP2_AUTONEGNPr_MESSAGEf_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr_MESSAGEf_SET
#define READ_SP2_AUTONEGNPr BCMI_SGMIIP2X4_SERDES_READ_SP2_AUTONEGNPr
#define WRITE_SP2_AUTONEGNPr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_AUTONEGNPr
#define MODIFY_SP2_AUTONEGNPr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_AUTONEGNPr
#define READLN_SP2_AUTONEGNPr BCMI_SGMIIP2X4_SERDES_READLN_SP2_AUTONEGNPr
#define WRITELN_SP2_AUTONEGNPr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_AUTONEGNPr
#define WRITEALL_SP2_AUTONEGNPr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_AUTONEGNPr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGNPr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_AUTONEGLPABIL2
 * BLOCKS:   CL22_B0
 * REGADDR:  0x0008
 * DESC:     IEEE auto-negotiation link partner next page register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/O
 * FIELDS:
 *     MR_LP_NP_RX_O    bit15, next page, 0 = last page, 1 = additional next page(s) followbit14, ack, 1 = link partner has received next pagebit13, msg page, 1 = message pagebit12, ack2bit11, toggle, Opposite value of bit in previous pagebit10:0, Message or Unformatted Code Field
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r (0x00000008 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_AUTONEGLPABIL2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_s {
	uint32_t v[1];
	uint32_t sp2_autoneglpabil2[1];
	uint32_t _sp2_autoneglpabil2;
} BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_CLR(r) (r).sp2_autoneglpabil2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_SET(r,d) (r).sp2_autoneglpabil2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_GET(r) (r).sp2_autoneglpabil2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_MR_LP_NP_RX_Of_GET(r) (((r).sp2_autoneglpabil2[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_MR_LP_NP_RX_Of_SET(r,f) (r).sp2_autoneglpabil2[0]=(((r).sp2_autoneglpabil2[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_AUTONEGLPABIL2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_AUTONEGLPABIL2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r,(_r._sp2_autoneglpabil2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_AUTONEGLPABIL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r,(_r._sp2_autoneglpabil2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_AUTONEGLPABIL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r,(_r._sp2_autoneglpabil2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_AUTONEGLPABIL2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_autoneglpabil2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_AUTONEGLPABIL2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_autoneglpabil2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_AUTONEGLPABIL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_autoneglpabil2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_AUTONEGLPABIL2r BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r
#define SP2_AUTONEGLPABIL2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_t SP2_AUTONEGLPABIL2r_t;
#define SP2_AUTONEGLPABIL2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_CLR
#define SP2_AUTONEGLPABIL2r_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_SET
#define SP2_AUTONEGLPABIL2r_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_GET
#define SP2_AUTONEGLPABIL2r_MR_LP_NP_RX_Of_GET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_MR_LP_NP_RX_Of_GET
#define SP2_AUTONEGLPABIL2r_MR_LP_NP_RX_Of_SET BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r_MR_LP_NP_RX_Of_SET
#define READ_SP2_AUTONEGLPABIL2r BCMI_SGMIIP2X4_SERDES_READ_SP2_AUTONEGLPABIL2r
#define WRITE_SP2_AUTONEGLPABIL2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_AUTONEGLPABIL2r
#define MODIFY_SP2_AUTONEGLPABIL2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_AUTONEGLPABIL2r
#define READLN_SP2_AUTONEGLPABIL2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_AUTONEGLPABIL2r
#define WRITELN_SP2_AUTONEGLPABIL2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_AUTONEGLPABIL2r
#define WRITEALL_SP2_AUTONEGLPABIL2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_AUTONEGLPABIL2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_AUTONEGLPABIL2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_MMD_ACCCTL
 * BLOCKS:   CL22_B0
 * REGADDR:  0x000d
 * DESC:     IEEE MMD Access Control Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     DEVAD            device address
 *     INCREMENT_CTRL   00 = address01 = data, no post increment10 = data, post increment on reads and writes11 = data, post increment on writes only0 = not 1000Base-X full duplex capable
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr (0x0000000d | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_SIZE 4

/*
 * This structure should be used to declare and program SP2_MMD_ACCCTL.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_s {
	uint32_t v[1];
	uint32_t sp2_mmd_accctl[1];
	uint32_t _sp2_mmd_accctl;
} BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_CLR(r) (r).sp2_mmd_accctl[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_SET(r,d) (r).sp2_mmd_accctl[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_GET(r) (r).sp2_mmd_accctl[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_INCREMENT_CTRLf_GET(r) ((((r).sp2_mmd_accctl[0]) >> 14) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_INCREMENT_CTRLf_SET(r,f) (r).sp2_mmd_accctl[0]=(((r).sp2_mmd_accctl[0] & ~((uint32_t)0x3 << 14)) | ((((uint32_t)f) & 0x3) << 14)) | (3 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_DEVADf_GET(r) (((r).sp2_mmd_accctl[0]) & 0x1f)
#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_DEVADf_SET(r,f) (r).sp2_mmd_accctl[0]=(((r).sp2_mmd_accctl[0] & ~((uint32_t)0x1f)) | (((uint32_t)f) & 0x1f)) | (0x1f << 16)

/*
 * These macros can be used to access SP2_MMD_ACCCTL.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_MMD_ACCCTLr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr,(_r._sp2_mmd_accctl))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MMD_ACCCTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr,(_r._sp2_mmd_accctl)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MMD_ACCCTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr,(_r._sp2_mmd_accctl))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_MMD_ACCCTLr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_mmd_accctl))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MMD_ACCCTLr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_mmd_accctl))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MMD_ACCCTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_mmd_accctl))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_MMD_ACCCTLr BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr
#define SP2_MMD_ACCCTLr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_t SP2_MMD_ACCCTLr_t;
#define SP2_MMD_ACCCTLr_CLR BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_CLR
#define SP2_MMD_ACCCTLr_SET BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_SET
#define SP2_MMD_ACCCTLr_GET BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_GET
#define SP2_MMD_ACCCTLr_INCREMENT_CTRLf_GET BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_INCREMENT_CTRLf_GET
#define SP2_MMD_ACCCTLr_INCREMENT_CTRLf_SET BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_INCREMENT_CTRLf_SET
#define SP2_MMD_ACCCTLr_DEVADf_GET BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_DEVADf_GET
#define SP2_MMD_ACCCTLr_DEVADf_SET BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr_DEVADf_SET
#define READ_SP2_MMD_ACCCTLr BCMI_SGMIIP2X4_SERDES_READ_SP2_MMD_ACCCTLr
#define WRITE_SP2_MMD_ACCCTLr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MMD_ACCCTLr
#define MODIFY_SP2_MMD_ACCCTLr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MMD_ACCCTLr
#define READLN_SP2_MMD_ACCCTLr BCMI_SGMIIP2X4_SERDES_READLN_SP2_MMD_ACCCTLr
#define WRITELN_SP2_MMD_ACCCTLr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MMD_ACCCTLr
#define WRITEALL_SP2_MMD_ACCCTLr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MMD_ACCCTLr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCCTLr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_MMD_ACCAD
 * BLOCKS:   CL22_B0
 * REGADDR:  0x000e
 * DESC:     IEEE MMD Access Data Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     ADDRDATA         if MMD_AccessControl.increment_ctrl = 00, this is used as an address register, otherwise this is used as a data reg01 = data, no post increment10 = data, post increment on reads and writes11 = data, post increment on writes only0 = not 1000Base-X full duplex capable
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr (0x0000000e | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_SIZE 4

/*
 * This structure should be used to declare and program SP2_MMD_ACCAD.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_s {
	uint32_t v[1];
	uint32_t sp2_mmd_accad[1];
	uint32_t _sp2_mmd_accad;
} BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_CLR(r) (r).sp2_mmd_accad[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_SET(r,d) (r).sp2_mmd_accad[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_GET(r) (r).sp2_mmd_accad[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_ADDRDATAf_GET(r) (((r).sp2_mmd_accad[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_ADDRDATAf_SET(r,f) (r).sp2_mmd_accad[0]=(((r).sp2_mmd_accad[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_MMD_ACCAD.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_MMD_ACCADr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr,(_r._sp2_mmd_accad))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MMD_ACCADr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr,(_r._sp2_mmd_accad)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MMD_ACCADr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr,(_r._sp2_mmd_accad))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_MMD_ACCADr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_mmd_accad))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MMD_ACCADr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_mmd_accad))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MMD_ACCADr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_mmd_accad))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_MMD_ACCADr BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr
#define SP2_MMD_ACCADr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_t SP2_MMD_ACCADr_t;
#define SP2_MMD_ACCADr_CLR BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_CLR
#define SP2_MMD_ACCADr_SET BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_SET
#define SP2_MMD_ACCADr_GET BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_GET
#define SP2_MMD_ACCADr_ADDRDATAf_GET BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_ADDRDATAf_GET
#define SP2_MMD_ACCADr_ADDRDATAf_SET BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr_ADDRDATAf_SET
#define READ_SP2_MMD_ACCADr BCMI_SGMIIP2X4_SERDES_READ_SP2_MMD_ACCADr
#define WRITE_SP2_MMD_ACCADr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MMD_ACCADr
#define MODIFY_SP2_MMD_ACCADr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MMD_ACCADr
#define READLN_SP2_MMD_ACCADr BCMI_SGMIIP2X4_SERDES_READLN_SP2_MMD_ACCADr
#define WRITELN_SP2_MMD_ACCADr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MMD_ACCADr
#define WRITEALL_SP2_MMD_ACCADr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MMD_ACCADr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_MMD_ACCADr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_MIIEXTSTAT
 * BLOCKS:   CL22_B0
 * REGADDR:  0x000f
 * DESC:     IEEE MII extended status register
 * RESETVAL: 0xc000 (49152)
 * ACCESS:   R/O
 * FIELDS:
 *     S1000BASE_T_HALF_DUPLEX_CAPABLE 1 = 1000Base-T half duplex capable0 = not 1000Base-T half duplex capable
 *     S1000BASE_T_FULL_DUPLEX_CAPABLE 1 = 1000Base-T full duplex capable0 = not 1000Base-T full duplex capable
 *     S1000BASE_X_HALF_DUPLEX_CAPABLE 1 = 1000Base-X half duplex capable0 = not 1000Base-X half duplex capable
 *     S1000BASE_X_FULL_DUPLEX_CAPABLE 1 = 1000Base-X full duplex capable0 = not 1000Base-X full duplex capable
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr (0x0000000f | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_SIZE 4

/*
 * This structure should be used to declare and program SP2_MIIEXTSTAT.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_s {
	uint32_t v[1];
	uint32_t sp2_miiextstat[1];
	uint32_t _sp2_miiextstat;
} BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_CLR(r) (r).sp2_miiextstat[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_SET(r,d) (r).sp2_miiextstat[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_GET(r) (r).sp2_miiextstat[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_X_FULL_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_miiextstat[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_X_FULL_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_miiextstat[0]=(((r).sp2_miiextstat[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_X_HALF_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_miiextstat[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_X_HALF_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_miiextstat[0]=(((r).sp2_miiextstat[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_T_FULL_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_miiextstat[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_T_FULL_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_miiextstat[0]=(((r).sp2_miiextstat[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_T_HALF_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_miiextstat[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_T_HALF_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_miiextstat[0]=(((r).sp2_miiextstat[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))

/*
 * These macros can be used to access SP2_MIIEXTSTAT.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_MIIEXTSTATr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr,(_r._sp2_miiextstat))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MIIEXTSTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr,(_r._sp2_miiextstat)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MIIEXTSTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr,(_r._sp2_miiextstat))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_MIIEXTSTATr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_miiextstat))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MIIEXTSTATr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_miiextstat))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MIIEXTSTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_miiextstat))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_MIIEXTSTATr BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr
#define SP2_MIIEXTSTATr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_t SP2_MIIEXTSTATr_t;
#define SP2_MIIEXTSTATr_CLR BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_CLR
#define SP2_MIIEXTSTATr_SET BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_SET
#define SP2_MIIEXTSTATr_GET BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_GET
#define SP2_MIIEXTSTATr_S1000BASE_X_FULL_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_X_FULL_DUPLEX_CAPABLEf_GET
#define SP2_MIIEXTSTATr_S1000BASE_X_FULL_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_X_FULL_DUPLEX_CAPABLEf_SET
#define SP2_MIIEXTSTATr_S1000BASE_X_HALF_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_X_HALF_DUPLEX_CAPABLEf_GET
#define SP2_MIIEXTSTATr_S1000BASE_X_HALF_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_X_HALF_DUPLEX_CAPABLEf_SET
#define SP2_MIIEXTSTATr_S1000BASE_T_FULL_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_T_FULL_DUPLEX_CAPABLEf_GET
#define SP2_MIIEXTSTATr_S1000BASE_T_FULL_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_T_FULL_DUPLEX_CAPABLEf_SET
#define SP2_MIIEXTSTATr_S1000BASE_T_HALF_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_T_HALF_DUPLEX_CAPABLEf_GET
#define SP2_MIIEXTSTATr_S1000BASE_T_HALF_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr_S1000BASE_T_HALF_DUPLEX_CAPABLEf_SET
#define READ_SP2_MIIEXTSTATr BCMI_SGMIIP2X4_SERDES_READ_SP2_MIIEXTSTATr
#define WRITE_SP2_MIIEXTSTATr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MIIEXTSTATr
#define MODIFY_SP2_MIIEXTSTATr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MIIEXTSTATr
#define READLN_SP2_MIIEXTSTATr BCMI_SGMIIP2X4_SERDES_READLN_SP2_MIIEXTSTATr
#define WRITELN_SP2_MIIEXTSTATr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MIIEXTSTATr
#define WRITEALL_SP2_MIIEXTSTATr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MIIEXTSTATr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_MIIEXTSTATr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_XGXSCTL
 * BLOCKS:   BLK0
 * REGADDR:  0x8000
 * DESC:     XGXS control register
 * RESETVAL: 0x252f (9519)
 * ACCESS:   R/W
 * FIELDS:
 *     TXCKO_DIV        Selects txcko divide by 21 = txcko/20 = txcko.
 *     AFRST_EN         Automatic 10+G Tx input fifo reset enable
 *     EDEN             8B/10B encoder/decoder enable for 4-lane XGXS/XAUI modes
 *     CDET_EN          Comma detect enable
 *     MDIO_CONT_EN     Enable 1G MDIO controls
 *     HSTL             
 *     MODE             NOTES:- OS2 = When VCO=6.25, Oversample by 2 to get 2.5G- OS4 = When VCO=5, Oversample by 4 to get 1G- OS5 = When VCO=6.25, Oversample by 5 to get 1G- ComboCoreMode = Serdes/UniCore mode; i.e. 10M, 100M, 1G, 2.5G, 10G- Core usage as multiple single lane speeds not valid in mode = CClocks are turned off for all unspecified modesOperational modes:Default is set by strap pins, mode_strap
 *     START_SEQUENCER  1 = Enable Pll sequencer0 = reset Pll sequencer
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr (0x00008000 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_SIZE 4

/*
 * This structure should be used to declare and program SP2_XGXSCTL.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_s {
	uint32_t v[1];
	uint32_t sp2_xgxsctl[1];
	uint32_t _sp2_xgxsctl;
} BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_CLR(r) (r).sp2_xgxsctl[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_SET(r,d) (r).sp2_xgxsctl[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_GET(r) (r).sp2_xgxsctl[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_START_SEQUENCERf_GET(r) ((((r).sp2_xgxsctl[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_START_SEQUENCERf_SET(r,f) (r).sp2_xgxsctl[0]=(((r).sp2_xgxsctl[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_MODEf_GET(r) ((((r).sp2_xgxsctl[0]) >> 8) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_MODEf_SET(r,f) (r).sp2_xgxsctl[0]=(((r).sp2_xgxsctl[0] & ~((uint32_t)0xf << 8)) | ((((uint32_t)f) & 0xf) << 8)) | (15 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_HSTLf_GET(r) ((((r).sp2_xgxsctl[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_HSTLf_SET(r,f) (r).sp2_xgxsctl[0]=(((r).sp2_xgxsctl[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_MDIO_CONT_ENf_GET(r) ((((r).sp2_xgxsctl[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_MDIO_CONT_ENf_SET(r,f) (r).sp2_xgxsctl[0]=(((r).sp2_xgxsctl[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_CDET_ENf_GET(r) ((((r).sp2_xgxsctl[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_CDET_ENf_SET(r,f) (r).sp2_xgxsctl[0]=(((r).sp2_xgxsctl[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_EDENf_GET(r) ((((r).sp2_xgxsctl[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_EDENf_SET(r,f) (r).sp2_xgxsctl[0]=(((r).sp2_xgxsctl[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_AFRST_ENf_GET(r) ((((r).sp2_xgxsctl[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_AFRST_ENf_SET(r,f) (r).sp2_xgxsctl[0]=(((r).sp2_xgxsctl[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_TXCKO_DIVf_GET(r) (((r).sp2_xgxsctl[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_TXCKO_DIVf_SET(r,f) (r).sp2_xgxsctl[0]=(((r).sp2_xgxsctl[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_XGXSCTL.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_XGXSCTLr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr,(_r._sp2_xgxsctl))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_XGXSCTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr,(_r._sp2_xgxsctl)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_XGXSCTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr,(_r._sp2_xgxsctl))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_XGXSCTLr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_xgxsctl))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_XGXSCTLr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_xgxsctl))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_XGXSCTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_xgxsctl))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_XGXSCTLr BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr
#define SP2_XGXSCTLr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_t SP2_XGXSCTLr_t;
#define SP2_XGXSCTLr_CLR BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_CLR
#define SP2_XGXSCTLr_SET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_SET
#define SP2_XGXSCTLr_GET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_GET
#define SP2_XGXSCTLr_START_SEQUENCERf_GET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_START_SEQUENCERf_GET
#define SP2_XGXSCTLr_START_SEQUENCERf_SET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_START_SEQUENCERf_SET
#define SP2_XGXSCTLr_MODEf_GET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_MODEf_GET
#define SP2_XGXSCTLr_MODEf_SET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_MODEf_SET
#define SP2_XGXSCTLr_HSTLf_GET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_HSTLf_GET
#define SP2_XGXSCTLr_HSTLf_SET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_HSTLf_SET
#define SP2_XGXSCTLr_MDIO_CONT_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_MDIO_CONT_ENf_GET
#define SP2_XGXSCTLr_MDIO_CONT_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_MDIO_CONT_ENf_SET
#define SP2_XGXSCTLr_CDET_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_CDET_ENf_GET
#define SP2_XGXSCTLr_CDET_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_CDET_ENf_SET
#define SP2_XGXSCTLr_EDENf_GET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_EDENf_GET
#define SP2_XGXSCTLr_EDENf_SET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_EDENf_SET
#define SP2_XGXSCTLr_AFRST_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_AFRST_ENf_GET
#define SP2_XGXSCTLr_AFRST_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_AFRST_ENf_SET
#define SP2_XGXSCTLr_TXCKO_DIVf_GET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_TXCKO_DIVf_GET
#define SP2_XGXSCTLr_TXCKO_DIVf_SET BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr_TXCKO_DIVf_SET
#define READ_SP2_XGXSCTLr BCMI_SGMIIP2X4_SERDES_READ_SP2_XGXSCTLr
#define WRITE_SP2_XGXSCTLr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_XGXSCTLr
#define MODIFY_SP2_XGXSCTLr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_XGXSCTLr
#define READLN_SP2_XGXSCTLr BCMI_SGMIIP2X4_SERDES_READLN_SP2_XGXSCTLr
#define WRITELN_SP2_XGXSCTLr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_XGXSCTLr
#define WRITEALL_SP2_XGXSCTLr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_XGXSCTLr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_XGXSCTLr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_MMDSEL
 * BLOCKS:   BLK0
 * REGADDR:  0x800d
 * DESC:     MMD select register
 * RESETVAL: 0xf (15)
 * ACCESS:   R/W
 * FIELDS:
 *     DEVCL22_EN       When set and multiMMDs_en=1 then the CL22 combo core registers can be directly accessed through the MDIO serial data stream.
 *     DEVDEVAD_EN      When set and multiMMDs_en=1 then the top level XGXS registers as configured with DEVAD_STRAP can be directly accessed through the MDIO serial data stream.
 *     DEVPMD_EN        When set and multiMMDs_en=1 then the PMA/PMD device=1 registers can be directly accessed through the MDIO serial data stream.
 *     DEVAN_EN         When set and multiMMDs_en=1 then the CL73 AN device=7 registers can be directly accessed through the MDIO serial data stream.
 *     PRTAD_BCST_DISABLE 
 *     MULTIMMDS_EN     When set enables the multiple MMD functionality.  MD_ST is ignored and each device can be accessed directly with the appropriate CL22 or CL45 protocol.  The CL73 AN device would be accessed via a CL45 MDIO stream with devad=7 and the appropriate prtad.
 *     MULTIPRTS_EN     When set enables multiple prtad functionality.  Each of the lanes' MMDs can be accessed with consecutive PRTADs.  Lane 0 is accessed with PRTAD_STRAP, lane 1 with PRTAD_STRAP+1, lane 2 with PRTAD_STRAP+2 and lane 3 with PRTAD_STRAP+3.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr (0x0000800d | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_SIZE 4

/*
 * This structure should be used to declare and program SP2_MMDSEL.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_s {
	uint32_t v[1];
	uint32_t sp2_mmdsel[1];
	uint32_t _sp2_mmdsel;
} BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_CLR(r) (r).sp2_mmdsel[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_SET(r,d) (r).sp2_mmdsel[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_GET(r) (r).sp2_mmdsel[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_MULTIPRTS_ENf_GET(r) ((((r).sp2_mmdsel[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_MULTIPRTS_ENf_SET(r,f) (r).sp2_mmdsel[0]=(((r).sp2_mmdsel[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_MULTIMMDS_ENf_GET(r) ((((r).sp2_mmdsel[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_MULTIMMDS_ENf_SET(r,f) (r).sp2_mmdsel[0]=(((r).sp2_mmdsel[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_PRTAD_BCST_DISABLEf_GET(r) ((((r).sp2_mmdsel[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_PRTAD_BCST_DISABLEf_SET(r,f) (r).sp2_mmdsel[0]=(((r).sp2_mmdsel[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVAN_ENf_GET(r) ((((r).sp2_mmdsel[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVAN_ENf_SET(r,f) (r).sp2_mmdsel[0]=(((r).sp2_mmdsel[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVPMD_ENf_GET(r) ((((r).sp2_mmdsel[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVPMD_ENf_SET(r,f) (r).sp2_mmdsel[0]=(((r).sp2_mmdsel[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVDEVAD_ENf_GET(r) ((((r).sp2_mmdsel[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVDEVAD_ENf_SET(r,f) (r).sp2_mmdsel[0]=(((r).sp2_mmdsel[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVCL22_ENf_GET(r) (((r).sp2_mmdsel[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVCL22_ENf_SET(r,f) (r).sp2_mmdsel[0]=(((r).sp2_mmdsel[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_MMDSEL.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_MMDSELr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr,(_r._sp2_mmdsel))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MMDSELr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr,(_r._sp2_mmdsel)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MMDSELr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr,(_r._sp2_mmdsel))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_MMDSELr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_mmdsel))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MMDSELr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_mmdsel))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MMDSELr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_mmdsel))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_MMDSELr BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr
#define SP2_MMDSELr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_t SP2_MMDSELr_t;
#define SP2_MMDSELr_CLR BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_CLR
#define SP2_MMDSELr_SET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_SET
#define SP2_MMDSELr_GET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_GET
#define SP2_MMDSELr_MULTIPRTS_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_MULTIPRTS_ENf_GET
#define SP2_MMDSELr_MULTIPRTS_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_MULTIPRTS_ENf_SET
#define SP2_MMDSELr_MULTIMMDS_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_MULTIMMDS_ENf_GET
#define SP2_MMDSELr_MULTIMMDS_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_MULTIMMDS_ENf_SET
#define SP2_MMDSELr_PRTAD_BCST_DISABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_PRTAD_BCST_DISABLEf_GET
#define SP2_MMDSELr_PRTAD_BCST_DISABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_PRTAD_BCST_DISABLEf_SET
#define SP2_MMDSELr_DEVAN_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVAN_ENf_GET
#define SP2_MMDSELr_DEVAN_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVAN_ENf_SET
#define SP2_MMDSELr_DEVPMD_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVPMD_ENf_GET
#define SP2_MMDSELr_DEVPMD_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVPMD_ENf_SET
#define SP2_MMDSELr_DEVDEVAD_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVDEVAD_ENf_GET
#define SP2_MMDSELr_DEVDEVAD_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVDEVAD_ENf_SET
#define SP2_MMDSELr_DEVCL22_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVCL22_ENf_GET
#define SP2_MMDSELr_DEVCL22_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr_DEVCL22_ENf_SET
#define READ_SP2_MMDSELr BCMI_SGMIIP2X4_SERDES_READ_SP2_MMDSELr
#define WRITE_SP2_MMDSELr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MMDSELr
#define MODIFY_SP2_MMDSELr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MMDSELr
#define READLN_SP2_MMDSELr BCMI_SGMIIP2X4_SERDES_READLN_SP2_MMDSELr
#define WRITELN_SP2_MMDSELr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MMDSELr
#define WRITEALL_SP2_MMDSELr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MMDSELr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_MMDSELr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_MISCCTL1
 * BLOCKS:   BLK0
 * REGADDR:  0x800e
 * DESC:     Miscellaneous control 1 register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     IEEE_BLKSEL_VAL  1 = Enable 802.3ae (XAUI) IEEE address space0 = Enable 1000-BaseX (1.25G Serdes) Combo core IEEE address space (mode_10g_strap != 4'hC)
 *     IEEE_BLKSEL_AUTODET 1 = Enable IEEE address space to be dynamically enabled as a function of the resolved rate.0 = Enable manual control of IEEE address space mapping (via ieee_blksel_val).
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r (0x0000800e | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_MISCCTL1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_s {
	uint32_t v[1];
	uint32_t sp2_miscctl1[1];
	uint32_t _sp2_miscctl1;
} BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_CLR(r) (r).sp2_miscctl1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_SET(r,d) (r).sp2_miscctl1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_GET(r) (r).sp2_miscctl1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_IEEE_BLKSEL_AUTODETf_GET(r) ((((r).sp2_miscctl1[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_IEEE_BLKSEL_AUTODETf_SET(r,f) (r).sp2_miscctl1[0]=(((r).sp2_miscctl1[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_IEEE_BLKSEL_VALf_GET(r) (((r).sp2_miscctl1[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_IEEE_BLKSEL_VALf_SET(r,f) (r).sp2_miscctl1[0]=(((r).sp2_miscctl1[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_MISCCTL1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_MISCCTL1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r,(_r._sp2_miscctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MISCCTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r,(_r._sp2_miscctl1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MISCCTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r,(_r._sp2_miscctl1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_MISCCTL1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_miscctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MISCCTL1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_miscctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MISCCTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_miscctl1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_MISCCTL1r BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r
#define SP2_MISCCTL1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_t SP2_MISCCTL1r_t;
#define SP2_MISCCTL1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_CLR
#define SP2_MISCCTL1r_SET BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_SET
#define SP2_MISCCTL1r_GET BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_GET
#define SP2_MISCCTL1r_IEEE_BLKSEL_AUTODETf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_IEEE_BLKSEL_AUTODETf_GET
#define SP2_MISCCTL1r_IEEE_BLKSEL_AUTODETf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_IEEE_BLKSEL_AUTODETf_SET
#define SP2_MISCCTL1r_IEEE_BLKSEL_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_IEEE_BLKSEL_VALf_GET
#define SP2_MISCCTL1r_IEEE_BLKSEL_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r_IEEE_BLKSEL_VALf_SET
#define READ_SP2_MISCCTL1r BCMI_SGMIIP2X4_SERDES_READ_SP2_MISCCTL1r
#define WRITE_SP2_MISCCTL1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MISCCTL1r
#define MODIFY_SP2_MISCCTL1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MISCCTL1r
#define READLN_SP2_MISCCTL1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_MISCCTL1r
#define WRITELN_SP2_MISCCTL1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MISCCTL1r
#define WRITEALL_SP2_MISCCTL1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MISCCTL1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_MISCCTL1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_BLKADDR0
 * BLOCKS:   BLK0
 * REGADDR:  0x800f
 * DESC:     Block Address register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     BLOCKADDRESS     Bits 14:4 of the address
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r (0x0000800f | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_SIZE 4

/*
 * This structure should be used to declare and program SP2_BLKADDR0.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_s {
	uint32_t v[1];
	uint32_t sp2_blkaddr0[1];
	uint32_t _sp2_blkaddr0;
} BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_CLR(r) (r).sp2_blkaddr0[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_SET(r,d) (r).sp2_blkaddr0[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_GET(r) (r).sp2_blkaddr0[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_BLOCKADDRESSf_GET(r) ((((r).sp2_blkaddr0[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_BLOCKADDRESSf_SET(r,f) (r).sp2_blkaddr0[0]=(((r).sp2_blkaddr0[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))

/*
 * These macros can be used to access SP2_BLKADDR0.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_BLKADDR0r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r,(_r._sp2_blkaddr0))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_BLKADDR0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r,(_r._sp2_blkaddr0)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_BLKADDR0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r,(_r._sp2_blkaddr0))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_BLKADDR0r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_blkaddr0))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_BLKADDR0r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_blkaddr0))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_BLKADDR0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_blkaddr0))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_BLKADDR0r BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r
#define SP2_BLKADDR0r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_t SP2_BLKADDR0r_t;
#define SP2_BLKADDR0r_CLR BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_CLR
#define SP2_BLKADDR0r_SET BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_SET
#define SP2_BLKADDR0r_GET BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_GET
#define SP2_BLKADDR0r_BLOCKADDRESSf_GET BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_BLOCKADDRESSf_GET
#define SP2_BLKADDR0r_BLOCKADDRESSf_SET BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r_BLOCKADDRESSf_SET
#define READ_SP2_BLKADDR0r BCMI_SGMIIP2X4_SERDES_READ_SP2_BLKADDR0r
#define WRITE_SP2_BLKADDR0r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_BLKADDR0r
#define MODIFY_SP2_BLKADDR0r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_BLKADDR0r
#define READLN_SP2_BLKADDR0r BCMI_SGMIIP2X4_SERDES_READLN_SP2_BLKADDR0r
#define WRITELN_SP2_BLKADDR0r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_BLKADDR0r
#define WRITEALL_SP2_BLKADDR0r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_BLKADDR0r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR0r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_LANECTL3
 * BLOCKS:   BLK1
 * REGADDR:  0x8018
 * DESC:     Lane control 3 register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     PWRDWN_PLL       Powerdown PLL
 *     PWRDWN_FORCE     
 *     FORCE_PLL_LOCK   
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r (0x00008018 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_SIZE 4

/*
 * This structure should be used to declare and program SP2_LANECTL3.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_s {
	uint32_t v[1];
	uint32_t sp2_lanectl3[1];
	uint32_t _sp2_lanectl3;
} BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_CLR(r) (r).sp2_lanectl3[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_SET(r,d) (r).sp2_lanectl3[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_GET(r) (r).sp2_lanectl3[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_FORCE_PLL_LOCKf_GET(r) ((((r).sp2_lanectl3[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_FORCE_PLL_LOCKf_SET(r,f) (r).sp2_lanectl3[0]=(((r).sp2_lanectl3[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_PWRDWN_FORCEf_GET(r) ((((r).sp2_lanectl3[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_PWRDWN_FORCEf_SET(r,f) (r).sp2_lanectl3[0]=(((r).sp2_lanectl3[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_PWRDWN_PLLf_GET(r) ((((r).sp2_lanectl3[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_PWRDWN_PLLf_SET(r,f) (r).sp2_lanectl3[0]=(((r).sp2_lanectl3[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))

/*
 * These macros can be used to access SP2_LANECTL3.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_LANECTL3r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r,(_r._sp2_lanectl3))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_LANECTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r,(_r._sp2_lanectl3)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_LANECTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r,(_r._sp2_lanectl3))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_LANECTL3r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_lanectl3))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_LANECTL3r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_lanectl3))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_LANECTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_lanectl3))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_LANECTL3r BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r
#define SP2_LANECTL3r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_t SP2_LANECTL3r_t;
#define SP2_LANECTL3r_CLR BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_CLR
#define SP2_LANECTL3r_SET BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_SET
#define SP2_LANECTL3r_GET BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_GET
#define SP2_LANECTL3r_FORCE_PLL_LOCKf_GET BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_FORCE_PLL_LOCKf_GET
#define SP2_LANECTL3r_FORCE_PLL_LOCKf_SET BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_FORCE_PLL_LOCKf_SET
#define SP2_LANECTL3r_PWRDWN_FORCEf_GET BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_PWRDWN_FORCEf_GET
#define SP2_LANECTL3r_PWRDWN_FORCEf_SET BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_PWRDWN_FORCEf_SET
#define SP2_LANECTL3r_PWRDWN_PLLf_GET BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_PWRDWN_PLLf_GET
#define SP2_LANECTL3r_PWRDWN_PLLf_SET BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r_PWRDWN_PLLf_SET
#define READ_SP2_LANECTL3r BCMI_SGMIIP2X4_SERDES_READ_SP2_LANECTL3r
#define WRITE_SP2_LANECTL3r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_LANECTL3r
#define MODIFY_SP2_LANECTL3r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_LANECTL3r
#define READLN_SP2_LANECTL3r BCMI_SGMIIP2X4_SERDES_READLN_SP2_LANECTL3r
#define WRITELN_SP2_LANECTL3r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_LANECTL3r
#define WRITEALL_SP2_LANECTL3r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_LANECTL3r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_LANECTL3r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_BLKADDR1
 * BLOCKS:   BLK1
 * REGADDR:  0x801f
 * DESC:     Block Address register
 * RESETVAL: 0x10 (16)
 * ACCESS:   R/W
 * FIELDS:
 *     BLOCKADDRESS     Bits 14:4 of the address
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r (0x0000801f | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_BLKADDR1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_s {
	uint32_t v[1];
	uint32_t sp2_blkaddr1[1];
	uint32_t _sp2_blkaddr1;
} BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_CLR(r) (r).sp2_blkaddr1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_SET(r,d) (r).sp2_blkaddr1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_GET(r) (r).sp2_blkaddr1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_BLOCKADDRESSf_GET(r) ((((r).sp2_blkaddr1[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_BLOCKADDRESSf_SET(r,f) (r).sp2_blkaddr1[0]=(((r).sp2_blkaddr1[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))

/*
 * These macros can be used to access SP2_BLKADDR1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_BLKADDR1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r,(_r._sp2_blkaddr1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_BLKADDR1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r,(_r._sp2_blkaddr1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_BLKADDR1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r,(_r._sp2_blkaddr1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_BLKADDR1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_blkaddr1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_BLKADDR1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_blkaddr1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_BLKADDR1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_blkaddr1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_BLKADDR1r BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r
#define SP2_BLKADDR1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_t SP2_BLKADDR1r_t;
#define SP2_BLKADDR1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_CLR
#define SP2_BLKADDR1r_SET BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_SET
#define SP2_BLKADDR1r_GET BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_GET
#define SP2_BLKADDR1r_BLOCKADDRESSf_GET BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_BLOCKADDRESSf_GET
#define SP2_BLKADDR1r_BLOCKADDRESSf_SET BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r_BLOCKADDRESSf_SET
#define READ_SP2_BLKADDR1r BCMI_SGMIIP2X4_SERDES_READ_SP2_BLKADDR1r
#define WRITE_SP2_BLKADDR1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_BLKADDR1r
#define MODIFY_SP2_BLKADDR1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_BLKADDR1r
#define READLN_SP2_BLKADDR1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_BLKADDR1r
#define WRITELN_SP2_BLKADDR1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_BLKADDR1r
#define WRITEALL_SP2_BLKADDR1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_BLKADDR1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL_AFE_CTL0
 * BLOCKS:   PLL_AFE
 * REGADDR:  0x8050
 * DESC:     Analog PLL Control0 Register
 * RESETVAL: 0x5740 (22336)
 * ACCESS:   R/W
 * FIELDS:
 *     CM_SEL           Select the common mode level in XTAL
 *     HIPASS           Select the high-pass pole in XTAL
 *     CURR_SEL         Charge Ipump (differential) Current Settings (step size 100uA)0000:  100uA0001:  200uA...0011   400uA...1111:  1.6mA
 *     RPAR             Reduce filter resistor to lower PLL bandwidth0000: 1.22K0001: 1.33K0010: 1.48K0011: 1.65K0100: 1.82K0101: 2.09K0110: 2.55K0111: 3.15K1000: 3.48K1001: 3.75K1010: 4.24K1011: 4.65K1100: 5.45K1101: 6.15K1110: 7.65K1111: 9.15K
 *     CPAR             Increase Filter Shunt Capacitor00:3pF01:6pF10:9pF11:18pF
 *     XTAL_BIAS        REFCLK  buffer XTAL bias controls0	0	0	33%0	0	1	83%0	1	0	67%0	1	1	117%1	0	0	50%1	0	1	100%1	1	0	83%1	1	1	133%
 *     EN_TEST_INTEGER_CLK 1:Enable integer-N divider output as CMOS test clock
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r (0x00008050 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL_AFE_CTL0.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_s {
	uint32_t v[1];
	uint32_t sp2_pll_afe_ctl0[1];
	uint32_t _sp2_pll_afe_ctl0;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_CLR(r) (r).sp2_pll_afe_ctl0[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_SET(r,d) (r).sp2_pll_afe_ctl0[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_GET(r) (r).sp2_pll_afe_ctl0[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_EN_TEST_INTEGER_CLKf_GET(r) ((((r).sp2_pll_afe_ctl0[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_EN_TEST_INTEGER_CLKf_SET(r,f) (r).sp2_pll_afe_ctl0[0]=(((r).sp2_pll_afe_ctl0[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_XTAL_BIASf_GET(r) ((((r).sp2_pll_afe_ctl0[0]) >> 12) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_XTAL_BIASf_SET(r,f) (r).sp2_pll_afe_ctl0[0]=(((r).sp2_pll_afe_ctl0[0] & ~((uint32_t)0x7 << 12)) | ((((uint32_t)f) & 0x7) << 12)) | (7 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_CPARf_GET(r) ((((r).sp2_pll_afe_ctl0[0]) >> 10) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_CPARf_SET(r,f) (r).sp2_pll_afe_ctl0[0]=(((r).sp2_pll_afe_ctl0[0] & ~((uint32_t)0x3 << 10)) | ((((uint32_t)f) & 0x3) << 10)) | (3 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_RPARf_GET(r) ((((r).sp2_pll_afe_ctl0[0]) >> 6) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_RPARf_SET(r,f) (r).sp2_pll_afe_ctl0[0]=(((r).sp2_pll_afe_ctl0[0] & ~((uint32_t)0xf << 6)) | ((((uint32_t)f) & 0xf) << 6)) | (15 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_CURR_SELf_GET(r) ((((r).sp2_pll_afe_ctl0[0]) >> 2) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_CURR_SELf_SET(r,f) (r).sp2_pll_afe_ctl0[0]=(((r).sp2_pll_afe_ctl0[0] & ~((uint32_t)0xf << 2)) | ((((uint32_t)f) & 0xf) << 2)) | (15 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_HIPASSf_GET(r) ((((r).sp2_pll_afe_ctl0[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_HIPASSf_SET(r,f) (r).sp2_pll_afe_ctl0[0]=(((r).sp2_pll_afe_ctl0[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_CM_SELf_GET(r) (((r).sp2_pll_afe_ctl0[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_CM_SELf_SET(r,f) (r).sp2_pll_afe_ctl0[0]=(((r).sp2_pll_afe_ctl0[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_PLL_AFE_CTL0.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL0r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r,(_r._sp2_pll_afe_ctl0))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r,(_r._sp2_pll_afe_ctl0)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r,(_r._sp2_pll_afe_ctl0))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL0r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl0))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL0r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl0))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll_afe_ctl0))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r
#define SP2_PLL_AFE_CTL0r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_t SP2_PLL_AFE_CTL0r_t;
#define SP2_PLL_AFE_CTL0r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_CLR
#define SP2_PLL_AFE_CTL0r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_SET
#define SP2_PLL_AFE_CTL0r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_GET
#define SP2_PLL_AFE_CTL0r_EN_TEST_INTEGER_CLKf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_EN_TEST_INTEGER_CLKf_GET
#define SP2_PLL_AFE_CTL0r_EN_TEST_INTEGER_CLKf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_EN_TEST_INTEGER_CLKf_SET
#define SP2_PLL_AFE_CTL0r_XTAL_BIASf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_XTAL_BIASf_GET
#define SP2_PLL_AFE_CTL0r_XTAL_BIASf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_XTAL_BIASf_SET
#define SP2_PLL_AFE_CTL0r_CPARf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_CPARf_GET
#define SP2_PLL_AFE_CTL0r_CPARf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_CPARf_SET
#define SP2_PLL_AFE_CTL0r_RPARf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_RPARf_GET
#define SP2_PLL_AFE_CTL0r_RPARf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_RPARf_SET
#define SP2_PLL_AFE_CTL0r_CURR_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_CURR_SELf_GET
#define SP2_PLL_AFE_CTL0r_CURR_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_CURR_SELf_SET
#define SP2_PLL_AFE_CTL0r_HIPASSf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_HIPASSf_GET
#define SP2_PLL_AFE_CTL0r_HIPASSf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_HIPASSf_SET
#define SP2_PLL_AFE_CTL0r_CM_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_CM_SELf_GET
#define SP2_PLL_AFE_CTL0r_CM_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r_CM_SELf_SET
#define READ_SP2_PLL_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL0r
#define WRITE_SP2_PLL_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL0r
#define MODIFY_SP2_PLL_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL0r
#define READLN_SP2_PLL_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL0r
#define WRITELN_SP2_PLL_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL0r
#define WRITEALL_SP2_PLL_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL0r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL0r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL_AFE_CTL1
 * BLOCKS:   PLL_AFE
 * REGADDR:  0x8051
 * DESC:     Analog PLL Control1 Register
 * RESETVAL: 0x1d0 (464)
 * ACCESS:   R/W
 * FIELDS:
 *     EN_TEST_FRAC_CLK 1:Enable frac-N divider (MMD)r output as CMOS test clock
 *     LV_EN            Adjusts refrence current of reference clk buffer for low VDD operation, active 0
 *     XTAL_CORE_BIAS   ref_clk buffer XTAL core bias controls0000 200uA0010 300uA0100 400uA0110 500uA1000 600uA1010 700uA1100 800uA1110 900uA
 *     PLL_PON          Resistor Calibration Control Setting0000: min resistance process corner, (increases on-chip R by +25%)1111: max resistance process corner, (decreases on-chip R by -25%)Error between two consecutive codes is maintained less than 3%.By default, pon<3:0> match with resistor calibration output; they can also be independently adjusted through RTL.
 *     LEAKAGE_TEST     Test pins for leakage power  internal analog test only
 *     RESERVED_31_28   
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r (0x00008051 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL_AFE_CTL1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_s {
	uint32_t v[1];
	uint32_t sp2_pll_afe_ctl1[1];
	uint32_t _sp2_pll_afe_ctl1;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_CLR(r) (r).sp2_pll_afe_ctl1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_SET(r,d) (r).sp2_pll_afe_ctl1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_GET(r) (r).sp2_pll_afe_ctl1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_RESERVED_31_28f_GET(r) ((((r).sp2_pll_afe_ctl1[0]) >> 12) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_RESERVED_31_28f_SET(r,f) (r).sp2_pll_afe_ctl1[0]=(((r).sp2_pll_afe_ctl1[0] & ~((uint32_t)0xf << 12)) | ((((uint32_t)f) & 0xf) << 12)) | (15 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_LEAKAGE_TESTf_GET(r) ((((r).sp2_pll_afe_ctl1[0]) >> 10) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_LEAKAGE_TESTf_SET(r,f) (r).sp2_pll_afe_ctl1[0]=(((r).sp2_pll_afe_ctl1[0] & ~((uint32_t)0x3 << 10)) | ((((uint32_t)f) & 0x3) << 10)) | (3 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_PLL_PONf_GET(r) ((((r).sp2_pll_afe_ctl1[0]) >> 6) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_PLL_PONf_SET(r,f) (r).sp2_pll_afe_ctl1[0]=(((r).sp2_pll_afe_ctl1[0] & ~((uint32_t)0xf << 6)) | ((((uint32_t)f) & 0xf) << 6)) | (15 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_XTAL_CORE_BIASf_GET(r) ((((r).sp2_pll_afe_ctl1[0]) >> 2) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_XTAL_CORE_BIASf_SET(r,f) (r).sp2_pll_afe_ctl1[0]=(((r).sp2_pll_afe_ctl1[0] & ~((uint32_t)0xf << 2)) | ((((uint32_t)f) & 0xf) << 2)) | (15 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_LV_ENf_GET(r) ((((r).sp2_pll_afe_ctl1[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_LV_ENf_SET(r,f) (r).sp2_pll_afe_ctl1[0]=(((r).sp2_pll_afe_ctl1[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_EN_TEST_FRAC_CLKf_GET(r) (((r).sp2_pll_afe_ctl1[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_EN_TEST_FRAC_CLKf_SET(r,f) (r).sp2_pll_afe_ctl1[0]=(((r).sp2_pll_afe_ctl1[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_PLL_AFE_CTL1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r,(_r._sp2_pll_afe_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r,(_r._sp2_pll_afe_ctl1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r,(_r._sp2_pll_afe_ctl1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll_afe_ctl1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r
#define SP2_PLL_AFE_CTL1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_t SP2_PLL_AFE_CTL1r_t;
#define SP2_PLL_AFE_CTL1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_CLR
#define SP2_PLL_AFE_CTL1r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_SET
#define SP2_PLL_AFE_CTL1r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_GET
#define SP2_PLL_AFE_CTL1r_RESERVED_31_28f_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_RESERVED_31_28f_GET
#define SP2_PLL_AFE_CTL1r_RESERVED_31_28f_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_RESERVED_31_28f_SET
#define SP2_PLL_AFE_CTL1r_LEAKAGE_TESTf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_LEAKAGE_TESTf_GET
#define SP2_PLL_AFE_CTL1r_LEAKAGE_TESTf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_LEAKAGE_TESTf_SET
#define SP2_PLL_AFE_CTL1r_PLL_PONf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_PLL_PONf_GET
#define SP2_PLL_AFE_CTL1r_PLL_PONf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_PLL_PONf_SET
#define SP2_PLL_AFE_CTL1r_XTAL_CORE_BIASf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_XTAL_CORE_BIASf_GET
#define SP2_PLL_AFE_CTL1r_XTAL_CORE_BIASf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_XTAL_CORE_BIASf_SET
#define SP2_PLL_AFE_CTL1r_LV_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_LV_ENf_GET
#define SP2_PLL_AFE_CTL1r_LV_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_LV_ENf_SET
#define SP2_PLL_AFE_CTL1r_EN_TEST_FRAC_CLKf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_EN_TEST_FRAC_CLKf_GET
#define SP2_PLL_AFE_CTL1r_EN_TEST_FRAC_CLKf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r_EN_TEST_FRAC_CLKf_SET
#define READ_SP2_PLL_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL1r
#define WRITE_SP2_PLL_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL1r
#define MODIFY_SP2_PLL_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL1r
#define READLN_SP2_PLL_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL1r
#define WRITELN_SP2_PLL_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL1r
#define WRITEALL_SP2_PLL_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL_AFE_CTL2
 * BLOCKS:   PLL_AFE
 * REGADDR:  0x8052
 * DESC:     Analog PLL Control2 Register
 * RESETVAL: 0x19f8 (6648)
 * ACCESS:   R/W
 * FIELDS:
 *     RESERVED_33_32   
 *     TEST_VC          Enable VCO control voltage on PTESTP/N; active high
 *     EN10T            enables 10T clockneeded for clk_125
 *     INTN_FB_EN       enables integer divider output
 *     TEST_AMP         Set Testport Output Impedance0000 8000001 4000010 2670011 2000100 1600101 1330110 1140111 1001000 891001 801010 731011 67
 *     RESERVED_41      
 *     TEST_PLL_MODE    selects fb clock to be tested. 0:int-N, 1:frac-N
 *     VCO_ICTR         none
 *     I_PLL_FRAC_MODE  00,11: direct integer division mapping for MMD: M = i_ndiv_int<9:5> && A = i_ndiv_int<4:0>01: div8/9 output mapping i for MMD: M1 && A110: div4/5 output mapping is used for MMD: M2 && A2
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r (0x00008052 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL_AFE_CTL2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_s {
	uint32_t v[1];
	uint32_t sp2_pll_afe_ctl2[1];
	uint32_t _sp2_pll_afe_ctl2;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_CLR(r) (r).sp2_pll_afe_ctl2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_SET(r,d) (r).sp2_pll_afe_ctl2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_GET(r) (r).sp2_pll_afe_ctl2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_I_PLL_FRAC_MODEf_GET(r) ((((r).sp2_pll_afe_ctl2[0]) >> 14) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_I_PLL_FRAC_MODEf_SET(r,f) (r).sp2_pll_afe_ctl2[0]=(((r).sp2_pll_afe_ctl2[0] & ~((uint32_t)0x3 << 14)) | ((((uint32_t)f) & 0x3) << 14)) | (3 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_VCO_ICTRf_GET(r) ((((r).sp2_pll_afe_ctl2[0]) >> 11) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_VCO_ICTRf_SET(r,f) (r).sp2_pll_afe_ctl2[0]=(((r).sp2_pll_afe_ctl2[0] & ~((uint32_t)0x7 << 11)) | ((((uint32_t)f) & 0x7) << 11)) | (7 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_TEST_PLL_MODEf_GET(r) ((((r).sp2_pll_afe_ctl2[0]) >> 10) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_TEST_PLL_MODEf_SET(r,f) (r).sp2_pll_afe_ctl2[0]=(((r).sp2_pll_afe_ctl2[0] & ~((uint32_t)0x1 << 10)) | ((((uint32_t)f) & 0x1) << 10)) | (1 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_RESERVED_41f_GET(r) ((((r).sp2_pll_afe_ctl2[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_RESERVED_41f_SET(r,f) (r).sp2_pll_afe_ctl2[0]=(((r).sp2_pll_afe_ctl2[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_TEST_AMPf_GET(r) ((((r).sp2_pll_afe_ctl2[0]) >> 5) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_TEST_AMPf_SET(r,f) (r).sp2_pll_afe_ctl2[0]=(((r).sp2_pll_afe_ctl2[0] & ~((uint32_t)0xf << 5)) | ((((uint32_t)f) & 0xf) << 5)) | (15 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_INTN_FB_ENf_GET(r) ((((r).sp2_pll_afe_ctl2[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_INTN_FB_ENf_SET(r,f) (r).sp2_pll_afe_ctl2[0]=(((r).sp2_pll_afe_ctl2[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_EN10Tf_GET(r) ((((r).sp2_pll_afe_ctl2[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_EN10Tf_SET(r,f) (r).sp2_pll_afe_ctl2[0]=(((r).sp2_pll_afe_ctl2[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_TEST_VCf_GET(r) ((((r).sp2_pll_afe_ctl2[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_TEST_VCf_SET(r,f) (r).sp2_pll_afe_ctl2[0]=(((r).sp2_pll_afe_ctl2[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_RESERVED_33_32f_GET(r) (((r).sp2_pll_afe_ctl2[0]) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_RESERVED_33_32f_SET(r,f) (r).sp2_pll_afe_ctl2[0]=(((r).sp2_pll_afe_ctl2[0] & ~((uint32_t)0x3)) | (((uint32_t)f) & 0x3)) | (0x3 << 16)

/*
 * These macros can be used to access SP2_PLL_AFE_CTL2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r,(_r._sp2_pll_afe_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r,(_r._sp2_pll_afe_ctl2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r,(_r._sp2_pll_afe_ctl2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll_afe_ctl2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r
#define SP2_PLL_AFE_CTL2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_t SP2_PLL_AFE_CTL2r_t;
#define SP2_PLL_AFE_CTL2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_CLR
#define SP2_PLL_AFE_CTL2r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_SET
#define SP2_PLL_AFE_CTL2r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_GET
#define SP2_PLL_AFE_CTL2r_I_PLL_FRAC_MODEf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_I_PLL_FRAC_MODEf_GET
#define SP2_PLL_AFE_CTL2r_I_PLL_FRAC_MODEf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_I_PLL_FRAC_MODEf_SET
#define SP2_PLL_AFE_CTL2r_VCO_ICTRf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_VCO_ICTRf_GET
#define SP2_PLL_AFE_CTL2r_VCO_ICTRf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_VCO_ICTRf_SET
#define SP2_PLL_AFE_CTL2r_TEST_PLL_MODEf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_TEST_PLL_MODEf_GET
#define SP2_PLL_AFE_CTL2r_TEST_PLL_MODEf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_TEST_PLL_MODEf_SET
#define SP2_PLL_AFE_CTL2r_RESERVED_41f_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_RESERVED_41f_GET
#define SP2_PLL_AFE_CTL2r_RESERVED_41f_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_RESERVED_41f_SET
#define SP2_PLL_AFE_CTL2r_TEST_AMPf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_TEST_AMPf_GET
#define SP2_PLL_AFE_CTL2r_TEST_AMPf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_TEST_AMPf_SET
#define SP2_PLL_AFE_CTL2r_INTN_FB_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_INTN_FB_ENf_GET
#define SP2_PLL_AFE_CTL2r_INTN_FB_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_INTN_FB_ENf_SET
#define SP2_PLL_AFE_CTL2r_EN10Tf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_EN10Tf_GET
#define SP2_PLL_AFE_CTL2r_EN10Tf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_EN10Tf_SET
#define SP2_PLL_AFE_CTL2r_TEST_VCf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_TEST_VCf_GET
#define SP2_PLL_AFE_CTL2r_TEST_VCf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_TEST_VCf_SET
#define SP2_PLL_AFE_CTL2r_RESERVED_33_32f_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_RESERVED_33_32f_GET
#define SP2_PLL_AFE_CTL2r_RESERVED_33_32f_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r_RESERVED_33_32f_SET
#define READ_SP2_PLL_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL2r
#define WRITE_SP2_PLL_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL2r
#define MODIFY_SP2_PLL_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL2r
#define READLN_SP2_PLL_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL2r
#define WRITELN_SP2_PLL_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL2r
#define WRITEALL_SP2_PLL_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL_AFE_CTL3
 * BLOCKS:   PLL_AFE
 * REGADDR:  0x8053
 * DESC:     Analog PLL Control3 Register
 * RESETVAL: 0x2b00 (11008)
 * ACCESS:   R/W
 * FIELDS:
 *     TCEST_NEG        Sets the amplitude without changing the Output ImpedanceWhen test_amp<3:0>=1111 and Rload = infinity (open, no far-end RX connected)000 100%001 87.5%010 75%011 62.5%100 50%101 37.5%110 25%111 12.5%
 *     TESTCLK_EN       Enables ref clock for test
 *     TEST_SEL         Selects the signal to be tested000: off (high-z)001: refclk010: fbclk011: rxclk100: txclk101: reserved110: vcp,vcn111: reserved
 *     MMD_EN           enables MMD divider
 *     INT_DIV_EN       enables integer divider
 *     REFCLK_IN_BIAS   Set refclk input bias<5:4> Buffer #1 Bias<3:2> Buffer #2 Bias<1:0> D2C BiasCurrent Adjustment:00 75%01/10 100%11 125%
 *     PLL_MODE         selects fbk clock 0:int-N 1:Frac-N
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r (0x00008053 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL_AFE_CTL3.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_s {
	uint32_t v[1];
	uint32_t sp2_pll_afe_ctl3[1];
	uint32_t _sp2_pll_afe_ctl3;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_CLR(r) (r).sp2_pll_afe_ctl3[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_SET(r,d) (r).sp2_pll_afe_ctl3[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_GET(r) (r).sp2_pll_afe_ctl3[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_PLL_MODEf_GET(r) ((((r).sp2_pll_afe_ctl3[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_PLL_MODEf_SET(r,f) (r).sp2_pll_afe_ctl3[0]=(((r).sp2_pll_afe_ctl3[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_REFCLK_IN_BIASf_GET(r) ((((r).sp2_pll_afe_ctl3[0]) >> 9) & 0x3f)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_REFCLK_IN_BIASf_SET(r,f) (r).sp2_pll_afe_ctl3[0]=(((r).sp2_pll_afe_ctl3[0] & ~((uint32_t)0x3f << 9)) | ((((uint32_t)f) & 0x3f) << 9)) | (63 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_INT_DIV_ENf_GET(r) ((((r).sp2_pll_afe_ctl3[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_INT_DIV_ENf_SET(r,f) (r).sp2_pll_afe_ctl3[0]=(((r).sp2_pll_afe_ctl3[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_MMD_ENf_GET(r) ((((r).sp2_pll_afe_ctl3[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_MMD_ENf_SET(r,f) (r).sp2_pll_afe_ctl3[0]=(((r).sp2_pll_afe_ctl3[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_TEST_SELf_GET(r) ((((r).sp2_pll_afe_ctl3[0]) >> 4) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_TEST_SELf_SET(r,f) (r).sp2_pll_afe_ctl3[0]=(((r).sp2_pll_afe_ctl3[0] & ~((uint32_t)0x7 << 4)) | ((((uint32_t)f) & 0x7) << 4)) | (7 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_TESTCLK_ENf_GET(r) ((((r).sp2_pll_afe_ctl3[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_TESTCLK_ENf_SET(r,f) (r).sp2_pll_afe_ctl3[0]=(((r).sp2_pll_afe_ctl3[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_TCEST_NEGf_GET(r) (((r).sp2_pll_afe_ctl3[0]) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_TCEST_NEGf_SET(r,f) (r).sp2_pll_afe_ctl3[0]=(((r).sp2_pll_afe_ctl3[0] & ~((uint32_t)0x7)) | (((uint32_t)f) & 0x7)) | (0x7 << 16)

/*
 * These macros can be used to access SP2_PLL_AFE_CTL3.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL3r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r,(_r._sp2_pll_afe_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r,(_r._sp2_pll_afe_ctl3)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r,(_r._sp2_pll_afe_ctl3))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL3r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL3r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll_afe_ctl3))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r
#define SP2_PLL_AFE_CTL3r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_t SP2_PLL_AFE_CTL3r_t;
#define SP2_PLL_AFE_CTL3r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_CLR
#define SP2_PLL_AFE_CTL3r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_SET
#define SP2_PLL_AFE_CTL3r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_GET
#define SP2_PLL_AFE_CTL3r_PLL_MODEf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_PLL_MODEf_GET
#define SP2_PLL_AFE_CTL3r_PLL_MODEf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_PLL_MODEf_SET
#define SP2_PLL_AFE_CTL3r_REFCLK_IN_BIASf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_REFCLK_IN_BIASf_GET
#define SP2_PLL_AFE_CTL3r_REFCLK_IN_BIASf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_REFCLK_IN_BIASf_SET
#define SP2_PLL_AFE_CTL3r_INT_DIV_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_INT_DIV_ENf_GET
#define SP2_PLL_AFE_CTL3r_INT_DIV_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_INT_DIV_ENf_SET
#define SP2_PLL_AFE_CTL3r_MMD_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_MMD_ENf_GET
#define SP2_PLL_AFE_CTL3r_MMD_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_MMD_ENf_SET
#define SP2_PLL_AFE_CTL3r_TEST_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_TEST_SELf_GET
#define SP2_PLL_AFE_CTL3r_TEST_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_TEST_SELf_SET
#define SP2_PLL_AFE_CTL3r_TESTCLK_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_TESTCLK_ENf_GET
#define SP2_PLL_AFE_CTL3r_TESTCLK_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_TESTCLK_ENf_SET
#define SP2_PLL_AFE_CTL3r_TCEST_NEGf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_TCEST_NEGf_GET
#define SP2_PLL_AFE_CTL3r_TCEST_NEGf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r_TCEST_NEGf_SET
#define READ_SP2_PLL_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL3r
#define WRITE_SP2_PLL_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL3r
#define MODIFY_SP2_PLL_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL3r
#define READLN_SP2_PLL_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL3r
#define WRITELN_SP2_PLL_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL3r
#define WRITEALL_SP2_PLL_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL3r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL3r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL_AFE_CTL4
 * BLOCKS:   PLL_AFE
 * REGADDR:  0x8054
 * DESC:     Analog PLL Control4 Register
 * RESETVAL: 0x21 (33)
 * ACCESS:   R/W
 * FIELDS:
 *     DIV              Integer divider ratio.  Not used for fractional mode.In integer mode: pll_ctrl[63]=0, pll_ctrl[56]=1For PCIE with 54MHz internal refclk: pll_ctrl[63]=0, pll_ctrl[56:55]=110 = 321 = 406 = 100
 *     EN_CAP           Adjusts the C in the RC delay in the frequency doubler000: not used.001: 50fF010: 100fF011: 150fF100: 200fF101: 250fF110: 300fF111:  350fF
 *     RESERVED_74_71   
 *     MMD_RESETB       Reset the deltasigma Modulator. After reset the modulator outputs, M<4:0> and A<4:0> (See Fig.1) of deltasigma should be set to 0110 and 0000 respectively:This is active LOW for resetting the internal states. It also resets the internal states of the MMD PSC and newly added feature for resetting the mmd_resetb needs to see an active-low pulse (1 first, 0 for couple of microcontroller clock cycles and then goes to high, 1)The calibration cycle needs to start after the aforementioned signal be applied to mmd_resetb
 *     ADJ              Increases the reference current for the CP000: 50uA001: 50uA + 8%010: 50uA+ 16%...111: 50uA+ 56%
 *     MMD_PRSC8OR9PWDB Enables 8/9 prescaler. 0:disable, 1:enable
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r (0x00008054 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL_AFE_CTL4.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_s {
	uint32_t v[1];
	uint32_t sp2_pll_afe_ctl4[1];
	uint32_t _sp2_pll_afe_ctl4;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_CLR(r) (r).sp2_pll_afe_ctl4[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_SET(r,d) (r).sp2_pll_afe_ctl4[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_GET(r) (r).sp2_pll_afe_ctl4[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_MMD_PRSC8OR9PWDBf_GET(r) ((((r).sp2_pll_afe_ctl4[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_MMD_PRSC8OR9PWDBf_SET(r,f) (r).sp2_pll_afe_ctl4[0]=(((r).sp2_pll_afe_ctl4[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_ADJf_GET(r) ((((r).sp2_pll_afe_ctl4[0]) >> 12) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_ADJf_SET(r,f) (r).sp2_pll_afe_ctl4[0]=(((r).sp2_pll_afe_ctl4[0] & ~((uint32_t)0x7 << 12)) | ((((uint32_t)f) & 0x7) << 12)) | (7 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_MMD_RESETBf_GET(r) ((((r).sp2_pll_afe_ctl4[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_MMD_RESETBf_SET(r,f) (r).sp2_pll_afe_ctl4[0]=(((r).sp2_pll_afe_ctl4[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_RESERVED_74_71f_GET(r) ((((r).sp2_pll_afe_ctl4[0]) >> 7) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_RESERVED_74_71f_SET(r,f) (r).sp2_pll_afe_ctl4[0]=(((r).sp2_pll_afe_ctl4[0] & ~((uint32_t)0xf << 7)) | ((((uint32_t)f) & 0xf) << 7)) | (15 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_EN_CAPf_GET(r) ((((r).sp2_pll_afe_ctl4[0]) >> 4) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_EN_CAPf_SET(r,f) (r).sp2_pll_afe_ctl4[0]=(((r).sp2_pll_afe_ctl4[0] & ~((uint32_t)0x7 << 4)) | ((((uint32_t)f) & 0x7) << 4)) | (7 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_DIVf_GET(r) (((r).sp2_pll_afe_ctl4[0]) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_DIVf_SET(r,f) (r).sp2_pll_afe_ctl4[0]=(((r).sp2_pll_afe_ctl4[0] & ~((uint32_t)0xf)) | (((uint32_t)f) & 0xf)) | (0xf << 16)

/*
 * These macros can be used to access SP2_PLL_AFE_CTL4.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL4r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r,(_r._sp2_pll_afe_ctl4))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r,(_r._sp2_pll_afe_ctl4)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r,(_r._sp2_pll_afe_ctl4))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL4r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl4))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL4r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl4))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll_afe_ctl4))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL_AFE_CTL4r BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r
#define SP2_PLL_AFE_CTL4r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_t SP2_PLL_AFE_CTL4r_t;
#define SP2_PLL_AFE_CTL4r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_CLR
#define SP2_PLL_AFE_CTL4r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_SET
#define SP2_PLL_AFE_CTL4r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_GET
#define SP2_PLL_AFE_CTL4r_MMD_PRSC8OR9PWDBf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_MMD_PRSC8OR9PWDBf_GET
#define SP2_PLL_AFE_CTL4r_MMD_PRSC8OR9PWDBf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_MMD_PRSC8OR9PWDBf_SET
#define SP2_PLL_AFE_CTL4r_ADJf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_ADJf_GET
#define SP2_PLL_AFE_CTL4r_ADJf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_ADJf_SET
#define SP2_PLL_AFE_CTL4r_MMD_RESETBf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_MMD_RESETBf_GET
#define SP2_PLL_AFE_CTL4r_MMD_RESETBf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_MMD_RESETBf_SET
#define SP2_PLL_AFE_CTL4r_RESERVED_74_71f_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_RESERVED_74_71f_GET
#define SP2_PLL_AFE_CTL4r_RESERVED_74_71f_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_RESERVED_74_71f_SET
#define SP2_PLL_AFE_CTL4r_EN_CAPf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_EN_CAPf_GET
#define SP2_PLL_AFE_CTL4r_EN_CAPf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_EN_CAPf_SET
#define SP2_PLL_AFE_CTL4r_DIVf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_DIVf_GET
#define SP2_PLL_AFE_CTL4r_DIVf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r_DIVf_SET
#define READ_SP2_PLL_AFE_CTL4r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL4r
#define WRITE_SP2_PLL_AFE_CTL4r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL4r
#define MODIFY_SP2_PLL_AFE_CTL4r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL4r
#define READLN_SP2_PLL_AFE_CTL4r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL4r
#define WRITELN_SP2_PLL_AFE_CTL4r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL4r
#define WRITEALL_SP2_PLL_AFE_CTL4r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL4r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL4r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL_AFE_CTL5
 * BLOCKS:   PLL_AFE
 * REGADDR:  0x8055
 * DESC:     Analog PLL Control5 Register
 * RESETVAL: 0x44 (68)
 * ACCESS:   R/W
 * FIELDS:
 *     MMD_PRSC4OR5PWDB Enables 4/5 prescaler. 0:disable, 1:enable
 *     CALIB_ADJ        Sets the control voltage for the calibration000:75mV001:90mV010:105mV011:120mV100:135mV101:150mV110:165mV111:180mV
 *     RESERVED_84      
 *     EN_CUR           Adjusts the R in the RC delay in the  frequency doubler000: not used001:32k ohms010:16k ohms011: 10.7k ohms100: 8k ohms101: 6.4k ohms110: 5.3k ohms111: 4.6k ohms
 *     I_PFD_OFFSET_ENLARGE 1: In offset_PFD mode, offset is extended by ~300ps
 *     REF_DOUBLER_EN   1: Input reference clock is doubled in frequency to alleviate sigma delta noise for lower reference frequencies. The feedback divider ratio is divided by 2 to maintain PLL frequency
 *     I_PFD_OFFSET     In fractional PLL mode, reset pulse can be offset by 664ps(typical)/418ps(min), where the minimum is greater than 4 Tvco.00: regular pfd operation for integer PLL01: reference is offset.10: feedback is offset.11: not used.
 *     I_NDIV_FRAC_3_0  
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r (0x00008055 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL_AFE_CTL5.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_s {
	uint32_t v[1];
	uint32_t sp2_pll_afe_ctl5[1];
	uint32_t _sp2_pll_afe_ctl5;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_CLR(r) (r).sp2_pll_afe_ctl5[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_SET(r,d) (r).sp2_pll_afe_ctl5[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_GET(r) (r).sp2_pll_afe_ctl5[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_I_NDIV_FRAC_3_0f_GET(r) ((((r).sp2_pll_afe_ctl5[0]) >> 12) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_I_NDIV_FRAC_3_0f_SET(r,f) (r).sp2_pll_afe_ctl5[0]=(((r).sp2_pll_afe_ctl5[0] & ~((uint32_t)0xf << 12)) | ((((uint32_t)f) & 0xf) << 12)) | (15 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_I_PFD_OFFSETf_GET(r) ((((r).sp2_pll_afe_ctl5[0]) >> 10) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_I_PFD_OFFSETf_SET(r,f) (r).sp2_pll_afe_ctl5[0]=(((r).sp2_pll_afe_ctl5[0] & ~((uint32_t)0x3 << 10)) | ((((uint32_t)f) & 0x3) << 10)) | (3 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_REF_DOUBLER_ENf_GET(r) ((((r).sp2_pll_afe_ctl5[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_REF_DOUBLER_ENf_SET(r,f) (r).sp2_pll_afe_ctl5[0]=(((r).sp2_pll_afe_ctl5[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_I_PFD_OFFSET_ENLARGEf_GET(r) ((((r).sp2_pll_afe_ctl5[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_I_PFD_OFFSET_ENLARGEf_SET(r,f) (r).sp2_pll_afe_ctl5[0]=(((r).sp2_pll_afe_ctl5[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_EN_CURf_GET(r) ((((r).sp2_pll_afe_ctl5[0]) >> 5) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_EN_CURf_SET(r,f) (r).sp2_pll_afe_ctl5[0]=(((r).sp2_pll_afe_ctl5[0] & ~((uint32_t)0x7 << 5)) | ((((uint32_t)f) & 0x7) << 5)) | (7 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_RESERVED_84f_GET(r) ((((r).sp2_pll_afe_ctl5[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_RESERVED_84f_SET(r,f) (r).sp2_pll_afe_ctl5[0]=(((r).sp2_pll_afe_ctl5[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_CALIB_ADJf_GET(r) ((((r).sp2_pll_afe_ctl5[0]) >> 1) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_CALIB_ADJf_SET(r,f) (r).sp2_pll_afe_ctl5[0]=(((r).sp2_pll_afe_ctl5[0] & ~((uint32_t)0x7 << 1)) | ((((uint32_t)f) & 0x7) << 1)) | (7 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_MMD_PRSC4OR5PWDBf_GET(r) (((r).sp2_pll_afe_ctl5[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_MMD_PRSC4OR5PWDBf_SET(r,f) (r).sp2_pll_afe_ctl5[0]=(((r).sp2_pll_afe_ctl5[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_PLL_AFE_CTL5.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL5r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r,(_r._sp2_pll_afe_ctl5))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r,(_r._sp2_pll_afe_ctl5)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r,(_r._sp2_pll_afe_ctl5))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL5r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl5))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL5r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl5))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll_afe_ctl5))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL_AFE_CTL5r BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r
#define SP2_PLL_AFE_CTL5r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_t SP2_PLL_AFE_CTL5r_t;
#define SP2_PLL_AFE_CTL5r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_CLR
#define SP2_PLL_AFE_CTL5r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_SET
#define SP2_PLL_AFE_CTL5r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_GET
#define SP2_PLL_AFE_CTL5r_I_NDIV_FRAC_3_0f_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_I_NDIV_FRAC_3_0f_GET
#define SP2_PLL_AFE_CTL5r_I_NDIV_FRAC_3_0f_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_I_NDIV_FRAC_3_0f_SET
#define SP2_PLL_AFE_CTL5r_I_PFD_OFFSETf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_I_PFD_OFFSETf_GET
#define SP2_PLL_AFE_CTL5r_I_PFD_OFFSETf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_I_PFD_OFFSETf_SET
#define SP2_PLL_AFE_CTL5r_REF_DOUBLER_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_REF_DOUBLER_ENf_GET
#define SP2_PLL_AFE_CTL5r_REF_DOUBLER_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_REF_DOUBLER_ENf_SET
#define SP2_PLL_AFE_CTL5r_I_PFD_OFFSET_ENLARGEf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_I_PFD_OFFSET_ENLARGEf_GET
#define SP2_PLL_AFE_CTL5r_I_PFD_OFFSET_ENLARGEf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_I_PFD_OFFSET_ENLARGEf_SET
#define SP2_PLL_AFE_CTL5r_EN_CURf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_EN_CURf_GET
#define SP2_PLL_AFE_CTL5r_EN_CURf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_EN_CURf_SET
#define SP2_PLL_AFE_CTL5r_RESERVED_84f_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_RESERVED_84f_GET
#define SP2_PLL_AFE_CTL5r_RESERVED_84f_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_RESERVED_84f_SET
#define SP2_PLL_AFE_CTL5r_CALIB_ADJf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_CALIB_ADJf_GET
#define SP2_PLL_AFE_CTL5r_CALIB_ADJf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_CALIB_ADJf_SET
#define SP2_PLL_AFE_CTL5r_MMD_PRSC4OR5PWDBf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_MMD_PRSC4OR5PWDBf_GET
#define SP2_PLL_AFE_CTL5r_MMD_PRSC4OR5PWDBf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r_MMD_PRSC4OR5PWDBf_SET
#define READ_SP2_PLL_AFE_CTL5r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL5r
#define WRITE_SP2_PLL_AFE_CTL5r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL5r
#define MODIFY_SP2_PLL_AFE_CTL5r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL5r
#define READLN_SP2_PLL_AFE_CTL5r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL5r
#define WRITELN_SP2_PLL_AFE_CTL5r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL5r
#define WRITEALL_SP2_PLL_AFE_CTL5r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL5r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL5r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL_AFE_CTL6
 * BLOCKS:   PLL_AFE
 * REGADDR:  0x8056
 * DESC:     Analog PLL Control6 Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     I_NDIV_FRAC_17_4 Fractional control of feedback dividerDivider fraction=i_ndiv_frac[109:92]/2^18For OC192, this value is set to binary( 0.70099*2^18)=10 1100 1101 1101 0000
 *     I_NDIV_INT_1_0   
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r (0x00008056 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL_AFE_CTL6.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_s {
	uint32_t v[1];
	uint32_t sp2_pll_afe_ctl6[1];
	uint32_t _sp2_pll_afe_ctl6;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_CLR(r) (r).sp2_pll_afe_ctl6[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_SET(r,d) (r).sp2_pll_afe_ctl6[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_GET(r) (r).sp2_pll_afe_ctl6[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_I_NDIV_INT_1_0f_GET(r) ((((r).sp2_pll_afe_ctl6[0]) >> 14) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_I_NDIV_INT_1_0f_SET(r,f) (r).sp2_pll_afe_ctl6[0]=(((r).sp2_pll_afe_ctl6[0] & ~((uint32_t)0x3 << 14)) | ((((uint32_t)f) & 0x3) << 14)) | (3 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_I_NDIV_FRAC_17_4f_GET(r) (((r).sp2_pll_afe_ctl6[0]) & 0x3fff)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_I_NDIV_FRAC_17_4f_SET(r,f) (r).sp2_pll_afe_ctl6[0]=(((r).sp2_pll_afe_ctl6[0] & ~((uint32_t)0x3fff)) | (((uint32_t)f) & 0x3fff)) | (0x3fff << 16)

/*
 * These macros can be used to access SP2_PLL_AFE_CTL6.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL6r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r,(_r._sp2_pll_afe_ctl6))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r,(_r._sp2_pll_afe_ctl6)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r,(_r._sp2_pll_afe_ctl6))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL6r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl6))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL6r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl6))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll_afe_ctl6))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL_AFE_CTL6r BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r
#define SP2_PLL_AFE_CTL6r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_t SP2_PLL_AFE_CTL6r_t;
#define SP2_PLL_AFE_CTL6r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_CLR
#define SP2_PLL_AFE_CTL6r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_SET
#define SP2_PLL_AFE_CTL6r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_GET
#define SP2_PLL_AFE_CTL6r_I_NDIV_INT_1_0f_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_I_NDIV_INT_1_0f_GET
#define SP2_PLL_AFE_CTL6r_I_NDIV_INT_1_0f_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_I_NDIV_INT_1_0f_SET
#define SP2_PLL_AFE_CTL6r_I_NDIV_FRAC_17_4f_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_I_NDIV_FRAC_17_4f_GET
#define SP2_PLL_AFE_CTL6r_I_NDIV_FRAC_17_4f_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r_I_NDIV_FRAC_17_4f_SET
#define READ_SP2_PLL_AFE_CTL6r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL6r
#define WRITE_SP2_PLL_AFE_CTL6r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL6r
#define MODIFY_SP2_PLL_AFE_CTL6r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL6r
#define READLN_SP2_PLL_AFE_CTL6r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL6r
#define WRITELN_SP2_PLL_AFE_CTL6r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL6r
#define WRITEALL_SP2_PLL_AFE_CTL6r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL6r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL6r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL_AFE_CTL7
 * BLOCKS:   PLL_AFE
 * REGADDR:  0x8057
 * DESC:     Analog PLL Control7 Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     I_NDIV_INT_9_2   Feedback divider integer control (divider ratio=code)As shown in Fig.3 (page5) this value is added to fractional
 *     MMD_DIV_RANGE    Select mmd division range: (depends on division ratio)0= mmd uses div8/9 pre-scalar1= mmd uses div4/5 pre-scalar
 *     I_NDIV_DITHER_EN Enable 1 bit dithering of the fractional input i_pll_ctrl<83:66>0= dithering OFF1= dithering ON
 *     INV_VCO_CAL      Inverts the logic of vco calibration clock going to RTL from rising edge to falling edge
 *     I_PLL_SDM_PWRDNB Power down sdm rtl only when LOW(1: for fractional mode)
 *     SEL_FP3CAP       Controls the filter cap for the third loop filter pole in WIS modeSel_fp3cap<4:0>	Cap value0001	1p0010	1p0100	3p1000	3p
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r (0x00008057 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL_AFE_CTL7.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_s {
	uint32_t v[1];
	uint32_t sp2_pll_afe_ctl7[1];
	uint32_t _sp2_pll_afe_ctl7;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_CLR(r) (r).sp2_pll_afe_ctl7[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_SET(r,d) (r).sp2_pll_afe_ctl7[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_GET(r) (r).sp2_pll_afe_ctl7[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_SEL_FP3CAPf_GET(r) ((((r).sp2_pll_afe_ctl7[0]) >> 12) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_SEL_FP3CAPf_SET(r,f) (r).sp2_pll_afe_ctl7[0]=(((r).sp2_pll_afe_ctl7[0] & ~((uint32_t)0xf << 12)) | ((((uint32_t)f) & 0xf) << 12)) | (15 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_I_PLL_SDM_PWRDNBf_GET(r) ((((r).sp2_pll_afe_ctl7[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_I_PLL_SDM_PWRDNBf_SET(r,f) (r).sp2_pll_afe_ctl7[0]=(((r).sp2_pll_afe_ctl7[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_INV_VCO_CALf_GET(r) ((((r).sp2_pll_afe_ctl7[0]) >> 10) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_INV_VCO_CALf_SET(r,f) (r).sp2_pll_afe_ctl7[0]=(((r).sp2_pll_afe_ctl7[0] & ~((uint32_t)0x1 << 10)) | ((((uint32_t)f) & 0x1) << 10)) | (1 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_I_NDIV_DITHER_ENf_GET(r) ((((r).sp2_pll_afe_ctl7[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_I_NDIV_DITHER_ENf_SET(r,f) (r).sp2_pll_afe_ctl7[0]=(((r).sp2_pll_afe_ctl7[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_MMD_DIV_RANGEf_GET(r) ((((r).sp2_pll_afe_ctl7[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_MMD_DIV_RANGEf_SET(r,f) (r).sp2_pll_afe_ctl7[0]=(((r).sp2_pll_afe_ctl7[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_I_NDIV_INT_9_2f_GET(r) (((r).sp2_pll_afe_ctl7[0]) & 0xff)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_I_NDIV_INT_9_2f_SET(r,f) (r).sp2_pll_afe_ctl7[0]=(((r).sp2_pll_afe_ctl7[0] & ~((uint32_t)0xff)) | (((uint32_t)f) & 0xff)) | (0xff << 16)

/*
 * These macros can be used to access SP2_PLL_AFE_CTL7.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL7r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r,(_r._sp2_pll_afe_ctl7))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL7r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r,(_r._sp2_pll_afe_ctl7)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL7r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r,(_r._sp2_pll_afe_ctl7))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL7r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl7))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL7r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl7))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL7r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll_afe_ctl7))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL_AFE_CTL7r BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r
#define SP2_PLL_AFE_CTL7r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_t SP2_PLL_AFE_CTL7r_t;
#define SP2_PLL_AFE_CTL7r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_CLR
#define SP2_PLL_AFE_CTL7r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_SET
#define SP2_PLL_AFE_CTL7r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_GET
#define SP2_PLL_AFE_CTL7r_SEL_FP3CAPf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_SEL_FP3CAPf_GET
#define SP2_PLL_AFE_CTL7r_SEL_FP3CAPf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_SEL_FP3CAPf_SET
#define SP2_PLL_AFE_CTL7r_I_PLL_SDM_PWRDNBf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_I_PLL_SDM_PWRDNBf_GET
#define SP2_PLL_AFE_CTL7r_I_PLL_SDM_PWRDNBf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_I_PLL_SDM_PWRDNBf_SET
#define SP2_PLL_AFE_CTL7r_INV_VCO_CALf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_INV_VCO_CALf_GET
#define SP2_PLL_AFE_CTL7r_INV_VCO_CALf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_INV_VCO_CALf_SET
#define SP2_PLL_AFE_CTL7r_I_NDIV_DITHER_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_I_NDIV_DITHER_ENf_GET
#define SP2_PLL_AFE_CTL7r_I_NDIV_DITHER_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_I_NDIV_DITHER_ENf_SET
#define SP2_PLL_AFE_CTL7r_MMD_DIV_RANGEf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_MMD_DIV_RANGEf_GET
#define SP2_PLL_AFE_CTL7r_MMD_DIV_RANGEf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_MMD_DIV_RANGEf_SET
#define SP2_PLL_AFE_CTL7r_I_NDIV_INT_9_2f_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_I_NDIV_INT_9_2f_GET
#define SP2_PLL_AFE_CTL7r_I_NDIV_INT_9_2f_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r_I_NDIV_INT_9_2f_SET
#define READ_SP2_PLL_AFE_CTL7r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL7r
#define WRITE_SP2_PLL_AFE_CTL7r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL7r
#define MODIFY_SP2_PLL_AFE_CTL7r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL7r
#define READLN_SP2_PLL_AFE_CTL7r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL7r
#define WRITELN_SP2_PLL_AFE_CTL7r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL7r
#define WRITEALL_SP2_PLL_AFE_CTL7r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL7r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL7r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL_AFE_CTL8
 * BLOCKS:   PLL_AFE
 * REGADDR:  0x8058
 * DESC:     Analog PLL Control8 Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     VDD1P0_PLL_EN    0: lower vdd supply operation range    0.81  0.95 V1: higher vdd supply operation range   0.90  1.05 VWhen disabled the bias current for the pll is increased by ~ 10%This will affect the RX operation
 *     RESERVED_143_129 
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r (0x00008058 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL_AFE_CTL8.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_s {
	uint32_t v[1];
	uint32_t sp2_pll_afe_ctl8[1];
	uint32_t _sp2_pll_afe_ctl8;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_CLR(r) (r).sp2_pll_afe_ctl8[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_SET(r,d) (r).sp2_pll_afe_ctl8[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_GET(r) (r).sp2_pll_afe_ctl8[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_RESERVED_143_129f_GET(r) ((((r).sp2_pll_afe_ctl8[0]) >> 1) & 0x7fff)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_RESERVED_143_129f_SET(r,f) (r).sp2_pll_afe_ctl8[0]=(((r).sp2_pll_afe_ctl8[0] & ~((uint32_t)0x7fff << 1)) | ((((uint32_t)f) & 0x7fff) << 1)) | (32767 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_VDD1P0_PLL_ENf_GET(r) (((r).sp2_pll_afe_ctl8[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_VDD1P0_PLL_ENf_SET(r,f) (r).sp2_pll_afe_ctl8[0]=(((r).sp2_pll_afe_ctl8[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_PLL_AFE_CTL8.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL8r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r,(_r._sp2_pll_afe_ctl8))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL8r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r,(_r._sp2_pll_afe_ctl8)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL8r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r,(_r._sp2_pll_afe_ctl8))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL8r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl8))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL8r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_ctl8))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL8r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll_afe_ctl8))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL_AFE_CTL8r BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r
#define SP2_PLL_AFE_CTL8r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_t SP2_PLL_AFE_CTL8r_t;
#define SP2_PLL_AFE_CTL8r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_CLR
#define SP2_PLL_AFE_CTL8r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_SET
#define SP2_PLL_AFE_CTL8r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_GET
#define SP2_PLL_AFE_CTL8r_RESERVED_143_129f_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_RESERVED_143_129f_GET
#define SP2_PLL_AFE_CTL8r_RESERVED_143_129f_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_RESERVED_143_129f_SET
#define SP2_PLL_AFE_CTL8r_VDD1P0_PLL_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_VDD1P0_PLL_ENf_GET
#define SP2_PLL_AFE_CTL8r_VDD1P0_PLL_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r_VDD1P0_PLL_ENf_SET
#define READ_SP2_PLL_AFE_CTL8r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_CTL8r
#define WRITE_SP2_PLL_AFE_CTL8r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_CTL8r
#define MODIFY_SP2_PLL_AFE_CTL8r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_CTL8r
#define READLN_SP2_PLL_AFE_CTL8r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_CTL8r
#define WRITELN_SP2_PLL_AFE_CTL8r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_CTL8r
#define WRITEALL_SP2_PLL_AFE_CTL8r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_CTL8r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_CTL8r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_TCATMR0
 * BLOCKS:   PLL_AFE
 * REGADDR:  0x8059
 * DESC:     tcaTimer Register 0 
 * RESETVAL: 0xd80 (3456)
 * ACCESS:   R/W
 * FIELDS:
 *     TCA_COARSE_TIMER 
 *     TCA_TIMER_SEL    
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r (0x00008059 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_SIZE 4

/*
 * This structure should be used to declare and program SP2_TCATMR0.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_s {
	uint32_t v[1];
	uint32_t sp2_tcatmr0[1];
	uint32_t _sp2_tcatmr0;
} BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_CLR(r) (r).sp2_tcatmr0[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_SET(r,d) (r).sp2_tcatmr0[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_GET(r) (r).sp2_tcatmr0[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_TCA_TIMER_SELf_GET(r) ((((r).sp2_tcatmr0[0]) >> 14) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_TCA_TIMER_SELf_SET(r,f) (r).sp2_tcatmr0[0]=(((r).sp2_tcatmr0[0] & ~((uint32_t)0x3 << 14)) | ((((uint32_t)f) & 0x3) << 14)) | (3 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_TCA_COARSE_TIMERf_GET(r) (((r).sp2_tcatmr0[0]) & 0x3fff)
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_TCA_COARSE_TIMERf_SET(r,f) (r).sp2_tcatmr0[0]=(((r).sp2_tcatmr0[0] & ~((uint32_t)0x3fff)) | (((uint32_t)f) & 0x3fff)) | (0x3fff << 16)

/*
 * These macros can be used to access SP2_TCATMR0.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_TCATMR0r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r,(_r._sp2_tcatmr0))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TCATMR0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r,(_r._sp2_tcatmr0)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TCATMR0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r,(_r._sp2_tcatmr0))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_TCATMR0r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tcatmr0))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TCATMR0r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tcatmr0))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TCATMR0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_tcatmr0))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_TCATMR0r BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r
#define SP2_TCATMR0r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_t SP2_TCATMR0r_t;
#define SP2_TCATMR0r_CLR BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_CLR
#define SP2_TCATMR0r_SET BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_SET
#define SP2_TCATMR0r_GET BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_GET
#define SP2_TCATMR0r_TCA_TIMER_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_TCA_TIMER_SELf_GET
#define SP2_TCATMR0r_TCA_TIMER_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_TCA_TIMER_SELf_SET
#define SP2_TCATMR0r_TCA_COARSE_TIMERf_GET BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_TCA_COARSE_TIMERf_GET
#define SP2_TCATMR0r_TCA_COARSE_TIMERf_SET BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r_TCA_COARSE_TIMERf_SET
#define READ_SP2_TCATMR0r BCMI_SGMIIP2X4_SERDES_READ_SP2_TCATMR0r
#define WRITE_SP2_TCATMR0r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TCATMR0r
#define MODIFY_SP2_TCATMR0r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TCATMR0r
#define READLN_SP2_TCATMR0r BCMI_SGMIIP2X4_SERDES_READLN_SP2_TCATMR0r
#define WRITELN_SP2_TCATMR0r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TCATMR0r
#define WRITEALL_SP2_TCATMR0r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TCATMR0r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_TCATMR0r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_TCATMR1
 * BLOCKS:   PLL_AFE
 * REGADDR:  0x805a
 * DESC:     tcaTimer Register 1 
 * RESETVAL: 0x400 (1024)
 * ACCESS:   R/W
 * FIELDS:
 *     TCA_FINE_TIMER   
 *     INTERP_OVERRIDE  
 *     XGXS_SEL         
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r (0x0000805a | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_TCATMR1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_s {
	uint32_t v[1];
	uint32_t sp2_tcatmr1[1];
	uint32_t _sp2_tcatmr1;
} BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_CLR(r) (r).sp2_tcatmr1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_SET(r,d) (r).sp2_tcatmr1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_GET(r) (r).sp2_tcatmr1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_XGXS_SELf_GET(r) ((((r).sp2_tcatmr1[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_XGXS_SELf_SET(r,f) (r).sp2_tcatmr1[0]=(((r).sp2_tcatmr1[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_INTERP_OVERRIDEf_GET(r) ((((r).sp2_tcatmr1[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_INTERP_OVERRIDEf_SET(r,f) (r).sp2_tcatmr1[0]=(((r).sp2_tcatmr1[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_TCA_FINE_TIMERf_GET(r) (((r).sp2_tcatmr1[0]) & 0x3fff)
#define BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_TCA_FINE_TIMERf_SET(r,f) (r).sp2_tcatmr1[0]=(((r).sp2_tcatmr1[0] & ~((uint32_t)0x3fff)) | (((uint32_t)f) & 0x3fff)) | (0x3fff << 16)

/*
 * These macros can be used to access SP2_TCATMR1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_TCATMR1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r,(_r._sp2_tcatmr1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TCATMR1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r,(_r._sp2_tcatmr1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TCATMR1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r,(_r._sp2_tcatmr1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_TCATMR1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tcatmr1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TCATMR1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tcatmr1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TCATMR1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_tcatmr1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_TCATMR1r BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r
#define SP2_TCATMR1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_t SP2_TCATMR1r_t;
#define SP2_TCATMR1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_CLR
#define SP2_TCATMR1r_SET BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_SET
#define SP2_TCATMR1r_GET BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_GET
#define SP2_TCATMR1r_XGXS_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_XGXS_SELf_GET
#define SP2_TCATMR1r_XGXS_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_XGXS_SELf_SET
#define SP2_TCATMR1r_INTERP_OVERRIDEf_GET BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_INTERP_OVERRIDEf_GET
#define SP2_TCATMR1r_INTERP_OVERRIDEf_SET BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_INTERP_OVERRIDEf_SET
#define SP2_TCATMR1r_TCA_FINE_TIMERf_GET BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_TCA_FINE_TIMERf_GET
#define SP2_TCATMR1r_TCA_FINE_TIMERf_SET BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r_TCA_FINE_TIMERf_SET
#define READ_SP2_TCATMR1r BCMI_SGMIIP2X4_SERDES_READ_SP2_TCATMR1r
#define WRITE_SP2_TCATMR1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TCATMR1r
#define MODIFY_SP2_TCATMR1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TCATMR1r
#define READLN_SP2_TCATMR1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_TCATMR1r
#define WRITELN_SP2_TCATMR1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TCATMR1r
#define WRITEALL_SP2_TCATMR1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TCATMR1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_TCATMR1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL_AFE_BLKADDR
 * BLOCKS:   PLL_AFE
 * REGADDR:  0x805f
 * DESC:     Block Address register
 * RESETVAL: 0x50 (80)
 * ACCESS:   R/W
 * FIELDS:
 *     BLOCKADDRESS     Bits 14:4 of the address
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr (0x0000805f | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL_AFE_BLKADDR.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_s {
	uint32_t v[1];
	uint32_t sp2_pll_afe_blkaddr[1];
	uint32_t _sp2_pll_afe_blkaddr;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_CLR(r) (r).sp2_pll_afe_blkaddr[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_SET(r,d) (r).sp2_pll_afe_blkaddr[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_GET(r) (r).sp2_pll_afe_blkaddr[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_BLOCKADDRESSf_GET(r) ((((r).sp2_pll_afe_blkaddr[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_BLOCKADDRESSf_SET(r,f) (r).sp2_pll_afe_blkaddr[0]=(((r).sp2_pll_afe_blkaddr[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))

/*
 * These macros can be used to access SP2_PLL_AFE_BLKADDR.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_BLKADDRr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr,(_r._sp2_pll_afe_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr,(_r._sp2_pll_afe_blkaddr)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr,(_r._sp2_pll_afe_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll_afe_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll_afe_blkaddr))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr
#define SP2_PLL_AFE_BLKADDRr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_t SP2_PLL_AFE_BLKADDRr_t;
#define SP2_PLL_AFE_BLKADDRr_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_CLR
#define SP2_PLL_AFE_BLKADDRr_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_SET
#define SP2_PLL_AFE_BLKADDRr_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_GET
#define SP2_PLL_AFE_BLKADDRr_BLOCKADDRESSf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_BLOCKADDRESSf_GET
#define SP2_PLL_AFE_BLKADDRr_BLOCKADDRESSf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr_BLOCKADDRESSf_SET
#define READ_SP2_PLL_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL_AFE_BLKADDRr
#define WRITE_SP2_PLL_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL_AFE_BLKADDRr
#define MODIFY_SP2_PLL_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL_AFE_BLKADDRr
#define READLN_SP2_PLL_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL_AFE_BLKADDRr
#define WRITELN_SP2_PLL_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL_AFE_BLKADDRr
#define WRITEALL_SP2_PLL_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL_AFE_BLKADDRr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL_AFE_BLKADDRr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_TX_AFE_ANATXACTL0
 * BLOCKS:   TX_AFE
 * REGADDR:  0x8061
 * DESC:     Tx analog control 0 register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     TX_MDATA_EN      Enables tx mdio data
 *     TXPOL_FLIP       Flip the analog transmit output
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r (0x00008061 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_SIZE 4

/*
 * This structure should be used to declare and program SP2_TX_AFE_ANATXACTL0.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_s {
	uint32_t v[1];
	uint32_t sp2_tx_afe_anatxactl0[1];
	uint32_t _sp2_tx_afe_anatxactl0;
} BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_CLR(r) (r).sp2_tx_afe_anatxactl0[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_SET(r,d) (r).sp2_tx_afe_anatxactl0[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_GET(r) (r).sp2_tx_afe_anatxactl0[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_TXPOL_FLIPf_GET(r) ((((r).sp2_tx_afe_anatxactl0[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_TXPOL_FLIPf_SET(r,f) (r).sp2_tx_afe_anatxactl0[0]=(((r).sp2_tx_afe_anatxactl0[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_TX_MDATA_ENf_GET(r) (((r).sp2_tx_afe_anatxactl0[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_TX_MDATA_ENf_SET(r,f) (r).sp2_tx_afe_anatxactl0[0]=(((r).sp2_tx_afe_anatxactl0[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_TX_AFE_ANATXACTL0.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_ANATXACTL0r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r,(_r._sp2_tx_afe_anatxactl0))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_ANATXACTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r,(_r._sp2_tx_afe_anatxactl0)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_ANATXACTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r,(_r._sp2_tx_afe_anatxactl0))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_ANATXACTL0r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_anatxactl0))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_ANATXACTL0r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_anatxactl0))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_ANATXACTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_tx_afe_anatxactl0))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_TX_AFE_ANATXACTL0r BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r
#define SP2_TX_AFE_ANATXACTL0r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_t SP2_TX_AFE_ANATXACTL0r_t;
#define SP2_TX_AFE_ANATXACTL0r_CLR BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_CLR
#define SP2_TX_AFE_ANATXACTL0r_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_SET
#define SP2_TX_AFE_ANATXACTL0r_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_GET
#define SP2_TX_AFE_ANATXACTL0r_TXPOL_FLIPf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_TXPOL_FLIPf_GET
#define SP2_TX_AFE_ANATXACTL0r_TXPOL_FLIPf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_TXPOL_FLIPf_SET
#define SP2_TX_AFE_ANATXACTL0r_TX_MDATA_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_TX_MDATA_ENf_GET
#define SP2_TX_AFE_ANATXACTL0r_TX_MDATA_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r_TX_MDATA_ENf_SET
#define READ_SP2_TX_AFE_ANATXACTL0r BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_ANATXACTL0r
#define WRITE_SP2_TX_AFE_ANATXACTL0r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_ANATXACTL0r
#define MODIFY_SP2_TX_AFE_ANATXACTL0r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_ANATXACTL0r
#define READLN_SP2_TX_AFE_ANATXACTL0r BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_ANATXACTL0r
#define WRITELN_SP2_TX_AFE_ANATXACTL0r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_ANATXACTL0r
#define WRITEALL_SP2_TX_AFE_ANATXACTL0r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_ANATXACTL0r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXACTL0r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_TX_AFE_ANATXMDATA0
 * BLOCKS:   TX_AFE
 * REGADDR:  0x8062
 * DESC:     Tx test mux data 0 register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     TXMDIOTSTDATAL   lower 10 bits of pattern
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r (0x00008062 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_SIZE 4

/*
 * This structure should be used to declare and program SP2_TX_AFE_ANATXMDATA0.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_s {
	uint32_t v[1];
	uint32_t sp2_tx_afe_anatxmdata0[1];
	uint32_t _sp2_tx_afe_anatxmdata0;
} BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_CLR(r) (r).sp2_tx_afe_anatxmdata0[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_SET(r,d) (r).sp2_tx_afe_anatxmdata0[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_GET(r) (r).sp2_tx_afe_anatxmdata0[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_TXMDIOTSTDATALf_GET(r) (((r).sp2_tx_afe_anatxmdata0[0]) & 0x3ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_TXMDIOTSTDATALf_SET(r,f) (r).sp2_tx_afe_anatxmdata0[0]=(((r).sp2_tx_afe_anatxmdata0[0] & ~((uint32_t)0x3ff)) | (((uint32_t)f) & 0x3ff)) | (0x3ff << 16)

/*
 * These macros can be used to access SP2_TX_AFE_ANATXMDATA0.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_ANATXMDATA0r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r,(_r._sp2_tx_afe_anatxmdata0))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_ANATXMDATA0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r,(_r._sp2_tx_afe_anatxmdata0)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_ANATXMDATA0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r,(_r._sp2_tx_afe_anatxmdata0))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_ANATXMDATA0r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_anatxmdata0))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_ANATXMDATA0r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_anatxmdata0))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_ANATXMDATA0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_tx_afe_anatxmdata0))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_TX_AFE_ANATXMDATA0r BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r
#define SP2_TX_AFE_ANATXMDATA0r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_t SP2_TX_AFE_ANATXMDATA0r_t;
#define SP2_TX_AFE_ANATXMDATA0r_CLR BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_CLR
#define SP2_TX_AFE_ANATXMDATA0r_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_SET
#define SP2_TX_AFE_ANATXMDATA0r_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_GET
#define SP2_TX_AFE_ANATXMDATA0r_TXMDIOTSTDATALf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_TXMDIOTSTDATALf_GET
#define SP2_TX_AFE_ANATXMDATA0r_TXMDIOTSTDATALf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r_TXMDIOTSTDATALf_SET
#define READ_SP2_TX_AFE_ANATXMDATA0r BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_ANATXMDATA0r
#define WRITE_SP2_TX_AFE_ANATXMDATA0r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_ANATXMDATA0r
#define MODIFY_SP2_TX_AFE_ANATXMDATA0r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_ANATXMDATA0r
#define READLN_SP2_TX_AFE_ANATXMDATA0r BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_ANATXMDATA0r
#define WRITELN_SP2_TX_AFE_ANATXMDATA0r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_ANATXMDATA0r
#define WRITEALL_SP2_TX_AFE_ANATXMDATA0r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_ANATXMDATA0r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA0r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_TX_AFE_ANATXMDATA1
 * BLOCKS:   TX_AFE
 * REGADDR:  0x8063
 * DESC:     Tx test mux data 1 register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     TXMDIOTSTDATAH   upper 10 bits of pattern
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r (0x00008063 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_TX_AFE_ANATXMDATA1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_s {
	uint32_t v[1];
	uint32_t sp2_tx_afe_anatxmdata1[1];
	uint32_t _sp2_tx_afe_anatxmdata1;
} BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_CLR(r) (r).sp2_tx_afe_anatxmdata1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_SET(r,d) (r).sp2_tx_afe_anatxmdata1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_GET(r) (r).sp2_tx_afe_anatxmdata1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_TXMDIOTSTDATAHf_GET(r) (((r).sp2_tx_afe_anatxmdata1[0]) & 0x3ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_TXMDIOTSTDATAHf_SET(r,f) (r).sp2_tx_afe_anatxmdata1[0]=(((r).sp2_tx_afe_anatxmdata1[0] & ~((uint32_t)0x3ff)) | (((uint32_t)f) & 0x3ff)) | (0x3ff << 16)

/*
 * These macros can be used to access SP2_TX_AFE_ANATXMDATA1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_ANATXMDATA1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r,(_r._sp2_tx_afe_anatxmdata1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_ANATXMDATA1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r,(_r._sp2_tx_afe_anatxmdata1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_ANATXMDATA1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r,(_r._sp2_tx_afe_anatxmdata1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_ANATXMDATA1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_anatxmdata1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_ANATXMDATA1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_anatxmdata1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_ANATXMDATA1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_tx_afe_anatxmdata1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_TX_AFE_ANATXMDATA1r BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r
#define SP2_TX_AFE_ANATXMDATA1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_t SP2_TX_AFE_ANATXMDATA1r_t;
#define SP2_TX_AFE_ANATXMDATA1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_CLR
#define SP2_TX_AFE_ANATXMDATA1r_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_SET
#define SP2_TX_AFE_ANATXMDATA1r_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_GET
#define SP2_TX_AFE_ANATXMDATA1r_TXMDIOTSTDATAHf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_TXMDIOTSTDATAHf_GET
#define SP2_TX_AFE_ANATXMDATA1r_TXMDIOTSTDATAHf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r_TXMDIOTSTDATAHf_SET
#define READ_SP2_TX_AFE_ANATXMDATA1r BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_ANATXMDATA1r
#define WRITE_SP2_TX_AFE_ANATXMDATA1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_ANATXMDATA1r
#define MODIFY_SP2_TX_AFE_ANATXMDATA1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_ANATXMDATA1r
#define READLN_SP2_TX_AFE_ANATXMDATA1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_ANATXMDATA1r
#define WRITELN_SP2_TX_AFE_ANATXMDATA1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_ANATXMDATA1r
#define WRITEALL_SP2_TX_AFE_ANATXMDATA1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_ANATXMDATA1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_ANATXMDATA1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_TX_AFE_CTL0
 * BLOCKS:   TX_AFE
 * REGADDR:  0x8065
 * DESC:     Analog TX Control 0 Register
 * RESETVAL: 0x3220 (12832)
 * ACCESS:   R/W
 * FIELDS:
 *     TX_PWRDN         0       (OR with direct pin i_tx_pd)0: Normal Operation1: TX Power Down (This should not affect AC-JTAG power-down)i_test ( AC-JTAG enable ) over writes this bit
 *     TESTSEL          Select  0T,4T0 : divide by 101:  divide by 4
 *     RESERVED_3_2     
 *     IDLE_ENA         0       (OR with direct pin i_TxElecIdle)0: Normal Operation1: TX Idle => Pull outp/n to VDD/2 through 5k resistors when TX is not power down
 *     RXDETECT_TH      RX Termination Detection Control Settings, adjusting trip point of internal comp.00: 0.756xVDD01: 0.813xVDD10: 0.813xVDD11: 0.876xVDD
 *     RESERVED_7       
 *     MAIN_CONTROL     1.      1V mode:I_tx_ctrl<17> = 0;  I_tx_ctrl<15> = 0;mV (diff)       I_tx_ctrl<13:8>          mV(diff)       I_tx_ctrl<13:8>650	001100		981	100110667	001101		991	100111683	001110		1000	101000699	001111		1009	101001714	010000		1018	101010729	010001		1027	101011744	010010		1036	101100759	010011		1044	101101773	010100		1053	101110787	010101		1061	101111800	010110		1069	110000813	010111		1077	110001826	011000		1085	110010839	011001		1092	110011851	011010		1100	110100863	011011		1107	110101875	011100		1115	110110887	011101		1122	110111898	011110		1129	111000909	011111		1136	111001920	100000		1143	111010931	100001		1150	111011941	100010		1156	111100951	100011		1163	111101962	100100		1169	111110971	100101		1176	1111112.	0.5V mode:I_tx_ctrl<17> = 1;  I_tx_ctrl<15> = 0;mV (diff)	I_tx_ctrl<13:8>		 mV(diff)	I_tx_ctrl<13:8>220	000011		579	011010239	000100		591	011011258	000101		603	011100277	000110		615	011101295	000111		627	011110313	001000		639	011111330	001001		650	100000347	001010		661	100001364	001011		672	100010380	001100		683	100011396	001101		694	100100412	001110		704	100101427	001111		714	100110442	010000		724	100111457	010001		734	101000472	010010		744	101001486	010011		754	101010500	010100		763	101011514	010101		773	101100527	010110		782	101101541	010111		791	101110554	011000		800	101111566	011001
 *     QUARTER_UNIT_EN  0: quarter unit disabled;1: quarter unit enabled: finer pre-emphasis steps (in constant impedance mode)
 *     FIX_10UNITS_EN   0: the fixed extra units are disabled1: the fixed extra units are enabled (further amplitude increase: >1.2Vpp)
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r (0x00008065 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_SIZE 4

/*
 * This structure should be used to declare and program SP2_TX_AFE_CTL0.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_s {
	uint32_t v[1];
	uint32_t sp2_tx_afe_ctl0[1];
	uint32_t _sp2_tx_afe_ctl0;
} BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_CLR(r) (r).sp2_tx_afe_ctl0[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_SET(r,d) (r).sp2_tx_afe_ctl0[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_GET(r) (r).sp2_tx_afe_ctl0[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_FIX_10UNITS_ENf_GET(r) ((((r).sp2_tx_afe_ctl0[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_FIX_10UNITS_ENf_SET(r,f) (r).sp2_tx_afe_ctl0[0]=(((r).sp2_tx_afe_ctl0[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_QUARTER_UNIT_ENf_GET(r) ((((r).sp2_tx_afe_ctl0[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_QUARTER_UNIT_ENf_SET(r,f) (r).sp2_tx_afe_ctl0[0]=(((r).sp2_tx_afe_ctl0[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_MAIN_CONTROLf_GET(r) ((((r).sp2_tx_afe_ctl0[0]) >> 8) & 0x3f)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_MAIN_CONTROLf_SET(r,f) (r).sp2_tx_afe_ctl0[0]=(((r).sp2_tx_afe_ctl0[0] & ~((uint32_t)0x3f << 8)) | ((((uint32_t)f) & 0x3f) << 8)) | (63 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_RESERVED_7f_GET(r) ((((r).sp2_tx_afe_ctl0[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_RESERVED_7f_SET(r,f) (r).sp2_tx_afe_ctl0[0]=(((r).sp2_tx_afe_ctl0[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_RXDETECT_THf_GET(r) ((((r).sp2_tx_afe_ctl0[0]) >> 5) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_RXDETECT_THf_SET(r,f) (r).sp2_tx_afe_ctl0[0]=(((r).sp2_tx_afe_ctl0[0] & ~((uint32_t)0x3 << 5)) | ((((uint32_t)f) & 0x3) << 5)) | (3 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_IDLE_ENAf_GET(r) ((((r).sp2_tx_afe_ctl0[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_IDLE_ENAf_SET(r,f) (r).sp2_tx_afe_ctl0[0]=(((r).sp2_tx_afe_ctl0[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_RESERVED_3_2f_GET(r) ((((r).sp2_tx_afe_ctl0[0]) >> 2) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_RESERVED_3_2f_SET(r,f) (r).sp2_tx_afe_ctl0[0]=(((r).sp2_tx_afe_ctl0[0] & ~((uint32_t)0x3 << 2)) | ((((uint32_t)f) & 0x3) << 2)) | (3 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_TESTSELf_GET(r) ((((r).sp2_tx_afe_ctl0[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_TESTSELf_SET(r,f) (r).sp2_tx_afe_ctl0[0]=(((r).sp2_tx_afe_ctl0[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_TX_PWRDNf_GET(r) (((r).sp2_tx_afe_ctl0[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_TX_PWRDNf_SET(r,f) (r).sp2_tx_afe_ctl0[0]=(((r).sp2_tx_afe_ctl0[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_TX_AFE_CTL0.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_CTL0r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r,(_r._sp2_tx_afe_ctl0))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_CTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r,(_r._sp2_tx_afe_ctl0)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_CTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r,(_r._sp2_tx_afe_ctl0))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_CTL0r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_ctl0))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_CTL0r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_ctl0))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_CTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_tx_afe_ctl0))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_TX_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r
#define SP2_TX_AFE_CTL0r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_t SP2_TX_AFE_CTL0r_t;
#define SP2_TX_AFE_CTL0r_CLR BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_CLR
#define SP2_TX_AFE_CTL0r_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_SET
#define SP2_TX_AFE_CTL0r_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_GET
#define SP2_TX_AFE_CTL0r_FIX_10UNITS_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_FIX_10UNITS_ENf_GET
#define SP2_TX_AFE_CTL0r_FIX_10UNITS_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_FIX_10UNITS_ENf_SET
#define SP2_TX_AFE_CTL0r_QUARTER_UNIT_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_QUARTER_UNIT_ENf_GET
#define SP2_TX_AFE_CTL0r_QUARTER_UNIT_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_QUARTER_UNIT_ENf_SET
#define SP2_TX_AFE_CTL0r_MAIN_CONTROLf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_MAIN_CONTROLf_GET
#define SP2_TX_AFE_CTL0r_MAIN_CONTROLf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_MAIN_CONTROLf_SET
#define SP2_TX_AFE_CTL0r_RESERVED_7f_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_RESERVED_7f_GET
#define SP2_TX_AFE_CTL0r_RESERVED_7f_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_RESERVED_7f_SET
#define SP2_TX_AFE_CTL0r_RXDETECT_THf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_RXDETECT_THf_GET
#define SP2_TX_AFE_CTL0r_RXDETECT_THf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_RXDETECT_THf_SET
#define SP2_TX_AFE_CTL0r_IDLE_ENAf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_IDLE_ENAf_GET
#define SP2_TX_AFE_CTL0r_IDLE_ENAf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_IDLE_ENAf_SET
#define SP2_TX_AFE_CTL0r_RESERVED_3_2f_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_RESERVED_3_2f_GET
#define SP2_TX_AFE_CTL0r_RESERVED_3_2f_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_RESERVED_3_2f_SET
#define SP2_TX_AFE_CTL0r_TESTSELf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_TESTSELf_GET
#define SP2_TX_AFE_CTL0r_TESTSELf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_TESTSELf_SET
#define SP2_TX_AFE_CTL0r_TX_PWRDNf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_TX_PWRDNf_GET
#define SP2_TX_AFE_CTL0r_TX_PWRDNf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r_TX_PWRDNf_SET
#define READ_SP2_TX_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_CTL0r
#define WRITE_SP2_TX_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_CTL0r
#define MODIFY_SP2_TX_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_CTL0r
#define READLN_SP2_TX_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_CTL0r
#define WRITELN_SP2_TX_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_CTL0r
#define WRITEALL_SP2_TX_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_CTL0r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL0r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_TX_AFE_CTL1
 * BLOCKS:   TX_AFE
 * REGADDR:  0x8066
 * DESC:     Analog TX Control 1 Register
 * RESETVAL: 0x8009 (32777)
 * ACCESS:   R/W
 * FIELDS:
 *     VDD1P0_ENB       1 for lower range (0.81 to 0.95) and 0 for upper range ( 0.9 to 1.05)
 *     AMP_MODE         0: 1V mode;  1: 0.5V modeThis bit also changes the resistor calibration accordingly
 *     CONST_IMPEDANCE  0: Impedance varying mode; i.e. the output impedance increases when pre-emphasis increases1: constant impedance mode; i.e. the output impedance is constant at various pre-emphasis settingWhen 1 ensure i_tx_ctrl<28> = 1
 *     PI_BW_SEL        (updated from Tamer)
 *     PWD_LVL2PI       (updated from Tamer)
 *     RESERVED_21      
 *     POST_CONTROL     For all modes: i_tx_ctrl<28> = 1 enables the post path1V mode: I_tx_ctrl<17> = 0;a)	Impedance-varying mode: (the output impedance increases when pre-emphasis increases; assuming the main tap is set at default)I_tx_ctrl<18> = 0;  I_tx_ctrl<13:8> = 101001dB	I_tx_ctrl<27:22>		 dB	I_tx_ctrl<27:22>0	000000		-2.57	010110-0.08	000001		-2.74	010111-0.17	000010		-2.92	011000-0.25	000011		-3.11	011001-0.34	000100		-3.31	011010-0.43	000101		-3.52	011011-0.53	000110		-3.74	011100-0.62	000111		-3.97	011101-0.72	001000		-4.22	011110-0.83	001001		-4.47	011111-0.94	001010		-4.75	100000-1.05	001011		-5.04	100001-1.16	001100		-5.34	100010-1.28	001101		-5.67	100011-1.4	001110		-6.02	100100-1.53	001111		-6.4	100101-1.66	010000		-6.8	100110-1.8	010001		-7.23	100111-1.94	010010		-7.71	101000-2.1	010011		-8.22	101001-2.24	010100		-8.79	101010-2.4	010101b)	Constant Impedance mode: (the output impedance is constant at various pre-emphasis setting)I_tx_ctrl<18> = 1;Program I_tx_ctrl<13:8> and I_tx_ctrl<27:22> as in the following table:dB	I_tx_ctrl<13:8>	I_tx_ctrl<27:22>	I_tx_ctrl<14>0	101000	000000	0-0.17	100110	000010	1-0.32	100101	000011	0-0.5	100101	000011	1-0.66	100100	000100	0-0.84	100100	000100	1-1	100011	000101	0-1.19	100011	000101	1-1.37	100010	000110	0-1.56	100010	000110	1-1.76	100001	000111	0-1.95	100001	000111	1-2.16	100000	001000	0-2.36	100000	001000	1-2.58	011111	001001	0-2.78	011111	001001	1-3.02	011110	001010	0-3.23	011110	001010	1-3.49	011101	001011	0-3.71	011101	001011	1-3.98	011100	001100	0-4.21	011100	001100	1-4.5	011011	001101	0-4.74	011011	001101	1-5.1	011010	001110	0-5.31	011010	001110	1-5.66	011001	001111	0-5.92	011001	001111	1-6.3	011000	010000	0-6.57	011000	010000	1-6.99	010111	010001	0-7.28	010111	010001	1-7.75	010110	010010	0-8.05	010110	010010	1-8.57	010101	010011	0-8.9	010101	010011	1
 *     POST_ENABLE      0: post path is disable, 1: post path enable and pre-emphasis can be used
 *     RESERVED_29      
 *     SLEW_RATE_CONTROL 00: load cap 0pF(SATA3); 01: load cap 1pF(SATA2); 10: load cap 2pF(SATA1); 11: load cap 3pF
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r (0x00008066 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_TX_AFE_CTL1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_s {
	uint32_t v[1];
	uint32_t sp2_tx_afe_ctl1[1];
	uint32_t _sp2_tx_afe_ctl1;
} BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_CLR(r) (r).sp2_tx_afe_ctl1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_SET(r,d) (r).sp2_tx_afe_ctl1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_GET(r) (r).sp2_tx_afe_ctl1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_SLEW_RATE_CONTROLf_GET(r) ((((r).sp2_tx_afe_ctl1[0]) >> 14) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_SLEW_RATE_CONTROLf_SET(r,f) (r).sp2_tx_afe_ctl1[0]=(((r).sp2_tx_afe_ctl1[0] & ~((uint32_t)0x3 << 14)) | ((((uint32_t)f) & 0x3) << 14)) | (3 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_RESERVED_29f_GET(r) ((((r).sp2_tx_afe_ctl1[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_RESERVED_29f_SET(r,f) (r).sp2_tx_afe_ctl1[0]=(((r).sp2_tx_afe_ctl1[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_POST_ENABLEf_GET(r) ((((r).sp2_tx_afe_ctl1[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_POST_ENABLEf_SET(r,f) (r).sp2_tx_afe_ctl1[0]=(((r).sp2_tx_afe_ctl1[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_POST_CONTROLf_GET(r) ((((r).sp2_tx_afe_ctl1[0]) >> 6) & 0x3f)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_POST_CONTROLf_SET(r,f) (r).sp2_tx_afe_ctl1[0]=(((r).sp2_tx_afe_ctl1[0] & ~((uint32_t)0x3f << 6)) | ((((uint32_t)f) & 0x3f) << 6)) | (63 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_RESERVED_21f_GET(r) ((((r).sp2_tx_afe_ctl1[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_RESERVED_21f_SET(r,f) (r).sp2_tx_afe_ctl1[0]=(((r).sp2_tx_afe_ctl1[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_PWD_LVL2PIf_GET(r) ((((r).sp2_tx_afe_ctl1[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_PWD_LVL2PIf_SET(r,f) (r).sp2_tx_afe_ctl1[0]=(((r).sp2_tx_afe_ctl1[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_PI_BW_SELf_GET(r) ((((r).sp2_tx_afe_ctl1[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_PI_BW_SELf_SET(r,f) (r).sp2_tx_afe_ctl1[0]=(((r).sp2_tx_afe_ctl1[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_CONST_IMPEDANCEf_GET(r) ((((r).sp2_tx_afe_ctl1[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_CONST_IMPEDANCEf_SET(r,f) (r).sp2_tx_afe_ctl1[0]=(((r).sp2_tx_afe_ctl1[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_AMP_MODEf_GET(r) ((((r).sp2_tx_afe_ctl1[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_AMP_MODEf_SET(r,f) (r).sp2_tx_afe_ctl1[0]=(((r).sp2_tx_afe_ctl1[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_VDD1P0_ENBf_GET(r) (((r).sp2_tx_afe_ctl1[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_VDD1P0_ENBf_SET(r,f) (r).sp2_tx_afe_ctl1[0]=(((r).sp2_tx_afe_ctl1[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_TX_AFE_CTL1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_CTL1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r,(_r._sp2_tx_afe_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r,(_r._sp2_tx_afe_ctl1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r,(_r._sp2_tx_afe_ctl1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_CTL1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_CTL1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_tx_afe_ctl1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_TX_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r
#define SP2_TX_AFE_CTL1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_t SP2_TX_AFE_CTL1r_t;
#define SP2_TX_AFE_CTL1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_CLR
#define SP2_TX_AFE_CTL1r_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_SET
#define SP2_TX_AFE_CTL1r_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_GET
#define SP2_TX_AFE_CTL1r_SLEW_RATE_CONTROLf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_SLEW_RATE_CONTROLf_GET
#define SP2_TX_AFE_CTL1r_SLEW_RATE_CONTROLf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_SLEW_RATE_CONTROLf_SET
#define SP2_TX_AFE_CTL1r_RESERVED_29f_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_RESERVED_29f_GET
#define SP2_TX_AFE_CTL1r_RESERVED_29f_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_RESERVED_29f_SET
#define SP2_TX_AFE_CTL1r_POST_ENABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_POST_ENABLEf_GET
#define SP2_TX_AFE_CTL1r_POST_ENABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_POST_ENABLEf_SET
#define SP2_TX_AFE_CTL1r_POST_CONTROLf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_POST_CONTROLf_GET
#define SP2_TX_AFE_CTL1r_POST_CONTROLf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_POST_CONTROLf_SET
#define SP2_TX_AFE_CTL1r_RESERVED_21f_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_RESERVED_21f_GET
#define SP2_TX_AFE_CTL1r_RESERVED_21f_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_RESERVED_21f_SET
#define SP2_TX_AFE_CTL1r_PWD_LVL2PIf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_PWD_LVL2PIf_GET
#define SP2_TX_AFE_CTL1r_PWD_LVL2PIf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_PWD_LVL2PIf_SET
#define SP2_TX_AFE_CTL1r_PI_BW_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_PI_BW_SELf_GET
#define SP2_TX_AFE_CTL1r_PI_BW_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_PI_BW_SELf_SET
#define SP2_TX_AFE_CTL1r_CONST_IMPEDANCEf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_CONST_IMPEDANCEf_GET
#define SP2_TX_AFE_CTL1r_CONST_IMPEDANCEf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_CONST_IMPEDANCEf_SET
#define SP2_TX_AFE_CTL1r_AMP_MODEf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_AMP_MODEf_GET
#define SP2_TX_AFE_CTL1r_AMP_MODEf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_AMP_MODEf_SET
#define SP2_TX_AFE_CTL1r_VDD1P0_ENBf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_VDD1P0_ENBf_GET
#define SP2_TX_AFE_CTL1r_VDD1P0_ENBf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r_VDD1P0_ENBf_SET
#define READ_SP2_TX_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_CTL1r
#define WRITE_SP2_TX_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_CTL1r
#define MODIFY_SP2_TX_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_CTL1r
#define READLN_SP2_TX_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_CTL1r
#define WRITELN_SP2_TX_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_CTL1r
#define WRITEALL_SP2_TX_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_CTL1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_TX_AFE_CTL2
 * BLOCKS:   TX_AFE
 * REGADDR:  0x8067
 * DESC:     Analog TX Control 2 Register
 * RESETVAL: 0x38 (56)
 * ACCESS:   R/W
 * FIELDS:
 *     TESTCK_EN        This bit enables testport mux, for testing 10T and 4T clocks
 *     TICKSEL          ticksel[1:0] control load timing of the data respect to 10T clock00 allows parallel data to be delayed by 8T01 allows parallel data to be delayed by 10T10 allows parallel data to be delayed by 12T11 allows parallel data to be delayed by 14T
 *     TX_PON           Resistor Calibration Control Setting (Update table)0000: min resistance process corner, (increases on-chip R by +25%)1111: max resistance process corner, (decreases on-chip R by -25%)Error between two consecutive codes is maintained less than 3%.By default, pon<3:0> match with resistor calibration output; they can also be independently adjusted through RTL.
 *     VDD_NOISE_SHAPE  Controls shape of injected current of the noise cancelation circuit to vdd
 *     NOISE_CNCL_BIAS  Controls bias current of the noise cancelation circuit
 *     VDD_NOISE_CNCL_EN Enables noise cancelation circuit
 *     LEAKAGE_TEST     Test pin for leakage power internal analog test only
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r (0x00008067 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_TX_AFE_CTL2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_s {
	uint32_t v[1];
	uint32_t sp2_tx_afe_ctl2[1];
	uint32_t _sp2_tx_afe_ctl2;
} BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_CLR(r) (r).sp2_tx_afe_ctl2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_SET(r,d) (r).sp2_tx_afe_ctl2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_GET(r) (r).sp2_tx_afe_ctl2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_LEAKAGE_TESTf_GET(r) ((((r).sp2_tx_afe_ctl2[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_LEAKAGE_TESTf_SET(r,f) (r).sp2_tx_afe_ctl2[0]=(((r).sp2_tx_afe_ctl2[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_VDD_NOISE_CNCL_ENf_GET(r) ((((r).sp2_tx_afe_ctl2[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_VDD_NOISE_CNCL_ENf_SET(r,f) (r).sp2_tx_afe_ctl2[0]=(((r).sp2_tx_afe_ctl2[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_NOISE_CNCL_BIASf_GET(r) ((((r).sp2_tx_afe_ctl2[0]) >> 10) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_NOISE_CNCL_BIASf_SET(r,f) (r).sp2_tx_afe_ctl2[0]=(((r).sp2_tx_afe_ctl2[0] & ~((uint32_t)0xf << 10)) | ((((uint32_t)f) & 0xf) << 10)) | (15 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_VDD_NOISE_SHAPEf_GET(r) ((((r).sp2_tx_afe_ctl2[0]) >> 7) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_VDD_NOISE_SHAPEf_SET(r,f) (r).sp2_tx_afe_ctl2[0]=(((r).sp2_tx_afe_ctl2[0] & ~((uint32_t)0x7 << 7)) | ((((uint32_t)f) & 0x7) << 7)) | (7 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_TX_PONf_GET(r) ((((r).sp2_tx_afe_ctl2[0]) >> 3) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_TX_PONf_SET(r,f) (r).sp2_tx_afe_ctl2[0]=(((r).sp2_tx_afe_ctl2[0] & ~((uint32_t)0xf << 3)) | ((((uint32_t)f) & 0xf) << 3)) | (15 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_TICKSELf_GET(r) ((((r).sp2_tx_afe_ctl2[0]) >> 1) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_TICKSELf_SET(r,f) (r).sp2_tx_afe_ctl2[0]=(((r).sp2_tx_afe_ctl2[0] & ~((uint32_t)0x3 << 1)) | ((((uint32_t)f) & 0x3) << 1)) | (3 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_TESTCK_ENf_GET(r) (((r).sp2_tx_afe_ctl2[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_TESTCK_ENf_SET(r,f) (r).sp2_tx_afe_ctl2[0]=(((r).sp2_tx_afe_ctl2[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_TX_AFE_CTL2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_CTL2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r,(_r._sp2_tx_afe_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r,(_r._sp2_tx_afe_ctl2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r,(_r._sp2_tx_afe_ctl2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_CTL2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_CTL2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_tx_afe_ctl2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_TX_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r
#define SP2_TX_AFE_CTL2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_t SP2_TX_AFE_CTL2r_t;
#define SP2_TX_AFE_CTL2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_CLR
#define SP2_TX_AFE_CTL2r_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_SET
#define SP2_TX_AFE_CTL2r_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_GET
#define SP2_TX_AFE_CTL2r_LEAKAGE_TESTf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_LEAKAGE_TESTf_GET
#define SP2_TX_AFE_CTL2r_LEAKAGE_TESTf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_LEAKAGE_TESTf_SET
#define SP2_TX_AFE_CTL2r_VDD_NOISE_CNCL_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_VDD_NOISE_CNCL_ENf_GET
#define SP2_TX_AFE_CTL2r_VDD_NOISE_CNCL_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_VDD_NOISE_CNCL_ENf_SET
#define SP2_TX_AFE_CTL2r_NOISE_CNCL_BIASf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_NOISE_CNCL_BIASf_GET
#define SP2_TX_AFE_CTL2r_NOISE_CNCL_BIASf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_NOISE_CNCL_BIASf_SET
#define SP2_TX_AFE_CTL2r_VDD_NOISE_SHAPEf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_VDD_NOISE_SHAPEf_GET
#define SP2_TX_AFE_CTL2r_VDD_NOISE_SHAPEf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_VDD_NOISE_SHAPEf_SET
#define SP2_TX_AFE_CTL2r_TX_PONf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_TX_PONf_GET
#define SP2_TX_AFE_CTL2r_TX_PONf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_TX_PONf_SET
#define SP2_TX_AFE_CTL2r_TICKSELf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_TICKSELf_GET
#define SP2_TX_AFE_CTL2r_TICKSELf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_TICKSELf_SET
#define SP2_TX_AFE_CTL2r_TESTCK_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_TESTCK_ENf_GET
#define SP2_TX_AFE_CTL2r_TESTCK_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r_TESTCK_ENf_SET
#define READ_SP2_TX_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_CTL2r
#define WRITE_SP2_TX_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_CTL2r
#define MODIFY_SP2_TX_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_CTL2r
#define READLN_SP2_TX_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_CTL2r
#define WRITELN_SP2_TX_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_CTL2r
#define WRITEALL_SP2_TX_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_CTL2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_TX_AFE_CTL3
 * BLOCKS:   TX_AFE
 * REGADDR:  0x8068
 * DESC:     Analog TX Control 3 Register
 * RESETVAL: 0x16 (22)
 * ACCESS:   R/W
 * FIELDS:
 *     RESERVED_63_48   
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r (0x00008068 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_SIZE 4

/*
 * This structure should be used to declare and program SP2_TX_AFE_CTL3.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_s {
	uint32_t v[1];
	uint32_t sp2_tx_afe_ctl3[1];
	uint32_t _sp2_tx_afe_ctl3;
} BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_CLR(r) (r).sp2_tx_afe_ctl3[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_SET(r,d) (r).sp2_tx_afe_ctl3[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_GET(r) (r).sp2_tx_afe_ctl3[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_RESERVED_63_48f_GET(r) (((r).sp2_tx_afe_ctl3[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_RESERVED_63_48f_SET(r,f) (r).sp2_tx_afe_ctl3[0]=(((r).sp2_tx_afe_ctl3[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_TX_AFE_CTL3.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_CTL3r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r,(_r._sp2_tx_afe_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r,(_r._sp2_tx_afe_ctl3)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r,(_r._sp2_tx_afe_ctl3))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_CTL3r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_CTL3r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_tx_afe_ctl3))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_TX_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r
#define SP2_TX_AFE_CTL3r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_t SP2_TX_AFE_CTL3r_t;
#define SP2_TX_AFE_CTL3r_CLR BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_CLR
#define SP2_TX_AFE_CTL3r_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_SET
#define SP2_TX_AFE_CTL3r_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_GET
#define SP2_TX_AFE_CTL3r_RESERVED_63_48f_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_RESERVED_63_48f_GET
#define SP2_TX_AFE_CTL3r_RESERVED_63_48f_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r_RESERVED_63_48f_SET
#define READ_SP2_TX_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_CTL3r
#define WRITE_SP2_TX_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_CTL3r
#define MODIFY_SP2_TX_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_CTL3r
#define READLN_SP2_TX_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_CTL3r
#define WRITELN_SP2_TX_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_CTL3r
#define WRITEALL_SP2_TX_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_CTL3r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_CTL3r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_TX_AFE_INTERP
 * BLOCKS:   TX_AFE
 * REGADDR:  0x8069
 * DESC:     txinterp Control Register
 * RESETVAL: 0x80 (128)
 * ACCESS:   R/W
 * FIELDS:
 *     INTERP_CTRL_PHS  
 *     INTERP_CTRL_QUADRANT 
 *     TX_RATESELECT    
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr (0x00008069 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_SIZE 4

/*
 * This structure should be used to declare and program SP2_TX_AFE_INTERP.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_s {
	uint32_t v[1];
	uint32_t sp2_tx_afe_interp[1];
	uint32_t _sp2_tx_afe_interp;
} BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_CLR(r) (r).sp2_tx_afe_interp[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_SET(r,d) (r).sp2_tx_afe_interp[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_GET(r) (r).sp2_tx_afe_interp[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_TX_RATESELECTf_GET(r) ((((r).sp2_tx_afe_interp[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_TX_RATESELECTf_SET(r,f) (r).sp2_tx_afe_interp[0]=(((r).sp2_tx_afe_interp[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_INTERP_CTRL_QUADRANTf_GET(r) ((((r).sp2_tx_afe_interp[0]) >> 5) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_INTERP_CTRL_QUADRANTf_SET(r,f) (r).sp2_tx_afe_interp[0]=(((r).sp2_tx_afe_interp[0] & ~((uint32_t)0x3 << 5)) | ((((uint32_t)f) & 0x3) << 5)) | (3 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_INTERP_CTRL_PHSf_GET(r) (((r).sp2_tx_afe_interp[0]) & 0x1f)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_INTERP_CTRL_PHSf_SET(r,f) (r).sp2_tx_afe_interp[0]=(((r).sp2_tx_afe_interp[0] & ~((uint32_t)0x1f)) | (((uint32_t)f) & 0x1f)) | (0x1f << 16)

/*
 * These macros can be used to access SP2_TX_AFE_INTERP.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_INTERPr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr,(_r._sp2_tx_afe_interp))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_INTERPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr,(_r._sp2_tx_afe_interp)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_INTERPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr,(_r._sp2_tx_afe_interp))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_INTERPr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_interp))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_INTERPr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_interp))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_INTERPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_tx_afe_interp))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_TX_AFE_INTERPr BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr
#define SP2_TX_AFE_INTERPr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_t SP2_TX_AFE_INTERPr_t;
#define SP2_TX_AFE_INTERPr_CLR BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_CLR
#define SP2_TX_AFE_INTERPr_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_SET
#define SP2_TX_AFE_INTERPr_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_GET
#define SP2_TX_AFE_INTERPr_TX_RATESELECTf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_TX_RATESELECTf_GET
#define SP2_TX_AFE_INTERPr_TX_RATESELECTf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_TX_RATESELECTf_SET
#define SP2_TX_AFE_INTERPr_INTERP_CTRL_QUADRANTf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_INTERP_CTRL_QUADRANTf_GET
#define SP2_TX_AFE_INTERPr_INTERP_CTRL_QUADRANTf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_INTERP_CTRL_QUADRANTf_SET
#define SP2_TX_AFE_INTERPr_INTERP_CTRL_PHSf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_INTERP_CTRL_PHSf_GET
#define SP2_TX_AFE_INTERPr_INTERP_CTRL_PHSf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr_INTERP_CTRL_PHSf_SET
#define READ_SP2_TX_AFE_INTERPr BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_INTERPr
#define WRITE_SP2_TX_AFE_INTERPr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_INTERPr
#define MODIFY_SP2_TX_AFE_INTERPr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_INTERPr
#define READLN_SP2_TX_AFE_INTERPr BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_INTERPr
#define WRITELN_SP2_TX_AFE_INTERPr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_INTERPr
#define WRITEALL_SP2_TX_AFE_INTERPr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_INTERPr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_INTERPr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_TX_AFE_BLKADDR
 * BLOCKS:   TX_AFE
 * REGADDR:  0x806f
 * DESC:     Block Address register
 * RESETVAL: 0x60 (96)
 * ACCESS:   R/W
 * FIELDS:
 *     BLOCKADDRESS     Bits 14:4 of the address
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr (0x0000806f | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_SIZE 4

/*
 * This structure should be used to declare and program SP2_TX_AFE_BLKADDR.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_s {
	uint32_t v[1];
	uint32_t sp2_tx_afe_blkaddr[1];
	uint32_t _sp2_tx_afe_blkaddr;
} BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_CLR(r) (r).sp2_tx_afe_blkaddr[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_SET(r,d) (r).sp2_tx_afe_blkaddr[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_GET(r) (r).sp2_tx_afe_blkaddr[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_BLOCKADDRESSf_GET(r) ((((r).sp2_tx_afe_blkaddr[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_BLOCKADDRESSf_SET(r,f) (r).sp2_tx_afe_blkaddr[0]=(((r).sp2_tx_afe_blkaddr[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))

/*
 * These macros can be used to access SP2_TX_AFE_BLKADDR.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_BLKADDRr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr,(_r._sp2_tx_afe_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr,(_r._sp2_tx_afe_blkaddr)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr,(_r._sp2_tx_afe_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_tx_afe_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_tx_afe_blkaddr))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_TX_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr
#define SP2_TX_AFE_BLKADDRr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_t SP2_TX_AFE_BLKADDRr_t;
#define SP2_TX_AFE_BLKADDRr_CLR BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_CLR
#define SP2_TX_AFE_BLKADDRr_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_SET
#define SP2_TX_AFE_BLKADDRr_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_GET
#define SP2_TX_AFE_BLKADDRr_BLOCKADDRESSf_GET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_BLOCKADDRESSf_GET
#define SP2_TX_AFE_BLKADDRr_BLOCKADDRESSf_SET BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr_BLOCKADDRESSf_SET
#define READ_SP2_TX_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_READ_SP2_TX_AFE_BLKADDRr
#define WRITE_SP2_TX_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TX_AFE_BLKADDRr
#define MODIFY_SP2_TX_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TX_AFE_BLKADDRr
#define READLN_SP2_TX_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_READLN_SP2_TX_AFE_BLKADDRr
#define WRITELN_SP2_TX_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TX_AFE_BLKADDRr
#define WRITEALL_SP2_TX_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TX_AFE_BLKADDRr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_TX_AFE_BLKADDRr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX_AFE_ANARXSTS
 * BLOCKS:   RX_AFE
 * REGADDR:  0x80b0
 * DESC:     Rx lane status register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/O
 * FIELDS:
 *     SP2_RX_AFE_ANARXSTS SP2_RX_AFE_ANARXSTS
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr (0x000080b0 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX_AFE_ANARXSTS.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_s {
	uint32_t v[1];
	uint32_t sp2_rx_afe_anarxsts[1];
	uint32_t _sp2_rx_afe_anarxsts;
} BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_CLR(r) (r).sp2_rx_afe_anarxsts[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_SET(r,d) (r).sp2_rx_afe_anarxsts[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_GET(r) (r).sp2_rx_afe_anarxsts[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_SP2_RX_AFE_ANARXSTSf_GET(r) (((r).sp2_rx_afe_anarxsts[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_SP2_RX_AFE_ANARXSTSf_SET(r,f) (r).sp2_rx_afe_anarxsts[0]=(((r).sp2_rx_afe_anarxsts[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_RX_AFE_ANARXSTS.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_ANARXSTSr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr,(_r._sp2_rx_afe_anarxsts))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_ANARXSTSr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr,(_r._sp2_rx_afe_anarxsts)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_ANARXSTSr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr,(_r._sp2_rx_afe_anarxsts))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_ANARXSTSr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_anarxsts))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_ANARXSTSr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_anarxsts))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_ANARXSTSr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx_afe_anarxsts))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX_AFE_ANARXSTSr BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr
#define SP2_RX_AFE_ANARXSTSr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_t SP2_RX_AFE_ANARXSTSr_t;
#define SP2_RX_AFE_ANARXSTSr_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_CLR
#define SP2_RX_AFE_ANARXSTSr_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_SET
#define SP2_RX_AFE_ANARXSTSr_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_GET
#define SP2_RX_AFE_ANARXSTSr_SP2_RX_AFE_ANARXSTSf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_SP2_RX_AFE_ANARXSTSf_GET
#define SP2_RX_AFE_ANARXSTSr_SP2_RX_AFE_ANARXSTSf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr_SP2_RX_AFE_ANARXSTSf_SET
#define READ_SP2_RX_AFE_ANARXSTSr BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_ANARXSTSr
#define WRITE_SP2_RX_AFE_ANARXSTSr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_ANARXSTSr
#define MODIFY_SP2_RX_AFE_ANARXSTSr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_ANARXSTSr
#define READLN_SP2_RX_AFE_ANARXSTSr BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_ANARXSTSr
#define WRITELN_SP2_RX_AFE_ANARXSTSr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_ANARXSTSr
#define WRITEALL_SP2_RX_AFE_ANARXSTSr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_ANARXSTSr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSTSr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX_AFE_ANARXCTL
 * BLOCKS:   RX_AFE
 * REGADDR:  0x80b1
 * DESC:     Rx lane control register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     STATUS_SEL       
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr (0x000080b1 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX_AFE_ANARXCTL.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_s {
	uint32_t v[1];
	uint32_t sp2_rx_afe_anarxctl[1];
	uint32_t _sp2_rx_afe_anarxctl;
} BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_CLR(r) (r).sp2_rx_afe_anarxctl[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_SET(r,d) (r).sp2_rx_afe_anarxctl[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_GET(r) (r).sp2_rx_afe_anarxctl[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_STATUS_SELf_GET(r) (((r).sp2_rx_afe_anarxctl[0]) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_STATUS_SELf_SET(r,f) (r).sp2_rx_afe_anarxctl[0]=(((r).sp2_rx_afe_anarxctl[0] & ~((uint32_t)0x7)) | (((uint32_t)f) & 0x7)) | (0x7 << 16)

/*
 * These macros can be used to access SP2_RX_AFE_ANARXCTL.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_ANARXCTLr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr,(_r._sp2_rx_afe_anarxctl))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_ANARXCTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr,(_r._sp2_rx_afe_anarxctl)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_ANARXCTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr,(_r._sp2_rx_afe_anarxctl))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_ANARXCTLr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_anarxctl))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_ANARXCTLr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_anarxctl))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_ANARXCTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx_afe_anarxctl))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX_AFE_ANARXCTLr BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr
#define SP2_RX_AFE_ANARXCTLr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_t SP2_RX_AFE_ANARXCTLr_t;
#define SP2_RX_AFE_ANARXCTLr_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_CLR
#define SP2_RX_AFE_ANARXCTLr_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_SET
#define SP2_RX_AFE_ANARXCTLr_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_GET
#define SP2_RX_AFE_ANARXCTLr_STATUS_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_STATUS_SELf_GET
#define SP2_RX_AFE_ANARXCTLr_STATUS_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr_STATUS_SELf_SET
#define READ_SP2_RX_AFE_ANARXCTLr BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_ANARXCTLr
#define WRITE_SP2_RX_AFE_ANARXCTLr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_ANARXCTLr
#define MODIFY_SP2_RX_AFE_ANARXCTLr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_ANARXCTLr
#define READLN_SP2_RX_AFE_ANARXCTLr BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_ANARXCTLr
#define WRITELN_SP2_RX_AFE_ANARXCTLr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_ANARXCTLr
#define WRITEALL_SP2_RX_AFE_ANARXCTLr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_ANARXCTLr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX_AFE_CTL0
 * BLOCKS:   RX_AFE
 * REGADDR:  0x80b2
 * DESC:     AFE Control Register 15:0
 * RESETVAL: 0x780 (1920)
 * ACCESS:   R/W
 * FIELDS:
 *     RESERVED_0       
 *     PD_EQZ           Equalizer power down
 *     PD_LMTNG         Limiting amplifier power down
 *     RESERVED_5_3     
 *     FILTER_BAND      Controls degeneration cap in Equalizer00 2.3pF01 4.1pF11 3.7pF10 100fF (Default)
 *     RX_PON           Resistor Calibration Control Setting0000: min resistance process corner, (increases on-chip R by +25%)1111: max resistance process corner, (decreases on-chip R by -25%)Error between two consecutive codes is maintained less than 3%.By default, pon<3:0> match with resistor calibration output; they can also be independently adjusted through RTL.
 *     RESERVED_14_12   
 *     SLICER_PD        Power down for the  full slicer, and clock distribution.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r (0x000080b2 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX_AFE_CTL0.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_s {
	uint32_t v[1];
	uint32_t sp2_rx_afe_ctl0[1];
	uint32_t _sp2_rx_afe_ctl0;
} BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_CLR(r) (r).sp2_rx_afe_ctl0[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_SET(r,d) (r).sp2_rx_afe_ctl0[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_GET(r) (r).sp2_rx_afe_ctl0[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_SLICER_PDf_GET(r) ((((r).sp2_rx_afe_ctl0[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_SLICER_PDf_SET(r,f) (r).sp2_rx_afe_ctl0[0]=(((r).sp2_rx_afe_ctl0[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RESERVED_14_12f_GET(r) ((((r).sp2_rx_afe_ctl0[0]) >> 12) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RESERVED_14_12f_SET(r,f) (r).sp2_rx_afe_ctl0[0]=(((r).sp2_rx_afe_ctl0[0] & ~((uint32_t)0x7 << 12)) | ((((uint32_t)f) & 0x7) << 12)) | (7 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RX_PONf_GET(r) ((((r).sp2_rx_afe_ctl0[0]) >> 8) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RX_PONf_SET(r,f) (r).sp2_rx_afe_ctl0[0]=(((r).sp2_rx_afe_ctl0[0] & ~((uint32_t)0xf << 8)) | ((((uint32_t)f) & 0xf) << 8)) | (15 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_FILTER_BANDf_GET(r) ((((r).sp2_rx_afe_ctl0[0]) >> 6) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_FILTER_BANDf_SET(r,f) (r).sp2_rx_afe_ctl0[0]=(((r).sp2_rx_afe_ctl0[0] & ~((uint32_t)0x3 << 6)) | ((((uint32_t)f) & 0x3) << 6)) | (3 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RESERVED_5_3f_GET(r) ((((r).sp2_rx_afe_ctl0[0]) >> 3) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RESERVED_5_3f_SET(r,f) (r).sp2_rx_afe_ctl0[0]=(((r).sp2_rx_afe_ctl0[0] & ~((uint32_t)0x7 << 3)) | ((((uint32_t)f) & 0x7) << 3)) | (7 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_PD_LMTNGf_GET(r) ((((r).sp2_rx_afe_ctl0[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_PD_LMTNGf_SET(r,f) (r).sp2_rx_afe_ctl0[0]=(((r).sp2_rx_afe_ctl0[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_PD_EQZf_GET(r) ((((r).sp2_rx_afe_ctl0[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_PD_EQZf_SET(r,f) (r).sp2_rx_afe_ctl0[0]=(((r).sp2_rx_afe_ctl0[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RESERVED_0f_GET(r) (((r).sp2_rx_afe_ctl0[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RESERVED_0f_SET(r,f) (r).sp2_rx_afe_ctl0[0]=(((r).sp2_rx_afe_ctl0[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_RX_AFE_CTL0.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_CTL0r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r,(_r._sp2_rx_afe_ctl0))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_CTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r,(_r._sp2_rx_afe_ctl0)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_CTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r,(_r._sp2_rx_afe_ctl0))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_CTL0r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_ctl0))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_CTL0r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_ctl0))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_CTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx_afe_ctl0))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r
#define SP2_RX_AFE_CTL0r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_t SP2_RX_AFE_CTL0r_t;
#define SP2_RX_AFE_CTL0r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_CLR
#define SP2_RX_AFE_CTL0r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_SET
#define SP2_RX_AFE_CTL0r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_GET
#define SP2_RX_AFE_CTL0r_SLICER_PDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_SLICER_PDf_GET
#define SP2_RX_AFE_CTL0r_SLICER_PDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_SLICER_PDf_SET
#define SP2_RX_AFE_CTL0r_RESERVED_14_12f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RESERVED_14_12f_GET
#define SP2_RX_AFE_CTL0r_RESERVED_14_12f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RESERVED_14_12f_SET
#define SP2_RX_AFE_CTL0r_RX_PONf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RX_PONf_GET
#define SP2_RX_AFE_CTL0r_RX_PONf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RX_PONf_SET
#define SP2_RX_AFE_CTL0r_FILTER_BANDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_FILTER_BANDf_GET
#define SP2_RX_AFE_CTL0r_FILTER_BANDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_FILTER_BANDf_SET
#define SP2_RX_AFE_CTL0r_RESERVED_5_3f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RESERVED_5_3f_GET
#define SP2_RX_AFE_CTL0r_RESERVED_5_3f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RESERVED_5_3f_SET
#define SP2_RX_AFE_CTL0r_PD_LMTNGf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_PD_LMTNGf_GET
#define SP2_RX_AFE_CTL0r_PD_LMTNGf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_PD_LMTNGf_SET
#define SP2_RX_AFE_CTL0r_PD_EQZf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_PD_EQZf_GET
#define SP2_RX_AFE_CTL0r_PD_EQZf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_PD_EQZf_SET
#define SP2_RX_AFE_CTL0r_RESERVED_0f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RESERVED_0f_GET
#define SP2_RX_AFE_CTL0r_RESERVED_0f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r_RESERVED_0f_SET
#define READ_SP2_RX_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_CTL0r
#define WRITE_SP2_RX_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_CTL0r
#define MODIFY_SP2_RX_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_CTL0r
#define READLN_SP2_RX_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_CTL0r
#define WRITELN_SP2_RX_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_CTL0r
#define WRITEALL_SP2_RX_AFE_CTL0r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_CTL0r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL0r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX_AFE_CTL1
 * BLOCKS:   RX_AFE
 * REGADDR:  0x80b3
 * DESC:     AFE Control Register 31:16
 * RESETVAL: 0x8001 (32769)
 * ACCESS:   R/W
 * FIELDS:
 *     EYEM_PD          Power down for the  eye monitor slicer, and clock distribution
 *     RESERVED_26_17   
 *     DIV_4_DEMUX_ENABLE 0: DEMUX 10:1 mode output1: DEMUX 4:1  mode output
 *     DEMUX_ZERO_PD    Power down of the zero path DEMUX0 Enable (Default)1 Disable
 *     DEMUX_PEAK_PD    Power down of the peak path DEMUX0 Enable (Default)1 Disable
 *     DEMUX_PD         Power down of the full DEMUX0 Enable (Default)1 Disable
 *     DEMUX_EYEM_PD    Power down of the eye monitor path DEMUX0 Enable1 Disable (Default)
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r (0x000080b3 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX_AFE_CTL1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_s {
	uint32_t v[1];
	uint32_t sp2_rx_afe_ctl1[1];
	uint32_t _sp2_rx_afe_ctl1;
} BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_CLR(r) (r).sp2_rx_afe_ctl1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_SET(r,d) (r).sp2_rx_afe_ctl1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_GET(r) (r).sp2_rx_afe_ctl1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_EYEM_PDf_GET(r) ((((r).sp2_rx_afe_ctl1[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_EYEM_PDf_SET(r,f) (r).sp2_rx_afe_ctl1[0]=(((r).sp2_rx_afe_ctl1[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_PDf_GET(r) ((((r).sp2_rx_afe_ctl1[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_PDf_SET(r,f) (r).sp2_rx_afe_ctl1[0]=(((r).sp2_rx_afe_ctl1[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_PEAK_PDf_GET(r) ((((r).sp2_rx_afe_ctl1[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_PEAK_PDf_SET(r,f) (r).sp2_rx_afe_ctl1[0]=(((r).sp2_rx_afe_ctl1[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_ZERO_PDf_GET(r) ((((r).sp2_rx_afe_ctl1[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_ZERO_PDf_SET(r,f) (r).sp2_rx_afe_ctl1[0]=(((r).sp2_rx_afe_ctl1[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DIV_4_DEMUX_ENABLEf_GET(r) ((((r).sp2_rx_afe_ctl1[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DIV_4_DEMUX_ENABLEf_SET(r,f) (r).sp2_rx_afe_ctl1[0]=(((r).sp2_rx_afe_ctl1[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_RESERVED_26_17f_GET(r) ((((r).sp2_rx_afe_ctl1[0]) >> 1) & 0x3ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_RESERVED_26_17f_SET(r,f) (r).sp2_rx_afe_ctl1[0]=(((r).sp2_rx_afe_ctl1[0] & ~((uint32_t)0x3ff << 1)) | ((((uint32_t)f) & 0x3ff) << 1)) | (1023 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_EYEM_PDf_GET(r) (((r).sp2_rx_afe_ctl1[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_EYEM_PDf_SET(r,f) (r).sp2_rx_afe_ctl1[0]=(((r).sp2_rx_afe_ctl1[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_RX_AFE_CTL1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_CTL1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r,(_r._sp2_rx_afe_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r,(_r._sp2_rx_afe_ctl1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r,(_r._sp2_rx_afe_ctl1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_CTL1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_CTL1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx_afe_ctl1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r
#define SP2_RX_AFE_CTL1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_t SP2_RX_AFE_CTL1r_t;
#define SP2_RX_AFE_CTL1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_CLR
#define SP2_RX_AFE_CTL1r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_SET
#define SP2_RX_AFE_CTL1r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_GET
#define SP2_RX_AFE_CTL1r_DEMUX_EYEM_PDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_EYEM_PDf_GET
#define SP2_RX_AFE_CTL1r_DEMUX_EYEM_PDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_EYEM_PDf_SET
#define SP2_RX_AFE_CTL1r_DEMUX_PDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_PDf_GET
#define SP2_RX_AFE_CTL1r_DEMUX_PDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_PDf_SET
#define SP2_RX_AFE_CTL1r_DEMUX_PEAK_PDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_PEAK_PDf_GET
#define SP2_RX_AFE_CTL1r_DEMUX_PEAK_PDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_PEAK_PDf_SET
#define SP2_RX_AFE_CTL1r_DEMUX_ZERO_PDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_ZERO_PDf_GET
#define SP2_RX_AFE_CTL1r_DEMUX_ZERO_PDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DEMUX_ZERO_PDf_SET
#define SP2_RX_AFE_CTL1r_DIV_4_DEMUX_ENABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DIV_4_DEMUX_ENABLEf_GET
#define SP2_RX_AFE_CTL1r_DIV_4_DEMUX_ENABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_DIV_4_DEMUX_ENABLEf_SET
#define SP2_RX_AFE_CTL1r_RESERVED_26_17f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_RESERVED_26_17f_GET
#define SP2_RX_AFE_CTL1r_RESERVED_26_17f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_RESERVED_26_17f_SET
#define SP2_RX_AFE_CTL1r_EYEM_PDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_EYEM_PDf_GET
#define SP2_RX_AFE_CTL1r_EYEM_PDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r_EYEM_PDf_SET
#define READ_SP2_RX_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_CTL1r
#define WRITE_SP2_RX_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_CTL1r
#define MODIFY_SP2_RX_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_CTL1r
#define READLN_SP2_RX_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_CTL1r
#define WRITELN_SP2_RX_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_CTL1r
#define WRITEALL_SP2_RX_AFE_CTL1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_CTL1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX_AFE_ANARXSIGDET
 * BLOCKS:   RX_AFE
 * REGADDR:  0x80b4
 * DESC:     Rx Sigdet Control
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     RX_PF_CTRL       
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr (0x000080b4 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX_AFE_ANARXSIGDET.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_s {
	uint32_t v[1];
	uint32_t sp2_rx_afe_anarxsigdet[1];
	uint32_t _sp2_rx_afe_anarxsigdet;
} BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_CLR(r) (r).sp2_rx_afe_anarxsigdet[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_SET(r,d) (r).sp2_rx_afe_anarxsigdet[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_GET(r) (r).sp2_rx_afe_anarxsigdet[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_RX_PF_CTRLf_GET(r) ((((r).sp2_rx_afe_anarxsigdet[0]) >> 12) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_RX_PF_CTRLf_SET(r,f) (r).sp2_rx_afe_anarxsigdet[0]=(((r).sp2_rx_afe_anarxsigdet[0] & ~((uint32_t)0xf << 12)) | ((((uint32_t)f) & 0xf) << 12)) | (15 << (16 + 12))

/*
 * These macros can be used to access SP2_RX_AFE_ANARXSIGDET.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_ANARXSIGDETr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr,(_r._sp2_rx_afe_anarxsigdet))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_ANARXSIGDETr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr,(_r._sp2_rx_afe_anarxsigdet)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_ANARXSIGDETr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr,(_r._sp2_rx_afe_anarxsigdet))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_ANARXSIGDETr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_anarxsigdet))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_ANARXSIGDETr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_anarxsigdet))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_ANARXSIGDETr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx_afe_anarxsigdet))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX_AFE_ANARXSIGDETr BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr
#define SP2_RX_AFE_ANARXSIGDETr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_t SP2_RX_AFE_ANARXSIGDETr_t;
#define SP2_RX_AFE_ANARXSIGDETr_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_CLR
#define SP2_RX_AFE_ANARXSIGDETr_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_SET
#define SP2_RX_AFE_ANARXSIGDETr_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_GET
#define SP2_RX_AFE_ANARXSIGDETr_RX_PF_CTRLf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_RX_PF_CTRLf_GET
#define SP2_RX_AFE_ANARXSIGDETr_RX_PF_CTRLf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr_RX_PF_CTRLf_SET
#define READ_SP2_RX_AFE_ANARXSIGDETr BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_ANARXSIGDETr
#define WRITE_SP2_RX_AFE_ANARXSIGDETr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_ANARXSIGDETr
#define MODIFY_SP2_RX_AFE_ANARXSIGDETr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_ANARXSIGDETr
#define READLN_SP2_RX_AFE_ANARXSIGDETr BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_ANARXSIGDETr
#define WRITELN_SP2_RX_AFE_ANARXSIGDETr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_ANARXSIGDETr
#define WRITEALL_SP2_RX_AFE_ANARXSIGDETr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_ANARXSIGDETr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXSIGDETr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX_AFE_CTL2
 * BLOCKS:   RX_AFE
 * REGADDR:  0x80b5
 * DESC:     AFE Control Register 47:32
 * RESETVAL: 0x22 (34)
 * ACCESS:   R/W
 * FIELDS:
 *     RESERVED_32      
 *     DIV4_PD          Power down divide by 4 to the RTL0 div4 out is active1 div4 out is idle  (default)
 *     DIV10_PD         Power down divide by 10 to the RTL0 div10 out is active (default)1 div10 out is idle
 *     INPUTERM_CM_EN   0: common mode DC floating1: Common mode connected to DC voltageDefault for CM should on DC set at 0.8V
 *     INPUTERM_CMULT_EN 0: common mode capacitor  multiplier active OFF1: common mode capacitor  multiplier active ON
 *     INPUTERM_LOWZGND_EN 1: Input common mode DC value 0
 *     INPUTERM_LOWZVDD_EN 1: Input common mode DC value VDD
 *     RESERVED_47_39   
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r (0x000080b5 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX_AFE_CTL2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_s {
	uint32_t v[1];
	uint32_t sp2_rx_afe_ctl2[1];
	uint32_t _sp2_rx_afe_ctl2;
} BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_CLR(r) (r).sp2_rx_afe_ctl2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_SET(r,d) (r).sp2_rx_afe_ctl2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_GET(r) (r).sp2_rx_afe_ctl2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_RESERVED_47_39f_GET(r) ((((r).sp2_rx_afe_ctl2[0]) >> 7) & 0x1ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_RESERVED_47_39f_SET(r,f) (r).sp2_rx_afe_ctl2[0]=(((r).sp2_rx_afe_ctl2[0] & ~((uint32_t)0x1ff << 7)) | ((((uint32_t)f) & 0x1ff) << 7)) | (511 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_LOWZVDD_ENf_GET(r) ((((r).sp2_rx_afe_ctl2[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_LOWZVDD_ENf_SET(r,f) (r).sp2_rx_afe_ctl2[0]=(((r).sp2_rx_afe_ctl2[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_LOWZGND_ENf_GET(r) ((((r).sp2_rx_afe_ctl2[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_LOWZGND_ENf_SET(r,f) (r).sp2_rx_afe_ctl2[0]=(((r).sp2_rx_afe_ctl2[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_CMULT_ENf_GET(r) ((((r).sp2_rx_afe_ctl2[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_CMULT_ENf_SET(r,f) (r).sp2_rx_afe_ctl2[0]=(((r).sp2_rx_afe_ctl2[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_CM_ENf_GET(r) ((((r).sp2_rx_afe_ctl2[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_CM_ENf_SET(r,f) (r).sp2_rx_afe_ctl2[0]=(((r).sp2_rx_afe_ctl2[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_DIV10_PDf_GET(r) ((((r).sp2_rx_afe_ctl2[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_DIV10_PDf_SET(r,f) (r).sp2_rx_afe_ctl2[0]=(((r).sp2_rx_afe_ctl2[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_DIV4_PDf_GET(r) ((((r).sp2_rx_afe_ctl2[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_DIV4_PDf_SET(r,f) (r).sp2_rx_afe_ctl2[0]=(((r).sp2_rx_afe_ctl2[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_RESERVED_32f_GET(r) (((r).sp2_rx_afe_ctl2[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_RESERVED_32f_SET(r,f) (r).sp2_rx_afe_ctl2[0]=(((r).sp2_rx_afe_ctl2[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_RX_AFE_CTL2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_CTL2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r,(_r._sp2_rx_afe_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r,(_r._sp2_rx_afe_ctl2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r,(_r._sp2_rx_afe_ctl2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_CTL2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_CTL2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx_afe_ctl2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r
#define SP2_RX_AFE_CTL2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_t SP2_RX_AFE_CTL2r_t;
#define SP2_RX_AFE_CTL2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_CLR
#define SP2_RX_AFE_CTL2r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_SET
#define SP2_RX_AFE_CTL2r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_GET
#define SP2_RX_AFE_CTL2r_RESERVED_47_39f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_RESERVED_47_39f_GET
#define SP2_RX_AFE_CTL2r_RESERVED_47_39f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_RESERVED_47_39f_SET
#define SP2_RX_AFE_CTL2r_INPUTERM_LOWZVDD_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_LOWZVDD_ENf_GET
#define SP2_RX_AFE_CTL2r_INPUTERM_LOWZVDD_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_LOWZVDD_ENf_SET
#define SP2_RX_AFE_CTL2r_INPUTERM_LOWZGND_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_LOWZGND_ENf_GET
#define SP2_RX_AFE_CTL2r_INPUTERM_LOWZGND_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_LOWZGND_ENf_SET
#define SP2_RX_AFE_CTL2r_INPUTERM_CMULT_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_CMULT_ENf_GET
#define SP2_RX_AFE_CTL2r_INPUTERM_CMULT_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_CMULT_ENf_SET
#define SP2_RX_AFE_CTL2r_INPUTERM_CM_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_CM_ENf_GET
#define SP2_RX_AFE_CTL2r_INPUTERM_CM_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_INPUTERM_CM_ENf_SET
#define SP2_RX_AFE_CTL2r_DIV10_PDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_DIV10_PDf_GET
#define SP2_RX_AFE_CTL2r_DIV10_PDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_DIV10_PDf_SET
#define SP2_RX_AFE_CTL2r_DIV4_PDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_DIV4_PDf_GET
#define SP2_RX_AFE_CTL2r_DIV4_PDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_DIV4_PDf_SET
#define SP2_RX_AFE_CTL2r_RESERVED_32f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_RESERVED_32f_GET
#define SP2_RX_AFE_CTL2r_RESERVED_32f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r_RESERVED_32f_SET
#define READ_SP2_RX_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_CTL2r
#define WRITE_SP2_RX_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_CTL2r
#define MODIFY_SP2_RX_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_CTL2r
#define READLN_SP2_RX_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_CTL2r
#define WRITELN_SP2_RX_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_CTL2r
#define WRITEALL_SP2_RX_AFE_CTL2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_CTL2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX_AFE_CTL3
 * BLOCKS:   RX_AFE
 * REGADDR:  0x80b6
 * DESC:     AFE Control Register 63:48
 * RESETVAL: 0xc0 (192)
 * ACCESS:   R/W
 * FIELDS:
 *     RESERVED_52_48   
 *     DCC_EN           Enable automatic duty cycle correction circuitDefault is disabled
 *     DUTY_CYCLE       Duty cycle correction for internal 1T clock from PLL:100 - 46.5%101 - 48.5%110 - 50.5%111 - 52.5%0xx  open loop duty cycle correction disabled
 *     PD_BIAS          Power down of the bias circuit0: Enabled (Default)1: Disabled
 *     RESERVED_63_58   
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r (0x000080b6 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX_AFE_CTL3.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_s {
	uint32_t v[1];
	uint32_t sp2_rx_afe_ctl3[1];
	uint32_t _sp2_rx_afe_ctl3;
} BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_CLR(r) (r).sp2_rx_afe_ctl3[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_SET(r,d) (r).sp2_rx_afe_ctl3[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_GET(r) (r).sp2_rx_afe_ctl3[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_RESERVED_63_58f_GET(r) ((((r).sp2_rx_afe_ctl3[0]) >> 10) & 0x3f)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_RESERVED_63_58f_SET(r,f) (r).sp2_rx_afe_ctl3[0]=(((r).sp2_rx_afe_ctl3[0] & ~((uint32_t)0x3f << 10)) | ((((uint32_t)f) & 0x3f) << 10)) | (63 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_PD_BIASf_GET(r) ((((r).sp2_rx_afe_ctl3[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_PD_BIASf_SET(r,f) (r).sp2_rx_afe_ctl3[0]=(((r).sp2_rx_afe_ctl3[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_DUTY_CYCLEf_GET(r) ((((r).sp2_rx_afe_ctl3[0]) >> 6) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_DUTY_CYCLEf_SET(r,f) (r).sp2_rx_afe_ctl3[0]=(((r).sp2_rx_afe_ctl3[0] & ~((uint32_t)0x7 << 6)) | ((((uint32_t)f) & 0x7) << 6)) | (7 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_DCC_ENf_GET(r) ((((r).sp2_rx_afe_ctl3[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_DCC_ENf_SET(r,f) (r).sp2_rx_afe_ctl3[0]=(((r).sp2_rx_afe_ctl3[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_RESERVED_52_48f_GET(r) (((r).sp2_rx_afe_ctl3[0]) & 0x1f)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_RESERVED_52_48f_SET(r,f) (r).sp2_rx_afe_ctl3[0]=(((r).sp2_rx_afe_ctl3[0] & ~((uint32_t)0x1f)) | (((uint32_t)f) & 0x1f)) | (0x1f << 16)

/*
 * These macros can be used to access SP2_RX_AFE_CTL3.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_CTL3r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r,(_r._sp2_rx_afe_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r,(_r._sp2_rx_afe_ctl3)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r,(_r._sp2_rx_afe_ctl3))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_CTL3r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_CTL3r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx_afe_ctl3))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r
#define SP2_RX_AFE_CTL3r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_t SP2_RX_AFE_CTL3r_t;
#define SP2_RX_AFE_CTL3r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_CLR
#define SP2_RX_AFE_CTL3r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_SET
#define SP2_RX_AFE_CTL3r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_GET
#define SP2_RX_AFE_CTL3r_RESERVED_63_58f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_RESERVED_63_58f_GET
#define SP2_RX_AFE_CTL3r_RESERVED_63_58f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_RESERVED_63_58f_SET
#define SP2_RX_AFE_CTL3r_PD_BIASf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_PD_BIASf_GET
#define SP2_RX_AFE_CTL3r_PD_BIASf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_PD_BIASf_SET
#define SP2_RX_AFE_CTL3r_DUTY_CYCLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_DUTY_CYCLEf_GET
#define SP2_RX_AFE_CTL3r_DUTY_CYCLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_DUTY_CYCLEf_SET
#define SP2_RX_AFE_CTL3r_DCC_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_DCC_ENf_GET
#define SP2_RX_AFE_CTL3r_DCC_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_DCC_ENf_SET
#define SP2_RX_AFE_CTL3r_RESERVED_52_48f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_RESERVED_52_48f_GET
#define SP2_RX_AFE_CTL3r_RESERVED_52_48f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r_RESERVED_52_48f_SET
#define READ_SP2_RX_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_CTL3r
#define WRITE_SP2_RX_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_CTL3r
#define MODIFY_SP2_RX_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_CTL3r
#define READLN_SP2_RX_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_CTL3r
#define WRITELN_SP2_RX_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_CTL3r
#define WRITEALL_SP2_RX_AFE_CTL3r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_CTL3r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL3r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX_AFE_CTL4
 * BLOCKS:   RX_AFE
 * REGADDR:  0x80b7
 * DESC:     AFE Control Register 79:64
 * RESETVAL: 0x492 (1170)
 * ACCESS:   R/W
 * FIELDS:
 *     BIAS_LA_CTRL     Controls the current biasing for the limiting amplifierIout1	1	1	175%1	1	0	160%1	0	1	145%1	0	0	130%0	1	1	115%0	1	0	100%0	0	1	85%0	0	0	70%
 *     BIAS_LA_DAC_CTRL Controls the current biasing for the limiting amplifier offset trimming DACIout1	1	1	175%1	1	0	160%1	0	1	145%1	0	0	130%0	1	1	115%0	1	0	100%0	0	1	85%0	0	0	70%
 *     BIAS_EYEM_CTRL   Controls the current biasing for the eye monitor referenceIout1	1	1	175%1	1	0	160%1	0	1	145%1	0	0	130%0	1	1	115%0	1	0	100%0	0	1	85%0	0	0	70%
 *     BIAS_SIGDET_CTRL Controls the current biasing for the signal detector biasingIout1	1	1	175%1	1	0	160%1	0	1	145%1	0	0	130%0	1	1	115%0	1	0	100%0	0	1	85%0	0	0	70%
 *     SIGDET_BYPASS    Active High:1:  Bypass Sig Detect output and send 1 at sigdetect output0:  Normal sigdetect operation (Default)
 *     SIGDET_PD        Powerdown for the sigdet0: Enabled (Default)1: Disabled
 *     SIGDET_MODESELECT Selects the mode of operation of the sigdet: (not used)0:   PCIE mode and USB3.0 mode
 *     EN_TESTMUX       Enable test mux0: Disabled (Default)1: Enabled
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r (0x000080b7 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX_AFE_CTL4.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_s {
	uint32_t v[1];
	uint32_t sp2_rx_afe_ctl4[1];
	uint32_t _sp2_rx_afe_ctl4;
} BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_CLR(r) (r).sp2_rx_afe_ctl4[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SET(r,d) (r).sp2_rx_afe_ctl4[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_GET(r) (r).sp2_rx_afe_ctl4[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_EN_TESTMUXf_GET(r) ((((r).sp2_rx_afe_ctl4[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_EN_TESTMUXf_SET(r,f) (r).sp2_rx_afe_ctl4[0]=(((r).sp2_rx_afe_ctl4[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SIGDET_MODESELECTf_GET(r) ((((r).sp2_rx_afe_ctl4[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SIGDET_MODESELECTf_SET(r,f) (r).sp2_rx_afe_ctl4[0]=(((r).sp2_rx_afe_ctl4[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SIGDET_PDf_GET(r) ((((r).sp2_rx_afe_ctl4[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SIGDET_PDf_SET(r,f) (r).sp2_rx_afe_ctl4[0]=(((r).sp2_rx_afe_ctl4[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SIGDET_BYPASSf_GET(r) ((((r).sp2_rx_afe_ctl4[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SIGDET_BYPASSf_SET(r,f) (r).sp2_rx_afe_ctl4[0]=(((r).sp2_rx_afe_ctl4[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_SIGDET_CTRLf_GET(r) ((((r).sp2_rx_afe_ctl4[0]) >> 9) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_SIGDET_CTRLf_SET(r,f) (r).sp2_rx_afe_ctl4[0]=(((r).sp2_rx_afe_ctl4[0] & ~((uint32_t)0x7 << 9)) | ((((uint32_t)f) & 0x7) << 9)) | (7 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_EYEM_CTRLf_GET(r) ((((r).sp2_rx_afe_ctl4[0]) >> 6) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_EYEM_CTRLf_SET(r,f) (r).sp2_rx_afe_ctl4[0]=(((r).sp2_rx_afe_ctl4[0] & ~((uint32_t)0x7 << 6)) | ((((uint32_t)f) & 0x7) << 6)) | (7 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_LA_DAC_CTRLf_GET(r) ((((r).sp2_rx_afe_ctl4[0]) >> 3) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_LA_DAC_CTRLf_SET(r,f) (r).sp2_rx_afe_ctl4[0]=(((r).sp2_rx_afe_ctl4[0] & ~((uint32_t)0x7 << 3)) | ((((uint32_t)f) & 0x7) << 3)) | (7 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_LA_CTRLf_GET(r) (((r).sp2_rx_afe_ctl4[0]) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_LA_CTRLf_SET(r,f) (r).sp2_rx_afe_ctl4[0]=(((r).sp2_rx_afe_ctl4[0] & ~((uint32_t)0x7)) | (((uint32_t)f) & 0x7)) | (0x7 << 16)

/*
 * These macros can be used to access SP2_RX_AFE_CTL4.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_CTL4r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r,(_r._sp2_rx_afe_ctl4))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_CTL4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r,(_r._sp2_rx_afe_ctl4)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_CTL4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r,(_r._sp2_rx_afe_ctl4))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_CTL4r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_ctl4))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_CTL4r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_ctl4))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_CTL4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx_afe_ctl4))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX_AFE_CTL4r BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r
#define SP2_RX_AFE_CTL4r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_t SP2_RX_AFE_CTL4r_t;
#define SP2_RX_AFE_CTL4r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_CLR
#define SP2_RX_AFE_CTL4r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SET
#define SP2_RX_AFE_CTL4r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_GET
#define SP2_RX_AFE_CTL4r_EN_TESTMUXf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_EN_TESTMUXf_GET
#define SP2_RX_AFE_CTL4r_EN_TESTMUXf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_EN_TESTMUXf_SET
#define SP2_RX_AFE_CTL4r_SIGDET_MODESELECTf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SIGDET_MODESELECTf_GET
#define SP2_RX_AFE_CTL4r_SIGDET_MODESELECTf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SIGDET_MODESELECTf_SET
#define SP2_RX_AFE_CTL4r_SIGDET_PDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SIGDET_PDf_GET
#define SP2_RX_AFE_CTL4r_SIGDET_PDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SIGDET_PDf_SET
#define SP2_RX_AFE_CTL4r_SIGDET_BYPASSf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SIGDET_BYPASSf_GET
#define SP2_RX_AFE_CTL4r_SIGDET_BYPASSf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_SIGDET_BYPASSf_SET
#define SP2_RX_AFE_CTL4r_BIAS_SIGDET_CTRLf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_SIGDET_CTRLf_GET
#define SP2_RX_AFE_CTL4r_BIAS_SIGDET_CTRLf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_SIGDET_CTRLf_SET
#define SP2_RX_AFE_CTL4r_BIAS_EYEM_CTRLf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_EYEM_CTRLf_GET
#define SP2_RX_AFE_CTL4r_BIAS_EYEM_CTRLf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_EYEM_CTRLf_SET
#define SP2_RX_AFE_CTL4r_BIAS_LA_DAC_CTRLf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_LA_DAC_CTRLf_GET
#define SP2_RX_AFE_CTL4r_BIAS_LA_DAC_CTRLf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_LA_DAC_CTRLf_SET
#define SP2_RX_AFE_CTL4r_BIAS_LA_CTRLf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_LA_CTRLf_GET
#define SP2_RX_AFE_CTL4r_BIAS_LA_CTRLf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r_BIAS_LA_CTRLf_SET
#define READ_SP2_RX_AFE_CTL4r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_CTL4r
#define WRITE_SP2_RX_AFE_CTL4r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_CTL4r
#define MODIFY_SP2_RX_AFE_CTL4r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_CTL4r
#define READLN_SP2_RX_AFE_CTL4r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_CTL4r
#define WRITELN_SP2_RX_AFE_CTL4r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_CTL4r
#define WRITEALL_SP2_RX_AFE_CTL4r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_CTL4r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL4r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX_AFE_ANARXCTLPCI
 * BLOCKS:   RX_AFE
 * REGADDR:  0x80ba
 * DESC:     Rx PCI Control register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     RX_POLARITY_R    Rx Polarity
 *     RX_POLARITY_FORCE_SM Forces rx_polarity_r
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr (0x000080ba | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX_AFE_ANARXCTLPCI.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_s {
	uint32_t v[1];
	uint32_t sp2_rx_afe_anarxctlpci[1];
	uint32_t _sp2_rx_afe_anarxctlpci;
} BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_CLR(r) (r).sp2_rx_afe_anarxctlpci[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_SET(r,d) (r).sp2_rx_afe_anarxctlpci[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_GET(r) (r).sp2_rx_afe_anarxctlpci[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_RX_POLARITY_FORCE_SMf_GET(r) ((((r).sp2_rx_afe_anarxctlpci[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_RX_POLARITY_FORCE_SMf_SET(r,f) (r).sp2_rx_afe_anarxctlpci[0]=(((r).sp2_rx_afe_anarxctlpci[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_RX_POLARITY_Rf_GET(r) ((((r).sp2_rx_afe_anarxctlpci[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_RX_POLARITY_Rf_SET(r,f) (r).sp2_rx_afe_anarxctlpci[0]=(((r).sp2_rx_afe_anarxctlpci[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))

/*
 * These macros can be used to access SP2_RX_AFE_ANARXCTLPCI.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_ANARXCTLPCIr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr,(_r._sp2_rx_afe_anarxctlpci))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_ANARXCTLPCIr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr,(_r._sp2_rx_afe_anarxctlpci)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_ANARXCTLPCIr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr,(_r._sp2_rx_afe_anarxctlpci))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_ANARXCTLPCIr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_anarxctlpci))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_ANARXCTLPCIr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_anarxctlpci))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_ANARXCTLPCIr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx_afe_anarxctlpci))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX_AFE_ANARXCTLPCIr BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr
#define SP2_RX_AFE_ANARXCTLPCIr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_t SP2_RX_AFE_ANARXCTLPCIr_t;
#define SP2_RX_AFE_ANARXCTLPCIr_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_CLR
#define SP2_RX_AFE_ANARXCTLPCIr_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_SET
#define SP2_RX_AFE_ANARXCTLPCIr_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_GET
#define SP2_RX_AFE_ANARXCTLPCIr_RX_POLARITY_FORCE_SMf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_RX_POLARITY_FORCE_SMf_GET
#define SP2_RX_AFE_ANARXCTLPCIr_RX_POLARITY_FORCE_SMf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_RX_POLARITY_FORCE_SMf_SET
#define SP2_RX_AFE_ANARXCTLPCIr_RX_POLARITY_Rf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_RX_POLARITY_Rf_GET
#define SP2_RX_AFE_ANARXCTLPCIr_RX_POLARITY_Rf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr_RX_POLARITY_Rf_SET
#define READ_SP2_RX_AFE_ANARXCTLPCIr BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_ANARXCTLPCIr
#define WRITE_SP2_RX_AFE_ANARXCTLPCIr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_ANARXCTLPCIr
#define MODIFY_SP2_RX_AFE_ANARXCTLPCIr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_ANARXCTLPCIr
#define READLN_SP2_RX_AFE_ANARXCTLPCIr BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_ANARXCTLPCIr
#define WRITELN_SP2_RX_AFE_ANARXCTLPCIr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_ANARXCTLPCIr
#define WRITEALL_SP2_RX_AFE_ANARXCTLPCIr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_ANARXCTLPCIr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_ANARXCTLPCIr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX_AFE_CTL5
 * BLOCKS:   RX_AFE
 * REGADDR:  0x80bc
 * DESC:     AFE Control Register 95:80
 * RESETVAL: 0x2c0e (11278)
 * ACCESS:   R/W
 * FIELDS:
 *     SIGDET_THRESHOLD Use 1001 for PCIE/SATA/RXAUI mode and 0100 for USB3 mode
 *     SEL_CLK          Selects the test clock to the output:00  4T Clock01  8T Clock10  10T Clock11  20T Clock
 *     EYEM_REFADJUST   Reference for the eye monitor+/-260mV 32 steps @16mV (Refer to Eye Monitoring Section)
 *     EYEMONITORREF_PD Eye monitor power down0: Enabled1: Disabled (Default)
 *     EYEMONITOR_REF_ZERO Eye monitor reference forced to 0V differentialCommon mode at vdd/2
 *     PI_MAIN_ENABLE   Enable for the phase interpolator used in the main path clocks.0: Disabled1: Enabled (Default)
 *     PI_EYEM_ENABLE   Enable for the phase interpolator used in the eye monitoring clock only0: Disabled (Default)1: Enabled
 *     SIGDET_USB_EN    Signal detect in the USB mode (output filter)1: USB3.0 and XFI Mode0: PCI-GEN mode (Default)
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r (0x000080bc | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX_AFE_CTL5.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_s {
	uint32_t v[1];
	uint32_t sp2_rx_afe_ctl5[1];
	uint32_t _sp2_rx_afe_ctl5;
} BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_CLR(r) (r).sp2_rx_afe_ctl5[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SET(r,d) (r).sp2_rx_afe_ctl5[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_GET(r) (r).sp2_rx_afe_ctl5[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SIGDET_USB_ENf_GET(r) ((((r).sp2_rx_afe_ctl5[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SIGDET_USB_ENf_SET(r,f) (r).sp2_rx_afe_ctl5[0]=(((r).sp2_rx_afe_ctl5[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_PI_EYEM_ENABLEf_GET(r) ((((r).sp2_rx_afe_ctl5[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_PI_EYEM_ENABLEf_SET(r,f) (r).sp2_rx_afe_ctl5[0]=(((r).sp2_rx_afe_ctl5[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_PI_MAIN_ENABLEf_GET(r) ((((r).sp2_rx_afe_ctl5[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_PI_MAIN_ENABLEf_SET(r,f) (r).sp2_rx_afe_ctl5[0]=(((r).sp2_rx_afe_ctl5[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_EYEMONITOR_REF_ZEROf_GET(r) ((((r).sp2_rx_afe_ctl5[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_EYEMONITOR_REF_ZEROf_SET(r,f) (r).sp2_rx_afe_ctl5[0]=(((r).sp2_rx_afe_ctl5[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_EYEMONITORREF_PDf_GET(r) ((((r).sp2_rx_afe_ctl5[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_EYEMONITORREF_PDf_SET(r,f) (r).sp2_rx_afe_ctl5[0]=(((r).sp2_rx_afe_ctl5[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_EYEM_REFADJUSTf_GET(r) ((((r).sp2_rx_afe_ctl5[0]) >> 6) & 0x1f)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_EYEM_REFADJUSTf_SET(r,f) (r).sp2_rx_afe_ctl5[0]=(((r).sp2_rx_afe_ctl5[0] & ~((uint32_t)0x1f << 6)) | ((((uint32_t)f) & 0x1f) << 6)) | (31 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SEL_CLKf_GET(r) ((((r).sp2_rx_afe_ctl5[0]) >> 4) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SEL_CLKf_SET(r,f) (r).sp2_rx_afe_ctl5[0]=(((r).sp2_rx_afe_ctl5[0] & ~((uint32_t)0x3 << 4)) | ((((uint32_t)f) & 0x3) << 4)) | (3 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SIGDET_THRESHOLDf_GET(r) (((r).sp2_rx_afe_ctl5[0]) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SIGDET_THRESHOLDf_SET(r,f) (r).sp2_rx_afe_ctl5[0]=(((r).sp2_rx_afe_ctl5[0] & ~((uint32_t)0xf)) | (((uint32_t)f) & 0xf)) | (0xf << 16)

/*
 * These macros can be used to access SP2_RX_AFE_CTL5.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_CTL5r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r,(_r._sp2_rx_afe_ctl5))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_CTL5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r,(_r._sp2_rx_afe_ctl5)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_CTL5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r,(_r._sp2_rx_afe_ctl5))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_CTL5r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_ctl5))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_CTL5r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_ctl5))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_CTL5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx_afe_ctl5))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX_AFE_CTL5r BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r
#define SP2_RX_AFE_CTL5r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_t SP2_RX_AFE_CTL5r_t;
#define SP2_RX_AFE_CTL5r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_CLR
#define SP2_RX_AFE_CTL5r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SET
#define SP2_RX_AFE_CTL5r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_GET
#define SP2_RX_AFE_CTL5r_SIGDET_USB_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SIGDET_USB_ENf_GET
#define SP2_RX_AFE_CTL5r_SIGDET_USB_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SIGDET_USB_ENf_SET
#define SP2_RX_AFE_CTL5r_PI_EYEM_ENABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_PI_EYEM_ENABLEf_GET
#define SP2_RX_AFE_CTL5r_PI_EYEM_ENABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_PI_EYEM_ENABLEf_SET
#define SP2_RX_AFE_CTL5r_PI_MAIN_ENABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_PI_MAIN_ENABLEf_GET
#define SP2_RX_AFE_CTL5r_PI_MAIN_ENABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_PI_MAIN_ENABLEf_SET
#define SP2_RX_AFE_CTL5r_EYEMONITOR_REF_ZEROf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_EYEMONITOR_REF_ZEROf_GET
#define SP2_RX_AFE_CTL5r_EYEMONITOR_REF_ZEROf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_EYEMONITOR_REF_ZEROf_SET
#define SP2_RX_AFE_CTL5r_EYEMONITORREF_PDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_EYEMONITORREF_PDf_GET
#define SP2_RX_AFE_CTL5r_EYEMONITORREF_PDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_EYEMONITORREF_PDf_SET
#define SP2_RX_AFE_CTL5r_EYEM_REFADJUSTf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_EYEM_REFADJUSTf_GET
#define SP2_RX_AFE_CTL5r_EYEM_REFADJUSTf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_EYEM_REFADJUSTf_SET
#define SP2_RX_AFE_CTL5r_SEL_CLKf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SEL_CLKf_GET
#define SP2_RX_AFE_CTL5r_SEL_CLKf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SEL_CLKf_SET
#define SP2_RX_AFE_CTL5r_SIGDET_THRESHOLDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SIGDET_THRESHOLDf_GET
#define SP2_RX_AFE_CTL5r_SIGDET_THRESHOLDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r_SIGDET_THRESHOLDf_SET
#define READ_SP2_RX_AFE_CTL5r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_CTL5r
#define WRITE_SP2_RX_AFE_CTL5r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_CTL5r
#define MODIFY_SP2_RX_AFE_CTL5r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_CTL5r
#define READLN_SP2_RX_AFE_CTL5r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_CTL5r
#define WRITELN_SP2_RX_AFE_CTL5r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_CTL5r
#define WRITEALL_SP2_RX_AFE_CTL5r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_CTL5r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL5r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX_AFE_CTL6
 * BLOCKS:   RX_AFE
 * REGADDR:  0x80bd
 * DESC:     AFE Control Register 111:96
 * RESETVAL: 0x44 (68)
 * ACCESS:   R/W
 * FIELDS:
 *     RESERVED_96      
 *     MAIN_PI_PWD_LVL2PI Power Down the Cross Coupled PI0: Cross coupled working (Default)1: Cross coupled power down
 *     MAIN_PI_BW_SEL   Control for the PI BW1: High BW (Default)0: Low BW
 *     PI_LOWVDD_ENB    Disables low vdd operation on the Rx (Affecting PI, SigDetect)0: low vdd configuration is enabled (Default)1: high vdd configuration is enabled
 *     RESERVED_100     
 *     EYE_MONITOR_PI_PWD_LVL2PI Power Down the Cross Coupled PI0: Cross coupled working (Default)1: Cross coupled power down
 *     EYE_MONITOR_PI_BW_SEL Control for the PI BW1: High BW (Default)0: Low BW
 *     RESERVED_105_103 
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r (0x000080bd | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX_AFE_CTL6.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_s {
	uint32_t v[1];
	uint32_t sp2_rx_afe_ctl6[1];
	uint32_t _sp2_rx_afe_ctl6;
} BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_CLR(r) (r).sp2_rx_afe_ctl6[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_SET(r,d) (r).sp2_rx_afe_ctl6[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_GET(r) (r).sp2_rx_afe_ctl6[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_RESERVED_105_103f_GET(r) ((((r).sp2_rx_afe_ctl6[0]) >> 7) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_RESERVED_105_103f_SET(r,f) (r).sp2_rx_afe_ctl6[0]=(((r).sp2_rx_afe_ctl6[0] & ~((uint32_t)0x7 << 7)) | ((((uint32_t)f) & 0x7) << 7)) | (7 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_EYE_MONITOR_PI_BW_SELf_GET(r) ((((r).sp2_rx_afe_ctl6[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_EYE_MONITOR_PI_BW_SELf_SET(r,f) (r).sp2_rx_afe_ctl6[0]=(((r).sp2_rx_afe_ctl6[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_EYE_MONITOR_PI_PWD_LVL2PIf_GET(r) ((((r).sp2_rx_afe_ctl6[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_EYE_MONITOR_PI_PWD_LVL2PIf_SET(r,f) (r).sp2_rx_afe_ctl6[0]=(((r).sp2_rx_afe_ctl6[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_RESERVED_100f_GET(r) ((((r).sp2_rx_afe_ctl6[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_RESERVED_100f_SET(r,f) (r).sp2_rx_afe_ctl6[0]=(((r).sp2_rx_afe_ctl6[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_PI_LOWVDD_ENBf_GET(r) ((((r).sp2_rx_afe_ctl6[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_PI_LOWVDD_ENBf_SET(r,f) (r).sp2_rx_afe_ctl6[0]=(((r).sp2_rx_afe_ctl6[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_MAIN_PI_BW_SELf_GET(r) ((((r).sp2_rx_afe_ctl6[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_MAIN_PI_BW_SELf_SET(r,f) (r).sp2_rx_afe_ctl6[0]=(((r).sp2_rx_afe_ctl6[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_MAIN_PI_PWD_LVL2PIf_GET(r) ((((r).sp2_rx_afe_ctl6[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_MAIN_PI_PWD_LVL2PIf_SET(r,f) (r).sp2_rx_afe_ctl6[0]=(((r).sp2_rx_afe_ctl6[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_RESERVED_96f_GET(r) (((r).sp2_rx_afe_ctl6[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_RESERVED_96f_SET(r,f) (r).sp2_rx_afe_ctl6[0]=(((r).sp2_rx_afe_ctl6[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_RX_AFE_CTL6.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_CTL6r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r,(_r._sp2_rx_afe_ctl6))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_CTL6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r,(_r._sp2_rx_afe_ctl6)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_CTL6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r,(_r._sp2_rx_afe_ctl6))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_CTL6r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_ctl6))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_CTL6r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_ctl6))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_CTL6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx_afe_ctl6))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX_AFE_CTL6r BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r
#define SP2_RX_AFE_CTL6r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_t SP2_RX_AFE_CTL6r_t;
#define SP2_RX_AFE_CTL6r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_CLR
#define SP2_RX_AFE_CTL6r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_SET
#define SP2_RX_AFE_CTL6r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_GET
#define SP2_RX_AFE_CTL6r_RESERVED_105_103f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_RESERVED_105_103f_GET
#define SP2_RX_AFE_CTL6r_RESERVED_105_103f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_RESERVED_105_103f_SET
#define SP2_RX_AFE_CTL6r_EYE_MONITOR_PI_BW_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_EYE_MONITOR_PI_BW_SELf_GET
#define SP2_RX_AFE_CTL6r_EYE_MONITOR_PI_BW_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_EYE_MONITOR_PI_BW_SELf_SET
#define SP2_RX_AFE_CTL6r_EYE_MONITOR_PI_PWD_LVL2PIf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_EYE_MONITOR_PI_PWD_LVL2PIf_GET
#define SP2_RX_AFE_CTL6r_EYE_MONITOR_PI_PWD_LVL2PIf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_EYE_MONITOR_PI_PWD_LVL2PIf_SET
#define SP2_RX_AFE_CTL6r_RESERVED_100f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_RESERVED_100f_GET
#define SP2_RX_AFE_CTL6r_RESERVED_100f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_RESERVED_100f_SET
#define SP2_RX_AFE_CTL6r_PI_LOWVDD_ENBf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_PI_LOWVDD_ENBf_GET
#define SP2_RX_AFE_CTL6r_PI_LOWVDD_ENBf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_PI_LOWVDD_ENBf_SET
#define SP2_RX_AFE_CTL6r_MAIN_PI_BW_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_MAIN_PI_BW_SELf_GET
#define SP2_RX_AFE_CTL6r_MAIN_PI_BW_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_MAIN_PI_BW_SELf_SET
#define SP2_RX_AFE_CTL6r_MAIN_PI_PWD_LVL2PIf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_MAIN_PI_PWD_LVL2PIf_GET
#define SP2_RX_AFE_CTL6r_MAIN_PI_PWD_LVL2PIf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_MAIN_PI_PWD_LVL2PIf_SET
#define SP2_RX_AFE_CTL6r_RESERVED_96f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_RESERVED_96f_GET
#define SP2_RX_AFE_CTL6r_RESERVED_96f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r_RESERVED_96f_SET
#define READ_SP2_RX_AFE_CTL6r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_CTL6r
#define WRITE_SP2_RX_AFE_CTL6r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_CTL6r
#define MODIFY_SP2_RX_AFE_CTL6r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_CTL6r
#define READLN_SP2_RX_AFE_CTL6r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_CTL6r
#define WRITELN_SP2_RX_AFE_CTL6r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_CTL6r
#define WRITEALL_SP2_RX_AFE_CTL6r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_CTL6r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_CTL6r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX_AFE_BLKADDR
 * BLOCKS:   RX_AFE
 * REGADDR:  0x80bf
 * DESC:     Block Address register
 * RESETVAL: 0xb0 (176)
 * ACCESS:   R/W
 * FIELDS:
 *     BLOCKADDRESS     Bits 14:4 of the address
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr (0x000080bf | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX_AFE_BLKADDR.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_s {
	uint32_t v[1];
	uint32_t sp2_rx_afe_blkaddr[1];
	uint32_t _sp2_rx_afe_blkaddr;
} BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_CLR(r) (r).sp2_rx_afe_blkaddr[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_SET(r,d) (r).sp2_rx_afe_blkaddr[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_GET(r) (r).sp2_rx_afe_blkaddr[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_BLOCKADDRESSf_GET(r) ((((r).sp2_rx_afe_blkaddr[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_BLOCKADDRESSf_SET(r,f) (r).sp2_rx_afe_blkaddr[0]=(((r).sp2_rx_afe_blkaddr[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))

/*
 * These macros can be used to access SP2_RX_AFE_BLKADDR.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_BLKADDRr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr,(_r._sp2_rx_afe_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr,(_r._sp2_rx_afe_blkaddr)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr,(_r._sp2_rx_afe_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx_afe_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx_afe_blkaddr))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr
#define SP2_RX_AFE_BLKADDRr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_t SP2_RX_AFE_BLKADDRr_t;
#define SP2_RX_AFE_BLKADDRr_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_CLR
#define SP2_RX_AFE_BLKADDRr_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_SET
#define SP2_RX_AFE_BLKADDRr_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_GET
#define SP2_RX_AFE_BLKADDRr_BLOCKADDRESSf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_BLOCKADDRESSf_GET
#define SP2_RX_AFE_BLKADDRr_BLOCKADDRESSf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr_BLOCKADDRESSf_SET
#define READ_SP2_RX_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_READ_SP2_RX_AFE_BLKADDRr
#define WRITE_SP2_RX_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX_AFE_BLKADDRr
#define MODIFY_SP2_RX_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX_AFE_BLKADDRr
#define READLN_SP2_RX_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX_AFE_BLKADDRr
#define WRITELN_SP2_RX_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX_AFE_BLKADDRr
#define WRITEALL_SP2_RX_AFE_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX_AFE_BLKADDRr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX_AFE_BLKADDRr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_TESTMODELANE
 * BLOCKS:   BLK2
 * REGADDR:  0x8106
 * DESC:     Test mode lane select register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     TM_SLICE         slice selector for test mux2'b00 = slice 02'b01 = slice 12'b10 = slice 22'b11 = slice 3
 *     TOGGLE_FRACN_SEL 0: pll_ctrl[75] comes from rstb_pll pin1: pll_ctrl[75] from afe register
 *     RESCAL_SEL       0: selects top input rescal[3:0]1: selects selects register based rescal
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr (0x00008106 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_SIZE 4

/*
 * This structure should be used to declare and program SP2_TESTMODELANE.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_s {
	uint32_t v[1];
	uint32_t sp2_testmodelane[1];
	uint32_t _sp2_testmodelane;
} BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_CLR(r) (r).sp2_testmodelane[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_SET(r,d) (r).sp2_testmodelane[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_GET(r) (r).sp2_testmodelane[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_RESCAL_SELf_GET(r) ((((r).sp2_testmodelane[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_RESCAL_SELf_SET(r,f) (r).sp2_testmodelane[0]=(((r).sp2_testmodelane[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_TOGGLE_FRACN_SELf_GET(r) ((((r).sp2_testmodelane[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_TOGGLE_FRACN_SELf_SET(r,f) (r).sp2_testmodelane[0]=(((r).sp2_testmodelane[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_TM_SLICEf_GET(r) (((r).sp2_testmodelane[0]) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_TM_SLICEf_SET(r,f) (r).sp2_testmodelane[0]=(((r).sp2_testmodelane[0] & ~((uint32_t)0x3)) | (((uint32_t)f) & 0x3)) | (0x3 << 16)

/*
 * These macros can be used to access SP2_TESTMODELANE.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_TESTMODELANEr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr,(_r._sp2_testmodelane))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TESTMODELANEr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr,(_r._sp2_testmodelane)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TESTMODELANEr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr,(_r._sp2_testmodelane))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_TESTMODELANEr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_testmodelane))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TESTMODELANEr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_testmodelane))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TESTMODELANEr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_testmodelane))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_TESTMODELANEr BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr
#define SP2_TESTMODELANEr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_t SP2_TESTMODELANEr_t;
#define SP2_TESTMODELANEr_CLR BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_CLR
#define SP2_TESTMODELANEr_SET BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_SET
#define SP2_TESTMODELANEr_GET BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_GET
#define SP2_TESTMODELANEr_RESCAL_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_RESCAL_SELf_GET
#define SP2_TESTMODELANEr_RESCAL_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_RESCAL_SELf_SET
#define SP2_TESTMODELANEr_TOGGLE_FRACN_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_TOGGLE_FRACN_SELf_GET
#define SP2_TESTMODELANEr_TOGGLE_FRACN_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_TOGGLE_FRACN_SELf_SET
#define SP2_TESTMODELANEr_TM_SLICEf_GET BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_TM_SLICEf_GET
#define SP2_TESTMODELANEr_TM_SLICEf_SET BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr_TM_SLICEf_SET
#define READ_SP2_TESTMODELANEr BCMI_SGMIIP2X4_SERDES_READ_SP2_TESTMODELANEr
#define WRITE_SP2_TESTMODELANEr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_TESTMODELANEr
#define MODIFY_SP2_TESTMODELANEr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_TESTMODELANEr
#define READLN_SP2_TESTMODELANEr BCMI_SGMIIP2X4_SERDES_READLN_SP2_TESTMODELANEr
#define WRITELN_SP2_TESTMODELANEr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_TESTMODELANEr
#define WRITEALL_SP2_TESTMODELANEr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_TESTMODELANEr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_TESTMODELANEr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_MISCRESET
 * BLOCKS:   BLK2
 * REGADDR:  0x810a
 * DESC:     Misc reset register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     RESET_PLL        Reset the pll
 *     RESET_MDIO       Reset all mdio registers and statemachines
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr (0x0000810a | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_SIZE 4

/*
 * This structure should be used to declare and program SP2_MISCRESET.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_s {
	uint32_t v[1];
	uint32_t sp2_miscreset[1];
	uint32_t _sp2_miscreset;
} BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_CLR(r) (r).sp2_miscreset[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_SET(r,d) (r).sp2_miscreset[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_GET(r) (r).sp2_miscreset[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_RESET_MDIOf_GET(r) ((((r).sp2_miscreset[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_RESET_MDIOf_SET(r,f) (r).sp2_miscreset[0]=(((r).sp2_miscreset[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_RESET_PLLf_GET(r) ((((r).sp2_miscreset[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_RESET_PLLf_SET(r,f) (r).sp2_miscreset[0]=(((r).sp2_miscreset[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))

/*
 * These macros can be used to access SP2_MISCRESET.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_MISCRESETr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr,(_r._sp2_miscreset))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MISCRESETr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr,(_r._sp2_miscreset)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MISCRESETr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr,(_r._sp2_miscreset))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_MISCRESETr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_miscreset))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MISCRESETr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_miscreset))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MISCRESETr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_miscreset))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_MISCRESETr BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr
#define SP2_MISCRESETr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_t SP2_MISCRESETr_t;
#define SP2_MISCRESETr_CLR BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_CLR
#define SP2_MISCRESETr_SET BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_SET
#define SP2_MISCRESETr_GET BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_GET
#define SP2_MISCRESETr_RESET_MDIOf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_RESET_MDIOf_GET
#define SP2_MISCRESETr_RESET_MDIOf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_RESET_MDIOf_SET
#define SP2_MISCRESETr_RESET_PLLf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_RESET_PLLf_GET
#define SP2_MISCRESETr_RESET_PLLf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr_RESET_PLLf_SET
#define READ_SP2_MISCRESETr BCMI_SGMIIP2X4_SERDES_READ_SP2_MISCRESETr
#define WRITE_SP2_MISCRESETr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MISCRESETr
#define MODIFY_SP2_MISCRESETr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MISCRESETr
#define READLN_SP2_MISCRESETr BCMI_SGMIIP2X4_SERDES_READLN_SP2_MISCRESETr
#define WRITELN_SP2_MISCRESETr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MISCRESETr
#define WRITEALL_SP2_MISCRESETr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MISCRESETr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_MISCRESETr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_QSGMII
 * BLOCKS:   BLK2
 * REGADDR:  0x810b
 * DESC:     QSGMII Control register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     QSGMII_EN        
 *     QSGMII_PIN_DISABLE 
 *     QSGMII_SYNC_FORCE 
 *     QSGMII_ADJ_EN_VAL 
 *     QSGMII_ADJ_EN_FORCE 
 *     QSGMII_AUTO_PDRST_LN123_DISABLE 
 *     QSGMII_K28P1_LN_SEL 
 *     DISPARITY_EN_VAL Override value that enables (1b1) and disables (1b0) disparity errorwhen disperror_en_force is asserted HIGH.
 *     DISPERROR_SYNC_VAL Override value that enables (1b1) and disables (1b0) disparity errorchecking and reporting when disperror_en_force is asserted HIGH.
 *     DISPERROR_EN_VAL Override value that enables (1b1) and disables (1b0) disparity errorchecking and reporting when disperror_en_force is asserted HIGH.
 *     DISPERROR_EN_FORCE 1: Override enable that enables the override value of the following registersto take effect: disperror_en_val, disperror_sync_val, and disparity_en_val.0: Otherwise, disparity error checking and reporting (i.e. internal signaldisperror_en and disperror_sync) are enabled; and, internal signal disparity_enfor Lane0 is disabled when in QSGMII mode and disabled for all other modes.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr (0x0000810b | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_SIZE 4

/*
 * This structure should be used to declare and program SP2_QSGMII.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_s {
	uint32_t v[1];
	uint32_t sp2_qsgmii[1];
	uint32_t _sp2_qsgmii;
} BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_CLR(r) (r).sp2_qsgmii[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_SET(r,d) (r).sp2_qsgmii[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_GET(r) (r).sp2_qsgmii[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPERROR_EN_FORCEf_GET(r) ((((r).sp2_qsgmii[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPERROR_EN_FORCEf_SET(r,f) (r).sp2_qsgmii[0]=(((r).sp2_qsgmii[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPERROR_EN_VALf_GET(r) ((((r).sp2_qsgmii[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPERROR_EN_VALf_SET(r,f) (r).sp2_qsgmii[0]=(((r).sp2_qsgmii[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPERROR_SYNC_VALf_GET(r) ((((r).sp2_qsgmii[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPERROR_SYNC_VALf_SET(r,f) (r).sp2_qsgmii[0]=(((r).sp2_qsgmii[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPARITY_EN_VALf_GET(r) ((((r).sp2_qsgmii[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPARITY_EN_VALf_SET(r,f) (r).sp2_qsgmii[0]=(((r).sp2_qsgmii[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_K28P1_LN_SELf_GET(r) ((((r).sp2_qsgmii[0]) >> 6) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_K28P1_LN_SELf_SET(r,f) (r).sp2_qsgmii[0]=(((r).sp2_qsgmii[0] & ~((uint32_t)0x3 << 6)) | ((((uint32_t)f) & 0x3) << 6)) | (3 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_AUTO_PDRST_LN123_DISABLEf_GET(r) ((((r).sp2_qsgmii[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_AUTO_PDRST_LN123_DISABLEf_SET(r,f) (r).sp2_qsgmii[0]=(((r).sp2_qsgmii[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_ADJ_EN_FORCEf_GET(r) ((((r).sp2_qsgmii[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_ADJ_EN_FORCEf_SET(r,f) (r).sp2_qsgmii[0]=(((r).sp2_qsgmii[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_ADJ_EN_VALf_GET(r) ((((r).sp2_qsgmii[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_ADJ_EN_VALf_SET(r,f) (r).sp2_qsgmii[0]=(((r).sp2_qsgmii[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_SYNC_FORCEf_GET(r) ((((r).sp2_qsgmii[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_SYNC_FORCEf_SET(r,f) (r).sp2_qsgmii[0]=(((r).sp2_qsgmii[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_PIN_DISABLEf_GET(r) ((((r).sp2_qsgmii[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_PIN_DISABLEf_SET(r,f) (r).sp2_qsgmii[0]=(((r).sp2_qsgmii[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_ENf_GET(r) (((r).sp2_qsgmii[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_ENf_SET(r,f) (r).sp2_qsgmii[0]=(((r).sp2_qsgmii[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_QSGMII.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_QSGMIIr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr,(_r._sp2_qsgmii))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_QSGMIIr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr,(_r._sp2_qsgmii)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_QSGMIIr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr,(_r._sp2_qsgmii))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_QSGMIIr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_qsgmii))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_QSGMIIr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_qsgmii))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_QSGMIIr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_qsgmii))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_QSGMIIr BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr
#define SP2_QSGMIIr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_t SP2_QSGMIIr_t;
#define SP2_QSGMIIr_CLR BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_CLR
#define SP2_QSGMIIr_SET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_SET
#define SP2_QSGMIIr_GET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_GET
#define SP2_QSGMIIr_DISPERROR_EN_FORCEf_GET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPERROR_EN_FORCEf_GET
#define SP2_QSGMIIr_DISPERROR_EN_FORCEf_SET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPERROR_EN_FORCEf_SET
#define SP2_QSGMIIr_DISPERROR_EN_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPERROR_EN_VALf_GET
#define SP2_QSGMIIr_DISPERROR_EN_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPERROR_EN_VALf_SET
#define SP2_QSGMIIr_DISPERROR_SYNC_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPERROR_SYNC_VALf_GET
#define SP2_QSGMIIr_DISPERROR_SYNC_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPERROR_SYNC_VALf_SET
#define SP2_QSGMIIr_DISPARITY_EN_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPARITY_EN_VALf_GET
#define SP2_QSGMIIr_DISPARITY_EN_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_DISPARITY_EN_VALf_SET
#define SP2_QSGMIIr_QSGMII_K28P1_LN_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_K28P1_LN_SELf_GET
#define SP2_QSGMIIr_QSGMII_K28P1_LN_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_K28P1_LN_SELf_SET
#define SP2_QSGMIIr_QSGMII_AUTO_PDRST_LN123_DISABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_AUTO_PDRST_LN123_DISABLEf_GET
#define SP2_QSGMIIr_QSGMII_AUTO_PDRST_LN123_DISABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_AUTO_PDRST_LN123_DISABLEf_SET
#define SP2_QSGMIIr_QSGMII_ADJ_EN_FORCEf_GET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_ADJ_EN_FORCEf_GET
#define SP2_QSGMIIr_QSGMII_ADJ_EN_FORCEf_SET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_ADJ_EN_FORCEf_SET
#define SP2_QSGMIIr_QSGMII_ADJ_EN_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_ADJ_EN_VALf_GET
#define SP2_QSGMIIr_QSGMII_ADJ_EN_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_ADJ_EN_VALf_SET
#define SP2_QSGMIIr_QSGMII_SYNC_FORCEf_GET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_SYNC_FORCEf_GET
#define SP2_QSGMIIr_QSGMII_SYNC_FORCEf_SET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_SYNC_FORCEf_SET
#define SP2_QSGMIIr_QSGMII_PIN_DISABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_PIN_DISABLEf_GET
#define SP2_QSGMIIr_QSGMII_PIN_DISABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_PIN_DISABLEf_SET
#define SP2_QSGMIIr_QSGMII_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_ENf_GET
#define SP2_QSGMIIr_QSGMII_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr_QSGMII_ENf_SET
#define READ_SP2_QSGMIIr BCMI_SGMIIP2X4_SERDES_READ_SP2_QSGMIIr
#define WRITE_SP2_QSGMIIr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_QSGMIIr
#define MODIFY_SP2_QSGMIIr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_QSGMIIr
#define READLN_SP2_QSGMIIr BCMI_SGMIIP2X4_SERDES_READLN_SP2_QSGMIIr
#define WRITELN_SP2_QSGMIIr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_QSGMIIr
#define WRITEALL_SP2_QSGMIIr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_QSGMIIr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_QSGMIIr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_BLKADDR2
 * BLOCKS:   BLK2
 * REGADDR:  0x810f
 * DESC:     Block Address register
 * RESETVAL: 0x100 (256)
 * ACCESS:   R/W
 * FIELDS:
 *     BLOCKADDRESS     Bits 14:4 of the address
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r (0x0000810f | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_BLKADDR2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_s {
	uint32_t v[1];
	uint32_t sp2_blkaddr2[1];
	uint32_t _sp2_blkaddr2;
} BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_CLR(r) (r).sp2_blkaddr2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_SET(r,d) (r).sp2_blkaddr2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_GET(r) (r).sp2_blkaddr2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_BLOCKADDRESSf_GET(r) ((((r).sp2_blkaddr2[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_BLOCKADDRESSf_SET(r,f) (r).sp2_blkaddr2[0]=(((r).sp2_blkaddr2[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))

/*
 * These macros can be used to access SP2_BLKADDR2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_BLKADDR2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r,(_r._sp2_blkaddr2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_BLKADDR2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r,(_r._sp2_blkaddr2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_BLKADDR2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r,(_r._sp2_blkaddr2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_BLKADDR2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_blkaddr2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_BLKADDR2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_blkaddr2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_BLKADDR2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_blkaddr2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_BLKADDR2r BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r
#define SP2_BLKADDR2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_t SP2_BLKADDR2r_t;
#define SP2_BLKADDR2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_CLR
#define SP2_BLKADDR2r_SET BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_SET
#define SP2_BLKADDR2r_GET BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_GET
#define SP2_BLKADDR2r_BLOCKADDRESSf_GET BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_BLOCKADDRESSf_GET
#define SP2_BLKADDR2r_BLOCKADDRESSf_SET BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r_BLOCKADDRESSf_SET
#define READ_SP2_BLKADDR2r BCMI_SGMIIP2X4_SERDES_READ_SP2_BLKADDR2r
#define WRITE_SP2_BLKADDR2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_BLKADDR2r
#define MODIFY_SP2_BLKADDR2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_BLKADDR2r
#define READLN_SP2_BLKADDR2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_BLKADDR2r
#define WRITELN_SP2_BLKADDR2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_BLKADDR2r
#define WRITEALL_SP2_BLKADDR2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_BLKADDR2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_BLKADDR2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL2_STAT0
 * BLOCKS:   PLL2
 * REGADDR:  0x8180
 * DESC:     Analog PLL Status0 Register
 * RESETVAL: 0x422 (1058)
 * ACCESS:   R/O
 * FIELDS:
 *     CAL_ERROR        
 *     CAL_VALID        
 *     CAL_STATE        
 *     VCO_RANGE        
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r (0x00008180 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL2_STAT0.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_s {
	uint32_t v[1];
	uint32_t sp2_pll2_stat0[1];
	uint32_t _sp2_pll2_stat0;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_CLR(r) (r).sp2_pll2_stat0[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_SET(r,d) (r).sp2_pll2_stat0[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_GET(r) (r).sp2_pll2_stat0[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_VCO_RANGEf_GET(r) ((((r).sp2_pll2_stat0[0]) >> 6) & 0x7f)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_VCO_RANGEf_SET(r,f) (r).sp2_pll2_stat0[0]=(((r).sp2_pll2_stat0[0] & ~((uint32_t)0x7f << 6)) | ((((uint32_t)f) & 0x7f) << 6)) | (127 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_CAL_STATEf_GET(r) ((((r).sp2_pll2_stat0[0]) >> 2) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_CAL_STATEf_SET(r,f) (r).sp2_pll2_stat0[0]=(((r).sp2_pll2_stat0[0] & ~((uint32_t)0xf << 2)) | ((((uint32_t)f) & 0xf) << 2)) | (15 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_CAL_VALIDf_GET(r) ((((r).sp2_pll2_stat0[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_CAL_VALIDf_SET(r,f) (r).sp2_pll2_stat0[0]=(((r).sp2_pll2_stat0[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_CAL_ERRORf_GET(r) (((r).sp2_pll2_stat0[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_CAL_ERRORf_SET(r,f) (r).sp2_pll2_stat0[0]=(((r).sp2_pll2_stat0[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_PLL2_STAT0.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_STAT0r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r,(_r._sp2_pll2_stat0))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_STAT0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r,(_r._sp2_pll2_stat0)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_STAT0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r,(_r._sp2_pll2_stat0))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_STAT0r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_stat0))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_STAT0r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_stat0))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_STAT0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll2_stat0))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL2_STAT0r BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r
#define SP2_PLL2_STAT0r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_t SP2_PLL2_STAT0r_t;
#define SP2_PLL2_STAT0r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_CLR
#define SP2_PLL2_STAT0r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_SET
#define SP2_PLL2_STAT0r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_GET
#define SP2_PLL2_STAT0r_VCO_RANGEf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_VCO_RANGEf_GET
#define SP2_PLL2_STAT0r_VCO_RANGEf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_VCO_RANGEf_SET
#define SP2_PLL2_STAT0r_CAL_STATEf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_CAL_STATEf_GET
#define SP2_PLL2_STAT0r_CAL_STATEf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_CAL_STATEf_SET
#define SP2_PLL2_STAT0r_CAL_VALIDf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_CAL_VALIDf_GET
#define SP2_PLL2_STAT0r_CAL_VALIDf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_CAL_VALIDf_SET
#define SP2_PLL2_STAT0r_CAL_ERRORf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_CAL_ERRORf_GET
#define SP2_PLL2_STAT0r_CAL_ERRORf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r_CAL_ERRORf_SET
#define READ_SP2_PLL2_STAT0r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_STAT0r
#define WRITE_SP2_PLL2_STAT0r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_STAT0r
#define MODIFY_SP2_PLL2_STAT0r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_STAT0r
#define READLN_SP2_PLL2_STAT0r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_STAT0r
#define WRITELN_SP2_PLL2_STAT0r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_STAT0r
#define WRITEALL_SP2_PLL2_STAT0r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_STAT0r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL2_STAT0r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL2_CTL1
 * BLOCKS:   PLL2
 * REGADDR:  0x8181
 * DESC:     Analog PLL Control1 Register
 * RESETVAL: 0x300 (768)
 * ACCESS:   R/W
 * FIELDS:
 *     EXT_RANGE        
 *     CAL_TH           
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r (0x00008181 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL2_CTL1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_s {
	uint32_t v[1];
	uint32_t sp2_pll2_ctl1[1];
	uint32_t _sp2_pll2_ctl1;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_CLR(r) (r).sp2_pll2_ctl1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_SET(r,d) (r).sp2_pll2_ctl1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_GET(r) (r).sp2_pll2_ctl1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_CAL_THf_GET(r) ((((r).sp2_pll2_ctl1[0]) >> 7) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_CAL_THf_SET(r,f) (r).sp2_pll2_ctl1[0]=(((r).sp2_pll2_ctl1[0] & ~((uint32_t)0xf << 7)) | ((((uint32_t)f) & 0xf) << 7)) | (15 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_EXT_RANGEf_GET(r) (((r).sp2_pll2_ctl1[0]) & 0x7f)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_EXT_RANGEf_SET(r,f) (r).sp2_pll2_ctl1[0]=(((r).sp2_pll2_ctl1[0] & ~((uint32_t)0x7f)) | (((uint32_t)f) & 0x7f)) | (0x7f << 16)

/*
 * These macros can be used to access SP2_PLL2_CTL1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_CTL1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r,(_r._sp2_pll2_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r,(_r._sp2_pll2_ctl1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r,(_r._sp2_pll2_ctl1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_CTL1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_CTL1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll2_ctl1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL2_CTL1r BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r
#define SP2_PLL2_CTL1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_t SP2_PLL2_CTL1r_t;
#define SP2_PLL2_CTL1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_CLR
#define SP2_PLL2_CTL1r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_SET
#define SP2_PLL2_CTL1r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_GET
#define SP2_PLL2_CTL1r_CAL_THf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_CAL_THf_GET
#define SP2_PLL2_CTL1r_CAL_THf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_CAL_THf_SET
#define SP2_PLL2_CTL1r_EXT_RANGEf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_EXT_RANGEf_GET
#define SP2_PLL2_CTL1r_EXT_RANGEf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r_EXT_RANGEf_SET
#define READ_SP2_PLL2_CTL1r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_CTL1r
#define WRITE_SP2_PLL2_CTL1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_CTL1r
#define MODIFY_SP2_PLL2_CTL1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_CTL1r
#define READLN_SP2_PLL2_CTL1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_CTL1r
#define WRITELN_SP2_PLL2_CTL1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_CTL1r
#define WRITEALL_SP2_PLL2_CTL1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_CTL1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL2_CTL2
 * BLOCKS:   PLL2
 * REGADDR:  0x8182
 * DESC:     Analog PLL Control2 Register
 * RESETVAL: 0x4000 (16384)
 * ACCESS:   R/W
 * FIELDS:
 *     RANGE_OVRD_VAL   
 *     RANGE_OVRD       
 *     RANGE_DFS        
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r (0x00008182 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL2_CTL2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_s {
	uint32_t v[1];
	uint32_t sp2_pll2_ctl2[1];
	uint32_t _sp2_pll2_ctl2;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_CLR(r) (r).sp2_pll2_ctl2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_SET(r,d) (r).sp2_pll2_ctl2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_GET(r) (r).sp2_pll2_ctl2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_RANGE_DFSf_GET(r) ((((r).sp2_pll2_ctl2[0]) >> 8) & 0x7f)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_RANGE_DFSf_SET(r,f) (r).sp2_pll2_ctl2[0]=(((r).sp2_pll2_ctl2[0] & ~((uint32_t)0x7f << 8)) | ((((uint32_t)f) & 0x7f) << 8)) | (127 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_RANGE_OVRDf_GET(r) ((((r).sp2_pll2_ctl2[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_RANGE_OVRDf_SET(r,f) (r).sp2_pll2_ctl2[0]=(((r).sp2_pll2_ctl2[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_RANGE_OVRD_VALf_GET(r) (((r).sp2_pll2_ctl2[0]) & 0x7f)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_RANGE_OVRD_VALf_SET(r,f) (r).sp2_pll2_ctl2[0]=(((r).sp2_pll2_ctl2[0] & ~((uint32_t)0x7f)) | (((uint32_t)f) & 0x7f)) | (0x7f << 16)

/*
 * These macros can be used to access SP2_PLL2_CTL2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_CTL2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r,(_r._sp2_pll2_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r,(_r._sp2_pll2_ctl2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r,(_r._sp2_pll2_ctl2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_CTL2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_CTL2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll2_ctl2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL2_CTL2r BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r
#define SP2_PLL2_CTL2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_t SP2_PLL2_CTL2r_t;
#define SP2_PLL2_CTL2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_CLR
#define SP2_PLL2_CTL2r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_SET
#define SP2_PLL2_CTL2r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_GET
#define SP2_PLL2_CTL2r_RANGE_DFSf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_RANGE_DFSf_GET
#define SP2_PLL2_CTL2r_RANGE_DFSf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_RANGE_DFSf_SET
#define SP2_PLL2_CTL2r_RANGE_OVRDf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_RANGE_OVRDf_GET
#define SP2_PLL2_CTL2r_RANGE_OVRDf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_RANGE_OVRDf_SET
#define SP2_PLL2_CTL2r_RANGE_OVRD_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_RANGE_OVRD_VALf_GET
#define SP2_PLL2_CTL2r_RANGE_OVRD_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r_RANGE_OVRD_VALf_SET
#define READ_SP2_PLL2_CTL2r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_CTL2r
#define WRITE_SP2_PLL2_CTL2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_CTL2r
#define MODIFY_SP2_PLL2_CTL2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_CTL2r
#define READLN_SP2_PLL2_CTL2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_CTL2r
#define WRITELN_SP2_PLL2_CTL2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_CTL2r
#define WRITEALL_SP2_PLL2_CTL2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_CTL2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL2_CTL3
 * BLOCKS:   PLL2
 * REGADDR:  0x8183
 * DESC:     Analog PLL Control3 Register
 * RESETVAL: 0x1e84 (7812)
 * ACCESS:   R/W
 * FIELDS:
 *     CALIB_CAP_CHARGE_TIME 50us based on a 156.25MHz refclkuse 09C4h if using a 50MHz refclk
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r (0x00008183 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL2_CTL3.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_s {
	uint32_t v[1];
	uint32_t sp2_pll2_ctl3[1];
	uint32_t _sp2_pll2_ctl3;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_CLR(r) (r).sp2_pll2_ctl3[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_SET(r,d) (r).sp2_pll2_ctl3[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_GET(r) (r).sp2_pll2_ctl3[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_CALIB_CAP_CHARGE_TIMEf_GET(r) (((r).sp2_pll2_ctl3[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_CALIB_CAP_CHARGE_TIMEf_SET(r,f) (r).sp2_pll2_ctl3[0]=(((r).sp2_pll2_ctl3[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_PLL2_CTL3.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_CTL3r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r,(_r._sp2_pll2_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r,(_r._sp2_pll2_ctl3)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r,(_r._sp2_pll2_ctl3))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_CTL3r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_CTL3r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll2_ctl3))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL2_CTL3r BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r
#define SP2_PLL2_CTL3r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_t SP2_PLL2_CTL3r_t;
#define SP2_PLL2_CTL3r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_CLR
#define SP2_PLL2_CTL3r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_SET
#define SP2_PLL2_CTL3r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_GET
#define SP2_PLL2_CTL3r_CALIB_CAP_CHARGE_TIMEf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_CALIB_CAP_CHARGE_TIMEf_GET
#define SP2_PLL2_CTL3r_CALIB_CAP_CHARGE_TIMEf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r_CALIB_CAP_CHARGE_TIMEf_SET
#define READ_SP2_PLL2_CTL3r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_CTL3r
#define WRITE_SP2_PLL2_CTL3r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_CTL3r
#define MODIFY_SP2_PLL2_CTL3r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_CTL3r
#define READLN_SP2_PLL2_CTL3r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_CTL3r
#define WRITELN_SP2_PLL2_CTL3r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_CTL3r
#define WRITEALL_SP2_PLL2_CTL3r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_CTL3r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL3r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL2_CTL4
 * BLOCKS:   PLL2
 * REGADDR:  0x8184
 * DESC:     Analog PLL Control4 Register
 * RESETVAL: 0x61a (1562)
 * ACCESS:   R/W
 * FIELDS:
 *     CALIB_DELAY_TIME 10us based on a 156.25MHz refclkuse 01F4h if using a 50MHz refclk
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r (0x00008184 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL2_CTL4.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_s {
	uint32_t v[1];
	uint32_t sp2_pll2_ctl4[1];
	uint32_t _sp2_pll2_ctl4;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_CLR(r) (r).sp2_pll2_ctl4[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_SET(r,d) (r).sp2_pll2_ctl4[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_GET(r) (r).sp2_pll2_ctl4[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_CALIB_DELAY_TIMEf_GET(r) (((r).sp2_pll2_ctl4[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_CALIB_DELAY_TIMEf_SET(r,f) (r).sp2_pll2_ctl4[0]=(((r).sp2_pll2_ctl4[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_PLL2_CTL4.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_CTL4r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r,(_r._sp2_pll2_ctl4))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_CTL4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r,(_r._sp2_pll2_ctl4)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_CTL4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r,(_r._sp2_pll2_ctl4))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_CTL4r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_ctl4))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_CTL4r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_ctl4))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_CTL4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll2_ctl4))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL2_CTL4r BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r
#define SP2_PLL2_CTL4r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_t SP2_PLL2_CTL4r_t;
#define SP2_PLL2_CTL4r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_CLR
#define SP2_PLL2_CTL4r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_SET
#define SP2_PLL2_CTL4r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_GET
#define SP2_PLL2_CTL4r_CALIB_DELAY_TIMEf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_CALIB_DELAY_TIMEf_GET
#define SP2_PLL2_CTL4r_CALIB_DELAY_TIMEf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r_CALIB_DELAY_TIMEf_SET
#define READ_SP2_PLL2_CTL4r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_CTL4r
#define WRITE_SP2_PLL2_CTL4r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_CTL4r
#define MODIFY_SP2_PLL2_CTL4r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_CTL4r
#define READLN_SP2_PLL2_CTL4r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_CTL4r
#define WRITELN_SP2_PLL2_CTL4r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_CTL4r
#define WRITEALL_SP2_PLL2_CTL4r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_CTL4r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL4r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL2_CTL5
 * BLOCKS:   PLL2
 * REGADDR:  0x8185
 * DESC:     Analog PLL Control5 Register
 * RESETVAL: 0x3d09 (15625)
 * ACCESS:   R/W
 * FIELDS:
 *     CALIB_STEP_TIME  100us based on a 156.25MHz refclkuse 1388h if using a 50MHz refclk
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r (0x00008185 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL2_CTL5.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_s {
	uint32_t v[1];
	uint32_t sp2_pll2_ctl5[1];
	uint32_t _sp2_pll2_ctl5;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_CLR(r) (r).sp2_pll2_ctl5[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_SET(r,d) (r).sp2_pll2_ctl5[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_GET(r) (r).sp2_pll2_ctl5[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_CALIB_STEP_TIMEf_GET(r) (((r).sp2_pll2_ctl5[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_CALIB_STEP_TIMEf_SET(r,f) (r).sp2_pll2_ctl5[0]=(((r).sp2_pll2_ctl5[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_PLL2_CTL5.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_CTL5r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r,(_r._sp2_pll2_ctl5))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_CTL5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r,(_r._sp2_pll2_ctl5)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_CTL5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r,(_r._sp2_pll2_ctl5))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_CTL5r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_ctl5))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_CTL5r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_ctl5))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_CTL5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll2_ctl5))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL2_CTL5r BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r
#define SP2_PLL2_CTL5r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_t SP2_PLL2_CTL5r_t;
#define SP2_PLL2_CTL5r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_CLR
#define SP2_PLL2_CTL5r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_SET
#define SP2_PLL2_CTL5r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_GET
#define SP2_PLL2_CTL5r_CALIB_STEP_TIMEf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_CALIB_STEP_TIMEf_GET
#define SP2_PLL2_CTL5r_CALIB_STEP_TIMEf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r_CALIB_STEP_TIMEf_SET
#define READ_SP2_PLL2_CTL5r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_CTL5r
#define WRITE_SP2_PLL2_CTL5r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_CTL5r
#define MODIFY_SP2_PLL2_CTL5r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_CTL5r
#define READLN_SP2_PLL2_CTL5r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_CTL5r
#define WRITELN_SP2_PLL2_CTL5r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_CTL5r
#define WRITEALL_SP2_PLL2_CTL5r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_CTL5r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL5r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL2_CTL6
 * BLOCKS:   PLL2
 * REGADDR:  0x8186
 * DESC:     Analog PLL Control6 Register
 * RESETVAL: 0x3c (60)
 * ACCESS:   R/W
 * FIELDS:
 *     DFE0_VCOCAL_VALID_OVRD_VAL 
 *     DFE0_VCOCAL_VALID_OVRD 
 *     DFE0_CALIB_SEARCH_BIT 
 *     DFE0_HALFSTEP_EN 
 *     DFE0_EN_CALIB_N  
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r (0x00008186 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL2_CTL6.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_s {
	uint32_t v[1];
	uint32_t sp2_pll2_ctl6[1];
	uint32_t _sp2_pll2_ctl6;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_CLR(r) (r).sp2_pll2_ctl6[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_SET(r,d) (r).sp2_pll2_ctl6[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_GET(r) (r).sp2_pll2_ctl6[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_EN_CALIB_Nf_GET(r) ((((r).sp2_pll2_ctl6[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_EN_CALIB_Nf_SET(r,f) (r).sp2_pll2_ctl6[0]=(((r).sp2_pll2_ctl6[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_HALFSTEP_ENf_GET(r) ((((r).sp2_pll2_ctl6[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_HALFSTEP_ENf_SET(r,f) (r).sp2_pll2_ctl6[0]=(((r).sp2_pll2_ctl6[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_CALIB_SEARCH_BITf_GET(r) ((((r).sp2_pll2_ctl6[0]) >> 2) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_CALIB_SEARCH_BITf_SET(r,f) (r).sp2_pll2_ctl6[0]=(((r).sp2_pll2_ctl6[0] & ~((uint32_t)0x7 << 2)) | ((((uint32_t)f) & 0x7) << 2)) | (7 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_VCOCAL_VALID_OVRDf_GET(r) ((((r).sp2_pll2_ctl6[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_VCOCAL_VALID_OVRDf_SET(r,f) (r).sp2_pll2_ctl6[0]=(((r).sp2_pll2_ctl6[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_VCOCAL_VALID_OVRD_VALf_GET(r) (((r).sp2_pll2_ctl6[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_VCOCAL_VALID_OVRD_VALf_SET(r,f) (r).sp2_pll2_ctl6[0]=(((r).sp2_pll2_ctl6[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_PLL2_CTL6.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_CTL6r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r,(_r._sp2_pll2_ctl6))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_CTL6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r,(_r._sp2_pll2_ctl6)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_CTL6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r,(_r._sp2_pll2_ctl6))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_CTL6r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_ctl6))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_CTL6r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_ctl6))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_CTL6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll2_ctl6))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL2_CTL6r BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r
#define SP2_PLL2_CTL6r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_t SP2_PLL2_CTL6r_t;
#define SP2_PLL2_CTL6r_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_CLR
#define SP2_PLL2_CTL6r_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_SET
#define SP2_PLL2_CTL6r_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_GET
#define SP2_PLL2_CTL6r_DFE0_EN_CALIB_Nf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_EN_CALIB_Nf_GET
#define SP2_PLL2_CTL6r_DFE0_EN_CALIB_Nf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_EN_CALIB_Nf_SET
#define SP2_PLL2_CTL6r_DFE0_HALFSTEP_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_HALFSTEP_ENf_GET
#define SP2_PLL2_CTL6r_DFE0_HALFSTEP_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_HALFSTEP_ENf_SET
#define SP2_PLL2_CTL6r_DFE0_CALIB_SEARCH_BITf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_CALIB_SEARCH_BITf_GET
#define SP2_PLL2_CTL6r_DFE0_CALIB_SEARCH_BITf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_CALIB_SEARCH_BITf_SET
#define SP2_PLL2_CTL6r_DFE0_VCOCAL_VALID_OVRDf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_VCOCAL_VALID_OVRDf_GET
#define SP2_PLL2_CTL6r_DFE0_VCOCAL_VALID_OVRDf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_VCOCAL_VALID_OVRDf_SET
#define SP2_PLL2_CTL6r_DFE0_VCOCAL_VALID_OVRD_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_VCOCAL_VALID_OVRD_VALf_GET
#define SP2_PLL2_CTL6r_DFE0_VCOCAL_VALID_OVRD_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r_DFE0_VCOCAL_VALID_OVRD_VALf_SET
#define READ_SP2_PLL2_CTL6r BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_CTL6r
#define WRITE_SP2_PLL2_CTL6r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_CTL6r
#define MODIFY_SP2_PLL2_CTL6r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_CTL6r
#define READLN_SP2_PLL2_CTL6r BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_CTL6r
#define WRITELN_SP2_PLL2_CTL6r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_CTL6r
#define WRITEALL_SP2_PLL2_CTL6r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_CTL6r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL2_CTL6r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PLL2_BLKADDR
 * BLOCKS:   PLL2
 * REGADDR:  0x818f
 * DESC:     Block Address register
 * RESETVAL: 0x180 (384)
 * ACCESS:   R/W
 * FIELDS:
 *     BLOCKADDRESS     Bits 14:4 of the address
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr (0x0000818f | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_SIZE 4

/*
 * This structure should be used to declare and program SP2_PLL2_BLKADDR.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_s {
	uint32_t v[1];
	uint32_t sp2_pll2_blkaddr[1];
	uint32_t _sp2_pll2_blkaddr;
} BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_CLR(r) (r).sp2_pll2_blkaddr[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_SET(r,d) (r).sp2_pll2_blkaddr[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_GET(r) (r).sp2_pll2_blkaddr[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_BLOCKADDRESSf_GET(r) ((((r).sp2_pll2_blkaddr[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_BLOCKADDRESSf_SET(r,f) (r).sp2_pll2_blkaddr[0]=(((r).sp2_pll2_blkaddr[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))

/*
 * These macros can be used to access SP2_PLL2_BLKADDR.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_BLKADDRr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr,(_r._sp2_pll2_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr,(_r._sp2_pll2_blkaddr)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr,(_r._sp2_pll2_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pll2_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pll2_blkaddr))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PLL2_BLKADDRr BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr
#define SP2_PLL2_BLKADDRr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_t SP2_PLL2_BLKADDRr_t;
#define SP2_PLL2_BLKADDRr_CLR BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_CLR
#define SP2_PLL2_BLKADDRr_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_SET
#define SP2_PLL2_BLKADDRr_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_GET
#define SP2_PLL2_BLKADDRr_BLOCKADDRESSf_GET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_BLOCKADDRESSf_GET
#define SP2_PLL2_BLKADDRr_BLOCKADDRESSf_SET BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr_BLOCKADDRESSf_SET
#define READ_SP2_PLL2_BLKADDRr BCMI_SGMIIP2X4_SERDES_READ_SP2_PLL2_BLKADDRr
#define WRITE_SP2_PLL2_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PLL2_BLKADDRr
#define MODIFY_SP2_PLL2_BLKADDRr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PLL2_BLKADDRr
#define READLN_SP2_PLL2_BLKADDRr BCMI_SGMIIP2X4_SERDES_READLN_SP2_PLL2_BLKADDRr
#define WRITELN_SP2_PLL2_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PLL2_BLKADDRr
#define WRITEALL_SP2_PLL2_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PLL2_BLKADDRr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PLL2_BLKADDRr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_DIGITAL_CTL1000X1
 * BLOCKS:   DIGITAL
 * REGADDR:  0x8300
 * DESC:     1000X control 1 register
 * RESETVAL: 0x100 (256)
 * ACCESS:   R/W
 * FIELDS:
 *     FIBER_MODE_1000X 1 = Fiber mode (1000X)0 = SGMII mode
 *     SIGNAL_DETECT_EN 1 = signal detect from pin must be set in order to achieve synchronization. In SGMII the signal detect is always ignored regardless of the setting of this bit.0 = ignore signal detect from pin
 *     INVERT_SIGNAL_DETECT 1 = invert signal detect from pin0 = use signal detect from pin
 *     AUTODET_EN       1 = enable auto-detection (fiber and sgmii mode will switch each time a auto-negotiation page is received with the wrong selector field in bit 0.)0 = disable auto-detection (fiber or sgmii mode is set according to bit 0 of this register)
 *     SGMII_MASTER_MODE 1 = sgmii mode operates in "phy mode" sending out link, speed, and duplex settings from register 0 to link partner0 = normal operation
 *     DISABLE_PLL_PWRDWN 1 = pll will never be powered down. (use this when the mac/switch uses the tx_wclk_o output)0 = pll will be powered down when register bit ieee0Blk.MIICntl.pwrdwn_sw is set
 *     COMMA_DET_EN     1 = enable comma detection0 = disable comma detection
 *     REMOTE_LOOPBACK  1 = enable remote loopback (only operates in gigabit speed)0 = normal operation
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r (0x00008300 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_DIGITAL_CTL1000X1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_s {
	uint32_t v[1];
	uint32_t sp2_digital_ctl1000x1[1];
	uint32_t _sp2_digital_ctl1000x1;
} BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_CLR(r) (r).sp2_digital_ctl1000x1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_SET(r,d) (r).sp2_digital_ctl1000x1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_GET(r) (r).sp2_digital_ctl1000x1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_REMOTE_LOOPBACKf_GET(r) ((((r).sp2_digital_ctl1000x1[0]) >> 10) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_REMOTE_LOOPBACKf_SET(r,f) (r).sp2_digital_ctl1000x1[0]=(((r).sp2_digital_ctl1000x1[0] & ~((uint32_t)0x1 << 10)) | ((((uint32_t)f) & 0x1) << 10)) | (1 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_COMMA_DET_ENf_GET(r) ((((r).sp2_digital_ctl1000x1[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_COMMA_DET_ENf_SET(r,f) (r).sp2_digital_ctl1000x1[0]=(((r).sp2_digital_ctl1000x1[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_DISABLE_PLL_PWRDWNf_GET(r) ((((r).sp2_digital_ctl1000x1[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_DISABLE_PLL_PWRDWNf_SET(r,f) (r).sp2_digital_ctl1000x1[0]=(((r).sp2_digital_ctl1000x1[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_SGMII_MASTER_MODEf_GET(r) ((((r).sp2_digital_ctl1000x1[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_SGMII_MASTER_MODEf_SET(r,f) (r).sp2_digital_ctl1000x1[0]=(((r).sp2_digital_ctl1000x1[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_AUTODET_ENf_GET(r) ((((r).sp2_digital_ctl1000x1[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_AUTODET_ENf_SET(r,f) (r).sp2_digital_ctl1000x1[0]=(((r).sp2_digital_ctl1000x1[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_INVERT_SIGNAL_DETECTf_GET(r) ((((r).sp2_digital_ctl1000x1[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_INVERT_SIGNAL_DETECTf_SET(r,f) (r).sp2_digital_ctl1000x1[0]=(((r).sp2_digital_ctl1000x1[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_SIGNAL_DETECT_ENf_GET(r) ((((r).sp2_digital_ctl1000x1[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_SIGNAL_DETECT_ENf_SET(r,f) (r).sp2_digital_ctl1000x1[0]=(((r).sp2_digital_ctl1000x1[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_FIBER_MODE_1000Xf_GET(r) (((r).sp2_digital_ctl1000x1[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_FIBER_MODE_1000Xf_SET(r,f) (r).sp2_digital_ctl1000x1[0]=(((r).sp2_digital_ctl1000x1[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_DIGITAL_CTL1000X1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_DIGITAL_CTL1000X1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r,(_r._sp2_digital_ctl1000x1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_DIGITAL_CTL1000X1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r,(_r._sp2_digital_ctl1000x1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_DIGITAL_CTL1000X1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r,(_r._sp2_digital_ctl1000x1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_DIGITAL_CTL1000X1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_digital_ctl1000x1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_DIGITAL_CTL1000X1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_digital_ctl1000x1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_DIGITAL_CTL1000X1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_digital_ctl1000x1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_DIGITAL_CTL1000X1r BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r
#define SP2_DIGITAL_CTL1000X1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_t SP2_DIGITAL_CTL1000X1r_t;
#define SP2_DIGITAL_CTL1000X1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_CLR
#define SP2_DIGITAL_CTL1000X1r_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_SET
#define SP2_DIGITAL_CTL1000X1r_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_GET
#define SP2_DIGITAL_CTL1000X1r_REMOTE_LOOPBACKf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_REMOTE_LOOPBACKf_GET
#define SP2_DIGITAL_CTL1000X1r_REMOTE_LOOPBACKf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_REMOTE_LOOPBACKf_SET
#define SP2_DIGITAL_CTL1000X1r_COMMA_DET_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_COMMA_DET_ENf_GET
#define SP2_DIGITAL_CTL1000X1r_COMMA_DET_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_COMMA_DET_ENf_SET
#define SP2_DIGITAL_CTL1000X1r_DISABLE_PLL_PWRDWNf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_DISABLE_PLL_PWRDWNf_GET
#define SP2_DIGITAL_CTL1000X1r_DISABLE_PLL_PWRDWNf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_DISABLE_PLL_PWRDWNf_SET
#define SP2_DIGITAL_CTL1000X1r_SGMII_MASTER_MODEf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_SGMII_MASTER_MODEf_GET
#define SP2_DIGITAL_CTL1000X1r_SGMII_MASTER_MODEf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_SGMII_MASTER_MODEf_SET
#define SP2_DIGITAL_CTL1000X1r_AUTODET_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_AUTODET_ENf_GET
#define SP2_DIGITAL_CTL1000X1r_AUTODET_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_AUTODET_ENf_SET
#define SP2_DIGITAL_CTL1000X1r_INVERT_SIGNAL_DETECTf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_INVERT_SIGNAL_DETECTf_GET
#define SP2_DIGITAL_CTL1000X1r_INVERT_SIGNAL_DETECTf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_INVERT_SIGNAL_DETECTf_SET
#define SP2_DIGITAL_CTL1000X1r_SIGNAL_DETECT_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_SIGNAL_DETECT_ENf_GET
#define SP2_DIGITAL_CTL1000X1r_SIGNAL_DETECT_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_SIGNAL_DETECT_ENf_SET
#define SP2_DIGITAL_CTL1000X1r_FIBER_MODE_1000Xf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_FIBER_MODE_1000Xf_GET
#define SP2_DIGITAL_CTL1000X1r_FIBER_MODE_1000Xf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r_FIBER_MODE_1000Xf_SET
#define READ_SP2_DIGITAL_CTL1000X1r BCMI_SGMIIP2X4_SERDES_READ_SP2_DIGITAL_CTL1000X1r
#define WRITE_SP2_DIGITAL_CTL1000X1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_DIGITAL_CTL1000X1r
#define MODIFY_SP2_DIGITAL_CTL1000X1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_DIGITAL_CTL1000X1r
#define READLN_SP2_DIGITAL_CTL1000X1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_DIGITAL_CTL1000X1r
#define WRITELN_SP2_DIGITAL_CTL1000X1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_DIGITAL_CTL1000X1r
#define WRITEALL_SP2_DIGITAL_CTL1000X1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_DIGITAL_CTL1000X1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_DIGITAL_CTL1000X2
 * BLOCKS:   DIGITAL
 * REGADDR:  0x8301
 * DESC:     1000X control 2 register
 * RESETVAL: 0x6 (6)
 * ACCESS:   R/W
 * FIELDS:
 *     ENABLE_PARALLEL_DETECTION 1 = enable parallel detection. (This will turn auto-negotiation on and off as needed to properly link up with the link partner. The idles and auto-negotiation code words received from the link partner are used to make this decision)
 *     DISABLE_FALSE_LINK 1 = do not allow link to be established when auto-negotiation is disabled and receiving auto-negotiation code words. The link will only be established in this case after idles are received. (This bit does not need to be set, if bit 0 below is set.)0 = normal operation
 *     FILTER_FORCE_LINK 1 = sync-status must be set for a solid 10ms before a valid link will be established when auto-negotiation is disabled. (This is useful in fiber applications where the user does not have the signal detect pin connected to the fiber module and auto-negotiation is turned off.)0 = normal operation
 *     AUTONEG_FAST_TIMERS simulation only speed up for AN sims1 = speed up timers during auto-negotiation for testing0 = normal operation
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r (0x00008301 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_DIGITAL_CTL1000X2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_s {
	uint32_t v[1];
	uint32_t sp2_digital_ctl1000x2[1];
	uint32_t _sp2_digital_ctl1000x2;
} BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_CLR(r) (r).sp2_digital_ctl1000x2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_SET(r,d) (r).sp2_digital_ctl1000x2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_GET(r) (r).sp2_digital_ctl1000x2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_AUTONEG_FAST_TIMERSf_GET(r) ((((r).sp2_digital_ctl1000x2[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_AUTONEG_FAST_TIMERSf_SET(r,f) (r).sp2_digital_ctl1000x2[0]=(((r).sp2_digital_ctl1000x2[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_FILTER_FORCE_LINKf_GET(r) ((((r).sp2_digital_ctl1000x2[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_FILTER_FORCE_LINKf_SET(r,f) (r).sp2_digital_ctl1000x2[0]=(((r).sp2_digital_ctl1000x2[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_DISABLE_FALSE_LINKf_GET(r) ((((r).sp2_digital_ctl1000x2[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_DISABLE_FALSE_LINKf_SET(r,f) (r).sp2_digital_ctl1000x2[0]=(((r).sp2_digital_ctl1000x2[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_ENABLE_PARALLEL_DETECTIONf_GET(r) (((r).sp2_digital_ctl1000x2[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_ENABLE_PARALLEL_DETECTIONf_SET(r,f) (r).sp2_digital_ctl1000x2[0]=(((r).sp2_digital_ctl1000x2[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_DIGITAL_CTL1000X2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_DIGITAL_CTL1000X2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r,(_r._sp2_digital_ctl1000x2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_DIGITAL_CTL1000X2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r,(_r._sp2_digital_ctl1000x2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_DIGITAL_CTL1000X2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r,(_r._sp2_digital_ctl1000x2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_DIGITAL_CTL1000X2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_digital_ctl1000x2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_DIGITAL_CTL1000X2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_digital_ctl1000x2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_DIGITAL_CTL1000X2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_digital_ctl1000x2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_DIGITAL_CTL1000X2r BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r
#define SP2_DIGITAL_CTL1000X2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_t SP2_DIGITAL_CTL1000X2r_t;
#define SP2_DIGITAL_CTL1000X2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_CLR
#define SP2_DIGITAL_CTL1000X2r_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_SET
#define SP2_DIGITAL_CTL1000X2r_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_GET
#define SP2_DIGITAL_CTL1000X2r_AUTONEG_FAST_TIMERSf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_AUTONEG_FAST_TIMERSf_GET
#define SP2_DIGITAL_CTL1000X2r_AUTONEG_FAST_TIMERSf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_AUTONEG_FAST_TIMERSf_SET
#define SP2_DIGITAL_CTL1000X2r_FILTER_FORCE_LINKf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_FILTER_FORCE_LINKf_GET
#define SP2_DIGITAL_CTL1000X2r_FILTER_FORCE_LINKf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_FILTER_FORCE_LINKf_SET
#define SP2_DIGITAL_CTL1000X2r_DISABLE_FALSE_LINKf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_DISABLE_FALSE_LINKf_GET
#define SP2_DIGITAL_CTL1000X2r_DISABLE_FALSE_LINKf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_DISABLE_FALSE_LINKf_SET
#define SP2_DIGITAL_CTL1000X2r_ENABLE_PARALLEL_DETECTIONf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_ENABLE_PARALLEL_DETECTIONf_GET
#define SP2_DIGITAL_CTL1000X2r_ENABLE_PARALLEL_DETECTIONf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r_ENABLE_PARALLEL_DETECTIONf_SET
#define READ_SP2_DIGITAL_CTL1000X2r BCMI_SGMIIP2X4_SERDES_READ_SP2_DIGITAL_CTL1000X2r
#define WRITE_SP2_DIGITAL_CTL1000X2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_DIGITAL_CTL1000X2r
#define MODIFY_SP2_DIGITAL_CTL1000X2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_DIGITAL_CTL1000X2r
#define READLN_SP2_DIGITAL_CTL1000X2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_DIGITAL_CTL1000X2r
#define WRITELN_SP2_DIGITAL_CTL1000X2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_DIGITAL_CTL1000X2r
#define WRITEALL_SP2_DIGITAL_CTL1000X2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_DIGITAL_CTL1000X2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_CTL1000X2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_STS1000X1
 * BLOCKS:   DIGITAL
 * REGADDR:  0x8304
 * DESC:     1000X status 1 register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/O
 * FIELDS:
 *     SGMII_MODE       1 = sgmii mode0 = fiber mode (1000-X)
 *     LINK_STATUS      1 = link is up0 = link is down
 *     DUPLEX_STATUS    1 = full-duplex0 = half-duplex
 *     SPEED_STATUS     11 = 2.5G10 = gigabit01 = 100 mbps00 = 10 mbps
 *     PAUSE_RESOLUTION_TXSIDE 1 = enable pause transmit0 = disable pause transmit
 *     PAUSE_RESOLUTION_RXSIDE 1 = enable pause receive0 = disable pause receive
 *     LINK_STATUS_BAR  1 = link status has changed since last read0 = link status has not changed since last readLH, Latching High
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r (0x00008304 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_STS1000X1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_s {
	uint32_t v[1];
	uint32_t sp2_sts1000x1[1];
	uint32_t _sp2_sts1000x1;
} BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_CLR(r) (r).sp2_sts1000x1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_SET(r,d) (r).sp2_sts1000x1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_GET(r) (r).sp2_sts1000x1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_LINK_STATUS_BARf_GET(r) ((((r).sp2_sts1000x1[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_LINK_STATUS_BARf_SET(r,f) (r).sp2_sts1000x1[0]=(((r).sp2_sts1000x1[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_PAUSE_RESOLUTION_RXSIDEf_GET(r) ((((r).sp2_sts1000x1[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_PAUSE_RESOLUTION_RXSIDEf_SET(r,f) (r).sp2_sts1000x1[0]=(((r).sp2_sts1000x1[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_PAUSE_RESOLUTION_TXSIDEf_GET(r) ((((r).sp2_sts1000x1[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_PAUSE_RESOLUTION_TXSIDEf_SET(r,f) (r).sp2_sts1000x1[0]=(((r).sp2_sts1000x1[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_SPEED_STATUSf_GET(r) ((((r).sp2_sts1000x1[0]) >> 3) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_SPEED_STATUSf_SET(r,f) (r).sp2_sts1000x1[0]=(((r).sp2_sts1000x1[0] & ~((uint32_t)0x3 << 3)) | ((((uint32_t)f) & 0x3) << 3)) | (3 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_DUPLEX_STATUSf_GET(r) ((((r).sp2_sts1000x1[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_DUPLEX_STATUSf_SET(r,f) (r).sp2_sts1000x1[0]=(((r).sp2_sts1000x1[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_LINK_STATUSf_GET(r) ((((r).sp2_sts1000x1[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_LINK_STATUSf_SET(r,f) (r).sp2_sts1000x1[0]=(((r).sp2_sts1000x1[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_SGMII_MODEf_GET(r) (((r).sp2_sts1000x1[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_SGMII_MODEf_SET(r,f) (r).sp2_sts1000x1[0]=(((r).sp2_sts1000x1[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_STS1000X1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_STS1000X1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r,(_r._sp2_sts1000x1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_STS1000X1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r,(_r._sp2_sts1000x1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_STS1000X1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r,(_r._sp2_sts1000x1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_STS1000X1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_sts1000x1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_STS1000X1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_sts1000x1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_STS1000X1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_sts1000x1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_STS1000X1r BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r
#define SP2_STS1000X1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_t SP2_STS1000X1r_t;
#define SP2_STS1000X1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_CLR
#define SP2_STS1000X1r_SET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_SET
#define SP2_STS1000X1r_GET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_GET
#define SP2_STS1000X1r_LINK_STATUS_BARf_GET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_LINK_STATUS_BARf_GET
#define SP2_STS1000X1r_LINK_STATUS_BARf_SET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_LINK_STATUS_BARf_SET
#define SP2_STS1000X1r_PAUSE_RESOLUTION_RXSIDEf_GET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_PAUSE_RESOLUTION_RXSIDEf_GET
#define SP2_STS1000X1r_PAUSE_RESOLUTION_RXSIDEf_SET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_PAUSE_RESOLUTION_RXSIDEf_SET
#define SP2_STS1000X1r_PAUSE_RESOLUTION_TXSIDEf_GET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_PAUSE_RESOLUTION_TXSIDEf_GET
#define SP2_STS1000X1r_PAUSE_RESOLUTION_TXSIDEf_SET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_PAUSE_RESOLUTION_TXSIDEf_SET
#define SP2_STS1000X1r_SPEED_STATUSf_GET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_SPEED_STATUSf_GET
#define SP2_STS1000X1r_SPEED_STATUSf_SET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_SPEED_STATUSf_SET
#define SP2_STS1000X1r_DUPLEX_STATUSf_GET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_DUPLEX_STATUSf_GET
#define SP2_STS1000X1r_DUPLEX_STATUSf_SET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_DUPLEX_STATUSf_SET
#define SP2_STS1000X1r_LINK_STATUSf_GET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_LINK_STATUSf_GET
#define SP2_STS1000X1r_LINK_STATUSf_SET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_LINK_STATUSf_SET
#define SP2_STS1000X1r_SGMII_MODEf_GET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_SGMII_MODEf_GET
#define SP2_STS1000X1r_SGMII_MODEf_SET BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r_SGMII_MODEf_SET
#define READ_SP2_STS1000X1r BCMI_SGMIIP2X4_SERDES_READ_SP2_STS1000X1r
#define WRITE_SP2_STS1000X1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_STS1000X1r
#define MODIFY_SP2_STS1000X1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_STS1000X1r
#define READLN_SP2_STS1000X1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_STS1000X1r
#define WRITELN_SP2_STS1000X1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_STS1000X1r
#define WRITEALL_SP2_STS1000X1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_STS1000X1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_STS1000X1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_MISC1
 * BLOCKS:   DIGITAL
 * REGADDR:  0x8308
 * DESC:     Miscellaneous 1 control register
 * RESETVAL: 0x6000 (24576)
 * ACCESS:   R/W
 * FIELDS:
 *     FORCE_SPEED      Forces the speed (rate) of the link when CL37 & CL73 auto-negotiation is off.Warning: 1. force_speed_strap is not mapped like this 4 bit field.2. To set 10/100/1000 use the MII Control register.Default is set by the force_speed_strap pins.if (force_speed_b5 = 0)
 *     REFCLK_SEL       Specifies refclk frequency
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC1r (0x00008308 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_MISC1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_s {
	uint32_t v[1];
	uint32_t sp2_misc1[1];
	uint32_t _sp2_misc1;
} BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_CLR(r) (r).sp2_misc1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_SET(r,d) (r).sp2_misc1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_GET(r) (r).sp2_misc1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_REFCLK_SELf_GET(r) ((((r).sp2_misc1[0]) >> 13) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_REFCLK_SELf_SET(r,f) (r).sp2_misc1[0]=(((r).sp2_misc1[0] & ~((uint32_t)0x7 << 13)) | ((((uint32_t)f) & 0x7) << 13)) | (7 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_FORCE_SPEEDf_GET(r) (((r).sp2_misc1[0]) & 0x1f)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_FORCE_SPEEDf_SET(r,f) (r).sp2_misc1[0]=(((r).sp2_misc1[0] & ~((uint32_t)0x1f)) | (((uint32_t)f) & 0x1f)) | (0x1f << 16)

/*
 * These macros can be used to access SP2_MISC1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_MISC1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC1r,(_r._sp2_misc1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MISC1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC1r,(_r._sp2_misc1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MISC1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC1r,(_r._sp2_misc1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_MISC1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_misc1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MISC1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_misc1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MISC1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_misc1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_MISC1r BCMI_SGMIIP2X4_SERDES_SP2_MISC1r
#define SP2_MISC1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_t SP2_MISC1r_t;
#define SP2_MISC1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_CLR
#define SP2_MISC1r_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_SET
#define SP2_MISC1r_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_GET
#define SP2_MISC1r_REFCLK_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_REFCLK_SELf_GET
#define SP2_MISC1r_REFCLK_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_REFCLK_SELf_SET
#define SP2_MISC1r_FORCE_SPEEDf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_FORCE_SPEEDf_GET
#define SP2_MISC1r_FORCE_SPEEDf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC1r_FORCE_SPEEDf_SET
#define READ_SP2_MISC1r BCMI_SGMIIP2X4_SERDES_READ_SP2_MISC1r
#define WRITE_SP2_MISC1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MISC1r
#define MODIFY_SP2_MISC1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MISC1r
#define READLN_SP2_MISC1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_MISC1r
#define WRITELN_SP2_MISC1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MISC1r
#define WRITEALL_SP2_MISC1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MISC1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_MISC1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_MISC2
 * BLOCKS:   DIGITAL
 * REGADDR:  0x8309
 * DESC:     Miscellaneous 2 control register
 * RESETVAL: 0x2190 (8592)
 * ACCESS:   R/W
 * FIELDS:
 *     FIFO_ERR_CYA     1 = Disables re-synchronization of fifo error flags (legacy)0 = Enables re-synchronization of fifo error flags
 *     MIIGMIIMUX_EN    Enable MII data on rxdgmii outputs
 *     MIIGMIIDLY_EN    CYA to delay link_status when switching betweenMII and GMII because of clock switch latency?
 *     CLK41_BYPASS     simulation only speed up1 = Sets clk41 clock period to 40ns (25MHz)0 = Sets clk41 clock period to 41us
 *     CLKSIGDET_BYPASS simulation only speed up1 = accelerates 983us and 390kHz clocks
 *     RXCK_MII_GEN_SEL_VAL 1 = Use internally created mii clock to read data from MII Rx FIFO0 = Do not use internally created mii clock to read data from MII Rx FIFO
 *     RXCK_MII_GEN_SEL_FORCE Value of 1 selects rxck_mii_gen_sel_val
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r (0x00008309 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_MISC2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_s {
	uint32_t v[1];
	uint32_t sp2_misc2[1];
	uint32_t _sp2_misc2;
} BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_CLR(r) (r).sp2_misc2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_SET(r,d) (r).sp2_misc2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_GET(r) (r).sp2_misc2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_RXCK_MII_GEN_SEL_FORCEf_GET(r) ((((r).sp2_misc2[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_RXCK_MII_GEN_SEL_FORCEf_SET(r,f) (r).sp2_misc2[0]=(((r).sp2_misc2[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_RXCK_MII_GEN_SEL_VALf_GET(r) ((((r).sp2_misc2[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_RXCK_MII_GEN_SEL_VALf_SET(r,f) (r).sp2_misc2[0]=(((r).sp2_misc2[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_CLKSIGDET_BYPASSf_GET(r) ((((r).sp2_misc2[0]) >> 10) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_CLKSIGDET_BYPASSf_SET(r,f) (r).sp2_misc2[0]=(((r).sp2_misc2[0] & ~((uint32_t)0x1 << 10)) | ((((uint32_t)f) & 0x1) << 10)) | (1 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_CLK41_BYPASSf_GET(r) ((((r).sp2_misc2[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_CLK41_BYPASSf_SET(r,f) (r).sp2_misc2[0]=(((r).sp2_misc2[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_MIIGMIIDLY_ENf_GET(r) ((((r).sp2_misc2[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_MIIGMIIDLY_ENf_SET(r,f) (r).sp2_misc2[0]=(((r).sp2_misc2[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_MIIGMIIMUX_ENf_GET(r) ((((r).sp2_misc2[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_MIIGMIIMUX_ENf_SET(r,f) (r).sp2_misc2[0]=(((r).sp2_misc2[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_FIFO_ERR_CYAf_GET(r) ((((r).sp2_misc2[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_FIFO_ERR_CYAf_SET(r,f) (r).sp2_misc2[0]=(((r).sp2_misc2[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))

/*
 * These macros can be used to access SP2_MISC2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_MISC2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC2r,(_r._sp2_misc2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MISC2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC2r,(_r._sp2_misc2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MISC2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC2r,(_r._sp2_misc2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_MISC2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_misc2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MISC2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_misc2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MISC2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_misc2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_MISC2r BCMI_SGMIIP2X4_SERDES_SP2_MISC2r
#define SP2_MISC2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_t SP2_MISC2r_t;
#define SP2_MISC2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_CLR
#define SP2_MISC2r_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_SET
#define SP2_MISC2r_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_GET
#define SP2_MISC2r_RXCK_MII_GEN_SEL_FORCEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_RXCK_MII_GEN_SEL_FORCEf_GET
#define SP2_MISC2r_RXCK_MII_GEN_SEL_FORCEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_RXCK_MII_GEN_SEL_FORCEf_SET
#define SP2_MISC2r_RXCK_MII_GEN_SEL_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_RXCK_MII_GEN_SEL_VALf_GET
#define SP2_MISC2r_RXCK_MII_GEN_SEL_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_RXCK_MII_GEN_SEL_VALf_SET
#define SP2_MISC2r_CLKSIGDET_BYPASSf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_CLKSIGDET_BYPASSf_GET
#define SP2_MISC2r_CLKSIGDET_BYPASSf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_CLKSIGDET_BYPASSf_SET
#define SP2_MISC2r_CLK41_BYPASSf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_CLK41_BYPASSf_GET
#define SP2_MISC2r_CLK41_BYPASSf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_CLK41_BYPASSf_SET
#define SP2_MISC2r_MIIGMIIDLY_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_MIIGMIIDLY_ENf_GET
#define SP2_MISC2r_MIIGMIIDLY_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_MIIGMIIDLY_ENf_SET
#define SP2_MISC2r_MIIGMIIMUX_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_MIIGMIIMUX_ENf_GET
#define SP2_MISC2r_MIIGMIIMUX_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_MIIGMIIMUX_ENf_SET
#define SP2_MISC2r_FIFO_ERR_CYAf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_FIFO_ERR_CYAf_GET
#define SP2_MISC2r_FIFO_ERR_CYAf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC2r_FIFO_ERR_CYAf_SET
#define READ_SP2_MISC2r BCMI_SGMIIP2X4_SERDES_READ_SP2_MISC2r
#define WRITE_SP2_MISC2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MISC2r
#define MODIFY_SP2_MISC2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MISC2r
#define READLN_SP2_MISC2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_MISC2r
#define WRITELN_SP2_MISC2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MISC2r
#define WRITEALL_SP2_MISC2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MISC2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_MISC2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_DIGITAL_BLKADDR
 * BLOCKS:   DIGITAL
 * REGADDR:  0x830f
 * DESC:     Block Address register
 * RESETVAL: 0x300 (768)
 * ACCESS:   R/W
 * FIELDS:
 *     BLOCKADDRESS     Bits 14:4 of the address
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr (0x0000830f | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_SIZE 4

/*
 * This structure should be used to declare and program SP2_DIGITAL_BLKADDR.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_s {
	uint32_t v[1];
	uint32_t sp2_digital_blkaddr[1];
	uint32_t _sp2_digital_blkaddr;
} BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_CLR(r) (r).sp2_digital_blkaddr[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_SET(r,d) (r).sp2_digital_blkaddr[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_GET(r) (r).sp2_digital_blkaddr[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_BLOCKADDRESSf_GET(r) ((((r).sp2_digital_blkaddr[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_BLOCKADDRESSf_SET(r,f) (r).sp2_digital_blkaddr[0]=(((r).sp2_digital_blkaddr[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))

/*
 * These macros can be used to access SP2_DIGITAL_BLKADDR.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_DIGITAL_BLKADDRr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr,(_r._sp2_digital_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_DIGITAL_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr,(_r._sp2_digital_blkaddr)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_DIGITAL_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr,(_r._sp2_digital_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_DIGITAL_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_digital_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_DIGITAL_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_digital_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_DIGITAL_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_digital_blkaddr))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_DIGITAL_BLKADDRr BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr
#define SP2_DIGITAL_BLKADDRr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_t SP2_DIGITAL_BLKADDRr_t;
#define SP2_DIGITAL_BLKADDRr_CLR BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_CLR
#define SP2_DIGITAL_BLKADDRr_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_SET
#define SP2_DIGITAL_BLKADDRr_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_GET
#define SP2_DIGITAL_BLKADDRr_BLOCKADDRESSf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_BLOCKADDRESSf_GET
#define SP2_DIGITAL_BLKADDRr_BLOCKADDRESSf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr_BLOCKADDRESSf_SET
#define READ_SP2_DIGITAL_BLKADDRr BCMI_SGMIIP2X4_SERDES_READ_SP2_DIGITAL_BLKADDRr
#define WRITE_SP2_DIGITAL_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_DIGITAL_BLKADDRr
#define MODIFY_SP2_DIGITAL_BLKADDRr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_DIGITAL_BLKADDRr
#define READLN_SP2_DIGITAL_BLKADDRr BCMI_SGMIIP2X4_SERDES_READLN_SP2_DIGITAL_BLKADDRr
#define WRITELN_SP2_DIGITAL_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_DIGITAL_BLKADDRr
#define WRITEALL_SP2_DIGITAL_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_DIGITAL_BLKADDRr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL_BLKADDRr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_SERDESID0
 * BLOCKS:   SERDESID
 * REGADDR:  0x8310
 * DESC:     Serdes ID 0 register
 * RESETVAL: 0x2cf (719)
 * ACCESS:   R/O
 * FIELDS:
 *     MODEL_NUMBER     Same as phyID model number00 = SERDES_CL73 (ComboCore, 65nm)01 = XGXS_16G02 = Hypercore03 = Hyperlite04 = PCIE_G2_PIPE05 = 1.25GBd Serdes06 = SATA207 = QSGMII08 = XGXS10G09 = WarpCore0A = XFICore0B = RXFI, Reduced XFI0C = WarpLite0D = PentaCore0E = ESM0F = SGMII10 = WarpCore 311 = TSC12 = RXAUI13 = EPON ONU14 = DECA15 = HEXATX16 = HEXARX17 = Reserved18 = Core2119 = MERLIN1A = EAGLE1B = FALCON1C = MERLIN_PHY1D = XGXS_CL73, 90nm1E = SERDES_CL73, 90nm
 *     TECH_PROC        0 = 90nm1 = 65nm2 = 40nm3 = 28nm4 = 16nm5-7 = reserved
 *     BONDING          0 = wire bond1 = flip chip2-3 = reserved
 *     REV_NUMBER       0 = rev 01 = rev 1...7 = rev 7
 *     REV_LETTER       0 = rev A1 = rev B2 = rev C3 = rev D
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r (0x00008310 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_SIZE 4

/*
 * This structure should be used to declare and program SP2_SERDESID0.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_s {
	uint32_t v[1];
	uint32_t sp2_serdesid0[1];
	uint32_t _sp2_serdesid0;
} BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_CLR(r) (r).sp2_serdesid0[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_SET(r,d) (r).sp2_serdesid0[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_GET(r) (r).sp2_serdesid0[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_REV_LETTERf_GET(r) ((((r).sp2_serdesid0[0]) >> 14) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_REV_LETTERf_SET(r,f) (r).sp2_serdesid0[0]=(((r).sp2_serdesid0[0] & ~((uint32_t)0x3 << 14)) | ((((uint32_t)f) & 0x3) << 14)) | (3 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_REV_NUMBERf_GET(r) ((((r).sp2_serdesid0[0]) >> 11) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_REV_NUMBERf_SET(r,f) (r).sp2_serdesid0[0]=(((r).sp2_serdesid0[0] & ~((uint32_t)0x7 << 11)) | ((((uint32_t)f) & 0x7) << 11)) | (7 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_BONDINGf_GET(r) ((((r).sp2_serdesid0[0]) >> 9) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_BONDINGf_SET(r,f) (r).sp2_serdesid0[0]=(((r).sp2_serdesid0[0] & ~((uint32_t)0x3 << 9)) | ((((uint32_t)f) & 0x3) << 9)) | (3 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_TECH_PROCf_GET(r) ((((r).sp2_serdesid0[0]) >> 6) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_TECH_PROCf_SET(r,f) (r).sp2_serdesid0[0]=(((r).sp2_serdesid0[0] & ~((uint32_t)0x7 << 6)) | ((((uint32_t)f) & 0x7) << 6)) | (7 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_MODEL_NUMBERf_GET(r) (((r).sp2_serdesid0[0]) & 0x3f)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_MODEL_NUMBERf_SET(r,f) (r).sp2_serdesid0[0]=(((r).sp2_serdesid0[0] & ~((uint32_t)0x3f)) | (((uint32_t)f) & 0x3f)) | (0x3f << 16)

/*
 * These macros can be used to access SP2_SERDESID0.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_SERDESID0r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r,(_r._sp2_serdesid0))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_SERDESID0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r,(_r._sp2_serdesid0)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_SERDESID0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r,(_r._sp2_serdesid0))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_SERDESID0r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_serdesid0))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_SERDESID0r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_serdesid0))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_SERDESID0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_serdesid0))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_SERDESID0r BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r
#define SP2_SERDESID0r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_t SP2_SERDESID0r_t;
#define SP2_SERDESID0r_CLR BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_CLR
#define SP2_SERDESID0r_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_SET
#define SP2_SERDESID0r_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_GET
#define SP2_SERDESID0r_REV_LETTERf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_REV_LETTERf_GET
#define SP2_SERDESID0r_REV_LETTERf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_REV_LETTERf_SET
#define SP2_SERDESID0r_REV_NUMBERf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_REV_NUMBERf_GET
#define SP2_SERDESID0r_REV_NUMBERf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_REV_NUMBERf_SET
#define SP2_SERDESID0r_BONDINGf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_BONDINGf_GET
#define SP2_SERDESID0r_BONDINGf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_BONDINGf_SET
#define SP2_SERDESID0r_TECH_PROCf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_TECH_PROCf_GET
#define SP2_SERDESID0r_TECH_PROCf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_TECH_PROCf_SET
#define SP2_SERDESID0r_MODEL_NUMBERf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_MODEL_NUMBERf_GET
#define SP2_SERDESID0r_MODEL_NUMBERf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r_MODEL_NUMBERf_SET
#define READ_SP2_SERDESID0r BCMI_SGMIIP2X4_SERDES_READ_SP2_SERDESID0r
#define WRITE_SP2_SERDESID0r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_SERDESID0r
#define MODIFY_SP2_SERDESID0r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_SERDESID0r
#define READLN_SP2_SERDESID0r BCMI_SGMIIP2X4_SERDES_READLN_SP2_SERDESID0r
#define WRITELN_SP2_SERDESID0r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_SERDESID0r
#define WRITEALL_SP2_SERDESID0r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_SERDESID0r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_SERDESID0r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_SERDESID1
 * BLOCKS:   SERDESID
 * REGADDR:  0x8311
 * DESC:     Serdes ID 1 register
 * RESETVAL: 0x4a00 (18944)
 * ACCESS:   R/O
 * FIELDS:
 *     SCRAMBLER        1 = 8B10B scrambler supported
 *     BRCM_64B66B      1 = Broadcom 64B66B endec supported
 *     PCIE_II          1 = PCIE Gen 2 supported
 *     PCIE             1 = PCIE Gen 1 supported
 *     HIGIGII          1 = HiGig II supported
 *     HIGIG            1 = HiGig supported
 *     CL48             1 = CL48 pcs supported
 *     CL36             1 = CL36 pcs supported
 *     CL73             1 = CL73 AN supported
 *     CL37             1 = CL37 AN supported
 *     MULTIPLICITY     1  = Single2  = Dual4  = Quad5  = Penta6  = Hex8  = Octal9  = Novea12 = Dozen
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r (0x00008311 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_SERDESID1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_s {
	uint32_t v[1];
	uint32_t sp2_serdesid1[1];
	uint32_t _sp2_serdesid1;
} BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CLR(r) (r).sp2_serdesid1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_SET(r,d) (r).sp2_serdesid1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_GET(r) (r).sp2_serdesid1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_MULTIPLICITYf_GET(r) ((((r).sp2_serdesid1[0]) >> 12) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_MULTIPLICITYf_SET(r,f) (r).sp2_serdesid1[0]=(((r).sp2_serdesid1[0] & ~((uint32_t)0xf << 12)) | ((((uint32_t)f) & 0xf) << 12)) | (15 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL37f_GET(r) ((((r).sp2_serdesid1[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL37f_SET(r,f) (r).sp2_serdesid1[0]=(((r).sp2_serdesid1[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL73f_GET(r) ((((r).sp2_serdesid1[0]) >> 10) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL73f_SET(r,f) (r).sp2_serdesid1[0]=(((r).sp2_serdesid1[0] & ~((uint32_t)0x1 << 10)) | ((((uint32_t)f) & 0x1) << 10)) | (1 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL36f_GET(r) ((((r).sp2_serdesid1[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL36f_SET(r,f) (r).sp2_serdesid1[0]=(((r).sp2_serdesid1[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL48f_GET(r) ((((r).sp2_serdesid1[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL48f_SET(r,f) (r).sp2_serdesid1[0]=(((r).sp2_serdesid1[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_HIGIGf_GET(r) ((((r).sp2_serdesid1[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_HIGIGf_SET(r,f) (r).sp2_serdesid1[0]=(((r).sp2_serdesid1[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_HIGIGIIf_GET(r) ((((r).sp2_serdesid1[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_HIGIGIIf_SET(r,f) (r).sp2_serdesid1[0]=(((r).sp2_serdesid1[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_PCIEf_GET(r) ((((r).sp2_serdesid1[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_PCIEf_SET(r,f) (r).sp2_serdesid1[0]=(((r).sp2_serdesid1[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_PCIE_IIf_GET(r) ((((r).sp2_serdesid1[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_PCIE_IIf_SET(r,f) (r).sp2_serdesid1[0]=(((r).sp2_serdesid1[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_BRCM_64B66Bf_GET(r) ((((r).sp2_serdesid1[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_BRCM_64B66Bf_SET(r,f) (r).sp2_serdesid1[0]=(((r).sp2_serdesid1[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_SCRAMBLERf_GET(r) ((((r).sp2_serdesid1[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_SCRAMBLERf_SET(r,f) (r).sp2_serdesid1[0]=(((r).sp2_serdesid1[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))

/*
 * These macros can be used to access SP2_SERDESID1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_SERDESID1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r,(_r._sp2_serdesid1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_SERDESID1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r,(_r._sp2_serdesid1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_SERDESID1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r,(_r._sp2_serdesid1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_SERDESID1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_serdesid1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_SERDESID1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_serdesid1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_SERDESID1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_serdesid1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_SERDESID1r BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r
#define SP2_SERDESID1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_t SP2_SERDESID1r_t;
#define SP2_SERDESID1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CLR
#define SP2_SERDESID1r_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_SET
#define SP2_SERDESID1r_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_GET
#define SP2_SERDESID1r_MULTIPLICITYf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_MULTIPLICITYf_GET
#define SP2_SERDESID1r_MULTIPLICITYf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_MULTIPLICITYf_SET
#define SP2_SERDESID1r_CL37f_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL37f_GET
#define SP2_SERDESID1r_CL37f_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL37f_SET
#define SP2_SERDESID1r_CL73f_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL73f_GET
#define SP2_SERDESID1r_CL73f_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL73f_SET
#define SP2_SERDESID1r_CL36f_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL36f_GET
#define SP2_SERDESID1r_CL36f_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL36f_SET
#define SP2_SERDESID1r_CL48f_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL48f_GET
#define SP2_SERDESID1r_CL48f_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_CL48f_SET
#define SP2_SERDESID1r_HIGIGf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_HIGIGf_GET
#define SP2_SERDESID1r_HIGIGf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_HIGIGf_SET
#define SP2_SERDESID1r_HIGIGIIf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_HIGIGIIf_GET
#define SP2_SERDESID1r_HIGIGIIf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_HIGIGIIf_SET
#define SP2_SERDESID1r_PCIEf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_PCIEf_GET
#define SP2_SERDESID1r_PCIEf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_PCIEf_SET
#define SP2_SERDESID1r_PCIE_IIf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_PCIE_IIf_GET
#define SP2_SERDESID1r_PCIE_IIf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_PCIE_IIf_SET
#define SP2_SERDESID1r_BRCM_64B66Bf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_BRCM_64B66Bf_GET
#define SP2_SERDESID1r_BRCM_64B66Bf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_BRCM_64B66Bf_SET
#define SP2_SERDESID1r_SCRAMBLERf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_SCRAMBLERf_GET
#define SP2_SERDESID1r_SCRAMBLERf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r_SCRAMBLERf_SET
#define READ_SP2_SERDESID1r BCMI_SGMIIP2X4_SERDES_READ_SP2_SERDESID1r
#define WRITE_SP2_SERDESID1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_SERDESID1r
#define MODIFY_SP2_SERDESID1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_SERDESID1r
#define READLN_SP2_SERDESID1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_SERDESID1r
#define WRITELN_SP2_SERDESID1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_SERDESID1r
#define WRITEALL_SP2_SERDESID1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_SERDESID1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_SERDESID1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_SERDESID2
 * BLOCKS:   SERDESID
 * REGADDR:  0x8312
 * DESC:     Serdes ID 2 register
 * RESETVAL: 0x800f (32783)
 * ACCESS:   R/O
 * FIELDS:
 *     DR_10M_SL        1 = 10M single lane supported
 *     DR_100M_SL       1 = 100M single lane supported
 *     DR_1G_SL         1 = 1G single lane supported
 *     DR_2P5G_SL       1 = 2.5Gbps single lane supported
 *     DR_5G_4L         1 = 5Gbps 4-lane supported
 *     DR_6G_4L         1 = 6Gbps 4-lane supported
 *     DR_10G_4L        1 = 10Gbps 4-lane supported
 *     ID3PRESENT       1 = ID3 register is present
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r (0x00008312 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_SERDESID2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_s {
	uint32_t v[1];
	uint32_t sp2_serdesid2[1];
	uint32_t _sp2_serdesid2;
} BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_CLR(r) (r).sp2_serdesid2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_SET(r,d) (r).sp2_serdesid2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_GET(r) (r).sp2_serdesid2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_ID3PRESENTf_GET(r) ((((r).sp2_serdesid2[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_ID3PRESENTf_SET(r,f) (r).sp2_serdesid2[0]=(((r).sp2_serdesid2[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_10G_4Lf_GET(r) ((((r).sp2_serdesid2[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_10G_4Lf_SET(r,f) (r).sp2_serdesid2[0]=(((r).sp2_serdesid2[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_6G_4Lf_GET(r) ((((r).sp2_serdesid2[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_6G_4Lf_SET(r,f) (r).sp2_serdesid2[0]=(((r).sp2_serdesid2[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_5G_4Lf_GET(r) ((((r).sp2_serdesid2[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_5G_4Lf_SET(r,f) (r).sp2_serdesid2[0]=(((r).sp2_serdesid2[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_2P5G_SLf_GET(r) ((((r).sp2_serdesid2[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_2P5G_SLf_SET(r,f) (r).sp2_serdesid2[0]=(((r).sp2_serdesid2[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_1G_SLf_GET(r) ((((r).sp2_serdesid2[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_1G_SLf_SET(r,f) (r).sp2_serdesid2[0]=(((r).sp2_serdesid2[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_100M_SLf_GET(r) ((((r).sp2_serdesid2[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_100M_SLf_SET(r,f) (r).sp2_serdesid2[0]=(((r).sp2_serdesid2[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_10M_SLf_GET(r) (((r).sp2_serdesid2[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_10M_SLf_SET(r,f) (r).sp2_serdesid2[0]=(((r).sp2_serdesid2[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_SERDESID2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_SERDESID2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r,(_r._sp2_serdesid2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_SERDESID2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r,(_r._sp2_serdesid2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_SERDESID2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r,(_r._sp2_serdesid2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_SERDESID2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_serdesid2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_SERDESID2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_serdesid2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_SERDESID2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_serdesid2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_SERDESID2r BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r
#define SP2_SERDESID2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_t SP2_SERDESID2r_t;
#define SP2_SERDESID2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_CLR
#define SP2_SERDESID2r_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_SET
#define SP2_SERDESID2r_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_GET
#define SP2_SERDESID2r_ID3PRESENTf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_ID3PRESENTf_GET
#define SP2_SERDESID2r_ID3PRESENTf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_ID3PRESENTf_SET
#define SP2_SERDESID2r_DR_10G_4Lf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_10G_4Lf_GET
#define SP2_SERDESID2r_DR_10G_4Lf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_10G_4Lf_SET
#define SP2_SERDESID2r_DR_6G_4Lf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_6G_4Lf_GET
#define SP2_SERDESID2r_DR_6G_4Lf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_6G_4Lf_SET
#define SP2_SERDESID2r_DR_5G_4Lf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_5G_4Lf_GET
#define SP2_SERDESID2r_DR_5G_4Lf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_5G_4Lf_SET
#define SP2_SERDESID2r_DR_2P5G_SLf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_2P5G_SLf_GET
#define SP2_SERDESID2r_DR_2P5G_SLf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_2P5G_SLf_SET
#define SP2_SERDESID2r_DR_1G_SLf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_1G_SLf_GET
#define SP2_SERDESID2r_DR_1G_SLf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_1G_SLf_SET
#define SP2_SERDESID2r_DR_100M_SLf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_100M_SLf_GET
#define SP2_SERDESID2r_DR_100M_SLf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_100M_SLf_SET
#define SP2_SERDESID2r_DR_10M_SLf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_10M_SLf_GET
#define SP2_SERDESID2r_DR_10M_SLf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r_DR_10M_SLf_SET
#define READ_SP2_SERDESID2r BCMI_SGMIIP2X4_SERDES_READ_SP2_SERDESID2r
#define WRITE_SP2_SERDESID2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_SERDESID2r
#define MODIFY_SP2_SERDESID2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_SERDESID2r
#define READLN_SP2_SERDESID2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_SERDESID2r
#define WRITELN_SP2_SERDESID2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_SERDESID2r
#define WRITEALL_SP2_SERDESID2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_SERDESID2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_SERDESID2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_SERDESID3
 * BLOCKS:   SERDESID
 * REGADDR:  0x8313
 * DESC:     Serdes ID 3 register
 * RESETVAL: 0x1 (1)
 * ACCESS:   R/O
 * FIELDS:
 *     DR_100FX         1 = 100FX single lane supported
 *     ID4PRESENT       1 = ID4 register is present
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r (0x00008313 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_SIZE 4

/*
 * This structure should be used to declare and program SP2_SERDESID3.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_s {
	uint32_t v[1];
	uint32_t sp2_serdesid3[1];
	uint32_t _sp2_serdesid3;
} BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_CLR(r) (r).sp2_serdesid3[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_SET(r,d) (r).sp2_serdesid3[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_GET(r) (r).sp2_serdesid3[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_ID4PRESENTf_GET(r) ((((r).sp2_serdesid3[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_ID4PRESENTf_SET(r,f) (r).sp2_serdesid3[0]=(((r).sp2_serdesid3[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_DR_100FXf_GET(r) (((r).sp2_serdesid3[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_DR_100FXf_SET(r,f) (r).sp2_serdesid3[0]=(((r).sp2_serdesid3[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_SERDESID3.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_SERDESID3r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r,(_r._sp2_serdesid3))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_SERDESID3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r,(_r._sp2_serdesid3)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_SERDESID3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r,(_r._sp2_serdesid3))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_SERDESID3r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_serdesid3))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_SERDESID3r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_serdesid3))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_SERDESID3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_serdesid3))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_SERDESID3r BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r
#define SP2_SERDESID3r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_t SP2_SERDESID3r_t;
#define SP2_SERDESID3r_CLR BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_CLR
#define SP2_SERDESID3r_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_SET
#define SP2_SERDESID3r_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_GET
#define SP2_SERDESID3r_ID4PRESENTf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_ID4PRESENTf_GET
#define SP2_SERDESID3r_ID4PRESENTf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_ID4PRESENTf_SET
#define SP2_SERDESID3r_DR_100FXf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_DR_100FXf_GET
#define SP2_SERDESID3r_DR_100FXf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r_DR_100FXf_SET
#define READ_SP2_SERDESID3r BCMI_SGMIIP2X4_SERDES_READ_SP2_SERDESID3r
#define WRITE_SP2_SERDESID3r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_SERDESID3r
#define MODIFY_SP2_SERDESID3r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_SERDESID3r
#define READLN_SP2_SERDESID3r BCMI_SGMIIP2X4_SERDES_READLN_SP2_SERDESID3r
#define WRITELN_SP2_SERDESID3r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_SERDESID3r
#define WRITEALL_SP2_SERDESID3r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_SERDESID3r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_SERDESID3r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_SERDESID_BLKADDR
 * BLOCKS:   SERDESID
 * REGADDR:  0x831f
 * DESC:     Block Address register
 * RESETVAL: 0x310 (784)
 * ACCESS:   R/W
 * FIELDS:
 *     BLOCKADDRESS     Bits 14:4 of the address
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr (0x0000831f | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_SIZE 4

/*
 * This structure should be used to declare and program SP2_SERDESID_BLKADDR.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_s {
	uint32_t v[1];
	uint32_t sp2_serdesid_blkaddr[1];
	uint32_t _sp2_serdesid_blkaddr;
} BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_CLR(r) (r).sp2_serdesid_blkaddr[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_SET(r,d) (r).sp2_serdesid_blkaddr[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_GET(r) (r).sp2_serdesid_blkaddr[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_BLOCKADDRESSf_GET(r) ((((r).sp2_serdesid_blkaddr[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_BLOCKADDRESSf_SET(r,f) (r).sp2_serdesid_blkaddr[0]=(((r).sp2_serdesid_blkaddr[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))

/*
 * These macros can be used to access SP2_SERDESID_BLKADDR.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_SERDESID_BLKADDRr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr,(_r._sp2_serdesid_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_SERDESID_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr,(_r._sp2_serdesid_blkaddr)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_SERDESID_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr,(_r._sp2_serdesid_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_SERDESID_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_serdesid_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_SERDESID_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_serdesid_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_SERDESID_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_serdesid_blkaddr))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_SERDESID_BLKADDRr BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr
#define SP2_SERDESID_BLKADDRr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_t SP2_SERDESID_BLKADDRr_t;
#define SP2_SERDESID_BLKADDRr_CLR BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_CLR
#define SP2_SERDESID_BLKADDRr_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_SET
#define SP2_SERDESID_BLKADDRr_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_GET
#define SP2_SERDESID_BLKADDRr_BLOCKADDRESSf_GET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_BLOCKADDRESSf_GET
#define SP2_SERDESID_BLKADDRr_BLOCKADDRESSf_SET BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr_BLOCKADDRESSf_SET
#define READ_SP2_SERDESID_BLKADDRr BCMI_SGMIIP2X4_SERDES_READ_SP2_SERDESID_BLKADDRr
#define WRITE_SP2_SERDESID_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_SERDESID_BLKADDRr
#define MODIFY_SP2_SERDESID_BLKADDRr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_SERDESID_BLKADDRr
#define READLN_SP2_SERDESID_BLKADDRr BCMI_SGMIIP2X4_SERDES_READLN_SP2_SERDESID_BLKADDRr
#define WRITELN_SP2_SERDESID_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_SERDESID_BLKADDRr
#define WRITEALL_SP2_SERDESID_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_SERDESID_BLKADDRr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_SERDESID_BLKADDRr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_MISC3
 * BLOCKS:   DIGITAL4
 * REGADDR:  0x833c
 * DESC:     Miscellaneous 3 control register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     SGMII_EXT_SEL    
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC3r (0x0000833c | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_SIZE 4

/*
 * This structure should be used to declare and program SP2_MISC3.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_s {
	uint32_t v[1];
	uint32_t sp2_misc3[1];
	uint32_t _sp2_misc3;
} BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_CLR(r) (r).sp2_misc3[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_SET(r,d) (r).sp2_misc3[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_GET(r) (r).sp2_misc3[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_SGMII_EXT_SELf_GET(r) ((((r).sp2_misc3[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_SGMII_EXT_SELf_SET(r,f) (r).sp2_misc3[0]=(((r).sp2_misc3[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))

/*
 * These macros can be used to access SP2_MISC3.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_MISC3r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC3r,(_r._sp2_misc3))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MISC3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC3r,(_r._sp2_misc3)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MISC3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC3r,(_r._sp2_misc3))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_MISC3r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_misc3))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MISC3r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_misc3))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MISC3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC3r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_misc3))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_MISC3r BCMI_SGMIIP2X4_SERDES_SP2_MISC3r
#define SP2_MISC3r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_t SP2_MISC3r_t;
#define SP2_MISC3r_CLR BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_CLR
#define SP2_MISC3r_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_SET
#define SP2_MISC3r_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_GET
#define SP2_MISC3r_SGMII_EXT_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_SGMII_EXT_SELf_GET
#define SP2_MISC3r_SGMII_EXT_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC3r_SGMII_EXT_SELf_SET
#define READ_SP2_MISC3r BCMI_SGMIIP2X4_SERDES_READ_SP2_MISC3r
#define WRITE_SP2_MISC3r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MISC3r
#define MODIFY_SP2_MISC3r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MISC3r
#define READLN_SP2_MISC3r BCMI_SGMIIP2X4_SERDES_READLN_SP2_MISC3r
#define WRITELN_SP2_MISC3r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MISC3r
#define WRITEALL_SP2_MISC3r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MISC3r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_MISC3r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_MISC5
 * BLOCKS:   DIGITAL4
 * REGADDR:  0x833e
 * DESC:     Miscelaneous 5 control register
 * RESETVAL: 0xc000 (49152)
 * ACCESS:   R/W
 * FIELDS:
 *     LPI_EN_TX        Tx LPI enable force value for cl49 and cl36
 *     LPI_EN_RX        Rx LPI enable force value for cl49 and cl36
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC5r (0x0000833e | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_SIZE 4

/*
 * This structure should be used to declare and program SP2_MISC5.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_s {
	uint32_t v[1];
	uint32_t sp2_misc5[1];
	uint32_t _sp2_misc5;
} BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_CLR(r) (r).sp2_misc5[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_SET(r,d) (r).sp2_misc5[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_GET(r) (r).sp2_misc5[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_LPI_EN_RXf_GET(r) ((((r).sp2_misc5[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_LPI_EN_RXf_SET(r,f) (r).sp2_misc5[0]=(((r).sp2_misc5[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_LPI_EN_TXf_GET(r) ((((r).sp2_misc5[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_LPI_EN_TXf_SET(r,f) (r).sp2_misc5[0]=(((r).sp2_misc5[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))

/*
 * These macros can be used to access SP2_MISC5.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_MISC5r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC5r,(_r._sp2_misc5))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MISC5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC5r,(_r._sp2_misc5)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MISC5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC5r,(_r._sp2_misc5))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_MISC5r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC5r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_misc5))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MISC5r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC5r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_misc5))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MISC5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC5r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_misc5))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_MISC5r BCMI_SGMIIP2X4_SERDES_SP2_MISC5r
#define SP2_MISC5r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_t SP2_MISC5r_t;
#define SP2_MISC5r_CLR BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_CLR
#define SP2_MISC5r_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_SET
#define SP2_MISC5r_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_GET
#define SP2_MISC5r_LPI_EN_RXf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_LPI_EN_RXf_GET
#define SP2_MISC5r_LPI_EN_RXf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_LPI_EN_RXf_SET
#define SP2_MISC5r_LPI_EN_TXf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_LPI_EN_TXf_GET
#define SP2_MISC5r_LPI_EN_TXf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC5r_LPI_EN_TXf_SET
#define READ_SP2_MISC5r BCMI_SGMIIP2X4_SERDES_READ_SP2_MISC5r
#define WRITE_SP2_MISC5r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MISC5r
#define MODIFY_SP2_MISC5r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MISC5r
#define READLN_SP2_MISC5r BCMI_SGMIIP2X4_SERDES_READLN_SP2_MISC5r
#define WRITELN_SP2_MISC5r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MISC5r
#define WRITEALL_SP2_MISC5r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MISC5r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_MISC5r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_DIGITAL4_BLKADDR
 * BLOCKS:   DIGITAL4
 * REGADDR:  0x833f
 * DESC:     Block Address register
 * RESETVAL: 0x330 (816)
 * ACCESS:   R/W
 * FIELDS:
 *     BLOCKADDRESS     Bits 14:4 of the address
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr (0x0000833f | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_SIZE 4

/*
 * This structure should be used to declare and program SP2_DIGITAL4_BLKADDR.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_s {
	uint32_t v[1];
	uint32_t sp2_digital4_blkaddr[1];
	uint32_t _sp2_digital4_blkaddr;
} BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_CLR(r) (r).sp2_digital4_blkaddr[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_SET(r,d) (r).sp2_digital4_blkaddr[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_GET(r) (r).sp2_digital4_blkaddr[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_BLOCKADDRESSf_GET(r) ((((r).sp2_digital4_blkaddr[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_BLOCKADDRESSf_SET(r,f) (r).sp2_digital4_blkaddr[0]=(((r).sp2_digital4_blkaddr[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))

/*
 * These macros can be used to access SP2_DIGITAL4_BLKADDR.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_DIGITAL4_BLKADDRr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr,(_r._sp2_digital4_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_DIGITAL4_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr,(_r._sp2_digital4_blkaddr)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_DIGITAL4_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr,(_r._sp2_digital4_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_DIGITAL4_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_digital4_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_DIGITAL4_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_digital4_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_DIGITAL4_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_digital4_blkaddr))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_DIGITAL4_BLKADDRr BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr
#define SP2_DIGITAL4_BLKADDRr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_t SP2_DIGITAL4_BLKADDRr_t;
#define SP2_DIGITAL4_BLKADDRr_CLR BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_CLR
#define SP2_DIGITAL4_BLKADDRr_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_SET
#define SP2_DIGITAL4_BLKADDRr_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_GET
#define SP2_DIGITAL4_BLKADDRr_BLOCKADDRESSf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_BLOCKADDRESSf_GET
#define SP2_DIGITAL4_BLKADDRr_BLOCKADDRESSf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr_BLOCKADDRESSf_SET
#define READ_SP2_DIGITAL4_BLKADDRr BCMI_SGMIIP2X4_SERDES_READ_SP2_DIGITAL4_BLKADDRr
#define WRITE_SP2_DIGITAL4_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_DIGITAL4_BLKADDRr
#define MODIFY_SP2_DIGITAL4_BLKADDRr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_DIGITAL4_BLKADDRr
#define READLN_SP2_DIGITAL4_BLKADDRr BCMI_SGMIIP2X4_SERDES_READLN_SP2_DIGITAL4_BLKADDRr
#define WRITELN_SP2_DIGITAL4_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_DIGITAL4_BLKADDRr
#define WRITEALL_SP2_DIGITAL4_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_DIGITAL4_BLKADDRr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL4_BLKADDRr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_MISC8
 * BLOCKS:   DIGITAL5
 * REGADDR:  0x834a
 * DESC:     Misc8
 * RESETVAL: 0x3 (3)
 * ACCESS:   R/W
 * FIELDS:
 *     FORCE_OSCDR_MODE force os cdr mode value4'h1   - osx24'h3   - osx5
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC8r (0x0000834a | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_SIZE 4

/*
 * This structure should be used to declare and program SP2_MISC8.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_s {
	uint32_t v[1];
	uint32_t sp2_misc8[1];
	uint32_t _sp2_misc8;
} BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_CLR(r) (r).sp2_misc8[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_SET(r,d) (r).sp2_misc8[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_GET(r) (r).sp2_misc8[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_FORCE_OSCDR_MODEf_GET(r) (((r).sp2_misc8[0]) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_FORCE_OSCDR_MODEf_SET(r,f) (r).sp2_misc8[0]=(((r).sp2_misc8[0] & ~((uint32_t)0xf)) | (((uint32_t)f) & 0xf)) | (0xf << 16)

/*
 * These macros can be used to access SP2_MISC8.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_MISC8r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC8r,(_r._sp2_misc8))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MISC8r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC8r,(_r._sp2_misc8)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MISC8r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC8r,(_r._sp2_misc8))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_MISC8r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC8r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_misc8))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MISC8r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC8r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_misc8))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MISC8r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MISC8r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_misc8))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_MISC8r BCMI_SGMIIP2X4_SERDES_SP2_MISC8r
#define SP2_MISC8r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_t SP2_MISC8r_t;
#define SP2_MISC8r_CLR BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_CLR
#define SP2_MISC8r_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_SET
#define SP2_MISC8r_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_GET
#define SP2_MISC8r_FORCE_OSCDR_MODEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_FORCE_OSCDR_MODEf_GET
#define SP2_MISC8r_FORCE_OSCDR_MODEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MISC8r_FORCE_OSCDR_MODEf_SET
#define READ_SP2_MISC8r BCMI_SGMIIP2X4_SERDES_READ_SP2_MISC8r
#define WRITE_SP2_MISC8r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MISC8r
#define MODIFY_SP2_MISC8r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MISC8r
#define READLN_SP2_MISC8r BCMI_SGMIIP2X4_SERDES_READLN_SP2_MISC8r
#define WRITELN_SP2_MISC8r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MISC8r
#define WRITEALL_SP2_MISC8r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MISC8r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_MISC8r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_DIGITAL5_BLKADDR
 * BLOCKS:   DIGITAL5
 * REGADDR:  0x834f
 * DESC:     Block Address register
 * RESETVAL: 0x340 (832)
 * ACCESS:   R/W
 * FIELDS:
 *     BLOCKADDRESS     Bits 14:4 of the address
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr (0x0000834f | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_SIZE 4

/*
 * This structure should be used to declare and program SP2_DIGITAL5_BLKADDR.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_s {
	uint32_t v[1];
	uint32_t sp2_digital5_blkaddr[1];
	uint32_t _sp2_digital5_blkaddr;
} BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_CLR(r) (r).sp2_digital5_blkaddr[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_SET(r,d) (r).sp2_digital5_blkaddr[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_GET(r) (r).sp2_digital5_blkaddr[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_BLOCKADDRESSf_GET(r) ((((r).sp2_digital5_blkaddr[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_BLOCKADDRESSf_SET(r,f) (r).sp2_digital5_blkaddr[0]=(((r).sp2_digital5_blkaddr[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))

/*
 * These macros can be used to access SP2_DIGITAL5_BLKADDR.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_DIGITAL5_BLKADDRr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr,(_r._sp2_digital5_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_DIGITAL5_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr,(_r._sp2_digital5_blkaddr)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_DIGITAL5_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr,(_r._sp2_digital5_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_DIGITAL5_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_digital5_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_DIGITAL5_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_digital5_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_DIGITAL5_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_digital5_blkaddr))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_DIGITAL5_BLKADDRr BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr
#define SP2_DIGITAL5_BLKADDRr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_t SP2_DIGITAL5_BLKADDRr_t;
#define SP2_DIGITAL5_BLKADDRr_CLR BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_CLR
#define SP2_DIGITAL5_BLKADDRr_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_SET
#define SP2_DIGITAL5_BLKADDRr_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_GET
#define SP2_DIGITAL5_BLKADDRr_BLOCKADDRESSf_GET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_BLOCKADDRESSf_GET
#define SP2_DIGITAL5_BLKADDRr_BLOCKADDRESSf_SET BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr_BLOCKADDRESSf_SET
#define READ_SP2_DIGITAL5_BLKADDRr BCMI_SGMIIP2X4_SERDES_READ_SP2_DIGITAL5_BLKADDRr
#define WRITE_SP2_DIGITAL5_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_DIGITAL5_BLKADDRr
#define MODIFY_SP2_DIGITAL5_BLKADDRr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_DIGITAL5_BLKADDRr
#define READLN_SP2_DIGITAL5_BLKADDRr BCMI_SGMIIP2X4_SERDES_READLN_SP2_DIGITAL5_BLKADDRr
#define WRITELN_SP2_DIGITAL5_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_DIGITAL5_BLKADDRr
#define WRITEALL_SP2_DIGITAL5_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_DIGITAL5_BLKADDRr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_DIGITAL5_BLKADDRr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_FX100_CTL1
 * BLOCKS:   FX100
 * REGADDR:  0x8400
 * DESC:     100FX control register 1
 * RESETVAL: 0x14a (330)
 * ACCESS:   R/W
 * FIELDS:
 *     ENABLE           1 = select 100-FX mode0 = disable 100-FX mode
 *     FULL_DUPLEX      1 = 100-FX serdes full-duplex0 = 100-FX serdes half-duplex
 *     FAR_END_FAULT_EN 1 = enable far-end fault0 = disable far-end fault
 *     RXDATA_SEL       selects the sample bit out of 10 bits for fx100 RX data
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r (0x00008400 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_FX100_CTL1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_s {
	uint32_t v[1];
	uint32_t sp2_fx100_ctl1[1];
	uint32_t _sp2_fx100_ctl1;
} BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_CLR(r) (r).sp2_fx100_ctl1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_SET(r,d) (r).sp2_fx100_ctl1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_GET(r) (r).sp2_fx100_ctl1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_RXDATA_SELf_GET(r) ((((r).sp2_fx100_ctl1[0]) >> 6) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_RXDATA_SELf_SET(r,f) (r).sp2_fx100_ctl1[0]=(((r).sp2_fx100_ctl1[0] & ~((uint32_t)0xf << 6)) | ((((uint32_t)f) & 0xf) << 6)) | (15 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_FAR_END_FAULT_ENf_GET(r) ((((r).sp2_fx100_ctl1[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_FAR_END_FAULT_ENf_SET(r,f) (r).sp2_fx100_ctl1[0]=(((r).sp2_fx100_ctl1[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_FULL_DUPLEXf_GET(r) ((((r).sp2_fx100_ctl1[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_FULL_DUPLEXf_SET(r,f) (r).sp2_fx100_ctl1[0]=(((r).sp2_fx100_ctl1[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_ENABLEf_GET(r) (((r).sp2_fx100_ctl1[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_ENABLEf_SET(r,f) (r).sp2_fx100_ctl1[0]=(((r).sp2_fx100_ctl1[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_FX100_CTL1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_FX100_CTL1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r,(_r._sp2_fx100_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_FX100_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r,(_r._sp2_fx100_ctl1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_FX100_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r,(_r._sp2_fx100_ctl1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_FX100_CTL1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_fx100_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_FX100_CTL1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_fx100_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_FX100_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_fx100_ctl1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_FX100_CTL1r BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r
#define SP2_FX100_CTL1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_t SP2_FX100_CTL1r_t;
#define SP2_FX100_CTL1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_CLR
#define SP2_FX100_CTL1r_SET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_SET
#define SP2_FX100_CTL1r_GET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_GET
#define SP2_FX100_CTL1r_RXDATA_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_RXDATA_SELf_GET
#define SP2_FX100_CTL1r_RXDATA_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_RXDATA_SELf_SET
#define SP2_FX100_CTL1r_FAR_END_FAULT_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_FAR_END_FAULT_ENf_GET
#define SP2_FX100_CTL1r_FAR_END_FAULT_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_FAR_END_FAULT_ENf_SET
#define SP2_FX100_CTL1r_FULL_DUPLEXf_GET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_FULL_DUPLEXf_GET
#define SP2_FX100_CTL1r_FULL_DUPLEXf_SET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_FULL_DUPLEXf_SET
#define SP2_FX100_CTL1r_ENABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_ENABLEf_GET
#define SP2_FX100_CTL1r_ENABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r_ENABLEf_SET
#define READ_SP2_FX100_CTL1r BCMI_SGMIIP2X4_SERDES_READ_SP2_FX100_CTL1r
#define WRITE_SP2_FX100_CTL1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_FX100_CTL1r
#define MODIFY_SP2_FX100_CTL1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_FX100_CTL1r
#define READLN_SP2_FX100_CTL1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_FX100_CTL1r
#define WRITELN_SP2_FX100_CTL1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_FX100_CTL1r
#define WRITEALL_SP2_FX100_CTL1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_FX100_CTL1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_FX100_CTL3
 * BLOCKS:   FX100
 * REGADDR:  0x8402
 * DESC:     100FX control register 3
 * RESETVAL: 0x800 (2048)
 * ACCESS:   R/W
 * FIELDS:
 *     FAST_TIMERS      1 = speed up timers to acquire lock and link (test vectors and simulation) in 100FX mode0 = normal operation
 *     FORCE_LINK       1 = force link in 100FX mode0 = normal operation
 *     CORRELATOR_DISABLE disable idle correlator
 *     NUMBER_OF_IDLE   
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r (0x00008402 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_SIZE 4

/*
 * This structure should be used to declare and program SP2_FX100_CTL3.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_s {
	uint32_t v[1];
	uint32_t sp2_fx100_ctl3[1];
	uint32_t _sp2_fx100_ctl3;
} BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_CLR(r) (r).sp2_fx100_ctl3[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_SET(r,d) (r).sp2_fx100_ctl3[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_GET(r) (r).sp2_fx100_ctl3[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_NUMBER_OF_IDLEf_GET(r) ((((r).sp2_fx100_ctl3[0]) >> 8) & 0xff)
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_NUMBER_OF_IDLEf_SET(r,f) (r).sp2_fx100_ctl3[0]=(((r).sp2_fx100_ctl3[0] & ~((uint32_t)0xff << 8)) | ((((uint32_t)f) & 0xff) << 8)) | (255 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_CORRELATOR_DISABLEf_GET(r) ((((r).sp2_fx100_ctl3[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_CORRELATOR_DISABLEf_SET(r,f) (r).sp2_fx100_ctl3[0]=(((r).sp2_fx100_ctl3[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_FORCE_LINKf_GET(r) ((((r).sp2_fx100_ctl3[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_FORCE_LINKf_SET(r,f) (r).sp2_fx100_ctl3[0]=(((r).sp2_fx100_ctl3[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_FAST_TIMERSf_GET(r) (((r).sp2_fx100_ctl3[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_FAST_TIMERSf_SET(r,f) (r).sp2_fx100_ctl3[0]=(((r).sp2_fx100_ctl3[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_FX100_CTL3.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_FX100_CTL3r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r,(_r._sp2_fx100_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_FX100_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r,(_r._sp2_fx100_ctl3)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_FX100_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r,(_r._sp2_fx100_ctl3))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_FX100_CTL3r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_fx100_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_FX100_CTL3r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_fx100_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_FX100_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_fx100_ctl3))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_FX100_CTL3r BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r
#define SP2_FX100_CTL3r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_t SP2_FX100_CTL3r_t;
#define SP2_FX100_CTL3r_CLR BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_CLR
#define SP2_FX100_CTL3r_SET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_SET
#define SP2_FX100_CTL3r_GET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_GET
#define SP2_FX100_CTL3r_NUMBER_OF_IDLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_NUMBER_OF_IDLEf_GET
#define SP2_FX100_CTL3r_NUMBER_OF_IDLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_NUMBER_OF_IDLEf_SET
#define SP2_FX100_CTL3r_CORRELATOR_DISABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_CORRELATOR_DISABLEf_GET
#define SP2_FX100_CTL3r_CORRELATOR_DISABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_CORRELATOR_DISABLEf_SET
#define SP2_FX100_CTL3r_FORCE_LINKf_GET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_FORCE_LINKf_GET
#define SP2_FX100_CTL3r_FORCE_LINKf_SET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_FORCE_LINKf_SET
#define SP2_FX100_CTL3r_FAST_TIMERSf_GET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_FAST_TIMERSf_GET
#define SP2_FX100_CTL3r_FAST_TIMERSf_SET BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r_FAST_TIMERSf_SET
#define READ_SP2_FX100_CTL3r BCMI_SGMIIP2X4_SERDES_READ_SP2_FX100_CTL3r
#define WRITE_SP2_FX100_CTL3r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_FX100_CTL3r
#define MODIFY_SP2_FX100_CTL3r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_FX100_CTL3r
#define READLN_SP2_FX100_CTL3r BCMI_SGMIIP2X4_SERDES_READLN_SP2_FX100_CTL3r
#define WRITELN_SP2_FX100_CTL3r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_FX100_CTL3r
#define WRITEALL_SP2_FX100_CTL3r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_FX100_CTL3r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_FX100_CTL3r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_FX100_BLKADDR
 * BLOCKS:   FX100
 * REGADDR:  0x840f
 * DESC:     Block Address register
 * RESETVAL: 0x400 (1024)
 * ACCESS:   R/W
 * FIELDS:
 *     BLOCKADDRESS     Bits 14:4 of the address
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr (0x0000840f | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_SIZE 4

/*
 * This structure should be used to declare and program SP2_FX100_BLKADDR.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_s {
	uint32_t v[1];
	uint32_t sp2_fx100_blkaddr[1];
	uint32_t _sp2_fx100_blkaddr;
} BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_CLR(r) (r).sp2_fx100_blkaddr[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_SET(r,d) (r).sp2_fx100_blkaddr[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_GET(r) (r).sp2_fx100_blkaddr[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_BLOCKADDRESSf_GET(r) ((((r).sp2_fx100_blkaddr[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_BLOCKADDRESSf_SET(r,f) (r).sp2_fx100_blkaddr[0]=(((r).sp2_fx100_blkaddr[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))

/*
 * These macros can be used to access SP2_FX100_BLKADDR.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_FX100_BLKADDRr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr,(_r._sp2_fx100_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_FX100_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr,(_r._sp2_fx100_blkaddr)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_FX100_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr,(_r._sp2_fx100_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_FX100_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_fx100_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_FX100_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_fx100_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_FX100_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_fx100_blkaddr))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_FX100_BLKADDRr BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr
#define SP2_FX100_BLKADDRr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_t SP2_FX100_BLKADDRr_t;
#define SP2_FX100_BLKADDRr_CLR BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_CLR
#define SP2_FX100_BLKADDRr_SET BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_SET
#define SP2_FX100_BLKADDRr_GET BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_GET
#define SP2_FX100_BLKADDRr_BLOCKADDRESSf_GET BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_BLOCKADDRESSf_GET
#define SP2_FX100_BLKADDRr_BLOCKADDRESSf_SET BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr_BLOCKADDRESSf_SET
#define READ_SP2_FX100_BLKADDRr BCMI_SGMIIP2X4_SERDES_READ_SP2_FX100_BLKADDRr
#define WRITE_SP2_FX100_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_FX100_BLKADDRr
#define MODIFY_SP2_FX100_BLKADDRr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_FX100_BLKADDRr
#define READLN_SP2_FX100_BLKADDRr BCMI_SGMIIP2X4_SERDES_READLN_SP2_FX100_BLKADDRr
#define WRITELN_SP2_FX100_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_FX100_BLKADDRr
#define WRITEALL_SP2_FX100_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_FX100_BLKADDRr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_FX100_BLKADDRr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_SEQ0
 * BLOCKS:   RX2
 * REGADDR:  0x8470
 * DESC:     rxseq0 Register
 * RESETVAL: 0x1080 (4224)
 * ACCESS:   R/W
 * FIELDS:
 *     CDRLOCKTIMEACQ_S1_SM 
 *     CDRLOCKTIMETRCKNRML_SM 
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r (0x00008470 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_SEQ0.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_s {
	uint32_t v[1];
	uint32_t sp2_rx2_seq0[1];
	uint32_t _sp2_rx2_seq0;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_CLR(r) (r).sp2_rx2_seq0[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_SET(r,d) (r).sp2_rx2_seq0[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_GET(r) (r).sp2_rx2_seq0[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_CDRLOCKTIMETRCKNRML_SMf_GET(r) ((((r).sp2_rx2_seq0[0]) >> 8) & 0xff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_CDRLOCKTIMETRCKNRML_SMf_SET(r,f) (r).sp2_rx2_seq0[0]=(((r).sp2_rx2_seq0[0] & ~((uint32_t)0xff << 8)) | ((((uint32_t)f) & 0xff) << 8)) | (255 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_CDRLOCKTIMEACQ_S1_SMf_GET(r) (((r).sp2_rx2_seq0[0]) & 0xff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_CDRLOCKTIMEACQ_S1_SMf_SET(r,f) (r).sp2_rx2_seq0[0]=(((r).sp2_rx2_seq0[0] & ~((uint32_t)0xff)) | (((uint32_t)f) & 0xff)) | (0xff << 16)

/*
 * These macros can be used to access SP2_RX2_SEQ0.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_SEQ0r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r,(_r._sp2_rx2_seq0))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_SEQ0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r,(_r._sp2_rx2_seq0)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_SEQ0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r,(_r._sp2_rx2_seq0))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_SEQ0r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_seq0))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_SEQ0r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_seq0))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_SEQ0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_seq0))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_SEQ0r BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r
#define SP2_RX2_SEQ0r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_t SP2_RX2_SEQ0r_t;
#define SP2_RX2_SEQ0r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_CLR
#define SP2_RX2_SEQ0r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_SET
#define SP2_RX2_SEQ0r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_GET
#define SP2_RX2_SEQ0r_CDRLOCKTIMETRCKNRML_SMf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_CDRLOCKTIMETRCKNRML_SMf_GET
#define SP2_RX2_SEQ0r_CDRLOCKTIMETRCKNRML_SMf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_CDRLOCKTIMETRCKNRML_SMf_SET
#define SP2_RX2_SEQ0r_CDRLOCKTIMEACQ_S1_SMf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_CDRLOCKTIMEACQ_S1_SMf_GET
#define SP2_RX2_SEQ0r_CDRLOCKTIMEACQ_S1_SMf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r_CDRLOCKTIMEACQ_S1_SMf_SET
#define READ_SP2_RX2_SEQ0r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_SEQ0r
#define WRITE_SP2_RX2_SEQ0r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_SEQ0r
#define MODIFY_SP2_RX2_SEQ0r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_SEQ0r
#define READLN_SP2_RX2_SEQ0r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_SEQ0r
#define WRITELN_SP2_RX2_SEQ0r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_SEQ0r
#define WRITEALL_SP2_RX2_SEQ0r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_SEQ0r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ0r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_SEQ1
 * BLOCKS:   RX2
 * REGADDR:  0x8471
 * DESC:     rxseq1 Register
 * RESETVAL: 0x8080 (32896)
 * ACCESS:   R/W
 * FIELDS:
 *     CDRLOCKTIMEACQ_S3_SM 
 *     CDRLOCKTIMEACQ_S2_SM 
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r (0x00008471 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_SEQ1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_s {
	uint32_t v[1];
	uint32_t sp2_rx2_seq1[1];
	uint32_t _sp2_rx2_seq1;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_CLR(r) (r).sp2_rx2_seq1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_SET(r,d) (r).sp2_rx2_seq1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_GET(r) (r).sp2_rx2_seq1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_CDRLOCKTIMEACQ_S2_SMf_GET(r) ((((r).sp2_rx2_seq1[0]) >> 8) & 0xff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_CDRLOCKTIMEACQ_S2_SMf_SET(r,f) (r).sp2_rx2_seq1[0]=(((r).sp2_rx2_seq1[0] & ~((uint32_t)0xff << 8)) | ((((uint32_t)f) & 0xff) << 8)) | (255 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_CDRLOCKTIMEACQ_S3_SMf_GET(r) (((r).sp2_rx2_seq1[0]) & 0xff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_CDRLOCKTIMEACQ_S3_SMf_SET(r,f) (r).sp2_rx2_seq1[0]=(((r).sp2_rx2_seq1[0] & ~((uint32_t)0xff)) | (((uint32_t)f) & 0xff)) | (0xff << 16)

/*
 * These macros can be used to access SP2_RX2_SEQ1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_SEQ1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r,(_r._sp2_rx2_seq1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_SEQ1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r,(_r._sp2_rx2_seq1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_SEQ1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r,(_r._sp2_rx2_seq1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_SEQ1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_seq1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_SEQ1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_seq1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_SEQ1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_seq1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_SEQ1r BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r
#define SP2_RX2_SEQ1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_t SP2_RX2_SEQ1r_t;
#define SP2_RX2_SEQ1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_CLR
#define SP2_RX2_SEQ1r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_SET
#define SP2_RX2_SEQ1r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_GET
#define SP2_RX2_SEQ1r_CDRLOCKTIMEACQ_S2_SMf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_CDRLOCKTIMEACQ_S2_SMf_GET
#define SP2_RX2_SEQ1r_CDRLOCKTIMEACQ_S2_SMf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_CDRLOCKTIMEACQ_S2_SMf_SET
#define SP2_RX2_SEQ1r_CDRLOCKTIMEACQ_S3_SMf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_CDRLOCKTIMEACQ_S3_SMf_GET
#define SP2_RX2_SEQ1r_CDRLOCKTIMEACQ_S3_SMf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r_CDRLOCKTIMEACQ_S3_SMf_SET
#define READ_SP2_RX2_SEQ1r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_SEQ1r
#define WRITE_SP2_RX2_SEQ1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_SEQ1r
#define MODIFY_SP2_RX2_SEQ1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_SEQ1r
#define READLN_SP2_RX2_SEQ1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_SEQ1r
#define WRITELN_SP2_RX2_SEQ1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_SEQ1r
#define WRITEALL_SP2_RX2_SEQ1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_SEQ1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_SEQ1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_CDR0
 * BLOCKS:   RX2
 * REGADDR:  0x8472
 * DESC:     rxcdr0 Register
 * RESETVAL: 0x4006 (16390)
 * ACCESS:   R/W
 * FIELDS:
 *     PI_PHASE_INVERT  
 *     MDIO_EM_PWRDN    
 *     MDIO_EM_ERR_CNT_FRZ 
 *     MDIO_EM_ERR_CNT_CLR 
 *     PI_PHASE_ROTATE_OVERRIDE 
 *     PI_CLK90_OFFSET_OVERRIDE 
 *     RX_INTERP_STATUS_SEL 
 *     RX_INTERP_CTRL_CAP 
 *     EM_PHASE_SHIFT_360_OVRD 
 *     EM_PHASE_SHIFT_360_OVRD_VAL 
 *     SIGDETTIME_SM    
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r (0x00008472 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_CDR0.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_s {
	uint32_t v[1];
	uint32_t sp2_rx2_cdr0[1];
	uint32_t _sp2_rx2_cdr0;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_CLR(r) (r).sp2_rx2_cdr0[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_SET(r,d) (r).sp2_rx2_cdr0[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_GET(r) (r).sp2_rx2_cdr0[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_SIGDETTIME_SMf_GET(r) ((((r).sp2_rx2_cdr0[0]) >> 12) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_SIGDETTIME_SMf_SET(r,f) (r).sp2_rx2_cdr0[0]=(((r).sp2_rx2_cdr0[0] & ~((uint32_t)0xf << 12)) | ((((uint32_t)f) & 0xf) << 12)) | (15 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_EM_PHASE_SHIFT_360_OVRD_VALf_GET(r) ((((r).sp2_rx2_cdr0[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_EM_PHASE_SHIFT_360_OVRD_VALf_SET(r,f) (r).sp2_rx2_cdr0[0]=(((r).sp2_rx2_cdr0[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_EM_PHASE_SHIFT_360_OVRDf_GET(r) ((((r).sp2_rx2_cdr0[0]) >> 10) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_EM_PHASE_SHIFT_360_OVRDf_SET(r,f) (r).sp2_rx2_cdr0[0]=(((r).sp2_rx2_cdr0[0] & ~((uint32_t)0x1 << 10)) | ((((uint32_t)f) & 0x1) << 10)) | (1 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_RX_INTERP_CTRL_CAPf_GET(r) ((((r).sp2_rx2_cdr0[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_RX_INTERP_CTRL_CAPf_SET(r,f) (r).sp2_rx2_cdr0[0]=(((r).sp2_rx2_cdr0[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_RX_INTERP_STATUS_SELf_GET(r) ((((r).sp2_rx2_cdr0[0]) >> 6) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_RX_INTERP_STATUS_SELf_SET(r,f) (r).sp2_rx2_cdr0[0]=(((r).sp2_rx2_cdr0[0] & ~((uint32_t)0x7 << 6)) | ((((uint32_t)f) & 0x7) << 6)) | (7 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_PI_CLK90_OFFSET_OVERRIDEf_GET(r) ((((r).sp2_rx2_cdr0[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_PI_CLK90_OFFSET_OVERRIDEf_SET(r,f) (r).sp2_rx2_cdr0[0]=(((r).sp2_rx2_cdr0[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_PI_PHASE_ROTATE_OVERRIDEf_GET(r) ((((r).sp2_rx2_cdr0[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_PI_PHASE_ROTATE_OVERRIDEf_SET(r,f) (r).sp2_rx2_cdr0[0]=(((r).sp2_rx2_cdr0[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_MDIO_EM_ERR_CNT_CLRf_GET(r) ((((r).sp2_rx2_cdr0[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_MDIO_EM_ERR_CNT_CLRf_SET(r,f) (r).sp2_rx2_cdr0[0]=(((r).sp2_rx2_cdr0[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_MDIO_EM_ERR_CNT_FRZf_GET(r) ((((r).sp2_rx2_cdr0[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_MDIO_EM_ERR_CNT_FRZf_SET(r,f) (r).sp2_rx2_cdr0[0]=(((r).sp2_rx2_cdr0[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_MDIO_EM_PWRDNf_GET(r) ((((r).sp2_rx2_cdr0[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_MDIO_EM_PWRDNf_SET(r,f) (r).sp2_rx2_cdr0[0]=(((r).sp2_rx2_cdr0[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_PI_PHASE_INVERTf_GET(r) (((r).sp2_rx2_cdr0[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_PI_PHASE_INVERTf_SET(r,f) (r).sp2_rx2_cdr0[0]=(((r).sp2_rx2_cdr0[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_RX2_CDR0.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_CDR0r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r,(_r._sp2_rx2_cdr0))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_CDR0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r,(_r._sp2_rx2_cdr0)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_CDR0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r,(_r._sp2_rx2_cdr0))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_CDR0r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_cdr0))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_CDR0r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_cdr0))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_CDR0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_cdr0))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_CDR0r BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r
#define SP2_RX2_CDR0r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_t SP2_RX2_CDR0r_t;
#define SP2_RX2_CDR0r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_CLR
#define SP2_RX2_CDR0r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_SET
#define SP2_RX2_CDR0r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_GET
#define SP2_RX2_CDR0r_SIGDETTIME_SMf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_SIGDETTIME_SMf_GET
#define SP2_RX2_CDR0r_SIGDETTIME_SMf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_SIGDETTIME_SMf_SET
#define SP2_RX2_CDR0r_EM_PHASE_SHIFT_360_OVRD_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_EM_PHASE_SHIFT_360_OVRD_VALf_GET
#define SP2_RX2_CDR0r_EM_PHASE_SHIFT_360_OVRD_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_EM_PHASE_SHIFT_360_OVRD_VALf_SET
#define SP2_RX2_CDR0r_EM_PHASE_SHIFT_360_OVRDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_EM_PHASE_SHIFT_360_OVRDf_GET
#define SP2_RX2_CDR0r_EM_PHASE_SHIFT_360_OVRDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_EM_PHASE_SHIFT_360_OVRDf_SET
#define SP2_RX2_CDR0r_RX_INTERP_CTRL_CAPf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_RX_INTERP_CTRL_CAPf_GET
#define SP2_RX2_CDR0r_RX_INTERP_CTRL_CAPf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_RX_INTERP_CTRL_CAPf_SET
#define SP2_RX2_CDR0r_RX_INTERP_STATUS_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_RX_INTERP_STATUS_SELf_GET
#define SP2_RX2_CDR0r_RX_INTERP_STATUS_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_RX_INTERP_STATUS_SELf_SET
#define SP2_RX2_CDR0r_PI_CLK90_OFFSET_OVERRIDEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_PI_CLK90_OFFSET_OVERRIDEf_GET
#define SP2_RX2_CDR0r_PI_CLK90_OFFSET_OVERRIDEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_PI_CLK90_OFFSET_OVERRIDEf_SET
#define SP2_RX2_CDR0r_PI_PHASE_ROTATE_OVERRIDEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_PI_PHASE_ROTATE_OVERRIDEf_GET
#define SP2_RX2_CDR0r_PI_PHASE_ROTATE_OVERRIDEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_PI_PHASE_ROTATE_OVERRIDEf_SET
#define SP2_RX2_CDR0r_MDIO_EM_ERR_CNT_CLRf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_MDIO_EM_ERR_CNT_CLRf_GET
#define SP2_RX2_CDR0r_MDIO_EM_ERR_CNT_CLRf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_MDIO_EM_ERR_CNT_CLRf_SET
#define SP2_RX2_CDR0r_MDIO_EM_ERR_CNT_FRZf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_MDIO_EM_ERR_CNT_FRZf_GET
#define SP2_RX2_CDR0r_MDIO_EM_ERR_CNT_FRZf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_MDIO_EM_ERR_CNT_FRZf_SET
#define SP2_RX2_CDR0r_MDIO_EM_PWRDNf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_MDIO_EM_PWRDNf_GET
#define SP2_RX2_CDR0r_MDIO_EM_PWRDNf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_MDIO_EM_PWRDNf_SET
#define SP2_RX2_CDR0r_PI_PHASE_INVERTf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_PI_PHASE_INVERTf_GET
#define SP2_RX2_CDR0r_PI_PHASE_INVERTf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r_PI_PHASE_INVERTf_SET
#define READ_SP2_RX2_CDR0r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_CDR0r
#define WRITE_SP2_RX2_CDR0r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_CDR0r
#define MODIFY_SP2_RX2_CDR0r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_CDR0r
#define READLN_SP2_RX2_CDR0r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_CDR0r
#define WRITELN_SP2_RX2_CDR0r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_CDR0r
#define WRITEALL_SP2_RX2_CDR0r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_CDR0r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR0r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_CDR1
 * BLOCKS:   RX2
 * REGADDR:  0x8473
 * DESC:     rxcdr1 Register
 * RESETVAL: 0x1251 (4689)
 * ACCESS:   R/W
 * FIELDS:
 *     PHASE_SAT_CTRL   
 *     PHS_COUNTER_CLR  
 *     PHASE_DELTA      
 *     FREQ_UPD_EN      
 *     FALLING_EDGE     
 *     RISING_EDGE      
 *     FLIP_PEAK_POLARITY 
 *     FLIP_ZERO_POLARITY 
 *     STEP_ONE         
 *     STEP_TWO         
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r (0x00008473 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_CDR1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_s {
	uint32_t v[1];
	uint32_t sp2_rx2_cdr1[1];
	uint32_t _sp2_rx2_cdr1;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_CLR(r) (r).sp2_rx2_cdr1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_SET(r,d) (r).sp2_rx2_cdr1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_GET(r) (r).sp2_rx2_cdr1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_STEP_TWOf_GET(r) ((((r).sp2_rx2_cdr1[0]) >> 11) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_STEP_TWOf_SET(r,f) (r).sp2_rx2_cdr1[0]=(((r).sp2_rx2_cdr1[0] & ~((uint32_t)0x3 << 11)) | ((((uint32_t)f) & 0x3) << 11)) | (3 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_STEP_ONEf_GET(r) ((((r).sp2_rx2_cdr1[0]) >> 9) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_STEP_ONEf_SET(r,f) (r).sp2_rx2_cdr1[0]=(((r).sp2_rx2_cdr1[0] & ~((uint32_t)0x3 << 9)) | ((((uint32_t)f) & 0x3) << 9)) | (3 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FLIP_ZERO_POLARITYf_GET(r) ((((r).sp2_rx2_cdr1[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FLIP_ZERO_POLARITYf_SET(r,f) (r).sp2_rx2_cdr1[0]=(((r).sp2_rx2_cdr1[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FLIP_PEAK_POLARITYf_GET(r) ((((r).sp2_rx2_cdr1[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FLIP_PEAK_POLARITYf_SET(r,f) (r).sp2_rx2_cdr1[0]=(((r).sp2_rx2_cdr1[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_RISING_EDGEf_GET(r) ((((r).sp2_rx2_cdr1[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_RISING_EDGEf_SET(r,f) (r).sp2_rx2_cdr1[0]=(((r).sp2_rx2_cdr1[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FALLING_EDGEf_GET(r) ((((r).sp2_rx2_cdr1[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FALLING_EDGEf_SET(r,f) (r).sp2_rx2_cdr1[0]=(((r).sp2_rx2_cdr1[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FREQ_UPD_ENf_GET(r) ((((r).sp2_rx2_cdr1[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FREQ_UPD_ENf_SET(r,f) (r).sp2_rx2_cdr1[0]=(((r).sp2_rx2_cdr1[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_PHASE_DELTAf_GET(r) ((((r).sp2_rx2_cdr1[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_PHASE_DELTAf_SET(r,f) (r).sp2_rx2_cdr1[0]=(((r).sp2_rx2_cdr1[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_PHS_COUNTER_CLRf_GET(r) ((((r).sp2_rx2_cdr1[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_PHS_COUNTER_CLRf_SET(r,f) (r).sp2_rx2_cdr1[0]=(((r).sp2_rx2_cdr1[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_PHASE_SAT_CTRLf_GET(r) (((r).sp2_rx2_cdr1[0]) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_PHASE_SAT_CTRLf_SET(r,f) (r).sp2_rx2_cdr1[0]=(((r).sp2_rx2_cdr1[0] & ~((uint32_t)0x3)) | (((uint32_t)f) & 0x3)) | (0x3 << 16)

/*
 * These macros can be used to access SP2_RX2_CDR1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_CDR1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r,(_r._sp2_rx2_cdr1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_CDR1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r,(_r._sp2_rx2_cdr1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_CDR1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r,(_r._sp2_rx2_cdr1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_CDR1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_cdr1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_CDR1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_cdr1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_CDR1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_cdr1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_CDR1r BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r
#define SP2_RX2_CDR1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_t SP2_RX2_CDR1r_t;
#define SP2_RX2_CDR1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_CLR
#define SP2_RX2_CDR1r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_SET
#define SP2_RX2_CDR1r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_GET
#define SP2_RX2_CDR1r_STEP_TWOf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_STEP_TWOf_GET
#define SP2_RX2_CDR1r_STEP_TWOf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_STEP_TWOf_SET
#define SP2_RX2_CDR1r_STEP_ONEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_STEP_ONEf_GET
#define SP2_RX2_CDR1r_STEP_ONEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_STEP_ONEf_SET
#define SP2_RX2_CDR1r_FLIP_ZERO_POLARITYf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FLIP_ZERO_POLARITYf_GET
#define SP2_RX2_CDR1r_FLIP_ZERO_POLARITYf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FLIP_ZERO_POLARITYf_SET
#define SP2_RX2_CDR1r_FLIP_PEAK_POLARITYf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FLIP_PEAK_POLARITYf_GET
#define SP2_RX2_CDR1r_FLIP_PEAK_POLARITYf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FLIP_PEAK_POLARITYf_SET
#define SP2_RX2_CDR1r_RISING_EDGEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_RISING_EDGEf_GET
#define SP2_RX2_CDR1r_RISING_EDGEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_RISING_EDGEf_SET
#define SP2_RX2_CDR1r_FALLING_EDGEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FALLING_EDGEf_GET
#define SP2_RX2_CDR1r_FALLING_EDGEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FALLING_EDGEf_SET
#define SP2_RX2_CDR1r_FREQ_UPD_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FREQ_UPD_ENf_GET
#define SP2_RX2_CDR1r_FREQ_UPD_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_FREQ_UPD_ENf_SET
#define SP2_RX2_CDR1r_PHASE_DELTAf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_PHASE_DELTAf_GET
#define SP2_RX2_CDR1r_PHASE_DELTAf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_PHASE_DELTAf_SET
#define SP2_RX2_CDR1r_PHS_COUNTER_CLRf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_PHS_COUNTER_CLRf_GET
#define SP2_RX2_CDR1r_PHS_COUNTER_CLRf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_PHS_COUNTER_CLRf_SET
#define SP2_RX2_CDR1r_PHASE_SAT_CTRLf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_PHASE_SAT_CTRLf_GET
#define SP2_RX2_CDR1r_PHASE_SAT_CTRLf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r_PHASE_SAT_CTRLf_SET
#define READ_SP2_RX2_CDR1r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_CDR1r
#define WRITE_SP2_RX2_CDR1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_CDR1r
#define MODIFY_SP2_RX2_CDR1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_CDR1r
#define READLN_SP2_RX2_CDR1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_CDR1r
#define WRITELN_SP2_RX2_CDR1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_CDR1r
#define WRITEALL_SP2_RX2_CDR1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_CDR1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_CDR2
 * BLOCKS:   RX2
 * REGADDR:  0x8474
 * DESC:     rxcdr2 Register
 * RESETVAL: 0x1880 (6272)
 * ACCESS:   R/W
 * FIELDS:
 *     PHSACQ_TIMEOUT   
 *     PHSACQ_STEP      
 *     PHSACQ_FREQ_SEL  
 *     PHSACQ_DIR       
 *     RATE_SELECT      
 *     PHSACQ_ENABLE    
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r (0x00008474 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_CDR2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_s {
	uint32_t v[1];
	uint32_t sp2_rx2_cdr2[1];
	uint32_t _sp2_rx2_cdr2;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_CLR(r) (r).sp2_rx2_cdr2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_SET(r,d) (r).sp2_rx2_cdr2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_GET(r) (r).sp2_rx2_cdr2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_ENABLEf_GET(r) ((((r).sp2_rx2_cdr2[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_ENABLEf_SET(r,f) (r).sp2_rx2_cdr2[0]=(((r).sp2_rx2_cdr2[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_RATE_SELECTf_GET(r) ((((r).sp2_rx2_cdr2[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_RATE_SELECTf_SET(r,f) (r).sp2_rx2_cdr2[0]=(((r).sp2_rx2_cdr2[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_DIRf_GET(r) ((((r).sp2_rx2_cdr2[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_DIRf_SET(r,f) (r).sp2_rx2_cdr2[0]=(((r).sp2_rx2_cdr2[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_FREQ_SELf_GET(r) ((((r).sp2_rx2_cdr2[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_FREQ_SELf_SET(r,f) (r).sp2_rx2_cdr2[0]=(((r).sp2_rx2_cdr2[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_STEPf_GET(r) ((((r).sp2_rx2_cdr2[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_STEPf_SET(r,f) (r).sp2_rx2_cdr2[0]=(((r).sp2_rx2_cdr2[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_TIMEOUTf_GET(r) (((r).sp2_rx2_cdr2[0]) & 0xff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_TIMEOUTf_SET(r,f) (r).sp2_rx2_cdr2[0]=(((r).sp2_rx2_cdr2[0] & ~((uint32_t)0xff)) | (((uint32_t)f) & 0xff)) | (0xff << 16)

/*
 * These macros can be used to access SP2_RX2_CDR2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_CDR2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r,(_r._sp2_rx2_cdr2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_CDR2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r,(_r._sp2_rx2_cdr2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_CDR2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r,(_r._sp2_rx2_cdr2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_CDR2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_cdr2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_CDR2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_cdr2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_CDR2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_cdr2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_CDR2r BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r
#define SP2_RX2_CDR2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_t SP2_RX2_CDR2r_t;
#define SP2_RX2_CDR2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_CLR
#define SP2_RX2_CDR2r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_SET
#define SP2_RX2_CDR2r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_GET
#define SP2_RX2_CDR2r_PHSACQ_ENABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_ENABLEf_GET
#define SP2_RX2_CDR2r_PHSACQ_ENABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_ENABLEf_SET
#define SP2_RX2_CDR2r_RATE_SELECTf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_RATE_SELECTf_GET
#define SP2_RX2_CDR2r_RATE_SELECTf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_RATE_SELECTf_SET
#define SP2_RX2_CDR2r_PHSACQ_DIRf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_DIRf_GET
#define SP2_RX2_CDR2r_PHSACQ_DIRf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_DIRf_SET
#define SP2_RX2_CDR2r_PHSACQ_FREQ_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_FREQ_SELf_GET
#define SP2_RX2_CDR2r_PHSACQ_FREQ_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_FREQ_SELf_SET
#define SP2_RX2_CDR2r_PHSACQ_STEPf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_STEPf_GET
#define SP2_RX2_CDR2r_PHSACQ_STEPf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_STEPf_SET
#define SP2_RX2_CDR2r_PHSACQ_TIMEOUTf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_TIMEOUTf_GET
#define SP2_RX2_CDR2r_PHSACQ_TIMEOUTf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r_PHSACQ_TIMEOUTf_SET
#define READ_SP2_RX2_CDR2r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_CDR2r
#define WRITE_SP2_RX2_CDR2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_CDR2r
#define MODIFY_SP2_RX2_CDR2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_CDR2r
#define READLN_SP2_RX2_CDR2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_CDR2r
#define WRITELN_SP2_RX2_CDR2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_CDR2r
#define WRITEALL_SP2_RX2_CDR2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_CDR2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_CDR3
 * BLOCKS:   RX2
 * REGADDR:  0x8475
 * DESC:     rxcdr3 Register
 * RESETVAL: 0x1004 (4100)
 * ACCESS:   R/W
 * FIELDS:
 *     PHASE_DELTA_SM   
 *     PHASE_STROBE_SM  
 *     PHASE_DEC_SM     
 *     PHASE_INC_SM     
 *     PHASE_OVERRIDE_SM 
 *     PHASE_FRZ_1_EN   
 *     PHASE_FRZ_1      
 *     PHASE_STEP       purposely set to two for sgmii
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r (0x00008475 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_CDR3.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_s {
	uint32_t v[1];
	uint32_t sp2_rx2_cdr3[1];
	uint32_t _sp2_rx2_cdr3;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_CLR(r) (r).sp2_rx2_cdr3[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_SET(r,d) (r).sp2_rx2_cdr3[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_GET(r) (r).sp2_rx2_cdr3[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_STEPf_GET(r) ((((r).sp2_rx2_cdr3[0]) >> 11) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_STEPf_SET(r,f) (r).sp2_rx2_cdr3[0]=(((r).sp2_rx2_cdr3[0] & ~((uint32_t)0x3 << 11)) | ((((uint32_t)f) & 0x3) << 11)) | (3 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_FRZ_1f_GET(r) ((((r).sp2_rx2_cdr3[0]) >> 10) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_FRZ_1f_SET(r,f) (r).sp2_rx2_cdr3[0]=(((r).sp2_rx2_cdr3[0] & ~((uint32_t)0x1 << 10)) | ((((uint32_t)f) & 0x1) << 10)) | (1 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_FRZ_1_ENf_GET(r) ((((r).sp2_rx2_cdr3[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_FRZ_1_ENf_SET(r,f) (r).sp2_rx2_cdr3[0]=(((r).sp2_rx2_cdr3[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_OVERRIDE_SMf_GET(r) ((((r).sp2_rx2_cdr3[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_OVERRIDE_SMf_SET(r,f) (r).sp2_rx2_cdr3[0]=(((r).sp2_rx2_cdr3[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_INC_SMf_GET(r) ((((r).sp2_rx2_cdr3[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_INC_SMf_SET(r,f) (r).sp2_rx2_cdr3[0]=(((r).sp2_rx2_cdr3[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_DEC_SMf_GET(r) ((((r).sp2_rx2_cdr3[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_DEC_SMf_SET(r,f) (r).sp2_rx2_cdr3[0]=(((r).sp2_rx2_cdr3[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_STROBE_SMf_GET(r) ((((r).sp2_rx2_cdr3[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_STROBE_SMf_SET(r,f) (r).sp2_rx2_cdr3[0]=(((r).sp2_rx2_cdr3[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_DELTA_SMf_GET(r) (((r).sp2_rx2_cdr3[0]) & 0x1f)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_DELTA_SMf_SET(r,f) (r).sp2_rx2_cdr3[0]=(((r).sp2_rx2_cdr3[0] & ~((uint32_t)0x1f)) | (((uint32_t)f) & 0x1f)) | (0x1f << 16)

/*
 * These macros can be used to access SP2_RX2_CDR3.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_CDR3r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r,(_r._sp2_rx2_cdr3))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_CDR3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r,(_r._sp2_rx2_cdr3)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_CDR3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r,(_r._sp2_rx2_cdr3))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_CDR3r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_cdr3))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_CDR3r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_cdr3))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_CDR3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_cdr3))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_CDR3r BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r
#define SP2_RX2_CDR3r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_t SP2_RX2_CDR3r_t;
#define SP2_RX2_CDR3r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_CLR
#define SP2_RX2_CDR3r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_SET
#define SP2_RX2_CDR3r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_GET
#define SP2_RX2_CDR3r_PHASE_STEPf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_STEPf_GET
#define SP2_RX2_CDR3r_PHASE_STEPf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_STEPf_SET
#define SP2_RX2_CDR3r_PHASE_FRZ_1f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_FRZ_1f_GET
#define SP2_RX2_CDR3r_PHASE_FRZ_1f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_FRZ_1f_SET
#define SP2_RX2_CDR3r_PHASE_FRZ_1_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_FRZ_1_ENf_GET
#define SP2_RX2_CDR3r_PHASE_FRZ_1_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_FRZ_1_ENf_SET
#define SP2_RX2_CDR3r_PHASE_OVERRIDE_SMf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_OVERRIDE_SMf_GET
#define SP2_RX2_CDR3r_PHASE_OVERRIDE_SMf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_OVERRIDE_SMf_SET
#define SP2_RX2_CDR3r_PHASE_INC_SMf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_INC_SMf_GET
#define SP2_RX2_CDR3r_PHASE_INC_SMf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_INC_SMf_SET
#define SP2_RX2_CDR3r_PHASE_DEC_SMf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_DEC_SMf_GET
#define SP2_RX2_CDR3r_PHASE_DEC_SMf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_DEC_SMf_SET
#define SP2_RX2_CDR3r_PHASE_STROBE_SMf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_STROBE_SMf_GET
#define SP2_RX2_CDR3r_PHASE_STROBE_SMf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_STROBE_SMf_SET
#define SP2_RX2_CDR3r_PHASE_DELTA_SMf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_DELTA_SMf_GET
#define SP2_RX2_CDR3r_PHASE_DELTA_SMf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r_PHASE_DELTA_SMf_SET
#define READ_SP2_RX2_CDR3r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_CDR3r
#define WRITE_SP2_RX2_CDR3r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_CDR3r
#define MODIFY_SP2_RX2_CDR3r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_CDR3r
#define READLN_SP2_RX2_CDR3r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_CDR3r
#define WRITELN_SP2_RX2_CDR3r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_CDR3r
#define WRITEALL_SP2_RX2_CDR3r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_CDR3r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR3r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_CDR4
 * BLOCKS:   RX2
 * REGADDR:  0x8476
 * DESC:     rxcdr4 Register
 * RESETVAL: 0x4840 (18496)
 * ACCESS:   R/W
 * FIELDS:
 *     FREQ_OVERRIDE_VAL 
 *     FREQ_OVERRIDE_EN 
 *     FREQ_EN          
 *     INTEG_CLR        
 *     BWSEL_PROP       
 *     BWSEL_INTEG      
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r (0x00008476 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_CDR4.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_s {
	uint32_t v[1];
	uint32_t sp2_rx2_cdr4[1];
	uint32_t _sp2_rx2_cdr4;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_CLR(r) (r).sp2_rx2_cdr4[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_SET(r,d) (r).sp2_rx2_cdr4[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_GET(r) (r).sp2_rx2_cdr4[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_BWSEL_INTEGf_GET(r) ((((r).sp2_rx2_cdr4[0]) >> 12) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_BWSEL_INTEGf_SET(r,f) (r).sp2_rx2_cdr4[0]=(((r).sp2_rx2_cdr4[0] & ~((uint32_t)0xf << 12)) | ((((uint32_t)f) & 0xf) << 12)) | (15 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_BWSEL_PROPf_GET(r) ((((r).sp2_rx2_cdr4[0]) >> 8) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_BWSEL_PROPf_SET(r,f) (r).sp2_rx2_cdr4[0]=(((r).sp2_rx2_cdr4[0] & ~((uint32_t)0xf << 8)) | ((((uint32_t)f) & 0xf) << 8)) | (15 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_INTEG_CLRf_GET(r) ((((r).sp2_rx2_cdr4[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_INTEG_CLRf_SET(r,f) (r).sp2_rx2_cdr4[0]=(((r).sp2_rx2_cdr4[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_FREQ_ENf_GET(r) ((((r).sp2_rx2_cdr4[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_FREQ_ENf_SET(r,f) (r).sp2_rx2_cdr4[0]=(((r).sp2_rx2_cdr4[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_FREQ_OVERRIDE_ENf_GET(r) ((((r).sp2_rx2_cdr4[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_FREQ_OVERRIDE_ENf_SET(r,f) (r).sp2_rx2_cdr4[0]=(((r).sp2_rx2_cdr4[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_FREQ_OVERRIDE_VALf_GET(r) (((r).sp2_rx2_cdr4[0]) & 0x1f)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_FREQ_OVERRIDE_VALf_SET(r,f) (r).sp2_rx2_cdr4[0]=(((r).sp2_rx2_cdr4[0] & ~((uint32_t)0x1f)) | (((uint32_t)f) & 0x1f)) | (0x1f << 16)

/*
 * These macros can be used to access SP2_RX2_CDR4.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_CDR4r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r,(_r._sp2_rx2_cdr4))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_CDR4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r,(_r._sp2_rx2_cdr4)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_CDR4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r,(_r._sp2_rx2_cdr4))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_CDR4r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_cdr4))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_CDR4r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_cdr4))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_CDR4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_cdr4))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_CDR4r BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r
#define SP2_RX2_CDR4r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_t SP2_RX2_CDR4r_t;
#define SP2_RX2_CDR4r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_CLR
#define SP2_RX2_CDR4r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_SET
#define SP2_RX2_CDR4r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_GET
#define SP2_RX2_CDR4r_BWSEL_INTEGf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_BWSEL_INTEGf_GET
#define SP2_RX2_CDR4r_BWSEL_INTEGf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_BWSEL_INTEGf_SET
#define SP2_RX2_CDR4r_BWSEL_PROPf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_BWSEL_PROPf_GET
#define SP2_RX2_CDR4r_BWSEL_PROPf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_BWSEL_PROPf_SET
#define SP2_RX2_CDR4r_INTEG_CLRf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_INTEG_CLRf_GET
#define SP2_RX2_CDR4r_INTEG_CLRf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_INTEG_CLRf_SET
#define SP2_RX2_CDR4r_FREQ_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_FREQ_ENf_GET
#define SP2_RX2_CDR4r_FREQ_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_FREQ_ENf_SET
#define SP2_RX2_CDR4r_FREQ_OVERRIDE_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_FREQ_OVERRIDE_ENf_GET
#define SP2_RX2_CDR4r_FREQ_OVERRIDE_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_FREQ_OVERRIDE_ENf_SET
#define SP2_RX2_CDR4r_FREQ_OVERRIDE_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_FREQ_OVERRIDE_VALf_GET
#define SP2_RX2_CDR4r_FREQ_OVERRIDE_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r_FREQ_OVERRIDE_VALf_SET
#define READ_SP2_RX2_CDR4r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_CDR4r
#define WRITE_SP2_RX2_CDR4r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_CDR4r
#define MODIFY_SP2_RX2_CDR4r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_CDR4r
#define READLN_SP2_RX2_CDR4r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_CDR4r
#define WRITELN_SP2_RX2_CDR4r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_CDR4r
#define WRITEALL_SP2_RX2_CDR4r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_CDR4r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_CDR4r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_STS0
 * BLOCKS:   RX2
 * REGADDR:  0x8477
 * DESC:     rxstatus 0 Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/O
 * FIELDS:
 *     RX_SLOFF2_INVALID 
 *     RX_SLOFF1_INVALID 
 *     RX_SLOFF0_INVALID 
 *     RX_SLICER_CAL_DONE 
 *     RX_LMTOFF        
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r (0x00008477 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_STS0.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_s {
	uint32_t v[1];
	uint32_t sp2_rx2_sts0[1];
	uint32_t _sp2_rx2_sts0;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_CLR(r) (r).sp2_rx2_sts0[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_SET(r,d) (r).sp2_rx2_sts0[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_GET(r) (r).sp2_rx2_sts0[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_LMTOFFf_GET(r) ((((r).sp2_rx2_sts0[0]) >> 4) & 0x3f)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_LMTOFFf_SET(r,f) (r).sp2_rx2_sts0[0]=(((r).sp2_rx2_sts0[0] & ~((uint32_t)0x3f << 4)) | ((((uint32_t)f) & 0x3f) << 4)) | (63 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLICER_CAL_DONEf_GET(r) ((((r).sp2_rx2_sts0[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLICER_CAL_DONEf_SET(r,f) (r).sp2_rx2_sts0[0]=(((r).sp2_rx2_sts0[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLOFF0_INVALIDf_GET(r) ((((r).sp2_rx2_sts0[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLOFF0_INVALIDf_SET(r,f) (r).sp2_rx2_sts0[0]=(((r).sp2_rx2_sts0[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLOFF1_INVALIDf_GET(r) ((((r).sp2_rx2_sts0[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLOFF1_INVALIDf_SET(r,f) (r).sp2_rx2_sts0[0]=(((r).sp2_rx2_sts0[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLOFF2_INVALIDf_GET(r) (((r).sp2_rx2_sts0[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLOFF2_INVALIDf_SET(r,f) (r).sp2_rx2_sts0[0]=(((r).sp2_rx2_sts0[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_RX2_STS0.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_STS0r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r,(_r._sp2_rx2_sts0))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_STS0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r,(_r._sp2_rx2_sts0)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_STS0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r,(_r._sp2_rx2_sts0))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_STS0r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_sts0))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_STS0r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_sts0))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_STS0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_sts0))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_STS0r BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r
#define SP2_RX2_STS0r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_t SP2_RX2_STS0r_t;
#define SP2_RX2_STS0r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_CLR
#define SP2_RX2_STS0r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_SET
#define SP2_RX2_STS0r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_GET
#define SP2_RX2_STS0r_RX_LMTOFFf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_LMTOFFf_GET
#define SP2_RX2_STS0r_RX_LMTOFFf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_LMTOFFf_SET
#define SP2_RX2_STS0r_RX_SLICER_CAL_DONEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLICER_CAL_DONEf_GET
#define SP2_RX2_STS0r_RX_SLICER_CAL_DONEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLICER_CAL_DONEf_SET
#define SP2_RX2_STS0r_RX_SLOFF0_INVALIDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLOFF0_INVALIDf_GET
#define SP2_RX2_STS0r_RX_SLOFF0_INVALIDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLOFF0_INVALIDf_SET
#define SP2_RX2_STS0r_RX_SLOFF1_INVALIDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLOFF1_INVALIDf_GET
#define SP2_RX2_STS0r_RX_SLOFF1_INVALIDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLOFF1_INVALIDf_SET
#define SP2_RX2_STS0r_RX_SLOFF2_INVALIDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLOFF2_INVALIDf_GET
#define SP2_RX2_STS0r_RX_SLOFF2_INVALIDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r_RX_SLOFF2_INVALIDf_SET
#define READ_SP2_RX2_STS0r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_STS0r
#define WRITE_SP2_RX2_STS0r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_STS0r
#define MODIFY_SP2_RX2_STS0r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_STS0r
#define READLN_SP2_RX2_STS0r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_STS0r
#define WRITELN_SP2_RX2_STS0r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_STS0r
#define WRITEALL_SP2_RX2_STS0r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_STS0r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS0r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_STS1
 * BLOCKS:   RX2
 * REGADDR:  0x8478
 * DESC:     rxstatus 1 Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/O
 * FIELDS:
 *     SLCAL_STATE      
 *     SLOFFX_VAL       
 *     DN_SLOFFX_VAL    
 *     UP_SLOFFX_VAL    
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r (0x00008478 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_STS1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_s {
	uint32_t v[1];
	uint32_t sp2_rx2_sts1[1];
	uint32_t _sp2_rx2_sts1;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_CLR(r) (r).sp2_rx2_sts1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_SET(r,d) (r).sp2_rx2_sts1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_GET(r) (r).sp2_rx2_sts1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_UP_SLOFFX_VALf_GET(r) ((((r).sp2_rx2_sts1[0]) >> 11) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_UP_SLOFFX_VALf_SET(r,f) (r).sp2_rx2_sts1[0]=(((r).sp2_rx2_sts1[0] & ~((uint32_t)0xf << 11)) | ((((uint32_t)f) & 0xf) << 11)) | (15 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_DN_SLOFFX_VALf_GET(r) ((((r).sp2_rx2_sts1[0]) >> 7) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_DN_SLOFFX_VALf_SET(r,f) (r).sp2_rx2_sts1[0]=(((r).sp2_rx2_sts1[0] & ~((uint32_t)0xf << 7)) | ((((uint32_t)f) & 0xf) << 7)) | (15 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_SLOFFX_VALf_GET(r) ((((r).sp2_rx2_sts1[0]) >> 3) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_SLOFFX_VALf_SET(r,f) (r).sp2_rx2_sts1[0]=(((r).sp2_rx2_sts1[0] & ~((uint32_t)0xf << 3)) | ((((uint32_t)f) & 0xf) << 3)) | (15 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_SLCAL_STATEf_GET(r) (((r).sp2_rx2_sts1[0]) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_SLCAL_STATEf_SET(r,f) (r).sp2_rx2_sts1[0]=(((r).sp2_rx2_sts1[0] & ~((uint32_t)0x7)) | (((uint32_t)f) & 0x7)) | (0x7 << 16)

/*
 * These macros can be used to access SP2_RX2_STS1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_STS1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r,(_r._sp2_rx2_sts1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_STS1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r,(_r._sp2_rx2_sts1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_STS1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r,(_r._sp2_rx2_sts1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_STS1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_sts1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_STS1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_sts1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_STS1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_sts1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_STS1r BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r
#define SP2_RX2_STS1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_t SP2_RX2_STS1r_t;
#define SP2_RX2_STS1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_CLR
#define SP2_RX2_STS1r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_SET
#define SP2_RX2_STS1r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_GET
#define SP2_RX2_STS1r_UP_SLOFFX_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_UP_SLOFFX_VALf_GET
#define SP2_RX2_STS1r_UP_SLOFFX_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_UP_SLOFFX_VALf_SET
#define SP2_RX2_STS1r_DN_SLOFFX_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_DN_SLOFFX_VALf_GET
#define SP2_RX2_STS1r_DN_SLOFFX_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_DN_SLOFFX_VALf_SET
#define SP2_RX2_STS1r_SLOFFX_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_SLOFFX_VALf_GET
#define SP2_RX2_STS1r_SLOFFX_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_SLOFFX_VALf_SET
#define SP2_RX2_STS1r_SLCAL_STATEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_SLCAL_STATEf_GET
#define SP2_RX2_STS1r_SLCAL_STATEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r_SLCAL_STATEf_SET
#define READ_SP2_RX2_STS1r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_STS1r
#define WRITE_SP2_RX2_STS1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_STS1r
#define MODIFY_SP2_RX2_STS1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_STS1r
#define READLN_SP2_RX2_STS1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_STS1r
#define WRITELN_SP2_RX2_STS1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_STS1r
#define WRITEALL_SP2_RX2_STS1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_STS1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_STS2
 * BLOCKS:   RX2
 * REGADDR:  0x8479
 * DESC:     rxstatus 2 Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/O
 * FIELDS:
 *     LMTCAL_ACC       
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r (0x00008479 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_STS2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_s {
	uint32_t v[1];
	uint32_t sp2_rx2_sts2[1];
	uint32_t _sp2_rx2_sts2;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_CLR(r) (r).sp2_rx2_sts2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_SET(r,d) (r).sp2_rx2_sts2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_GET(r) (r).sp2_rx2_sts2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_LMTCAL_ACCf_GET(r) (((r).sp2_rx2_sts2[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_LMTCAL_ACCf_SET(r,f) (r).sp2_rx2_sts2[0]=(((r).sp2_rx2_sts2[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_RX2_STS2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_STS2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r,(_r._sp2_rx2_sts2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_STS2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r,(_r._sp2_rx2_sts2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_STS2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r,(_r._sp2_rx2_sts2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_STS2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_sts2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_STS2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_sts2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_STS2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_sts2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_STS2r BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r
#define SP2_RX2_STS2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_t SP2_RX2_STS2r_t;
#define SP2_RX2_STS2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_CLR
#define SP2_RX2_STS2r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_SET
#define SP2_RX2_STS2r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_GET
#define SP2_RX2_STS2r_LMTCAL_ACCf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_LMTCAL_ACCf_GET
#define SP2_RX2_STS2r_LMTCAL_ACCf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r_LMTCAL_ACCf_SET
#define READ_SP2_RX2_STS2r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_STS2r
#define WRITE_SP2_RX2_STS2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_STS2r
#define MODIFY_SP2_RX2_STS2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_STS2r
#define READLN_SP2_RX2_STS2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_STS2r
#define WRITELN_SP2_RX2_STS2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_STS2r
#define WRITEALL_SP2_RX2_STS2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_STS2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_STS3
 * BLOCKS:   RX2
 * REGADDR:  0x847a
 * DESC:     rxstatus 3 Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/O
 * FIELDS:
 *     RECAL_IND        
 *     LMTCAL_ADJ_CNT   
 *     LMTCAL_VALID     
 *     RX_LA_CAL_DONE   
 *     LMTCAL_STATE     
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r (0x0000847a | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_STS3.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_s {
	uint32_t v[1];
	uint32_t sp2_rx2_sts3[1];
	uint32_t _sp2_rx2_sts3;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_CLR(r) (r).sp2_rx2_sts3[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_SET(r,d) (r).sp2_rx2_sts3[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_GET(r) (r).sp2_rx2_sts3[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_LMTCAL_STATEf_GET(r) ((((r).sp2_rx2_sts3[0]) >> 8) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_LMTCAL_STATEf_SET(r,f) (r).sp2_rx2_sts3[0]=(((r).sp2_rx2_sts3[0] & ~((uint32_t)0x7 << 8)) | ((((uint32_t)f) & 0x7) << 8)) | (7 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_RX_LA_CAL_DONEf_GET(r) ((((r).sp2_rx2_sts3[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_RX_LA_CAL_DONEf_SET(r,f) (r).sp2_rx2_sts3[0]=(((r).sp2_rx2_sts3[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_LMTCAL_VALIDf_GET(r) ((((r).sp2_rx2_sts3[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_LMTCAL_VALIDf_SET(r,f) (r).sp2_rx2_sts3[0]=(((r).sp2_rx2_sts3[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_LMTCAL_ADJ_CNTf_GET(r) ((((r).sp2_rx2_sts3[0]) >> 1) & 0x1f)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_LMTCAL_ADJ_CNTf_SET(r,f) (r).sp2_rx2_sts3[0]=(((r).sp2_rx2_sts3[0] & ~((uint32_t)0x1f << 1)) | ((((uint32_t)f) & 0x1f) << 1)) | (31 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_RECAL_INDf_GET(r) (((r).sp2_rx2_sts3[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_RECAL_INDf_SET(r,f) (r).sp2_rx2_sts3[0]=(((r).sp2_rx2_sts3[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_RX2_STS3.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_STS3r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r,(_r._sp2_rx2_sts3))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_STS3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r,(_r._sp2_rx2_sts3)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_STS3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r,(_r._sp2_rx2_sts3))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_STS3r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_sts3))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_STS3r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_sts3))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_STS3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_sts3))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_STS3r BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r
#define SP2_RX2_STS3r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_t SP2_RX2_STS3r_t;
#define SP2_RX2_STS3r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_CLR
#define SP2_RX2_STS3r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_SET
#define SP2_RX2_STS3r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_GET
#define SP2_RX2_STS3r_LMTCAL_STATEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_LMTCAL_STATEf_GET
#define SP2_RX2_STS3r_LMTCAL_STATEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_LMTCAL_STATEf_SET
#define SP2_RX2_STS3r_RX_LA_CAL_DONEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_RX_LA_CAL_DONEf_GET
#define SP2_RX2_STS3r_RX_LA_CAL_DONEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_RX_LA_CAL_DONEf_SET
#define SP2_RX2_STS3r_LMTCAL_VALIDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_LMTCAL_VALIDf_GET
#define SP2_RX2_STS3r_LMTCAL_VALIDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_LMTCAL_VALIDf_SET
#define SP2_RX2_STS3r_LMTCAL_ADJ_CNTf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_LMTCAL_ADJ_CNTf_GET
#define SP2_RX2_STS3r_LMTCAL_ADJ_CNTf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_LMTCAL_ADJ_CNTf_SET
#define SP2_RX2_STS3r_RECAL_INDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_RECAL_INDf_GET
#define SP2_RX2_STS3r_RECAL_INDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r_RECAL_INDf_SET
#define READ_SP2_RX2_STS3r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_STS3r
#define WRITE_SP2_RX2_STS3r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_STS3r
#define MODIFY_SP2_RX2_STS3r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_STS3r
#define READLN_SP2_RX2_STS3r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_STS3r
#define WRITELN_SP2_RX2_STS3r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_STS3r
#define WRITEALL_SP2_RX2_STS3r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_STS3r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS3r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_STS4
 * BLOCKS:   RX2
 * REGADDR:  0x847b
 * DESC:     rxstatus 4 Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/O
 * FIELDS:
 *     EM_ERR_CNT_H     
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r (0x0000847b | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_STS4.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_s {
	uint32_t v[1];
	uint32_t sp2_rx2_sts4[1];
	uint32_t _sp2_rx2_sts4;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_CLR(r) (r).sp2_rx2_sts4[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_SET(r,d) (r).sp2_rx2_sts4[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_GET(r) (r).sp2_rx2_sts4[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_EM_ERR_CNT_Hf_GET(r) (((r).sp2_rx2_sts4[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_EM_ERR_CNT_Hf_SET(r,f) (r).sp2_rx2_sts4[0]=(((r).sp2_rx2_sts4[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_RX2_STS4.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_STS4r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r,(_r._sp2_rx2_sts4))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_STS4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r,(_r._sp2_rx2_sts4)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_STS4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r,(_r._sp2_rx2_sts4))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_STS4r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_sts4))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_STS4r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_sts4))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_STS4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_sts4))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_STS4r BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r
#define SP2_RX2_STS4r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_t SP2_RX2_STS4r_t;
#define SP2_RX2_STS4r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_CLR
#define SP2_RX2_STS4r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_SET
#define SP2_RX2_STS4r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_GET
#define SP2_RX2_STS4r_EM_ERR_CNT_Hf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_EM_ERR_CNT_Hf_GET
#define SP2_RX2_STS4r_EM_ERR_CNT_Hf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r_EM_ERR_CNT_Hf_SET
#define READ_SP2_RX2_STS4r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_STS4r
#define WRITE_SP2_RX2_STS4r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_STS4r
#define MODIFY_SP2_RX2_STS4r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_STS4r
#define READLN_SP2_RX2_STS4r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_STS4r
#define WRITELN_SP2_RX2_STS4r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_STS4r
#define WRITEALL_SP2_RX2_STS4r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_STS4r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS4r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_STS5
 * BLOCKS:   RX2
 * REGADDR:  0x847c
 * DESC:     rxstatus 5 Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/O
 * FIELDS:
 *     EM_ERR_CNT_L     
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r (0x0000847c | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_STS5.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_s {
	uint32_t v[1];
	uint32_t sp2_rx2_sts5[1];
	uint32_t _sp2_rx2_sts5;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_CLR(r) (r).sp2_rx2_sts5[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_SET(r,d) (r).sp2_rx2_sts5[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_GET(r) (r).sp2_rx2_sts5[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_EM_ERR_CNT_Lf_GET(r) (((r).sp2_rx2_sts5[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_EM_ERR_CNT_Lf_SET(r,f) (r).sp2_rx2_sts5[0]=(((r).sp2_rx2_sts5[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_RX2_STS5.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_STS5r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r,(_r._sp2_rx2_sts5))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_STS5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r,(_r._sp2_rx2_sts5)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_STS5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r,(_r._sp2_rx2_sts5))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_STS5r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_sts5))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_STS5r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_sts5))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_STS5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_sts5))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_STS5r BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r
#define SP2_RX2_STS5r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_t SP2_RX2_STS5r_t;
#define SP2_RX2_STS5r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_CLR
#define SP2_RX2_STS5r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_SET
#define SP2_RX2_STS5r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_GET
#define SP2_RX2_STS5r_EM_ERR_CNT_Lf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_EM_ERR_CNT_Lf_GET
#define SP2_RX2_STS5r_EM_ERR_CNT_Lf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r_EM_ERR_CNT_Lf_SET
#define READ_SP2_RX2_STS5r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_STS5r
#define WRITE_SP2_RX2_STS5r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_STS5r
#define MODIFY_SP2_RX2_STS5r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_STS5r
#define READLN_SP2_RX2_STS5r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_STS5r
#define WRITELN_SP2_RX2_STS5r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_STS5r
#define WRITEALL_SP2_RX2_STS5r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_STS5r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS5r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_STS6
 * BLOCKS:   RX2
 * REGADDR:  0x847d
 * DESC:     rxstatus 6 Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/O
 * FIELDS:
 *     RX_PHS_INTERP_STATUS 
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r (0x0000847d | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_STS6.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_s {
	uint32_t v[1];
	uint32_t sp2_rx2_sts6[1];
	uint32_t _sp2_rx2_sts6;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_CLR(r) (r).sp2_rx2_sts6[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_SET(r,d) (r).sp2_rx2_sts6[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_GET(r) (r).sp2_rx2_sts6[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_RX_PHS_INTERP_STATUSf_GET(r) (((r).sp2_rx2_sts6[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_RX_PHS_INTERP_STATUSf_SET(r,f) (r).sp2_rx2_sts6[0]=(((r).sp2_rx2_sts6[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_RX2_STS6.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_STS6r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r,(_r._sp2_rx2_sts6))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_STS6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r,(_r._sp2_rx2_sts6)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_STS6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r,(_r._sp2_rx2_sts6))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_STS6r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_sts6))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_STS6r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_sts6))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_STS6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_sts6))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_STS6r BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r
#define SP2_RX2_STS6r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_t SP2_RX2_STS6r_t;
#define SP2_RX2_STS6r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_CLR
#define SP2_RX2_STS6r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_SET
#define SP2_RX2_STS6r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_GET
#define SP2_RX2_STS6r_RX_PHS_INTERP_STATUSf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_RX_PHS_INTERP_STATUSf_GET
#define SP2_RX2_STS6r_RX_PHS_INTERP_STATUSf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r_RX_PHS_INTERP_STATUSf_SET
#define READ_SP2_RX2_STS6r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_STS6r
#define WRITE_SP2_RX2_STS6r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_STS6r
#define MODIFY_SP2_RX2_STS6r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_STS6r
#define READLN_SP2_RX2_STS6r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_STS6r
#define WRITELN_SP2_RX2_STS6r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_STS6r
#define WRITEALL_SP2_RX2_STS6r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_STS6r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_STS6r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX2_BLKADDR
 * BLOCKS:   RX2
 * REGADDR:  0x847f
 * DESC:     Block Address register
 * RESETVAL: 0x470 (1136)
 * ACCESS:   R/W
 * FIELDS:
 *     BLOCKADDRESS     Bits 14:4 of the address
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr (0x0000847f | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX2_BLKADDR.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_s {
	uint32_t v[1];
	uint32_t sp2_rx2_blkaddr[1];
	uint32_t _sp2_rx2_blkaddr;
} BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_CLR(r) (r).sp2_rx2_blkaddr[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_SET(r,d) (r).sp2_rx2_blkaddr[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_GET(r) (r).sp2_rx2_blkaddr[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_BLOCKADDRESSf_GET(r) ((((r).sp2_rx2_blkaddr[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_BLOCKADDRESSf_SET(r,f) (r).sp2_rx2_blkaddr[0]=(((r).sp2_rx2_blkaddr[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))

/*
 * These macros can be used to access SP2_RX2_BLKADDR.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_BLKADDRr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr,(_r._sp2_rx2_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr,(_r._sp2_rx2_blkaddr)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr,(_r._sp2_rx2_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx2_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx2_blkaddr))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX2_BLKADDRr BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr
#define SP2_RX2_BLKADDRr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_t SP2_RX2_BLKADDRr_t;
#define SP2_RX2_BLKADDRr_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_CLR
#define SP2_RX2_BLKADDRr_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_SET
#define SP2_RX2_BLKADDRr_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_GET
#define SP2_RX2_BLKADDRr_BLOCKADDRESSf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_BLOCKADDRESSf_GET
#define SP2_RX2_BLKADDRr_BLOCKADDRESSf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr_BLOCKADDRESSf_SET
#define READ_SP2_RX2_BLKADDRr BCMI_SGMIIP2X4_SERDES_READ_SP2_RX2_BLKADDRr
#define WRITE_SP2_RX2_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX2_BLKADDRr
#define MODIFY_SP2_RX2_BLKADDRr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX2_BLKADDRr
#define READLN_SP2_RX2_BLKADDRr BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX2_BLKADDRr
#define WRITELN_SP2_RX2_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX2_BLKADDRr
#define WRITEALL_SP2_RX2_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX2_BLKADDRr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX2_BLKADDRr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX3_CTL0
 * BLOCKS:   RX3
 * REGADDR:  0x8480
 * DESC:     rx slice 0 Register
 * RESETVAL: 0x7801 (30721)
 * ACCESS:   R/W
 * FIELDS:
 *     LMTCAL_INTV_TIME Interval time after adjustment
 *     LMTCAL_MAX_ADJ   Maximum number of adjustment
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r (0x00008480 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX3_CTL0.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_s {
	uint32_t v[1];
	uint32_t sp2_rx3_ctl0[1];
	uint32_t _sp2_rx3_ctl0;
} BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_CLR(r) (r).sp2_rx3_ctl0[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_SET(r,d) (r).sp2_rx3_ctl0[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_GET(r) (r).sp2_rx3_ctl0[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_LMTCAL_MAX_ADJf_GET(r) ((((r).sp2_rx3_ctl0[0]) >> 11) & 0x1f)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_LMTCAL_MAX_ADJf_SET(r,f) (r).sp2_rx3_ctl0[0]=(((r).sp2_rx3_ctl0[0] & ~((uint32_t)0x1f << 11)) | ((((uint32_t)f) & 0x1f) << 11)) | (31 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_LMTCAL_INTV_TIMEf_GET(r) (((r).sp2_rx3_ctl0[0]) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_LMTCAL_INTV_TIMEf_SET(r,f) (r).sp2_rx3_ctl0[0]=(((r).sp2_rx3_ctl0[0] & ~((uint32_t)0x7ff)) | (((uint32_t)f) & 0x7ff)) | (0x7ff << 16)

/*
 * These macros can be used to access SP2_RX3_CTL0.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL0r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r,(_r._sp2_rx3_ctl0))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r,(_r._sp2_rx3_ctl0)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r,(_r._sp2_rx3_ctl0))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL0r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl0))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL0r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl0))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL0r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx3_ctl0))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX3_CTL0r BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r
#define SP2_RX3_CTL0r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_t SP2_RX3_CTL0r_t;
#define SP2_RX3_CTL0r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_CLR
#define SP2_RX3_CTL0r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_SET
#define SP2_RX3_CTL0r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_GET
#define SP2_RX3_CTL0r_LMTCAL_MAX_ADJf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_LMTCAL_MAX_ADJf_GET
#define SP2_RX3_CTL0r_LMTCAL_MAX_ADJf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_LMTCAL_MAX_ADJf_SET
#define SP2_RX3_CTL0r_LMTCAL_INTV_TIMEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_LMTCAL_INTV_TIMEf_GET
#define SP2_RX3_CTL0r_LMTCAL_INTV_TIMEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r_LMTCAL_INTV_TIMEf_SET
#define READ_SP2_RX3_CTL0r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL0r
#define WRITE_SP2_RX3_CTL0r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL0r
#define MODIFY_SP2_RX3_CTL0r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL0r
#define READLN_SP2_RX3_CTL0r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL0r
#define WRITELN_SP2_RX3_CTL0r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL0r
#define WRITEALL_SP2_RX3_CTL0r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL0r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL0r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX3_CTL1
 * BLOCKS:   RX3
 * REGADDR:  0x8481
 * DESC:     rx slice 1 Register
 * RESETVAL: 0xc805 (51205)
 * ACCESS:   R/W
 * FIELDS:
 *     LMTCAL_INIT_TIME Initial wait time
 *     LMTCAL_ADJ_DIR   Adjustment direction
 *     LMTCAL_KP        Accumulator Gain
 *     LMTCAL_RISING_EDGE_EN Rising edge error enable
 *     LMTCAL_FALLING_EDGE_EN Falling edge error enable
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r (0x00008481 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX3_CTL1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_s {
	uint32_t v[1];
	uint32_t sp2_rx3_ctl1[1];
	uint32_t _sp2_rx3_ctl1;
} BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_CLR(r) (r).sp2_rx3_ctl1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_SET(r,d) (r).sp2_rx3_ctl1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_GET(r) (r).sp2_rx3_ctl1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_FALLING_EDGE_ENf_GET(r) ((((r).sp2_rx3_ctl1[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_FALLING_EDGE_ENf_SET(r,f) (r).sp2_rx3_ctl1[0]=(((r).sp2_rx3_ctl1[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_RISING_EDGE_ENf_GET(r) ((((r).sp2_rx3_ctl1[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_RISING_EDGE_ENf_SET(r,f) (r).sp2_rx3_ctl1[0]=(((r).sp2_rx3_ctl1[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_KPf_GET(r) ((((r).sp2_rx3_ctl1[0]) >> 12) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_KPf_SET(r,f) (r).sp2_rx3_ctl1[0]=(((r).sp2_rx3_ctl1[0] & ~((uint32_t)0x3 << 12)) | ((((uint32_t)f) & 0x3) << 12)) | (3 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_ADJ_DIRf_GET(r) ((((r).sp2_rx3_ctl1[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_ADJ_DIRf_SET(r,f) (r).sp2_rx3_ctl1[0]=(((r).sp2_rx3_ctl1[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_INIT_TIMEf_GET(r) (((r).sp2_rx3_ctl1[0]) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_INIT_TIMEf_SET(r,f) (r).sp2_rx3_ctl1[0]=(((r).sp2_rx3_ctl1[0] & ~((uint32_t)0x7ff)) | (((uint32_t)f) & 0x7ff)) | (0x7ff << 16)

/*
 * These macros can be used to access SP2_RX3_CTL1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r,(_r._sp2_rx3_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r,(_r._sp2_rx3_ctl1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r,(_r._sp2_rx3_ctl1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx3_ctl1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX3_CTL1r BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r
#define SP2_RX3_CTL1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_t SP2_RX3_CTL1r_t;
#define SP2_RX3_CTL1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_CLR
#define SP2_RX3_CTL1r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_SET
#define SP2_RX3_CTL1r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_GET
#define SP2_RX3_CTL1r_LMTCAL_FALLING_EDGE_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_FALLING_EDGE_ENf_GET
#define SP2_RX3_CTL1r_LMTCAL_FALLING_EDGE_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_FALLING_EDGE_ENf_SET
#define SP2_RX3_CTL1r_LMTCAL_RISING_EDGE_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_RISING_EDGE_ENf_GET
#define SP2_RX3_CTL1r_LMTCAL_RISING_EDGE_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_RISING_EDGE_ENf_SET
#define SP2_RX3_CTL1r_LMTCAL_KPf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_KPf_GET
#define SP2_RX3_CTL1r_LMTCAL_KPf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_KPf_SET
#define SP2_RX3_CTL1r_LMTCAL_ADJ_DIRf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_ADJ_DIRf_GET
#define SP2_RX3_CTL1r_LMTCAL_ADJ_DIRf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_ADJ_DIRf_SET
#define SP2_RX3_CTL1r_LMTCAL_INIT_TIMEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_INIT_TIMEf_GET
#define SP2_RX3_CTL1r_LMTCAL_INIT_TIMEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r_LMTCAL_INIT_TIMEf_SET
#define READ_SP2_RX3_CTL1r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL1r
#define WRITE_SP2_RX3_CTL1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL1r
#define MODIFY_SP2_RX3_CTL1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL1r
#define READLN_SP2_RX3_CTL1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL1r
#define WRITELN_SP2_RX3_CTL1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL1r
#define WRITEALL_SP2_RX3_CTL1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX3_CTL2
 * BLOCKS:   RX3
 * REGADDR:  0x8482
 * DESC:     rx slice 2 Register
 * RESETVAL: 0x83f8 (33784)
 * ACCESS:   R/W
 * FIELDS:
 *     LMTCAL_DONE_OVRD_VAL lmtcal done override value
 *     LMTCAL_DONE_OVRD lmtcal done override
 *     LMTCAL_EN_OVRD_VAL lmtcal enable override value
 *     LMTCAL_EN_OVRD   lmtcal enable override
 *     LMTCAL_ACC_TIME  Accumulation time
 *     LMTCAL_PD_POLARITY Change the polarity of the sum
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r (0x00008482 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX3_CTL2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_s {
	uint32_t v[1];
	uint32_t sp2_rx3_ctl2[1];
	uint32_t _sp2_rx3_ctl2;
} BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_CLR(r) (r).sp2_rx3_ctl2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_SET(r,d) (r).sp2_rx3_ctl2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_GET(r) (r).sp2_rx3_ctl2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_PD_POLARITYf_GET(r) ((((r).sp2_rx3_ctl2[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_PD_POLARITYf_SET(r,f) (r).sp2_rx3_ctl2[0]=(((r).sp2_rx3_ctl2[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_ACC_TIMEf_GET(r) ((((r).sp2_rx3_ctl2[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_ACC_TIMEf_SET(r,f) (r).sp2_rx3_ctl2[0]=(((r).sp2_rx3_ctl2[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_EN_OVRDf_GET(r) ((((r).sp2_rx3_ctl2[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_EN_OVRDf_SET(r,f) (r).sp2_rx3_ctl2[0]=(((r).sp2_rx3_ctl2[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_EN_OVRD_VALf_GET(r) ((((r).sp2_rx3_ctl2[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_EN_OVRD_VALf_SET(r,f) (r).sp2_rx3_ctl2[0]=(((r).sp2_rx3_ctl2[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_DONE_OVRDf_GET(r) ((((r).sp2_rx3_ctl2[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_DONE_OVRDf_SET(r,f) (r).sp2_rx3_ctl2[0]=(((r).sp2_rx3_ctl2[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_DONE_OVRD_VALf_GET(r) (((r).sp2_rx3_ctl2[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_DONE_OVRD_VALf_SET(r,f) (r).sp2_rx3_ctl2[0]=(((r).sp2_rx3_ctl2[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_RX3_CTL2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r,(_r._sp2_rx3_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r,(_r._sp2_rx3_ctl2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r,(_r._sp2_rx3_ctl2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx3_ctl2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX3_CTL2r BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r
#define SP2_RX3_CTL2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_t SP2_RX3_CTL2r_t;
#define SP2_RX3_CTL2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_CLR
#define SP2_RX3_CTL2r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_SET
#define SP2_RX3_CTL2r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_GET
#define SP2_RX3_CTL2r_LMTCAL_PD_POLARITYf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_PD_POLARITYf_GET
#define SP2_RX3_CTL2r_LMTCAL_PD_POLARITYf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_PD_POLARITYf_SET
#define SP2_RX3_CTL2r_LMTCAL_ACC_TIMEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_ACC_TIMEf_GET
#define SP2_RX3_CTL2r_LMTCAL_ACC_TIMEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_ACC_TIMEf_SET
#define SP2_RX3_CTL2r_LMTCAL_EN_OVRDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_EN_OVRDf_GET
#define SP2_RX3_CTL2r_LMTCAL_EN_OVRDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_EN_OVRDf_SET
#define SP2_RX3_CTL2r_LMTCAL_EN_OVRD_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_EN_OVRD_VALf_GET
#define SP2_RX3_CTL2r_LMTCAL_EN_OVRD_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_EN_OVRD_VALf_SET
#define SP2_RX3_CTL2r_LMTCAL_DONE_OVRDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_DONE_OVRDf_GET
#define SP2_RX3_CTL2r_LMTCAL_DONE_OVRDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_DONE_OVRDf_SET
#define SP2_RX3_CTL2r_LMTCAL_DONE_OVRD_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_DONE_OVRD_VALf_GET
#define SP2_RX3_CTL2r_LMTCAL_DONE_OVRD_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r_LMTCAL_DONE_OVRD_VALf_SET
#define READ_SP2_RX3_CTL2r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL2r
#define WRITE_SP2_RX3_CTL2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL2r
#define MODIFY_SP2_RX3_CTL2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL2r
#define READLN_SP2_RX3_CTL2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL2r
#define WRITELN_SP2_RX3_CTL2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL2r
#define WRITEALL_SP2_RX3_CTL2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX3_CTL3
 * BLOCKS:   RX3
 * REGADDR:  0x8483
 * DESC:     rx slice 3 Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     RECAL_POS_THRES  re-calibration upper threshold
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r (0x00008483 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX3_CTL3.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_s {
	uint32_t v[1];
	uint32_t sp2_rx3_ctl3[1];
	uint32_t _sp2_rx3_ctl3;
} BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_CLR(r) (r).sp2_rx3_ctl3[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_SET(r,d) (r).sp2_rx3_ctl3[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_GET(r) (r).sp2_rx3_ctl3[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_RECAL_POS_THRESf_GET(r) (((r).sp2_rx3_ctl3[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_RECAL_POS_THRESf_SET(r,f) (r).sp2_rx3_ctl3[0]=(((r).sp2_rx3_ctl3[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_RX3_CTL3.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL3r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r,(_r._sp2_rx3_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r,(_r._sp2_rx3_ctl3)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r,(_r._sp2_rx3_ctl3))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL3r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL3r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl3))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL3r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx3_ctl3))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX3_CTL3r BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r
#define SP2_RX3_CTL3r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_t SP2_RX3_CTL3r_t;
#define SP2_RX3_CTL3r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_CLR
#define SP2_RX3_CTL3r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_SET
#define SP2_RX3_CTL3r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_GET
#define SP2_RX3_CTL3r_RECAL_POS_THRESf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_RECAL_POS_THRESf_GET
#define SP2_RX3_CTL3r_RECAL_POS_THRESf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r_RECAL_POS_THRESf_SET
#define READ_SP2_RX3_CTL3r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL3r
#define WRITE_SP2_RX3_CTL3r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL3r
#define MODIFY_SP2_RX3_CTL3r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL3r
#define READLN_SP2_RX3_CTL3r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL3r
#define WRITELN_SP2_RX3_CTL3r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL3r
#define WRITEALL_SP2_RX3_CTL3r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL3r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL3r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX3_CTL4
 * BLOCKS:   RX3
 * REGADDR:  0x8484
 * DESC:     rx slice 4 Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     RECAL_NEG_THRES  re-calibration lower threshold
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r (0x00008484 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX3_CTL4.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_s {
	uint32_t v[1];
	uint32_t sp2_rx3_ctl4[1];
	uint32_t _sp2_rx3_ctl4;
} BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_CLR(r) (r).sp2_rx3_ctl4[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_SET(r,d) (r).sp2_rx3_ctl4[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_GET(r) (r).sp2_rx3_ctl4[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_RECAL_NEG_THRESf_GET(r) (((r).sp2_rx3_ctl4[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_RECAL_NEG_THRESf_SET(r,f) (r).sp2_rx3_ctl4[0]=(((r).sp2_rx3_ctl4[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_RX3_CTL4.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL4r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r,(_r._sp2_rx3_ctl4))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r,(_r._sp2_rx3_ctl4)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r,(_r._sp2_rx3_ctl4))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL4r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl4))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL4r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl4))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL4r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx3_ctl4))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX3_CTL4r BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r
#define SP2_RX3_CTL4r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_t SP2_RX3_CTL4r_t;
#define SP2_RX3_CTL4r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_CLR
#define SP2_RX3_CTL4r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_SET
#define SP2_RX3_CTL4r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_GET
#define SP2_RX3_CTL4r_RECAL_NEG_THRESf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_RECAL_NEG_THRESf_GET
#define SP2_RX3_CTL4r_RECAL_NEG_THRESf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r_RECAL_NEG_THRESf_SET
#define READ_SP2_RX3_CTL4r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL4r
#define WRITE_SP2_RX3_CTL4r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL4r
#define MODIFY_SP2_RX3_CTL4r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL4r
#define READLN_SP2_RX3_CTL4r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL4r
#define WRITELN_SP2_RX3_CTL4r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL4r
#define WRITEALL_SP2_RX3_CTL4r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL4r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL4r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX3_CTL5
 * BLOCKS:   RX3
 * REGADDR:  0x8485
 * DESC:     rx slice 5 Register
 * RESETVAL: 0x7e (126)
 * ACCESS:   R/W
 * FIELDS:
 *     CONT_LMTCAL_EN   cont_lmtcal enable
 *     LMTCAL_CONT_ACC_TIME Accumulation time in the LMT_DONE state
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r (0x00008485 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX3_CTL5.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_s {
	uint32_t v[1];
	uint32_t sp2_rx3_ctl5[1];
	uint32_t _sp2_rx3_ctl5;
} BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_CLR(r) (r).sp2_rx3_ctl5[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_SET(r,d) (r).sp2_rx3_ctl5[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_GET(r) (r).sp2_rx3_ctl5[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_LMTCAL_CONT_ACC_TIMEf_GET(r) ((((r).sp2_rx3_ctl5[0]) >> 1) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_LMTCAL_CONT_ACC_TIMEf_SET(r,f) (r).sp2_rx3_ctl5[0]=(((r).sp2_rx3_ctl5[0] & ~((uint32_t)0x7ff << 1)) | ((((uint32_t)f) & 0x7ff) << 1)) | (2047 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_CONT_LMTCAL_ENf_GET(r) (((r).sp2_rx3_ctl5[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_CONT_LMTCAL_ENf_SET(r,f) (r).sp2_rx3_ctl5[0]=(((r).sp2_rx3_ctl5[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_RX3_CTL5.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL5r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r,(_r._sp2_rx3_ctl5))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r,(_r._sp2_rx3_ctl5)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r,(_r._sp2_rx3_ctl5))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL5r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl5))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL5r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl5))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL5r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx3_ctl5))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX3_CTL5r BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r
#define SP2_RX3_CTL5r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_t SP2_RX3_CTL5r_t;
#define SP2_RX3_CTL5r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_CLR
#define SP2_RX3_CTL5r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_SET
#define SP2_RX3_CTL5r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_GET
#define SP2_RX3_CTL5r_LMTCAL_CONT_ACC_TIMEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_LMTCAL_CONT_ACC_TIMEf_GET
#define SP2_RX3_CTL5r_LMTCAL_CONT_ACC_TIMEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_LMTCAL_CONT_ACC_TIMEf_SET
#define SP2_RX3_CTL5r_CONT_LMTCAL_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_CONT_LMTCAL_ENf_GET
#define SP2_RX3_CTL5r_CONT_LMTCAL_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r_CONT_LMTCAL_ENf_SET
#define READ_SP2_RX3_CTL5r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL5r
#define WRITE_SP2_RX3_CTL5r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL5r
#define MODIFY_SP2_RX3_CTL5r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL5r
#define READLN_SP2_RX3_CTL5r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL5r
#define WRITELN_SP2_RX3_CTL5r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL5r
#define WRITEALL_SP2_RX3_CTL5r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL5r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL5r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX3_CTL6
 * BLOCKS:   RX3
 * REGADDR:  0x8486
 * DESC:     rx slice 6 Register
 * RESETVAL: 0x280 (640)
 * ACCESS:   R/W
 * FIELDS:
 *     RX_LMTOFF_OVRD_VAL LA calibration control override value
 *     RX_LMTOFF_OVRD   LA calibration control override
 *     LMTCAL_INTERVAL_TIME Time between CDR lock and lmt_cal enable
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r (0x00008486 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX3_CTL6.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_s {
	uint32_t v[1];
	uint32_t sp2_rx3_ctl6[1];
	uint32_t _sp2_rx3_ctl6;
} BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_CLR(r) (r).sp2_rx3_ctl6[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_SET(r,d) (r).sp2_rx3_ctl6[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_GET(r) (r).sp2_rx3_ctl6[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_LMTCAL_INTERVAL_TIMEf_GET(r) ((((r).sp2_rx3_ctl6[0]) >> 7) & 0x1f)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_LMTCAL_INTERVAL_TIMEf_SET(r,f) (r).sp2_rx3_ctl6[0]=(((r).sp2_rx3_ctl6[0] & ~((uint32_t)0x1f << 7)) | ((((uint32_t)f) & 0x1f) << 7)) | (31 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_RX_LMTOFF_OVRDf_GET(r) ((((r).sp2_rx3_ctl6[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_RX_LMTOFF_OVRDf_SET(r,f) (r).sp2_rx3_ctl6[0]=(((r).sp2_rx3_ctl6[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_RX_LMTOFF_OVRD_VALf_GET(r) (((r).sp2_rx3_ctl6[0]) & 0x3f)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_RX_LMTOFF_OVRD_VALf_SET(r,f) (r).sp2_rx3_ctl6[0]=(((r).sp2_rx3_ctl6[0] & ~((uint32_t)0x3f)) | (((uint32_t)f) & 0x3f)) | (0x3f << 16)

/*
 * These macros can be used to access SP2_RX3_CTL6.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL6r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r,(_r._sp2_rx3_ctl6))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r,(_r._sp2_rx3_ctl6)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r,(_r._sp2_rx3_ctl6))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL6r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl6))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL6r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl6))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL6r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx3_ctl6))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX3_CTL6r BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r
#define SP2_RX3_CTL6r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_t SP2_RX3_CTL6r_t;
#define SP2_RX3_CTL6r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_CLR
#define SP2_RX3_CTL6r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_SET
#define SP2_RX3_CTL6r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_GET
#define SP2_RX3_CTL6r_LMTCAL_INTERVAL_TIMEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_LMTCAL_INTERVAL_TIMEf_GET
#define SP2_RX3_CTL6r_LMTCAL_INTERVAL_TIMEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_LMTCAL_INTERVAL_TIMEf_SET
#define SP2_RX3_CTL6r_RX_LMTOFF_OVRDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_RX_LMTOFF_OVRDf_GET
#define SP2_RX3_CTL6r_RX_LMTOFF_OVRDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_RX_LMTOFF_OVRDf_SET
#define SP2_RX3_CTL6r_RX_LMTOFF_OVRD_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_RX_LMTOFF_OVRD_VALf_GET
#define SP2_RX3_CTL6r_RX_LMTOFF_OVRD_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r_RX_LMTOFF_OVRD_VALf_SET
#define READ_SP2_RX3_CTL6r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL6r
#define WRITE_SP2_RX3_CTL6r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL6r
#define MODIFY_SP2_RX3_CTL6r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL6r
#define READLN_SP2_RX3_CTL6r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL6r
#define WRITELN_SP2_RX3_CTL6r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL6r
#define WRITEALL_SP2_RX3_CTL6r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL6r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL6r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX3_CTL7
 * BLOCKS:   RX3
 * REGADDR:  0x8487
 * DESC:     rx slice 7 Register
 * RESETVAL: 0x1000 (4096)
 * ACCESS:   R/W
 * FIELDS:
 *     SLCAL_VALID_OVRD_VAL slcal valid override value
 *     SLCAL_VALID_OVRD slcal valid override
 *     SLCAL_POL        Data polarity
 *     SLCAL_ACC_OPT    Accumulator time
 *     SLCAL_EN_OVRD_VAL slcal_en override value
 *     SLCAL_EN_OVRD    slcal_en override
 *     CAL_STATE_OVRD   cal_ctrl state machine override
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r (0x00008487 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX3_CTL7.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_s {
	uint32_t v[1];
	uint32_t sp2_rx3_ctl7[1];
	uint32_t _sp2_rx3_ctl7;
} BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_CLR(r) (r).sp2_rx3_ctl7[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SET(r,d) (r).sp2_rx3_ctl7[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_GET(r) (r).sp2_rx3_ctl7[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_CAL_STATE_OVRDf_GET(r) ((((r).sp2_rx3_ctl7[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_CAL_STATE_OVRDf_SET(r,f) (r).sp2_rx3_ctl7[0]=(((r).sp2_rx3_ctl7[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_EN_OVRDf_GET(r) ((((r).sp2_rx3_ctl7[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_EN_OVRDf_SET(r,f) (r).sp2_rx3_ctl7[0]=(((r).sp2_rx3_ctl7[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_EN_OVRD_VALf_GET(r) ((((r).sp2_rx3_ctl7[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_EN_OVRD_VALf_SET(r,f) (r).sp2_rx3_ctl7[0]=(((r).sp2_rx3_ctl7[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_ACC_OPTf_GET(r) ((((r).sp2_rx3_ctl7[0]) >> 11) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_ACC_OPTf_SET(r,f) (r).sp2_rx3_ctl7[0]=(((r).sp2_rx3_ctl7[0] & ~((uint32_t)0x3 << 11)) | ((((uint32_t)f) & 0x3) << 11)) | (3 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_POLf_GET(r) ((((r).sp2_rx3_ctl7[0]) >> 10) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_POLf_SET(r,f) (r).sp2_rx3_ctl7[0]=(((r).sp2_rx3_ctl7[0] & ~((uint32_t)0x1 << 10)) | ((((uint32_t)f) & 0x1) << 10)) | (1 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_VALID_OVRDf_GET(r) ((((r).sp2_rx3_ctl7[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_VALID_OVRDf_SET(r,f) (r).sp2_rx3_ctl7[0]=(((r).sp2_rx3_ctl7[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_VALID_OVRD_VALf_GET(r) (((r).sp2_rx3_ctl7[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_VALID_OVRD_VALf_SET(r,f) (r).sp2_rx3_ctl7[0]=(((r).sp2_rx3_ctl7[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_RX3_CTL7.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL7r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r,(_r._sp2_rx3_ctl7))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL7r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r,(_r._sp2_rx3_ctl7)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL7r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r,(_r._sp2_rx3_ctl7))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL7r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl7))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL7r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl7))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL7r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx3_ctl7))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX3_CTL7r BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r
#define SP2_RX3_CTL7r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_t SP2_RX3_CTL7r_t;
#define SP2_RX3_CTL7r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_CLR
#define SP2_RX3_CTL7r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SET
#define SP2_RX3_CTL7r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_GET
#define SP2_RX3_CTL7r_CAL_STATE_OVRDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_CAL_STATE_OVRDf_GET
#define SP2_RX3_CTL7r_CAL_STATE_OVRDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_CAL_STATE_OVRDf_SET
#define SP2_RX3_CTL7r_SLCAL_EN_OVRDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_EN_OVRDf_GET
#define SP2_RX3_CTL7r_SLCAL_EN_OVRDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_EN_OVRDf_SET
#define SP2_RX3_CTL7r_SLCAL_EN_OVRD_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_EN_OVRD_VALf_GET
#define SP2_RX3_CTL7r_SLCAL_EN_OVRD_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_EN_OVRD_VALf_SET
#define SP2_RX3_CTL7r_SLCAL_ACC_OPTf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_ACC_OPTf_GET
#define SP2_RX3_CTL7r_SLCAL_ACC_OPTf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_ACC_OPTf_SET
#define SP2_RX3_CTL7r_SLCAL_POLf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_POLf_GET
#define SP2_RX3_CTL7r_SLCAL_POLf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_POLf_SET
#define SP2_RX3_CTL7r_SLCAL_VALID_OVRDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_VALID_OVRDf_GET
#define SP2_RX3_CTL7r_SLCAL_VALID_OVRDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_VALID_OVRDf_SET
#define SP2_RX3_CTL7r_SLCAL_VALID_OVRD_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_VALID_OVRD_VALf_GET
#define SP2_RX3_CTL7r_SLCAL_VALID_OVRD_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r_SLCAL_VALID_OVRD_VALf_SET
#define READ_SP2_RX3_CTL7r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL7r
#define WRITE_SP2_RX3_CTL7r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL7r
#define MODIFY_SP2_RX3_CTL7r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL7r
#define READLN_SP2_RX3_CTL7r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL7r
#define WRITELN_SP2_RX3_CTL7r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL7r
#define WRITEALL_SP2_RX3_CTL7r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL7r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL7r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX3_CTL8
 * BLOCKS:   RX3
 * REGADDR:  0x8488
 * DESC:     rx slice 8 Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     RX_SLOFF0_OVRD_VAL Peak slicer control override value
 *     RX_SLOFF0_OVRD   Peak slicer control override
 *     RX_SLOFF1_OVRD_VAL Zero slicer control override value
 *     RX_SLOFF1_OVRD   Zero slicer control override
 *     RX_SLOFF2_OVRD_VAL EM slicer control override value
 *     RX_SLOFF2_OVRD   EM slicer control override
 *     SLICER_DATA_SEL  slicer data select0 afe sourced
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r (0x00008488 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX3_CTL8.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_s {
	uint32_t v[1];
	uint32_t sp2_rx3_ctl8[1];
	uint32_t _sp2_rx3_ctl8;
} BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_CLR(r) (r).sp2_rx3_ctl8[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_SET(r,d) (r).sp2_rx3_ctl8[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_GET(r) (r).sp2_rx3_ctl8[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_SLICER_DATA_SELf_GET(r) ((((r).sp2_rx3_ctl8[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_SLICER_DATA_SELf_SET(r,f) (r).sp2_rx3_ctl8[0]=(((r).sp2_rx3_ctl8[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF2_OVRDf_GET(r) ((((r).sp2_rx3_ctl8[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF2_OVRDf_SET(r,f) (r).sp2_rx3_ctl8[0]=(((r).sp2_rx3_ctl8[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF2_OVRD_VALf_GET(r) ((((r).sp2_rx3_ctl8[0]) >> 10) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF2_OVRD_VALf_SET(r,f) (r).sp2_rx3_ctl8[0]=(((r).sp2_rx3_ctl8[0] & ~((uint32_t)0xf << 10)) | ((((uint32_t)f) & 0xf) << 10)) | (15 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF1_OVRDf_GET(r) ((((r).sp2_rx3_ctl8[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF1_OVRDf_SET(r,f) (r).sp2_rx3_ctl8[0]=(((r).sp2_rx3_ctl8[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF1_OVRD_VALf_GET(r) ((((r).sp2_rx3_ctl8[0]) >> 5) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF1_OVRD_VALf_SET(r,f) (r).sp2_rx3_ctl8[0]=(((r).sp2_rx3_ctl8[0] & ~((uint32_t)0xf << 5)) | ((((uint32_t)f) & 0xf) << 5)) | (15 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF0_OVRDf_GET(r) ((((r).sp2_rx3_ctl8[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF0_OVRDf_SET(r,f) (r).sp2_rx3_ctl8[0]=(((r).sp2_rx3_ctl8[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF0_OVRD_VALf_GET(r) (((r).sp2_rx3_ctl8[0]) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF0_OVRD_VALf_SET(r,f) (r).sp2_rx3_ctl8[0]=(((r).sp2_rx3_ctl8[0] & ~((uint32_t)0xf)) | (((uint32_t)f) & 0xf)) | (0xf << 16)

/*
 * These macros can be used to access SP2_RX3_CTL8.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL8r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r,(_r._sp2_rx3_ctl8))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL8r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r,(_r._sp2_rx3_ctl8)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL8r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r,(_r._sp2_rx3_ctl8))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL8r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl8))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL8r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl8))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL8r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx3_ctl8))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX3_CTL8r BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r
#define SP2_RX3_CTL8r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_t SP2_RX3_CTL8r_t;
#define SP2_RX3_CTL8r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_CLR
#define SP2_RX3_CTL8r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_SET
#define SP2_RX3_CTL8r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_GET
#define SP2_RX3_CTL8r_SLICER_DATA_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_SLICER_DATA_SELf_GET
#define SP2_RX3_CTL8r_SLICER_DATA_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_SLICER_DATA_SELf_SET
#define SP2_RX3_CTL8r_RX_SLOFF2_OVRDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF2_OVRDf_GET
#define SP2_RX3_CTL8r_RX_SLOFF2_OVRDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF2_OVRDf_SET
#define SP2_RX3_CTL8r_RX_SLOFF2_OVRD_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF2_OVRD_VALf_GET
#define SP2_RX3_CTL8r_RX_SLOFF2_OVRD_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF2_OVRD_VALf_SET
#define SP2_RX3_CTL8r_RX_SLOFF1_OVRDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF1_OVRDf_GET
#define SP2_RX3_CTL8r_RX_SLOFF1_OVRDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF1_OVRDf_SET
#define SP2_RX3_CTL8r_RX_SLOFF1_OVRD_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF1_OVRD_VALf_GET
#define SP2_RX3_CTL8r_RX_SLOFF1_OVRD_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF1_OVRD_VALf_SET
#define SP2_RX3_CTL8r_RX_SLOFF0_OVRDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF0_OVRDf_GET
#define SP2_RX3_CTL8r_RX_SLOFF0_OVRDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF0_OVRDf_SET
#define SP2_RX3_CTL8r_RX_SLOFF0_OVRD_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF0_OVRD_VALf_GET
#define SP2_RX3_CTL8r_RX_SLOFF0_OVRD_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r_RX_SLOFF0_OVRD_VALf_SET
#define READ_SP2_RX3_CTL8r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL8r
#define WRITE_SP2_RX3_CTL8r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL8r
#define MODIFY_SP2_RX3_CTL8r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL8r
#define READLN_SP2_RX3_CTL8r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL8r
#define WRITELN_SP2_RX3_CTL8r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL8r
#define WRITEALL_SP2_RX3_CTL8r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL8r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL8r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX3_CTL9
 * BLOCKS:   RX3
 * REGADDR:  0x8489
 * DESC:     rx slice 9 Register
 * RESETVAL: 0x280 (640)
 * ACCESS:   R/W
 * FIELDS:
 *     SLCAL_UP_THRES   slcal upper threshold
 *     RX_SLICER_CALVALID_OVRD_VAL rx_slicer_calvalid override value
 *     RX_SLICER_CALVALID_OVRD rx_slicer_calvalid override
 *     CAL_STATE_OVRD_VAL cal_ctrl state machine override value
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r (0x00008489 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX3_CTL9.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_s {
	uint32_t v[1];
	uint32_t sp2_rx3_ctl9[1];
	uint32_t _sp2_rx3_ctl9;
} BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_CLR(r) (r).sp2_rx3_ctl9[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_SET(r,d) (r).sp2_rx3_ctl9[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_GET(r) (r).sp2_rx3_ctl9[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_CAL_STATE_OVRD_VALf_GET(r) ((((r).sp2_rx3_ctl9[0]) >> 13) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_CAL_STATE_OVRD_VALf_SET(r,f) (r).sp2_rx3_ctl9[0]=(((r).sp2_rx3_ctl9[0] & ~((uint32_t)0x7 << 13)) | ((((uint32_t)f) & 0x7) << 13)) | (7 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_RX_SLICER_CALVALID_OVRDf_GET(r) ((((r).sp2_rx3_ctl9[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_RX_SLICER_CALVALID_OVRDf_SET(r,f) (r).sp2_rx3_ctl9[0]=(((r).sp2_rx3_ctl9[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_RX_SLICER_CALVALID_OVRD_VALf_GET(r) ((((r).sp2_rx3_ctl9[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_RX_SLICER_CALVALID_OVRD_VALf_SET(r,f) (r).sp2_rx3_ctl9[0]=(((r).sp2_rx3_ctl9[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_SLCAL_UP_THRESf_GET(r) (((r).sp2_rx3_ctl9[0]) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_SLCAL_UP_THRESf_SET(r,f) (r).sp2_rx3_ctl9[0]=(((r).sp2_rx3_ctl9[0] & ~((uint32_t)0x7ff)) | (((uint32_t)f) & 0x7ff)) | (0x7ff << 16)

/*
 * These macros can be used to access SP2_RX3_CTL9.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL9r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r,(_r._sp2_rx3_ctl9))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL9r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r,(_r._sp2_rx3_ctl9)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL9r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r,(_r._sp2_rx3_ctl9))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL9r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl9))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL9r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl9))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL9r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx3_ctl9))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX3_CTL9r BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r
#define SP2_RX3_CTL9r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_t SP2_RX3_CTL9r_t;
#define SP2_RX3_CTL9r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_CLR
#define SP2_RX3_CTL9r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_SET
#define SP2_RX3_CTL9r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_GET
#define SP2_RX3_CTL9r_CAL_STATE_OVRD_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_CAL_STATE_OVRD_VALf_GET
#define SP2_RX3_CTL9r_CAL_STATE_OVRD_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_CAL_STATE_OVRD_VALf_SET
#define SP2_RX3_CTL9r_RX_SLICER_CALVALID_OVRDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_RX_SLICER_CALVALID_OVRDf_GET
#define SP2_RX3_CTL9r_RX_SLICER_CALVALID_OVRDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_RX_SLICER_CALVALID_OVRDf_SET
#define SP2_RX3_CTL9r_RX_SLICER_CALVALID_OVRD_VALf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_RX_SLICER_CALVALID_OVRD_VALf_GET
#define SP2_RX3_CTL9r_RX_SLICER_CALVALID_OVRD_VALf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_RX_SLICER_CALVALID_OVRD_VALf_SET
#define SP2_RX3_CTL9r_SLCAL_UP_THRESf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_SLCAL_UP_THRESf_GET
#define SP2_RX3_CTL9r_SLCAL_UP_THRESf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r_SLCAL_UP_THRESf_SET
#define READ_SP2_RX3_CTL9r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL9r
#define WRITE_SP2_RX3_CTL9r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL9r
#define MODIFY_SP2_RX3_CTL9r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL9r
#define READLN_SP2_RX3_CTL9r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL9r
#define WRITELN_SP2_RX3_CTL9r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL9r
#define WRITEALL_SP2_RX3_CTL9r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL9r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL9r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX3_CTL10
 * BLOCKS:   RX3
 * REGADDR:  0x848a
 * DESC:     rx slice 10 Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     SLCAL_DN_THRES   slcal lower threshold
 *     SLICER_INTERVAL_TIME slicer interval time
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r (0x0000848a | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX3_CTL10.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_s {
	uint32_t v[1];
	uint32_t sp2_rx3_ctl10[1];
	uint32_t _sp2_rx3_ctl10;
} BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_CLR(r) (r).sp2_rx3_ctl10[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_SET(r,d) (r).sp2_rx3_ctl10[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_GET(r) (r).sp2_rx3_ctl10[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_SLICER_INTERVAL_TIMEf_GET(r) ((((r).sp2_rx3_ctl10[0]) >> 11) & 0x1f)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_SLICER_INTERVAL_TIMEf_SET(r,f) (r).sp2_rx3_ctl10[0]=(((r).sp2_rx3_ctl10[0] & ~((uint32_t)0x1f << 11)) | ((((uint32_t)f) & 0x1f) << 11)) | (31 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_SLCAL_DN_THRESf_GET(r) (((r).sp2_rx3_ctl10[0]) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_SLCAL_DN_THRESf_SET(r,f) (r).sp2_rx3_ctl10[0]=(((r).sp2_rx3_ctl10[0] & ~((uint32_t)0x7ff)) | (((uint32_t)f) & 0x7ff)) | (0x7ff << 16)

/*
 * These macros can be used to access SP2_RX3_CTL10.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL10r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r,(_r._sp2_rx3_ctl10))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL10r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r,(_r._sp2_rx3_ctl10)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL10r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r,(_r._sp2_rx3_ctl10))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL10r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl10))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL10r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl10))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL10r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx3_ctl10))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX3_CTL10r BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r
#define SP2_RX3_CTL10r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_t SP2_RX3_CTL10r_t;
#define SP2_RX3_CTL10r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_CLR
#define SP2_RX3_CTL10r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_SET
#define SP2_RX3_CTL10r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_GET
#define SP2_RX3_CTL10r_SLICER_INTERVAL_TIMEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_SLICER_INTERVAL_TIMEf_GET
#define SP2_RX3_CTL10r_SLICER_INTERVAL_TIMEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_SLICER_INTERVAL_TIMEf_SET
#define SP2_RX3_CTL10r_SLCAL_DN_THRESf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_SLCAL_DN_THRESf_GET
#define SP2_RX3_CTL10r_SLCAL_DN_THRESf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r_SLCAL_DN_THRESf_SET
#define READ_SP2_RX3_CTL10r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL10r
#define WRITE_SP2_RX3_CTL10r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL10r
#define MODIFY_SP2_RX3_CTL10r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL10r
#define READLN_SP2_RX3_CTL10r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL10r
#define WRITELN_SP2_RX3_CTL10r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL10r
#define WRITEALL_SP2_RX3_CTL10r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL10r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL10r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX3_CTL11
 * BLOCKS:   RX3
 * REGADDR:  0x848b
 * DESC:     rx slice 11 Register
 * RESETVAL: 0x1d80 (7552)
 * ACCESS:   R/W
 * FIELDS:
 *     PM_RXLIMITAMPCALBYP 
 *     PM_RXSLICERCALBYP 
 *     SLCAL_INIT_TIME  
 *     RECAL_IND_CLR    
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r (0x0000848b | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX3_CTL11.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_s {
	uint32_t v[1];
	uint32_t sp2_rx3_ctl11[1];
	uint32_t _sp2_rx3_ctl11;
} BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_CLR(r) (r).sp2_rx3_ctl11[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_SET(r,d) (r).sp2_rx3_ctl11[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_GET(r) (r).sp2_rx3_ctl11[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_RECAL_IND_CLRf_GET(r) ((((r).sp2_rx3_ctl11[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_RECAL_IND_CLRf_SET(r,f) (r).sp2_rx3_ctl11[0]=(((r).sp2_rx3_ctl11[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_SLCAL_INIT_TIMEf_GET(r) ((((r).sp2_rx3_ctl11[0]) >> 7) & 0xff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_SLCAL_INIT_TIMEf_SET(r,f) (r).sp2_rx3_ctl11[0]=(((r).sp2_rx3_ctl11[0] & ~((uint32_t)0xff << 7)) | ((((uint32_t)f) & 0xff) << 7)) | (255 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_PM_RXSLICERCALBYPf_GET(r) ((((r).sp2_rx3_ctl11[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_PM_RXSLICERCALBYPf_SET(r,f) (r).sp2_rx3_ctl11[0]=(((r).sp2_rx3_ctl11[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_PM_RXLIMITAMPCALBYPf_GET(r) (((r).sp2_rx3_ctl11[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_PM_RXLIMITAMPCALBYPf_SET(r,f) (r).sp2_rx3_ctl11[0]=(((r).sp2_rx3_ctl11[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_RX3_CTL11.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL11r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r,(_r._sp2_rx3_ctl11))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL11r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r,(_r._sp2_rx3_ctl11)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL11r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r,(_r._sp2_rx3_ctl11))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL11r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl11))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL11r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_ctl11))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL11r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx3_ctl11))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX3_CTL11r BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r
#define SP2_RX3_CTL11r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_t SP2_RX3_CTL11r_t;
#define SP2_RX3_CTL11r_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_CLR
#define SP2_RX3_CTL11r_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_SET
#define SP2_RX3_CTL11r_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_GET
#define SP2_RX3_CTL11r_RECAL_IND_CLRf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_RECAL_IND_CLRf_GET
#define SP2_RX3_CTL11r_RECAL_IND_CLRf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_RECAL_IND_CLRf_SET
#define SP2_RX3_CTL11r_SLCAL_INIT_TIMEf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_SLCAL_INIT_TIMEf_GET
#define SP2_RX3_CTL11r_SLCAL_INIT_TIMEf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_SLCAL_INIT_TIMEf_SET
#define SP2_RX3_CTL11r_PM_RXSLICERCALBYPf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_PM_RXSLICERCALBYPf_GET
#define SP2_RX3_CTL11r_PM_RXSLICERCALBYPf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_PM_RXSLICERCALBYPf_SET
#define SP2_RX3_CTL11r_PM_RXLIMITAMPCALBYPf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_PM_RXLIMITAMPCALBYPf_GET
#define SP2_RX3_CTL11r_PM_RXLIMITAMPCALBYPf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r_PM_RXLIMITAMPCALBYPf_SET
#define READ_SP2_RX3_CTL11r BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_CTL11r
#define WRITE_SP2_RX3_CTL11r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_CTL11r
#define MODIFY_SP2_RX3_CTL11r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_CTL11r
#define READLN_SP2_RX3_CTL11r BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_CTL11r
#define WRITELN_SP2_RX3_CTL11r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_CTL11r
#define WRITEALL_SP2_RX3_CTL11r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_CTL11r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX3_CTL11r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX3_SLCRSTAT
 * BLOCKS:   RX3
 * REGADDR:  0x848c
 * DESC:     rx slicer stat Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/O
 * FIELDS:
 *     RX_SLOFF0        
 *     RX_SLOFF1        
 *     RX_SLOFF2        
 *     RX_SLICER_CALVALID 
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr (0x0000848c | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX3_SLCRSTAT.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_s {
	uint32_t v[1];
	uint32_t sp2_rx3_slcrstat[1];
	uint32_t _sp2_rx3_slcrstat;
} BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_CLR(r) (r).sp2_rx3_slcrstat[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_SET(r,d) (r).sp2_rx3_slcrstat[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_GET(r) (r).sp2_rx3_slcrstat[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLICER_CALVALIDf_GET(r) ((((r).sp2_rx3_slcrstat[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLICER_CALVALIDf_SET(r,f) (r).sp2_rx3_slcrstat[0]=(((r).sp2_rx3_slcrstat[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLOFF2f_GET(r) ((((r).sp2_rx3_slcrstat[0]) >> 8) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLOFF2f_SET(r,f) (r).sp2_rx3_slcrstat[0]=(((r).sp2_rx3_slcrstat[0] & ~((uint32_t)0xf << 8)) | ((((uint32_t)f) & 0xf) << 8)) | (15 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLOFF1f_GET(r) ((((r).sp2_rx3_slcrstat[0]) >> 4) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLOFF1f_SET(r,f) (r).sp2_rx3_slcrstat[0]=(((r).sp2_rx3_slcrstat[0] & ~((uint32_t)0xf << 4)) | ((((uint32_t)f) & 0xf) << 4)) | (15 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLOFF0f_GET(r) (((r).sp2_rx3_slcrstat[0]) & 0xf)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLOFF0f_SET(r,f) (r).sp2_rx3_slcrstat[0]=(((r).sp2_rx3_slcrstat[0] & ~((uint32_t)0xf)) | (((uint32_t)f) & 0xf)) | (0xf << 16)

/*
 * These macros can be used to access SP2_RX3_SLCRSTAT.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_SLCRSTATr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr,(_r._sp2_rx3_slcrstat))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_SLCRSTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr,(_r._sp2_rx3_slcrstat)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_SLCRSTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr,(_r._sp2_rx3_slcrstat))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_SLCRSTATr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_slcrstat))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_SLCRSTATr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_slcrstat))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_SLCRSTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx3_slcrstat))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX3_SLCRSTATr BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr
#define SP2_RX3_SLCRSTATr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_t SP2_RX3_SLCRSTATr_t;
#define SP2_RX3_SLCRSTATr_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_CLR
#define SP2_RX3_SLCRSTATr_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_SET
#define SP2_RX3_SLCRSTATr_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_GET
#define SP2_RX3_SLCRSTATr_RX_SLICER_CALVALIDf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLICER_CALVALIDf_GET
#define SP2_RX3_SLCRSTATr_RX_SLICER_CALVALIDf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLICER_CALVALIDf_SET
#define SP2_RX3_SLCRSTATr_RX_SLOFF2f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLOFF2f_GET
#define SP2_RX3_SLCRSTATr_RX_SLOFF2f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLOFF2f_SET
#define SP2_RX3_SLCRSTATr_RX_SLOFF1f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLOFF1f_GET
#define SP2_RX3_SLCRSTATr_RX_SLOFF1f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLOFF1f_SET
#define SP2_RX3_SLCRSTATr_RX_SLOFF0f_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLOFF0f_GET
#define SP2_RX3_SLCRSTATr_RX_SLOFF0f_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr_RX_SLOFF0f_SET
#define READ_SP2_RX3_SLCRSTATr BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_SLCRSTATr
#define WRITE_SP2_RX3_SLCRSTATr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_SLCRSTATr
#define MODIFY_SP2_RX3_SLCRSTATr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_SLCRSTATr
#define READLN_SP2_RX3_SLCRSTATr BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_SLCRSTATr
#define WRITELN_SP2_RX3_SLCRSTATr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_SLCRSTATr
#define WRITEALL_SP2_RX3_SLCRSTATr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_SLCRSTATr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX3_SLCRSTATr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_RX3_BLKADDR
 * BLOCKS:   RX3
 * REGADDR:  0x848f
 * DESC:     Block Address register
 * RESETVAL: 0x480 (1152)
 * ACCESS:   R/W
 * FIELDS:
 *     BLOCKADDRESS     Bits 14:4 of the address
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr (0x0000848f | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_SIZE 4

/*
 * This structure should be used to declare and program SP2_RX3_BLKADDR.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_s {
	uint32_t v[1];
	uint32_t sp2_rx3_blkaddr[1];
	uint32_t _sp2_rx3_blkaddr;
} BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_CLR(r) (r).sp2_rx3_blkaddr[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_SET(r,d) (r).sp2_rx3_blkaddr[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_GET(r) (r).sp2_rx3_blkaddr[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_BLOCKADDRESSf_GET(r) ((((r).sp2_rx3_blkaddr[0]) >> 4) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_BLOCKADDRESSf_SET(r,f) (r).sp2_rx3_blkaddr[0]=(((r).sp2_rx3_blkaddr[0] & ~((uint32_t)0x7ff << 4)) | ((((uint32_t)f) & 0x7ff) << 4)) | (2047 << (16 + 4))

/*
 * These macros can be used to access SP2_RX3_BLKADDR.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_BLKADDRr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr,(_r._sp2_rx3_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr,(_r._sp2_rx3_blkaddr)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr,(_r._sp2_rx3_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_BLKADDRr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_rx3_blkaddr))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_BLKADDRr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_rx3_blkaddr))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_RX3_BLKADDRr BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr
#define SP2_RX3_BLKADDRr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_t SP2_RX3_BLKADDRr_t;
#define SP2_RX3_BLKADDRr_CLR BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_CLR
#define SP2_RX3_BLKADDRr_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_SET
#define SP2_RX3_BLKADDRr_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_GET
#define SP2_RX3_BLKADDRr_BLOCKADDRESSf_GET BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_BLOCKADDRESSf_GET
#define SP2_RX3_BLKADDRr_BLOCKADDRESSf_SET BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr_BLOCKADDRESSf_SET
#define READ_SP2_RX3_BLKADDRr BCMI_SGMIIP2X4_SERDES_READ_SP2_RX3_BLKADDRr
#define WRITE_SP2_RX3_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_RX3_BLKADDRr
#define MODIFY_SP2_RX3_BLKADDRr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_RX3_BLKADDRr
#define READLN_SP2_RX3_BLKADDRr BCMI_SGMIIP2X4_SERDES_READLN_SP2_RX3_BLKADDRr
#define WRITELN_SP2_RX3_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_RX3_BLKADDRr
#define WRITEALL_SP2_RX3_BLKADDRr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_RX3_BLKADDRr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_RX3_BLKADDRr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PRBS
 * BLOCKS:   CTRL
 * REGADDR:  0x8600
 * DESC:     PRBS register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     PRBSGEN_ORDER    PRBS generator orderprbs7   0hprbs15  1hprbs23  2hprbs31  3hprbs9   4hprbs10  5hprbs11  6h
 *     PRBSGEN_INV      Invert PRBS generator polynomial
 *     PRBSGEN_EN       PRBS generator enable
 *     TXDATAI_SEL      
 *     PRBSMON_ORDER    PRBS monitor orderprbs7   0hprbs15  1hprbs23  2hprbs31  3hprbs9   4hprbs10  5hprbs11  6h
 *     PRBSMON_INV      Invert PRBS monitor polynomial
 *     PRBSMON_EN       PRBS monitor enable
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr (0x00008600 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_SIZE 4

/*
 * This structure should be used to declare and program SP2_PRBS.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_s {
	uint32_t v[1];
	uint32_t sp2_prbs[1];
	uint32_t _sp2_prbs;
} BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_CLR(r) (r).sp2_prbs[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_SET(r,d) (r).sp2_prbs[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_GET(r) (r).sp2_prbs[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSMON_ENf_GET(r) ((((r).sp2_prbs[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSMON_ENf_SET(r,f) (r).sp2_prbs[0]=(((r).sp2_prbs[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSMON_INVf_GET(r) ((((r).sp2_prbs[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSMON_INVf_SET(r,f) (r).sp2_prbs[0]=(((r).sp2_prbs[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSMON_ORDERf_GET(r) ((((r).sp2_prbs[0]) >> 8) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSMON_ORDERf_SET(r,f) (r).sp2_prbs[0]=(((r).sp2_prbs[0] & ~((uint32_t)0x7 << 8)) | ((((uint32_t)f) & 0x7) << 8)) | (7 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_TXDATAI_SELf_GET(r) ((((r).sp2_prbs[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_TXDATAI_SELf_SET(r,f) (r).sp2_prbs[0]=(((r).sp2_prbs[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSGEN_ENf_GET(r) ((((r).sp2_prbs[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSGEN_ENf_SET(r,f) (r).sp2_prbs[0]=(((r).sp2_prbs[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSGEN_INVf_GET(r) ((((r).sp2_prbs[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSGEN_INVf_SET(r,f) (r).sp2_prbs[0]=(((r).sp2_prbs[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSGEN_ORDERf_GET(r) (((r).sp2_prbs[0]) & 0x7)
#define BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSGEN_ORDERf_SET(r,f) (r).sp2_prbs[0]=(((r).sp2_prbs[0] & ~((uint32_t)0x7)) | (((uint32_t)f) & 0x7)) | (0x7 << 16)

/*
 * These macros can be used to access SP2_PRBS.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PRBSr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PRBSr,(_r._sp2_prbs))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PRBSr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PRBSr,(_r._sp2_prbs)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PRBSr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PRBSr,(_r._sp2_prbs))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PRBSr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PRBSr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_prbs))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PRBSr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PRBSr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_prbs))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PRBSr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PRBSr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_prbs))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PRBSr BCMI_SGMIIP2X4_SERDES_SP2_PRBSr
#define SP2_PRBSr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_t SP2_PRBSr_t;
#define SP2_PRBSr_CLR BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_CLR
#define SP2_PRBSr_SET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_SET
#define SP2_PRBSr_GET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_GET
#define SP2_PRBSr_PRBSMON_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSMON_ENf_GET
#define SP2_PRBSr_PRBSMON_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSMON_ENf_SET
#define SP2_PRBSr_PRBSMON_INVf_GET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSMON_INVf_GET
#define SP2_PRBSr_PRBSMON_INVf_SET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSMON_INVf_SET
#define SP2_PRBSr_PRBSMON_ORDERf_GET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSMON_ORDERf_GET
#define SP2_PRBSr_PRBSMON_ORDERf_SET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSMON_ORDERf_SET
#define SP2_PRBSr_TXDATAI_SELf_GET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_TXDATAI_SELf_GET
#define SP2_PRBSr_TXDATAI_SELf_SET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_TXDATAI_SELf_SET
#define SP2_PRBSr_PRBSGEN_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSGEN_ENf_GET
#define SP2_PRBSr_PRBSGEN_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSGEN_ENf_SET
#define SP2_PRBSr_PRBSGEN_INVf_GET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSGEN_INVf_GET
#define SP2_PRBSr_PRBSGEN_INVf_SET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSGEN_INVf_SET
#define SP2_PRBSr_PRBSGEN_ORDERf_GET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSGEN_ORDERf_GET
#define SP2_PRBSr_PRBSGEN_ORDERf_SET BCMI_SGMIIP2X4_SERDES_SP2_PRBSr_PRBSGEN_ORDERf_SET
#define READ_SP2_PRBSr BCMI_SGMIIP2X4_SERDES_READ_SP2_PRBSr
#define WRITE_SP2_PRBSr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PRBSr
#define MODIFY_SP2_PRBSr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PRBSr
#define READLN_SP2_PRBSr BCMI_SGMIIP2X4_SERDES_READLN_SP2_PRBSr
#define WRITELN_SP2_PRBSr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PRBSr
#define WRITEALL_SP2_PRBSr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PRBSr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PRBSr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_LANECTL
 * BLOCKS:   CTRL
 * REGADDR:  0x8601
 * DESC:     Lane Control register
 * RESETVAL: 0xf (15)
 * ACCESS:   R/W
 * FIELDS:
 *     PCS_EN_TX        
 *     PCS_EN_RX        
 *     CDET             
 *     EDEN             
 *     PMD_TXDISABLE    
 *     GLOOP1G          
 *     RLOOP1G          
 *     BYPASS_OSMODE    
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr (0x00008601 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_SIZE 4

/*
 * This structure should be used to declare and program SP2_LANECTL.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_s {
	uint32_t v[1];
	uint32_t sp2_lanectl[1];
	uint32_t _sp2_lanectl;
} BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_CLR(r) (r).sp2_lanectl[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_SET(r,d) (r).sp2_lanectl[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_GET(r) (r).sp2_lanectl[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_BYPASS_OSMODEf_GET(r) ((((r).sp2_lanectl[0]) >> 10) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_BYPASS_OSMODEf_SET(r,f) (r).sp2_lanectl[0]=(((r).sp2_lanectl[0] & ~((uint32_t)0x1 << 10)) | ((((uint32_t)f) & 0x1) << 10)) | (1 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_RLOOP1Gf_GET(r) ((((r).sp2_lanectl[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_RLOOP1Gf_SET(r,f) (r).sp2_lanectl[0]=(((r).sp2_lanectl[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_GLOOP1Gf_GET(r) ((((r).sp2_lanectl[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_GLOOP1Gf_SET(r,f) (r).sp2_lanectl[0]=(((r).sp2_lanectl[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_PMD_TXDISABLEf_GET(r) ((((r).sp2_lanectl[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_PMD_TXDISABLEf_SET(r,f) (r).sp2_lanectl[0]=(((r).sp2_lanectl[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_EDENf_GET(r) ((((r).sp2_lanectl[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_EDENf_SET(r,f) (r).sp2_lanectl[0]=(((r).sp2_lanectl[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_CDETf_GET(r) ((((r).sp2_lanectl[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_CDETf_SET(r,f) (r).sp2_lanectl[0]=(((r).sp2_lanectl[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_PCS_EN_RXf_GET(r) ((((r).sp2_lanectl[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_PCS_EN_RXf_SET(r,f) (r).sp2_lanectl[0]=(((r).sp2_lanectl[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_PCS_EN_TXf_GET(r) (((r).sp2_lanectl[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_PCS_EN_TXf_SET(r,f) (r).sp2_lanectl[0]=(((r).sp2_lanectl[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_LANECTL.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_LANECTLr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr,(_r._sp2_lanectl))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_LANECTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr,(_r._sp2_lanectl)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_LANECTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr,(_r._sp2_lanectl))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_LANECTLr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_lanectl))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_LANECTLr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_lanectl))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_LANECTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_lanectl))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_LANECTLr BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr
#define SP2_LANECTLr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_t SP2_LANECTLr_t;
#define SP2_LANECTLr_CLR BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_CLR
#define SP2_LANECTLr_SET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_SET
#define SP2_LANECTLr_GET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_GET
#define SP2_LANECTLr_BYPASS_OSMODEf_GET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_BYPASS_OSMODEf_GET
#define SP2_LANECTLr_BYPASS_OSMODEf_SET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_BYPASS_OSMODEf_SET
#define SP2_LANECTLr_RLOOP1Gf_GET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_RLOOP1Gf_GET
#define SP2_LANECTLr_RLOOP1Gf_SET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_RLOOP1Gf_SET
#define SP2_LANECTLr_GLOOP1Gf_GET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_GLOOP1Gf_GET
#define SP2_LANECTLr_GLOOP1Gf_SET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_GLOOP1Gf_SET
#define SP2_LANECTLr_PMD_TXDISABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_PMD_TXDISABLEf_GET
#define SP2_LANECTLr_PMD_TXDISABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_PMD_TXDISABLEf_SET
#define SP2_LANECTLr_EDENf_GET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_EDENf_GET
#define SP2_LANECTLr_EDENf_SET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_EDENf_SET
#define SP2_LANECTLr_CDETf_GET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_CDETf_GET
#define SP2_LANECTLr_CDETf_SET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_CDETf_SET
#define SP2_LANECTLr_PCS_EN_RXf_GET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_PCS_EN_RXf_GET
#define SP2_LANECTLr_PCS_EN_RXf_SET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_PCS_EN_RXf_SET
#define SP2_LANECTLr_PCS_EN_TXf_GET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_PCS_EN_TXf_GET
#define SP2_LANECTLr_PCS_EN_TXf_SET BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr_PCS_EN_TXf_SET
#define READ_SP2_LANECTLr BCMI_SGMIIP2X4_SERDES_READ_SP2_LANECTLr
#define WRITE_SP2_LANECTLr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_LANECTLr
#define MODIFY_SP2_LANECTLr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_LANECTLr
#define READLN_SP2_LANECTLr BCMI_SGMIIP2X4_SERDES_READLN_SP2_LANECTLr
#define WRITELN_SP2_LANECTLr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_LANECTLr
#define WRITEALL_SP2_LANECTLr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_LANECTLr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_LANECTLr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_MODE1G
 * BLOCKS:   CTRL
 * REGADDR:  0x8602
 * DESC:     Mode1G register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     TX1G_MODE        
 *     RX1G_MODE        
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr (0x00008602 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_SIZE 4

/*
 * This structure should be used to declare and program SP2_MODE1G.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_s {
	uint32_t v[1];
	uint32_t sp2_mode1g[1];
	uint32_t _sp2_mode1g;
} BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_CLR(r) (r).sp2_mode1g[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_SET(r,d) (r).sp2_mode1g[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_GET(r) (r).sp2_mode1g[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_RX1G_MODEf_GET(r) ((((r).sp2_mode1g[0]) >> 2) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_RX1G_MODEf_SET(r,f) (r).sp2_mode1g[0]=(((r).sp2_mode1g[0] & ~((uint32_t)0x3 << 2)) | ((((uint32_t)f) & 0x3) << 2)) | (3 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_TX1G_MODEf_GET(r) (((r).sp2_mode1g[0]) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_TX1G_MODEf_SET(r,f) (r).sp2_mode1g[0]=(((r).sp2_mode1g[0] & ~((uint32_t)0x3)) | (((uint32_t)f) & 0x3)) | (0x3 << 16)

/*
 * These macros can be used to access SP2_MODE1G.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_MODE1Gr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr,(_r._sp2_mode1g))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MODE1Gr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr,(_r._sp2_mode1g)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MODE1Gr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr,(_r._sp2_mode1g))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_MODE1Gr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_mode1g))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MODE1Gr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_mode1g))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MODE1Gr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_mode1g))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_MODE1Gr BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr
#define SP2_MODE1Gr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_t SP2_MODE1Gr_t;
#define SP2_MODE1Gr_CLR BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_CLR
#define SP2_MODE1Gr_SET BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_SET
#define SP2_MODE1Gr_GET BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_GET
#define SP2_MODE1Gr_RX1G_MODEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_RX1G_MODEf_GET
#define SP2_MODE1Gr_RX1G_MODEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_RX1G_MODEf_SET
#define SP2_MODE1Gr_TX1G_MODEf_GET BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_TX1G_MODEf_GET
#define SP2_MODE1Gr_TX1G_MODEf_SET BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr_TX1G_MODEf_SET
#define READ_SP2_MODE1Gr BCMI_SGMIIP2X4_SERDES_READ_SP2_MODE1Gr
#define WRITE_SP2_MODE1Gr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_MODE1Gr
#define MODIFY_SP2_MODE1Gr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_MODE1Gr
#define READLN_SP2_MODE1Gr BCMI_SGMIIP2X4_SERDES_READLN_SP2_MODE1Gr
#define WRITELN_SP2_MODE1Gr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_MODE1Gr
#define WRITEALL_SP2_MODE1Gr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_MODE1Gr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_MODE1Gr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_PWRRST
 * BLOCKS:   CTRL
 * REGADDR:  0x8603
 * DESC:     PwrRst register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     PWRDN_TX         
 *     RESET_TX         
 *     PWRDN_RX         
 *     RESET_RX         
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr (0x00008603 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_SIZE 4

/*
 * This structure should be used to declare and program SP2_PWRRST.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_s {
	uint32_t v[1];
	uint32_t sp2_pwrrst[1];
	uint32_t _sp2_pwrrst;
} BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_CLR(r) (r).sp2_pwrrst[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_SET(r,d) (r).sp2_pwrrst[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_GET(r) (r).sp2_pwrrst[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_RESET_RXf_GET(r) ((((r).sp2_pwrrst[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_RESET_RXf_SET(r,f) (r).sp2_pwrrst[0]=(((r).sp2_pwrrst[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_PWRDN_RXf_GET(r) ((((r).sp2_pwrrst[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_PWRDN_RXf_SET(r,f) (r).sp2_pwrrst[0]=(((r).sp2_pwrrst[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_RESET_TXf_GET(r) ((((r).sp2_pwrrst[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_RESET_TXf_SET(r,f) (r).sp2_pwrrst[0]=(((r).sp2_pwrrst[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_PWRDN_TXf_GET(r) (((r).sp2_pwrrst[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_PWRDN_TXf_SET(r,f) (r).sp2_pwrrst[0]=(((r).sp2_pwrrst[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_PWRRST.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_PWRRSTr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr,(_r._sp2_pwrrst))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PWRRSTr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr,(_r._sp2_pwrrst)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PWRRSTr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr,(_r._sp2_pwrrst))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_PWRRSTr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pwrrst))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PWRRSTr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_pwrrst))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PWRRSTr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_pwrrst))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_PWRRSTr BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr
#define SP2_PWRRSTr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_t SP2_PWRRSTr_t;
#define SP2_PWRRSTr_CLR BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_CLR
#define SP2_PWRRSTr_SET BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_SET
#define SP2_PWRRSTr_GET BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_GET
#define SP2_PWRRSTr_RESET_RXf_GET BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_RESET_RXf_GET
#define SP2_PWRRSTr_RESET_RXf_SET BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_RESET_RXf_SET
#define SP2_PWRRSTr_PWRDN_RXf_GET BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_PWRDN_RXf_GET
#define SP2_PWRRSTr_PWRDN_RXf_SET BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_PWRDN_RXf_SET
#define SP2_PWRRSTr_RESET_TXf_GET BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_RESET_TXf_GET
#define SP2_PWRRSTr_RESET_TXf_SET BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_RESET_TXf_SET
#define SP2_PWRRSTr_PWRDN_TXf_GET BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_PWRDN_TXf_GET
#define SP2_PWRRSTr_PWRDN_TXf_SET BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr_PWRDN_TXf_SET
#define READ_SP2_PWRRSTr BCMI_SGMIIP2X4_SERDES_READ_SP2_PWRRSTr
#define WRITE_SP2_PWRRSTr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_PWRRSTr
#define MODIFY_SP2_PWRRSTr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_PWRRSTr
#define READLN_SP2_PWRRSTr BCMI_SGMIIP2X4_SERDES_READLN_SP2_PWRRSTr
#define WRITELN_SP2_PWRRSTr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_PWRRSTr
#define WRITEALL_SP2_PWRRSTr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_PWRRSTr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_PWRRSTr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_AER
 * BLOCKS:   AERBLK
 * REGADDR:  0xffde
 * DESC:     Address Expansion Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     MMD_PORT         Each lane specific register can be accessed by setting MMD_port = AER offset strap + lane number.Also be set to AER broadcast strap (aer_bcst_ofs_strap) to broadcast to all lanes.
 *     MMD_DEVICETYPE   Selects the indicated internal MMD, for a valid DEVAD in the MDIO data stream,MMD device type
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_AERr (0x0000ffde | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_AERr_SIZE 4

/*
 * This structure should be used to declare and program SP2_AER.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_AERr_s {
	uint32_t v[1];
	uint32_t sp2_aer[1];
	uint32_t _sp2_aer;
} BCMI_SGMIIP2X4_SERDES_SP2_AERr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_AERr_CLR(r) (r).sp2_aer[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_AERr_SET(r,d) (r).sp2_aer[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_AERr_GET(r) (r).sp2_aer[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_AERr_MMD_DEVICETYPEf_GET(r) ((((r).sp2_aer[0]) >> 11) & 0x1f)
#define BCMI_SGMIIP2X4_SERDES_SP2_AERr_MMD_DEVICETYPEf_SET(r,f) (r).sp2_aer[0]=(((r).sp2_aer[0] & ~((uint32_t)0x1f << 11)) | ((((uint32_t)f) & 0x1f) << 11)) | (31 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_AERr_MMD_PORTf_GET(r) (((r).sp2_aer[0]) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_AERr_MMD_PORTf_SET(r,f) (r).sp2_aer[0]=(((r).sp2_aer[0] & ~((uint32_t)0x7ff)) | (((uint32_t)f) & 0x7ff)) | (0x7ff << 16)

/*
 * These macros can be used to access SP2_AER.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_AERr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AERr,(_r._sp2_aer))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_AERr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AERr,(_r._sp2_aer)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_AERr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AERr,(_r._sp2_aer))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_AERr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AERr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_aer))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_AERr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AERr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_aer))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_AERr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_AERr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_aer))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_AERr BCMI_SGMIIP2X4_SERDES_SP2_AERr
#define SP2_AERr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_AERr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_AERr_t SP2_AERr_t;
#define SP2_AERr_CLR BCMI_SGMIIP2X4_SERDES_SP2_AERr_CLR
#define SP2_AERr_SET BCMI_SGMIIP2X4_SERDES_SP2_AERr_SET
#define SP2_AERr_GET BCMI_SGMIIP2X4_SERDES_SP2_AERr_GET
#define SP2_AERr_MMD_DEVICETYPEf_GET BCMI_SGMIIP2X4_SERDES_SP2_AERr_MMD_DEVICETYPEf_GET
#define SP2_AERr_MMD_DEVICETYPEf_SET BCMI_SGMIIP2X4_SERDES_SP2_AERr_MMD_DEVICETYPEf_SET
#define SP2_AERr_MMD_PORTf_GET BCMI_SGMIIP2X4_SERDES_SP2_AERr_MMD_PORTf_GET
#define SP2_AERr_MMD_PORTf_SET BCMI_SGMIIP2X4_SERDES_SP2_AERr_MMD_PORTf_SET
#define READ_SP2_AERr BCMI_SGMIIP2X4_SERDES_READ_SP2_AERr
#define WRITE_SP2_AERr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_AERr
#define MODIFY_SP2_AERr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_AERr
#define READLN_SP2_AERr BCMI_SGMIIP2X4_SERDES_READLN_SP2_AERr
#define WRITELN_SP2_AERr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_AERr
#define WRITEALL_SP2_AERr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_AERr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_AERr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_COMBO_MIICTL
 * BLOCKS:   COMBO_IEEE0
 * REGADDR:  0xffe0
 * DESC:     IEEE MII control register
 * RESETVAL: 0x140 (320)
 * ACCESS:   R/W
 * FIELDS:
 *     MANUAL_SPEED1    Bits6 13----1 1 = Reserved1 0 = SGMII 1000 Mb/s0 1 = SGMII 100 Mb/s0 0 = SGMII 10 Mb/sNote: speed1 & speed0 bits for SGMII mode only
 *     COLLISION_TEST_EN 1 = collision test mode enabled0 = collision test mode disabled
 *     DUPLEX           1 = full duplex0 = half duplex
 *     RESTART_AUTONEG  1 = restart auto-negotiation process0 = normal operation
 *     PWRDWN_SW        1 = low power mode0 = normal operation
 *     AUTONEG_ENABLE   1 = auto-negotiation enabled0 = auto-negotiation disabled
 *     MANUAL_SPEED0    Bits6 13----1 1 = Reserved1 0 = SGMII 1000 Mb/s0 1 = SGMII 100 Mb/s0 0 = SGMII 10 Mb/sNote: speed1 & speed0 bits for SGMII mode only
 *     GLOOPBACK        1 = Global loopback mode is enabled (i.e. TX->RX)0 = normal operation
 *     RST_HW           1 = PHY Reset0 = normal operation
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr (0x0000ffe0 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_SIZE 4

/*
 * This structure should be used to declare and program SP2_COMBO_MIICTL.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_s {
	uint32_t v[1];
	uint32_t sp2_combo_miictl[1];
	uint32_t _sp2_combo_miictl;
} BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_CLR(r) (r).sp2_combo_miictl[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_SET(r,d) (r).sp2_combo_miictl[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_GET(r) (r).sp2_combo_miictl[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_RST_HWf_GET(r) ((((r).sp2_combo_miictl[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_RST_HWf_SET(r,f) (r).sp2_combo_miictl[0]=(((r).sp2_combo_miictl[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_GLOOPBACKf_GET(r) ((((r).sp2_combo_miictl[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_GLOOPBACKf_SET(r,f) (r).sp2_combo_miictl[0]=(((r).sp2_combo_miictl[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_MANUAL_SPEED0f_GET(r) ((((r).sp2_combo_miictl[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_MANUAL_SPEED0f_SET(r,f) (r).sp2_combo_miictl[0]=(((r).sp2_combo_miictl[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_AUTONEG_ENABLEf_GET(r) ((((r).sp2_combo_miictl[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_AUTONEG_ENABLEf_SET(r,f) (r).sp2_combo_miictl[0]=(((r).sp2_combo_miictl[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_PWRDWN_SWf_GET(r) ((((r).sp2_combo_miictl[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_PWRDWN_SWf_SET(r,f) (r).sp2_combo_miictl[0]=(((r).sp2_combo_miictl[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_RESTART_AUTONEGf_GET(r) ((((r).sp2_combo_miictl[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_RESTART_AUTONEGf_SET(r,f) (r).sp2_combo_miictl[0]=(((r).sp2_combo_miictl[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_DUPLEXf_GET(r) ((((r).sp2_combo_miictl[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_DUPLEXf_SET(r,f) (r).sp2_combo_miictl[0]=(((r).sp2_combo_miictl[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_COLLISION_TEST_ENf_GET(r) ((((r).sp2_combo_miictl[0]) >> 7) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_COLLISION_TEST_ENf_SET(r,f) (r).sp2_combo_miictl[0]=(((r).sp2_combo_miictl[0] & ~((uint32_t)0x1 << 7)) | ((((uint32_t)f) & 0x1) << 7)) | (1 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_MANUAL_SPEED1f_GET(r) ((((r).sp2_combo_miictl[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_MANUAL_SPEED1f_SET(r,f) (r).sp2_combo_miictl[0]=(((r).sp2_combo_miictl[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))

/*
 * These macros can be used to access SP2_COMBO_MIICTL.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_MIICTLr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr,(_r._sp2_combo_miictl))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_MIICTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr,(_r._sp2_combo_miictl)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_MIICTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr,(_r._sp2_combo_miictl))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_MIICTLr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_miictl))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_MIICTLr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_miictl))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_MIICTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_combo_miictl))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_COMBO_MIICTLr BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr
#define SP2_COMBO_MIICTLr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_t SP2_COMBO_MIICTLr_t;
#define SP2_COMBO_MIICTLr_CLR BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_CLR
#define SP2_COMBO_MIICTLr_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_SET
#define SP2_COMBO_MIICTLr_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_GET
#define SP2_COMBO_MIICTLr_RST_HWf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_RST_HWf_GET
#define SP2_COMBO_MIICTLr_RST_HWf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_RST_HWf_SET
#define SP2_COMBO_MIICTLr_GLOOPBACKf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_GLOOPBACKf_GET
#define SP2_COMBO_MIICTLr_GLOOPBACKf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_GLOOPBACKf_SET
#define SP2_COMBO_MIICTLr_MANUAL_SPEED0f_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_MANUAL_SPEED0f_GET
#define SP2_COMBO_MIICTLr_MANUAL_SPEED0f_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_MANUAL_SPEED0f_SET
#define SP2_COMBO_MIICTLr_AUTONEG_ENABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_AUTONEG_ENABLEf_GET
#define SP2_COMBO_MIICTLr_AUTONEG_ENABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_AUTONEG_ENABLEf_SET
#define SP2_COMBO_MIICTLr_PWRDWN_SWf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_PWRDWN_SWf_GET
#define SP2_COMBO_MIICTLr_PWRDWN_SWf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_PWRDWN_SWf_SET
#define SP2_COMBO_MIICTLr_RESTART_AUTONEGf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_RESTART_AUTONEGf_GET
#define SP2_COMBO_MIICTLr_RESTART_AUTONEGf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_RESTART_AUTONEGf_SET
#define SP2_COMBO_MIICTLr_DUPLEXf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_DUPLEXf_GET
#define SP2_COMBO_MIICTLr_DUPLEXf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_DUPLEXf_SET
#define SP2_COMBO_MIICTLr_COLLISION_TEST_ENf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_COLLISION_TEST_ENf_GET
#define SP2_COMBO_MIICTLr_COLLISION_TEST_ENf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_COLLISION_TEST_ENf_SET
#define SP2_COMBO_MIICTLr_MANUAL_SPEED1f_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_MANUAL_SPEED1f_GET
#define SP2_COMBO_MIICTLr_MANUAL_SPEED1f_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr_MANUAL_SPEED1f_SET
#define READ_SP2_COMBO_MIICTLr BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_MIICTLr
#define WRITE_SP2_COMBO_MIICTLr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_MIICTLr
#define MODIFY_SP2_COMBO_MIICTLr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_MIICTLr
#define READLN_SP2_COMBO_MIICTLr BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_MIICTLr
#define WRITELN_SP2_COMBO_MIICTLr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_MIICTLr
#define WRITEALL_SP2_COMBO_MIICTLr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_MIICTLr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIICTLr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_COMBO_MIISTAT
 * BLOCKS:   COMBO_IEEE0
 * REGADDR:  0xffe1
 * DESC:     IEEE MII status register
 * RESETVAL: 0x109 (265)
 * ACCESS:   R/O
 * FIELDS:
 *     EXTENDED_CAPABILITY 1 = extended register capabilities supported0 = basic register set capabilities only
 *     JABBER_DETECT    1 = jabber condition detected0 = no jabber condition detected
 *     LINK_STATUS      1 = link pass0 = link faillatching-low
 *     AUTONEG_ABILITY  1 = auto-negotiation capable0 = not auto-negotiation capable
 *     REMOTE_FAULT_STAT 1 = remote fault detected0 = no remote fault detectedlatching-high
 *     AUTONEG_COMPLETE 1 = auto-negotiation complete0 = auto-negotiation in progress
 *     MF_PREAMBLE_SUPRESSION 1 = PHY will accept management frames with preamble suppressed0 = PHY will not accept management frames with
 *     EXTENDED_STATUS  1 = extended status information in register 0Fh0 = no extended status info in register 0Fh
 *     S100BASE_T2_HALF_DUPLEX_CAPABLE 1 = 100Base-T2 half duplex capable0 = not 100Base-T2 half duplex capable
 *     S100BASE_T2_FULL_DUPLEX_CAPABLE 1 = 100Base-T2 full duplex capable0 = not 100Base-T2 full duplex capable
 *     S10BASE_T_HALF_DUPLEX_CAPABLE 1 = 10Base-T half duplex capable0 = not 10Base-T half duplex capable
 *     S10BASE_T_FULL_DUPLEX_CAPABLE 1 = 10Base-T full duplex capable0 = not 10Base-T full duplex capable
 *     S100BASE_X_HALF_DUPLEX_CAPABLE 1 = 100Base-X half duplex capable0 = not 100Base-X half duplex capable
 *     S100BASE_X_FULL_DUPLEX_CAPABLE 1 = 100Base-X full duplex capable0 = not 100Base-X full duplex capable
 *     S100BASE_T4_CAPABLE 1 = 100Base-T4 capable0 = not 100Base-T4 capable
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr (0x0000ffe1 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_SIZE 4

/*
 * This structure should be used to declare and program SP2_COMBO_MIISTAT.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_s {
	uint32_t v[1];
	uint32_t sp2_combo_miistat[1];
	uint32_t _sp2_combo_miistat;
} BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_CLR(r) (r).sp2_combo_miistat[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_SET(r,d) (r).sp2_combo_miistat[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_GET(r) (r).sp2_combo_miistat[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_T4_CAPABLEf_GET(r) ((((r).sp2_combo_miistat[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_T4_CAPABLEf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_X_FULL_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_combo_miistat[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_X_FULL_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_X_HALF_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_combo_miistat[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_X_HALF_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S10BASE_T_FULL_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_combo_miistat[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S10BASE_T_FULL_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S10BASE_T_HALF_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_combo_miistat[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S10BASE_T_HALF_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_T2_FULL_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_combo_miistat[0]) >> 10) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_T2_FULL_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1 << 10)) | ((((uint32_t)f) & 0x1) << 10)) | (1 << (16 + 10))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_T2_HALF_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_combo_miistat[0]) >> 9) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_T2_HALF_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1 << 9)) | ((((uint32_t)f) & 0x1) << 9)) | (1 << (16 + 9))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_EXTENDED_STATUSf_GET(r) ((((r).sp2_combo_miistat[0]) >> 8) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_EXTENDED_STATUSf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1 << 8)) | ((((uint32_t)f) & 0x1) << 8)) | (1 << (16 + 8))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_MF_PREAMBLE_SUPRESSIONf_GET(r) ((((r).sp2_combo_miistat[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_MF_PREAMBLE_SUPRESSIONf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_AUTONEG_COMPLETEf_GET(r) ((((r).sp2_combo_miistat[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_AUTONEG_COMPLETEf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_REMOTE_FAULT_STATf_GET(r) ((((r).sp2_combo_miistat[0]) >> 4) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_REMOTE_FAULT_STATf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1 << 4)) | ((((uint32_t)f) & 0x1) << 4)) | (1 << (16 + 4))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_AUTONEG_ABILITYf_GET(r) ((((r).sp2_combo_miistat[0]) >> 3) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_AUTONEG_ABILITYf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3)) | (1 << (16 + 3))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_LINK_STATUSf_GET(r) ((((r).sp2_combo_miistat[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_LINK_STATUSf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_JABBER_DETECTf_GET(r) ((((r).sp2_combo_miistat[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_JABBER_DETECTf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_EXTENDED_CAPABILITYf_GET(r) (((r).sp2_combo_miistat[0]) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_EXTENDED_CAPABILITYf_SET(r,f) (r).sp2_combo_miistat[0]=(((r).sp2_combo_miistat[0] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1)) | (0x1 << 16)

/*
 * These macros can be used to access SP2_COMBO_MIISTAT.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_MIISTATr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr,(_r._sp2_combo_miistat))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_MIISTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr,(_r._sp2_combo_miistat)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_MIISTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr,(_r._sp2_combo_miistat))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_MIISTATr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_miistat))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_MIISTATr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_miistat))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_MIISTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_combo_miistat))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_COMBO_MIISTATr BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr
#define SP2_COMBO_MIISTATr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_t SP2_COMBO_MIISTATr_t;
#define SP2_COMBO_MIISTATr_CLR BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_CLR
#define SP2_COMBO_MIISTATr_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_SET
#define SP2_COMBO_MIISTATr_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_GET
#define SP2_COMBO_MIISTATr_S100BASE_T4_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_T4_CAPABLEf_GET
#define SP2_COMBO_MIISTATr_S100BASE_T4_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_T4_CAPABLEf_SET
#define SP2_COMBO_MIISTATr_S100BASE_X_FULL_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_X_FULL_DUPLEX_CAPABLEf_GET
#define SP2_COMBO_MIISTATr_S100BASE_X_FULL_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_X_FULL_DUPLEX_CAPABLEf_SET
#define SP2_COMBO_MIISTATr_S100BASE_X_HALF_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_X_HALF_DUPLEX_CAPABLEf_GET
#define SP2_COMBO_MIISTATr_S100BASE_X_HALF_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_X_HALF_DUPLEX_CAPABLEf_SET
#define SP2_COMBO_MIISTATr_S10BASE_T_FULL_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S10BASE_T_FULL_DUPLEX_CAPABLEf_GET
#define SP2_COMBO_MIISTATr_S10BASE_T_FULL_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S10BASE_T_FULL_DUPLEX_CAPABLEf_SET
#define SP2_COMBO_MIISTATr_S10BASE_T_HALF_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S10BASE_T_HALF_DUPLEX_CAPABLEf_GET
#define SP2_COMBO_MIISTATr_S10BASE_T_HALF_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S10BASE_T_HALF_DUPLEX_CAPABLEf_SET
#define SP2_COMBO_MIISTATr_S100BASE_T2_FULL_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_T2_FULL_DUPLEX_CAPABLEf_GET
#define SP2_COMBO_MIISTATr_S100BASE_T2_FULL_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_T2_FULL_DUPLEX_CAPABLEf_SET
#define SP2_COMBO_MIISTATr_S100BASE_T2_HALF_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_T2_HALF_DUPLEX_CAPABLEf_GET
#define SP2_COMBO_MIISTATr_S100BASE_T2_HALF_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_S100BASE_T2_HALF_DUPLEX_CAPABLEf_SET
#define SP2_COMBO_MIISTATr_EXTENDED_STATUSf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_EXTENDED_STATUSf_GET
#define SP2_COMBO_MIISTATr_EXTENDED_STATUSf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_EXTENDED_STATUSf_SET
#define SP2_COMBO_MIISTATr_MF_PREAMBLE_SUPRESSIONf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_MF_PREAMBLE_SUPRESSIONf_GET
#define SP2_COMBO_MIISTATr_MF_PREAMBLE_SUPRESSIONf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_MF_PREAMBLE_SUPRESSIONf_SET
#define SP2_COMBO_MIISTATr_AUTONEG_COMPLETEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_AUTONEG_COMPLETEf_GET
#define SP2_COMBO_MIISTATr_AUTONEG_COMPLETEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_AUTONEG_COMPLETEf_SET
#define SP2_COMBO_MIISTATr_REMOTE_FAULT_STATf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_REMOTE_FAULT_STATf_GET
#define SP2_COMBO_MIISTATr_REMOTE_FAULT_STATf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_REMOTE_FAULT_STATf_SET
#define SP2_COMBO_MIISTATr_AUTONEG_ABILITYf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_AUTONEG_ABILITYf_GET
#define SP2_COMBO_MIISTATr_AUTONEG_ABILITYf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_AUTONEG_ABILITYf_SET
#define SP2_COMBO_MIISTATr_LINK_STATUSf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_LINK_STATUSf_GET
#define SP2_COMBO_MIISTATr_LINK_STATUSf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_LINK_STATUSf_SET
#define SP2_COMBO_MIISTATr_JABBER_DETECTf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_JABBER_DETECTf_GET
#define SP2_COMBO_MIISTATr_JABBER_DETECTf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_JABBER_DETECTf_SET
#define SP2_COMBO_MIISTATr_EXTENDED_CAPABILITYf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_EXTENDED_CAPABILITYf_GET
#define SP2_COMBO_MIISTATr_EXTENDED_CAPABILITYf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr_EXTENDED_CAPABILITYf_SET
#define READ_SP2_COMBO_MIISTATr BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_MIISTATr
#define WRITE_SP2_COMBO_MIISTATr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_MIISTATr
#define MODIFY_SP2_COMBO_MIISTATr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_MIISTATr
#define READLN_SP2_COMBO_MIISTATr BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_MIISTATr
#define WRITELN_SP2_COMBO_MIISTATr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_MIISTATr
#define WRITEALL_SP2_COMBO_MIISTATr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_MIISTATr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIISTATr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_COMBO_ID1
 * BLOCKS:   COMBO_IEEE0
 * REGADDR:  0xffe2
 * DESC:     IEEE phy ID LSByte register
 * RESETVAL: 0x143 (323)
 * ACCESS:   R/O
 * FIELDS:
 *     REGID            PHYID register, MSB
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r (0x0000ffe2 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_SIZE 4

/*
 * This structure should be used to declare and program SP2_COMBO_ID1.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_s {
	uint32_t v[1];
	uint32_t sp2_combo_id1[1];
	uint32_t _sp2_combo_id1;
} BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_CLR(r) (r).sp2_combo_id1[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_SET(r,d) (r).sp2_combo_id1[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_GET(r) (r).sp2_combo_id1[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_REGIDf_GET(r) (((r).sp2_combo_id1[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_REGIDf_SET(r,f) (r).sp2_combo_id1[0]=(((r).sp2_combo_id1[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_COMBO_ID1.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_ID1r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r,(_r._sp2_combo_id1))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_ID1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r,(_r._sp2_combo_id1)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_ID1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r,(_r._sp2_combo_id1))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_ID1r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_id1))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_ID1r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_id1))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_ID1r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_combo_id1))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_COMBO_ID1r BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r
#define SP2_COMBO_ID1r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_t SP2_COMBO_ID1r_t;
#define SP2_COMBO_ID1r_CLR BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_CLR
#define SP2_COMBO_ID1r_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_SET
#define SP2_COMBO_ID1r_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_GET
#define SP2_COMBO_ID1r_REGIDf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_REGIDf_GET
#define SP2_COMBO_ID1r_REGIDf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r_REGIDf_SET
#define READ_SP2_COMBO_ID1r BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_ID1r
#define WRITE_SP2_COMBO_ID1r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_ID1r
#define MODIFY_SP2_COMBO_ID1r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_ID1r
#define READLN_SP2_COMBO_ID1r BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_ID1r
#define WRITELN_SP2_COMBO_ID1r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_ID1r
#define WRITEALL_SP2_COMBO_ID1r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_ID1r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID1r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_COMBO_ID2
 * BLOCKS:   COMBO_IEEE0
 * REGADDR:  0xffe3
 * DESC:     IEEE phy ID MSByte register
 * RESETVAL: 0xbff0 (49136)
 * ACCESS:   R/O
 * FIELDS:
 *     REGID            PHYID register, LSB
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r (0x0000ffe3 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_COMBO_ID2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_s {
	uint32_t v[1];
	uint32_t sp2_combo_id2[1];
	uint32_t _sp2_combo_id2;
} BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_CLR(r) (r).sp2_combo_id2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_SET(r,d) (r).sp2_combo_id2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_GET(r) (r).sp2_combo_id2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_REGIDf_GET(r) (((r).sp2_combo_id2[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_REGIDf_SET(r,f) (r).sp2_combo_id2[0]=(((r).sp2_combo_id2[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_COMBO_ID2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_ID2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r,(_r._sp2_combo_id2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_ID2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r,(_r._sp2_combo_id2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_ID2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r,(_r._sp2_combo_id2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_ID2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_id2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_ID2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_id2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_ID2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_combo_id2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_COMBO_ID2r BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r
#define SP2_COMBO_ID2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_t SP2_COMBO_ID2r_t;
#define SP2_COMBO_ID2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_CLR
#define SP2_COMBO_ID2r_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_SET
#define SP2_COMBO_ID2r_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_GET
#define SP2_COMBO_ID2r_REGIDf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_REGIDf_GET
#define SP2_COMBO_ID2r_REGIDf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r_REGIDf_SET
#define READ_SP2_COMBO_ID2r BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_ID2r
#define WRITE_SP2_COMBO_ID2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_ID2r
#define MODIFY_SP2_COMBO_ID2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_ID2r
#define READLN_SP2_COMBO_ID2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_ID2r
#define WRITELN_SP2_COMBO_ID2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_ID2r
#define WRITEALL_SP2_COMBO_ID2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_ID2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_COMBO_ID2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_COMBO_AUTONEGADV
 * BLOCKS:   COMBO_IEEE0
 * REGADDR:  0xffe4
 * DESC:     IEEE auto-negotiation advertised abilities register
 * RESETVAL: 0x20 (32)
 * ACCESS:   R/W
 * FIELDS:
 *     FULL_DUPLEX      1 = advertise full-duplex0 = do not advertise full-duplex
 *     HALF_DUPLEX      1 = advertise half-duplex0 = do not advertise half-duplex
 *     PAUSE            Bits8 7---0 0 = no pause0 1 = symmetric pause1 0 = asymmetric pause toward link partner1 1 = both symmetric pause and asymmetricpause toward local device
 *     REMOTE_FAULT     Bits13 12-----0 0 = no_remote_fault0 1 = link_failure1 0 = offline1 1 = autoneg_error
 *     NEXT_PAGE        1 = supports additional pages using NP function0 = does not support additional pages using NP function
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr (0x0000ffe4 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_SIZE 4

/*
 * This structure should be used to declare and program SP2_COMBO_AUTONEGADV.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_s {
	uint32_t v[1];
	uint32_t sp2_combo_autonegadv[1];
	uint32_t _sp2_combo_autonegadv;
} BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_CLR(r) (r).sp2_combo_autonegadv[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_SET(r,d) (r).sp2_combo_autonegadv[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_GET(r) (r).sp2_combo_autonegadv[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_NEXT_PAGEf_GET(r) ((((r).sp2_combo_autonegadv[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_NEXT_PAGEf_SET(r,f) (r).sp2_combo_autonegadv[0]=(((r).sp2_combo_autonegadv[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_REMOTE_FAULTf_GET(r) ((((r).sp2_combo_autonegadv[0]) >> 12) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_REMOTE_FAULTf_SET(r,f) (r).sp2_combo_autonegadv[0]=(((r).sp2_combo_autonegadv[0] & ~((uint32_t)0x3 << 12)) | ((((uint32_t)f) & 0x3) << 12)) | (3 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_PAUSEf_GET(r) ((((r).sp2_combo_autonegadv[0]) >> 7) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_PAUSEf_SET(r,f) (r).sp2_combo_autonegadv[0]=(((r).sp2_combo_autonegadv[0] & ~((uint32_t)0x3 << 7)) | ((((uint32_t)f) & 0x3) << 7)) | (3 << (16 + 7))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_HALF_DUPLEXf_GET(r) ((((r).sp2_combo_autonegadv[0]) >> 6) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_HALF_DUPLEXf_SET(r,f) (r).sp2_combo_autonegadv[0]=(((r).sp2_combo_autonegadv[0] & ~((uint32_t)0x1 << 6)) | ((((uint32_t)f) & 0x1) << 6)) | (1 << (16 + 6))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_FULL_DUPLEXf_GET(r) ((((r).sp2_combo_autonegadv[0]) >> 5) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_FULL_DUPLEXf_SET(r,f) (r).sp2_combo_autonegadv[0]=(((r).sp2_combo_autonegadv[0] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5)) | (1 << (16 + 5))

/*
 * These macros can be used to access SP2_COMBO_AUTONEGADV.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_AUTONEGADVr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr,(_r._sp2_combo_autonegadv))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_AUTONEGADVr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr,(_r._sp2_combo_autonegadv)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_AUTONEGADVr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr,(_r._sp2_combo_autonegadv))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_AUTONEGADVr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_autonegadv))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_AUTONEGADVr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_autonegadv))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_AUTONEGADVr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_combo_autonegadv))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_COMBO_AUTONEGADVr BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr
#define SP2_COMBO_AUTONEGADVr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_t SP2_COMBO_AUTONEGADVr_t;
#define SP2_COMBO_AUTONEGADVr_CLR BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_CLR
#define SP2_COMBO_AUTONEGADVr_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_SET
#define SP2_COMBO_AUTONEGADVr_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_GET
#define SP2_COMBO_AUTONEGADVr_NEXT_PAGEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_NEXT_PAGEf_GET
#define SP2_COMBO_AUTONEGADVr_NEXT_PAGEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_NEXT_PAGEf_SET
#define SP2_COMBO_AUTONEGADVr_REMOTE_FAULTf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_REMOTE_FAULTf_GET
#define SP2_COMBO_AUTONEGADVr_REMOTE_FAULTf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_REMOTE_FAULTf_SET
#define SP2_COMBO_AUTONEGADVr_PAUSEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_PAUSEf_GET
#define SP2_COMBO_AUTONEGADVr_PAUSEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_PAUSEf_SET
#define SP2_COMBO_AUTONEGADVr_HALF_DUPLEXf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_HALF_DUPLEXf_GET
#define SP2_COMBO_AUTONEGADVr_HALF_DUPLEXf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_HALF_DUPLEXf_SET
#define SP2_COMBO_AUTONEGADVr_FULL_DUPLEXf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_FULL_DUPLEXf_GET
#define SP2_COMBO_AUTONEGADVr_FULL_DUPLEXf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr_FULL_DUPLEXf_SET
#define READ_SP2_COMBO_AUTONEGADVr BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_AUTONEGADVr
#define WRITE_SP2_COMBO_AUTONEGADVr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_AUTONEGADVr
#define MODIFY_SP2_COMBO_AUTONEGADVr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_AUTONEGADVr
#define READLN_SP2_COMBO_AUTONEGADVr BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_AUTONEGADVr
#define WRITELN_SP2_COMBO_AUTONEGADVr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_AUTONEGADVr
#define WRITEALL_SP2_COMBO_AUTONEGADVr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_AUTONEGADVr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGADVr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_COMBO_AUTONEGLPABIL
 * BLOCKS:   COMBO_IEEE0
 * REGADDR:  0xffe5
 * DESC:     IEEE auto-negotiation link partner abilities register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/O
 * FIELDS:
 *     MR_LP_ADV_ABILITY bit15, next page, 1 = link partner is next page ablebit14, ack, 1 = link partner has received link code wordbit13:12, lp remote faultbit8:7, lp pausebit6, 1 = link partner is half-duplex capablebit5, 1 = link partner is full duplex capablebit0, 1 = SGMII mode, 0 = fiber modeNote: When the link partner is in SGMII mode (bit 0 = 1), then bit 15 = link, bit 12 = duplex, bits 11:10 = speed, bit 14 = acknowledge. The other bits are reserved and should be zero.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr (0x0000ffe5 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_SIZE 4

/*
 * This structure should be used to declare and program SP2_COMBO_AUTONEGLPABIL.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_s {
	uint32_t v[1];
	uint32_t sp2_combo_autoneglpabil[1];
	uint32_t _sp2_combo_autoneglpabil;
} BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_CLR(r) (r).sp2_combo_autoneglpabil[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_SET(r,d) (r).sp2_combo_autoneglpabil[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_GET(r) (r).sp2_combo_autoneglpabil[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_MR_LP_ADV_ABILITYf_GET(r) (((r).sp2_combo_autoneglpabil[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_MR_LP_ADV_ABILITYf_SET(r,f) (r).sp2_combo_autoneglpabil[0]=(((r).sp2_combo_autoneglpabil[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_COMBO_AUTONEGLPABIL.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_AUTONEGLPABILr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr,(_r._sp2_combo_autoneglpabil))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_AUTONEGLPABILr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr,(_r._sp2_combo_autoneglpabil)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_AUTONEGLPABILr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr,(_r._sp2_combo_autoneglpabil))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_AUTONEGLPABILr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_autoneglpabil))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_AUTONEGLPABILr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_autoneglpabil))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_AUTONEGLPABILr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_combo_autoneglpabil))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_COMBO_AUTONEGLPABILr BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr
#define SP2_COMBO_AUTONEGLPABILr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_t SP2_COMBO_AUTONEGLPABILr_t;
#define SP2_COMBO_AUTONEGLPABILr_CLR BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_CLR
#define SP2_COMBO_AUTONEGLPABILr_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_SET
#define SP2_COMBO_AUTONEGLPABILr_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_GET
#define SP2_COMBO_AUTONEGLPABILr_MR_LP_ADV_ABILITYf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_MR_LP_ADV_ABILITYf_GET
#define SP2_COMBO_AUTONEGLPABILr_MR_LP_ADV_ABILITYf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr_MR_LP_ADV_ABILITYf_SET
#define READ_SP2_COMBO_AUTONEGLPABILr BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_AUTONEGLPABILr
#define WRITE_SP2_COMBO_AUTONEGLPABILr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_AUTONEGLPABILr
#define MODIFY_SP2_COMBO_AUTONEGLPABILr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_AUTONEGLPABILr
#define READLN_SP2_COMBO_AUTONEGLPABILr BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_AUTONEGLPABILr
#define WRITELN_SP2_COMBO_AUTONEGLPABILr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_AUTONEGLPABILr
#define WRITEALL_SP2_COMBO_AUTONEGLPABILr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_AUTONEGLPABILr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABILr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_COMBO_AUTONEGEXP
 * BLOCKS:   COMBO_IEEE0
 * REGADDR:  0xffe6
 * DESC:     IEEE auto-negotiation expansion register
 * RESETVAL: 0x4 (4)
 * ACCESS:   R/O
 * FIELDS:
 *     LATCH_PAGE_RX    1 = new link code word has been received0 = new link code word has not been received
 *     NEXT_PAGE_ABILITY 1 = local device is next page able0 = local device is not next page able
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr (0x0000ffe6 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_SIZE 4

/*
 * This structure should be used to declare and program SP2_COMBO_AUTONEGEXP.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_s {
	uint32_t v[1];
	uint32_t sp2_combo_autonegexp[1];
	uint32_t _sp2_combo_autonegexp;
} BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_CLR(r) (r).sp2_combo_autonegexp[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_SET(r,d) (r).sp2_combo_autonegexp[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_GET(r) (r).sp2_combo_autonegexp[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_NEXT_PAGE_ABILITYf_GET(r) ((((r).sp2_combo_autonegexp[0]) >> 2) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_NEXT_PAGE_ABILITYf_SET(r,f) (r).sp2_combo_autonegexp[0]=(((r).sp2_combo_autonegexp[0] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2)) | (1 << (16 + 2))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_LATCH_PAGE_RXf_GET(r) ((((r).sp2_combo_autonegexp[0]) >> 1) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_LATCH_PAGE_RXf_SET(r,f) (r).sp2_combo_autonegexp[0]=(((r).sp2_combo_autonegexp[0] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1)) | (1 << (16 + 1))

/*
 * These macros can be used to access SP2_COMBO_AUTONEGEXP.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_AUTONEGEXPr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr,(_r._sp2_combo_autonegexp))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_AUTONEGEXPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr,(_r._sp2_combo_autonegexp)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_AUTONEGEXPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr,(_r._sp2_combo_autonegexp))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_AUTONEGEXPr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_autonegexp))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_AUTONEGEXPr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_autonegexp))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_AUTONEGEXPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_combo_autonegexp))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_COMBO_AUTONEGEXPr BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr
#define SP2_COMBO_AUTONEGEXPr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_t SP2_COMBO_AUTONEGEXPr_t;
#define SP2_COMBO_AUTONEGEXPr_CLR BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_CLR
#define SP2_COMBO_AUTONEGEXPr_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_SET
#define SP2_COMBO_AUTONEGEXPr_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_GET
#define SP2_COMBO_AUTONEGEXPr_NEXT_PAGE_ABILITYf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_NEXT_PAGE_ABILITYf_GET
#define SP2_COMBO_AUTONEGEXPr_NEXT_PAGE_ABILITYf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_NEXT_PAGE_ABILITYf_SET
#define SP2_COMBO_AUTONEGEXPr_LATCH_PAGE_RXf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_LATCH_PAGE_RXf_GET
#define SP2_COMBO_AUTONEGEXPr_LATCH_PAGE_RXf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr_LATCH_PAGE_RXf_SET
#define READ_SP2_COMBO_AUTONEGEXPr BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_AUTONEGEXPr
#define WRITE_SP2_COMBO_AUTONEGEXPr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_AUTONEGEXPr
#define MODIFY_SP2_COMBO_AUTONEGEXPr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_AUTONEGEXPr
#define READLN_SP2_COMBO_AUTONEGEXPr BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_AUTONEGEXPr
#define WRITELN_SP2_COMBO_AUTONEGEXPr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_AUTONEGEXPr
#define WRITEALL_SP2_COMBO_AUTONEGEXPr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_AUTONEGEXPr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGEXPr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_COMBO_AUTONEGNP
 * BLOCKS:   COMBO_IEEE0
 * REGADDR:  0xffe7
 * DESC:     IEEE auto-negotiation next page register
 * RESETVAL: 0x2001 (8193)
 * ACCESS:   R/W
 * FIELDS:
 *     MESSAGE          Message or Unformatted Code Field11'h400 = Over 1G Message Page11'h410 = Remote CuPHY Message Page11'h411 = MDIO Register Write Message Page11'h412 = MDIO Register Read Request Message Page11'h413 = MDIO Register Response Message PageSee IEEE 802.3 Annex 28C for more standard next page detailsSee BRCM-Serdes-AN for BAM specific details
 *     TOGGLE           Opposite value of bit in previous page
 *     ACK2             Acknowledge 2 bit
 *     MESSAGE_PAGE     0 = Unformatted Page1 = Message Page
 *     ACK              Acknowledge bit
 *     NEXT_PAGE        0 = last page1 = additional next page(s) follow
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr (0x0000ffe7 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_SIZE 4

/*
 * This structure should be used to declare and program SP2_COMBO_AUTONEGNP.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_s {
	uint32_t v[1];
	uint32_t sp2_combo_autonegnp[1];
	uint32_t _sp2_combo_autonegnp;
} BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_CLR(r) (r).sp2_combo_autonegnp[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_SET(r,d) (r).sp2_combo_autonegnp[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_GET(r) (r).sp2_combo_autonegnp[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_NEXT_PAGEf_GET(r) ((((r).sp2_combo_autonegnp[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_NEXT_PAGEf_SET(r,f) (r).sp2_combo_autonegnp[0]=(((r).sp2_combo_autonegnp[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_ACKf_GET(r) ((((r).sp2_combo_autonegnp[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_ACKf_SET(r,f) (r).sp2_combo_autonegnp[0]=(((r).sp2_combo_autonegnp[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_MESSAGE_PAGEf_GET(r) ((((r).sp2_combo_autonegnp[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_MESSAGE_PAGEf_SET(r,f) (r).sp2_combo_autonegnp[0]=(((r).sp2_combo_autonegnp[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_ACK2f_GET(r) ((((r).sp2_combo_autonegnp[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_ACK2f_SET(r,f) (r).sp2_combo_autonegnp[0]=(((r).sp2_combo_autonegnp[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_TOGGLEf_GET(r) ((((r).sp2_combo_autonegnp[0]) >> 11) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_TOGGLEf_SET(r,f) (r).sp2_combo_autonegnp[0]=(((r).sp2_combo_autonegnp[0] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11)) | (1 << (16 + 11))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_MESSAGEf_GET(r) (((r).sp2_combo_autonegnp[0]) & 0x7ff)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_MESSAGEf_SET(r,f) (r).sp2_combo_autonegnp[0]=(((r).sp2_combo_autonegnp[0] & ~((uint32_t)0x7ff)) | (((uint32_t)f) & 0x7ff)) | (0x7ff << 16)

/*
 * These macros can be used to access SP2_COMBO_AUTONEGNP.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_AUTONEGNPr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr,(_r._sp2_combo_autonegnp))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_AUTONEGNPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr,(_r._sp2_combo_autonegnp)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_AUTONEGNPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr,(_r._sp2_combo_autonegnp))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_AUTONEGNPr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_autonegnp))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_AUTONEGNPr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_autonegnp))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_AUTONEGNPr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_combo_autonegnp))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_COMBO_AUTONEGNPr BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr
#define SP2_COMBO_AUTONEGNPr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_t SP2_COMBO_AUTONEGNPr_t;
#define SP2_COMBO_AUTONEGNPr_CLR BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_CLR
#define SP2_COMBO_AUTONEGNPr_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_SET
#define SP2_COMBO_AUTONEGNPr_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_GET
#define SP2_COMBO_AUTONEGNPr_NEXT_PAGEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_NEXT_PAGEf_GET
#define SP2_COMBO_AUTONEGNPr_NEXT_PAGEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_NEXT_PAGEf_SET
#define SP2_COMBO_AUTONEGNPr_ACKf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_ACKf_GET
#define SP2_COMBO_AUTONEGNPr_ACKf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_ACKf_SET
#define SP2_COMBO_AUTONEGNPr_MESSAGE_PAGEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_MESSAGE_PAGEf_GET
#define SP2_COMBO_AUTONEGNPr_MESSAGE_PAGEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_MESSAGE_PAGEf_SET
#define SP2_COMBO_AUTONEGNPr_ACK2f_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_ACK2f_GET
#define SP2_COMBO_AUTONEGNPr_ACK2f_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_ACK2f_SET
#define SP2_COMBO_AUTONEGNPr_TOGGLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_TOGGLEf_GET
#define SP2_COMBO_AUTONEGNPr_TOGGLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_TOGGLEf_SET
#define SP2_COMBO_AUTONEGNPr_MESSAGEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_MESSAGEf_GET
#define SP2_COMBO_AUTONEGNPr_MESSAGEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr_MESSAGEf_SET
#define READ_SP2_COMBO_AUTONEGNPr BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_AUTONEGNPr
#define WRITE_SP2_COMBO_AUTONEGNPr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_AUTONEGNPr
#define MODIFY_SP2_COMBO_AUTONEGNPr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_AUTONEGNPr
#define READLN_SP2_COMBO_AUTONEGNPr BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_AUTONEGNPr
#define WRITELN_SP2_COMBO_AUTONEGNPr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_AUTONEGNPr
#define WRITEALL_SP2_COMBO_AUTONEGNPr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_AUTONEGNPr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGNPr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_COMBO_AUTONEGLPABIL2
 * BLOCKS:   COMBO_IEEE0
 * REGADDR:  0xffe8
 * DESC:     IEEE auto-negotiation link partner next page register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/O
 * FIELDS:
 *     MR_LP_NP_RX_O    bit15, next page, 0 = last page, 1 = additional next page(s) followbit14, ack, 1 = link partner has received next pagebit13, msg page, 1 = message pagebit12, ack2bit11, toggle, Opposite value of bit in previous pagebit10:0, Message or Unformatted Code Field
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r (0x0000ffe8 | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_SIZE 4

/*
 * This structure should be used to declare and program SP2_COMBO_AUTONEGLPABIL2.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_s {
	uint32_t v[1];
	uint32_t sp2_combo_autoneglpabil2[1];
	uint32_t _sp2_combo_autoneglpabil2;
} BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_CLR(r) (r).sp2_combo_autoneglpabil2[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_SET(r,d) (r).sp2_combo_autoneglpabil2[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_GET(r) (r).sp2_combo_autoneglpabil2[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_MR_LP_NP_RX_Of_GET(r) (((r).sp2_combo_autoneglpabil2[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_MR_LP_NP_RX_Of_SET(r,f) (r).sp2_combo_autoneglpabil2[0]=(((r).sp2_combo_autoneglpabil2[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_COMBO_AUTONEGLPABIL2.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_AUTONEGLPABIL2r(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r,(_r._sp2_combo_autoneglpabil2))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_AUTONEGLPABIL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r,(_r._sp2_combo_autoneglpabil2)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_AUTONEGLPABIL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r,(_r._sp2_combo_autoneglpabil2))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_AUTONEGLPABIL2r(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_autoneglpabil2))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_AUTONEGLPABIL2r(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_autoneglpabil2))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_AUTONEGLPABIL2r(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_combo_autoneglpabil2))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_COMBO_AUTONEGLPABIL2r BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r
#define SP2_COMBO_AUTONEGLPABIL2r_SIZE BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_t SP2_COMBO_AUTONEGLPABIL2r_t;
#define SP2_COMBO_AUTONEGLPABIL2r_CLR BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_CLR
#define SP2_COMBO_AUTONEGLPABIL2r_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_SET
#define SP2_COMBO_AUTONEGLPABIL2r_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_GET
#define SP2_COMBO_AUTONEGLPABIL2r_MR_LP_NP_RX_Of_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_MR_LP_NP_RX_Of_GET
#define SP2_COMBO_AUTONEGLPABIL2r_MR_LP_NP_RX_Of_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r_MR_LP_NP_RX_Of_SET
#define READ_SP2_COMBO_AUTONEGLPABIL2r BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_AUTONEGLPABIL2r
#define WRITE_SP2_COMBO_AUTONEGLPABIL2r BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_AUTONEGLPABIL2r
#define MODIFY_SP2_COMBO_AUTONEGLPABIL2r BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_AUTONEGLPABIL2r
#define READLN_SP2_COMBO_AUTONEGLPABIL2r BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_AUTONEGLPABIL2r
#define WRITELN_SP2_COMBO_AUTONEGLPABIL2r BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_AUTONEGLPABIL2r
#define WRITEALL_SP2_COMBO_AUTONEGLPABIL2r BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_AUTONEGLPABIL2r

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_COMBO_AUTONEGLPABIL2r'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_COMBO_MMD_ACCCTL
 * BLOCKS:   COMBO_IEEE0
 * REGADDR:  0xffed
 * DESC:     IEEE MMD Access Control Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     DEVAD            device address
 *     INCREMENT_CTRL   00 = address01 = data, no post increment10 = data, post increment on reads and writes11 = data, post increment on writes only0 = not 1000Base-X full duplex capable
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr (0x0000ffed | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_SIZE 4

/*
 * This structure should be used to declare and program SP2_COMBO_MMD_ACCCTL.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_s {
	uint32_t v[1];
	uint32_t sp2_combo_mmd_accctl[1];
	uint32_t _sp2_combo_mmd_accctl;
} BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_CLR(r) (r).sp2_combo_mmd_accctl[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_SET(r,d) (r).sp2_combo_mmd_accctl[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_GET(r) (r).sp2_combo_mmd_accctl[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_INCREMENT_CTRLf_GET(r) ((((r).sp2_combo_mmd_accctl[0]) >> 14) & 0x3)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_INCREMENT_CTRLf_SET(r,f) (r).sp2_combo_mmd_accctl[0]=(((r).sp2_combo_mmd_accctl[0] & ~((uint32_t)0x3 << 14)) | ((((uint32_t)f) & 0x3) << 14)) | (3 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_DEVADf_GET(r) (((r).sp2_combo_mmd_accctl[0]) & 0x1f)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_DEVADf_SET(r,f) (r).sp2_combo_mmd_accctl[0]=(((r).sp2_combo_mmd_accctl[0] & ~((uint32_t)0x1f)) | (((uint32_t)f) & 0x1f)) | (0x1f << 16)

/*
 * These macros can be used to access SP2_COMBO_MMD_ACCCTL.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_MMD_ACCCTLr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr,(_r._sp2_combo_mmd_accctl))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_MMD_ACCCTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr,(_r._sp2_combo_mmd_accctl)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_MMD_ACCCTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr,(_r._sp2_combo_mmd_accctl))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_MMD_ACCCTLr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_mmd_accctl))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_MMD_ACCCTLr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_mmd_accctl))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_MMD_ACCCTLr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_combo_mmd_accctl))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_COMBO_MMD_ACCCTLr BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr
#define SP2_COMBO_MMD_ACCCTLr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_t SP2_COMBO_MMD_ACCCTLr_t;
#define SP2_COMBO_MMD_ACCCTLr_CLR BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_CLR
#define SP2_COMBO_MMD_ACCCTLr_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_SET
#define SP2_COMBO_MMD_ACCCTLr_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_GET
#define SP2_COMBO_MMD_ACCCTLr_INCREMENT_CTRLf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_INCREMENT_CTRLf_GET
#define SP2_COMBO_MMD_ACCCTLr_INCREMENT_CTRLf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_INCREMENT_CTRLf_SET
#define SP2_COMBO_MMD_ACCCTLr_DEVADf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_DEVADf_GET
#define SP2_COMBO_MMD_ACCCTLr_DEVADf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr_DEVADf_SET
#define READ_SP2_COMBO_MMD_ACCCTLr BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_MMD_ACCCTLr
#define WRITE_SP2_COMBO_MMD_ACCCTLr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_MMD_ACCCTLr
#define MODIFY_SP2_COMBO_MMD_ACCCTLr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_MMD_ACCCTLr
#define READLN_SP2_COMBO_MMD_ACCCTLr BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_MMD_ACCCTLr
#define WRITELN_SP2_COMBO_MMD_ACCCTLr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_MMD_ACCCTLr
#define WRITEALL_SP2_COMBO_MMD_ACCCTLr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_MMD_ACCCTLr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCCTLr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_COMBO_MMD_ACCAD
 * BLOCKS:   COMBO_IEEE0
 * REGADDR:  0xffee
 * DESC:     IEEE MMD Access Data Register
 * RESETVAL: 0x0 (0)
 * ACCESS:   R/W
 * FIELDS:
 *     ADDRDATA         if MMD_AccessControl.increment_ctrl = 00, this is used as an address register, otherwise this is used as a data reg01 = data, no post increment10 = data, post increment on reads and writes11 = data, post increment on writes only0 = not 1000Base-X full duplex capable
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr (0x0000ffee | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_SIZE 4

/*
 * This structure should be used to declare and program SP2_COMBO_MMD_ACCAD.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_s {
	uint32_t v[1];
	uint32_t sp2_combo_mmd_accad[1];
	uint32_t _sp2_combo_mmd_accad;
} BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_CLR(r) (r).sp2_combo_mmd_accad[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_SET(r,d) (r).sp2_combo_mmd_accad[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_GET(r) (r).sp2_combo_mmd_accad[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_ADDRDATAf_GET(r) (((r).sp2_combo_mmd_accad[0]) & 0xffff)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_ADDRDATAf_SET(r,f) (r).sp2_combo_mmd_accad[0]=(((r).sp2_combo_mmd_accad[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff)) | (0xffff << 16)

/*
 * These macros can be used to access SP2_COMBO_MMD_ACCAD.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_MMD_ACCADr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr,(_r._sp2_combo_mmd_accad))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_MMD_ACCADr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr,(_r._sp2_combo_mmd_accad)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_MMD_ACCADr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr,(_r._sp2_combo_mmd_accad))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_MMD_ACCADr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_mmd_accad))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_MMD_ACCADr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_mmd_accad))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_MMD_ACCADr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_combo_mmd_accad))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_COMBO_MMD_ACCADr BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr
#define SP2_COMBO_MMD_ACCADr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_t SP2_COMBO_MMD_ACCADr_t;
#define SP2_COMBO_MMD_ACCADr_CLR BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_CLR
#define SP2_COMBO_MMD_ACCADr_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_SET
#define SP2_COMBO_MMD_ACCADr_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_GET
#define SP2_COMBO_MMD_ACCADr_ADDRDATAf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_ADDRDATAf_GET
#define SP2_COMBO_MMD_ACCADr_ADDRDATAf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr_ADDRDATAf_SET
#define READ_SP2_COMBO_MMD_ACCADr BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_MMD_ACCADr
#define WRITE_SP2_COMBO_MMD_ACCADr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_MMD_ACCADr
#define MODIFY_SP2_COMBO_MMD_ACCADr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_MMD_ACCADr
#define READLN_SP2_COMBO_MMD_ACCADr BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_MMD_ACCADr
#define WRITELN_SP2_COMBO_MMD_ACCADr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_MMD_ACCADr
#define WRITEALL_SP2_COMBO_MMD_ACCADr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_MMD_ACCADr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MMD_ACCADr'
 */




/*******************************************************************************
 * CHIP:  BCMI_SGMIIP2X4_SERDES
 * REGISTER:  SP2_COMBO_MIIEXTSTAT
 * BLOCKS:   COMBO_IEEE0
 * REGADDR:  0xffef
 * DESC:     IEEE MII extended status register
 * RESETVAL: 0xc000 (49152)
 * ACCESS:   R/O
 * FIELDS:
 *     S1000BASE_T_HALF_DUPLEX_CAPABLE 1 = 1000Base-T half duplex capable0 = not 1000Base-T half duplex capable
 *     S1000BASE_T_FULL_DUPLEX_CAPABLE 1 = 1000Base-T full duplex capable0 = not 1000Base-T full duplex capable
 *     S1000BASE_X_HALF_DUPLEX_CAPABLE 1 = 1000Base-X half duplex capable0 = not 1000Base-X half duplex capable
 *     S1000BASE_X_FULL_DUPLEX_CAPABLE 1 = 1000Base-X full duplex capable0 = not 1000Base-X full duplex capable
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr (0x0000ffef | PHYMOD_REG_ACC_TSC_IBLK)

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_SIZE 4

/*
 * This structure should be used to declare and program SP2_COMBO_MIIEXTSTAT.
 */
typedef union BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_s {
	uint32_t v[1];
	uint32_t sp2_combo_miiextstat[1];
	uint32_t _sp2_combo_miiextstat;
} BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_t;

#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_CLR(r) (r).sp2_combo_miiextstat[0] = 0
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_SET(r,d) (r).sp2_combo_miiextstat[0] = d
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_GET(r) (r).sp2_combo_miiextstat[0]

/*
 * These macros can be used to access individual fields.
 */
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_X_FULL_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_combo_miiextstat[0]) >> 15) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_X_FULL_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_combo_miiextstat[0]=(((r).sp2_combo_miiextstat[0] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15)) | (1 << (16 + 15))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_X_HALF_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_combo_miiextstat[0]) >> 14) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_X_HALF_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_combo_miiextstat[0]=(((r).sp2_combo_miiextstat[0] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14)) | (1 << (16 + 14))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_T_FULL_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_combo_miiextstat[0]) >> 13) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_T_FULL_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_combo_miiextstat[0]=(((r).sp2_combo_miiextstat[0] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13)) | (1 << (16 + 13))
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_T_HALF_DUPLEX_CAPABLEf_GET(r) ((((r).sp2_combo_miiextstat[0]) >> 12) & 0x1)
#define BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_T_HALF_DUPLEX_CAPABLEf_SET(r,f) (r).sp2_combo_miiextstat[0]=(((r).sp2_combo_miiextstat[0] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12)) | (1 << (16 + 12))

/*
 * These macros can be used to access SP2_COMBO_MIIEXTSTAT.
 */
#define BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_MIIEXTSTATr(_pc,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr,(_r._sp2_combo_miiextstat))
#define BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_MIIEXTSTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr,(_r._sp2_combo_miiextstat)&0xffff)
#define BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_MIIEXTSTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr,(_r._sp2_combo_miiextstat))
#define BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_MIIEXTSTATr(_pc,_l,_r) phymod_tsc_iblk_read(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_miiextstat))
#define BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_MIIEXTSTATr(_pc,_l,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr|PHYMOD_REG_ACC_TSC_IBLK_FORCE_LANE|LSHIFT32(((_l)&0x3),PHYMOD_REG_ACCESS_FLAGS_SHIFT),(_r._sp2_combo_miiextstat))
#define BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_MIIEXTSTATr(_pc,_r) phymod_tsc_iblk_write(_pc,BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr|PHYMOD_REG_ACC_TSC_IBLK_BCAST,(_r._sp2_combo_miiextstat))

/*
 * Unless PHYMOD_EXCLUDE_CHIPLESS_TYPES is defined, all of the above types
 * will be redefined without the chip prefix for easier programming.
 * If multiple chips will be programmed in the same source file, then you should
 * define PHYMOD_EXCLUDE_CHIPLESS_TYPES before including all chip header files
 * and refer to the fully qualified versions.
 */
#ifndef PHYMOD_EXCLUDE_CHIPLESS_TYPES

#define SP2_COMBO_MIIEXTSTATr BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr
#define SP2_COMBO_MIIEXTSTATr_SIZE BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_SIZE
typedef BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_t SP2_COMBO_MIIEXTSTATr_t;
#define SP2_COMBO_MIIEXTSTATr_CLR BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_CLR
#define SP2_COMBO_MIIEXTSTATr_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_SET
#define SP2_COMBO_MIIEXTSTATr_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_GET
#define SP2_COMBO_MIIEXTSTATr_S1000BASE_X_FULL_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_X_FULL_DUPLEX_CAPABLEf_GET
#define SP2_COMBO_MIIEXTSTATr_S1000BASE_X_FULL_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_X_FULL_DUPLEX_CAPABLEf_SET
#define SP2_COMBO_MIIEXTSTATr_S1000BASE_X_HALF_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_X_HALF_DUPLEX_CAPABLEf_GET
#define SP2_COMBO_MIIEXTSTATr_S1000BASE_X_HALF_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_X_HALF_DUPLEX_CAPABLEf_SET
#define SP2_COMBO_MIIEXTSTATr_S1000BASE_T_FULL_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_T_FULL_DUPLEX_CAPABLEf_GET
#define SP2_COMBO_MIIEXTSTATr_S1000BASE_T_FULL_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_T_FULL_DUPLEX_CAPABLEf_SET
#define SP2_COMBO_MIIEXTSTATr_S1000BASE_T_HALF_DUPLEX_CAPABLEf_GET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_T_HALF_DUPLEX_CAPABLEf_GET
#define SP2_COMBO_MIIEXTSTATr_S1000BASE_T_HALF_DUPLEX_CAPABLEf_SET BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr_S1000BASE_T_HALF_DUPLEX_CAPABLEf_SET
#define READ_SP2_COMBO_MIIEXTSTATr BCMI_SGMIIP2X4_SERDES_READ_SP2_COMBO_MIIEXTSTATr
#define WRITE_SP2_COMBO_MIIEXTSTATr BCMI_SGMIIP2X4_SERDES_WRITE_SP2_COMBO_MIIEXTSTATr
#define MODIFY_SP2_COMBO_MIIEXTSTATr BCMI_SGMIIP2X4_SERDES_MODIFY_SP2_COMBO_MIIEXTSTATr
#define READLN_SP2_COMBO_MIIEXTSTATr BCMI_SGMIIP2X4_SERDES_READLN_SP2_COMBO_MIIEXTSTATr
#define WRITELN_SP2_COMBO_MIIEXTSTATr BCMI_SGMIIP2X4_SERDES_WRITELN_SP2_COMBO_MIIEXTSTATr
#define WRITEALL_SP2_COMBO_MIIEXTSTATr BCMI_SGMIIP2X4_SERDES_WRITEALL_SP2_COMBO_MIIEXTSTATr

#endif /* PHYMOD_EXCLUDE_CHIPLESS_TYPES */
/*******************************************************************************
 * End of 'BCMI_SGMIIP2X4_SERDES_SP2_COMBO_MIIEXTSTATr'
 */




#endif /* __BCMI_SGMIIP2X4_SERDES_DEFS_H__ */
