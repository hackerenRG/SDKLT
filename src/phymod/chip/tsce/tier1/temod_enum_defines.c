/*----------------------------------------------------------------------
 * : temod_enum_defines.h,                                           
 * : n *                                                                      
 * Broadcom Corporation                                                 
 * Proprietary and Confidential information                             
 * All rights reserved                                                  
 * This source file is the property of Broadcom Corporation, and        
 * may not be copied or distributed in any isomorphic form without the  
 * prior written consent of Broadcom Corporation.                       
 *--------------------------------------------------------------------- 
 *--------------------------------------------------------------------- 
 ############### THIS FILE IS AUTOMATICALLY GENERATED.  ############### 
 ############### DO !! NOT !! MANUALLY EDIT THIS FILE.  ############### 
 *--------------------------------------------------------------------- 
 * Description: This file contains enums, elems, and doxygen comments   
 * needed for SerDes Configuration programs.                            
 *--------------------------------------------------------------------- 
 * CVS INFORMATION:                                                     
 * Please see inc/enum_desc.txt for CVS information.                    
 *----------------------------------------------------------------------
 */                                                                     
/*                                                                      
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
 */                                                                     
/* This file is automatically generated. Do not modify it. Modify the
 * inc/enum_desc.txt to change enums, elems, or comments. For issues about
 * the process that creates this file contact the temod development team.
 */

#include "temod_enum_defines.h"

char* e2s_temod_core_select [CNT_temod_core_select] = {
  "TEMOD_CORE_0_0_1" ,
  "TEMOD_CORE_0_1_0" ,
  "TEMOD_CORE_1_0_0" ,
  "TEMOD_CORE_0_1_1" ,
  "TEMOD_CORE_1_0_1" ,
  "TEMOD_CORE_1_1_1" ,
  "TEMOD_CORE_ILLEGAL" 
}; /* e2s_temod_core_select */

int e2n_temod_core_select [CNT_temod_core_select] = {
  1 ,
  2 ,
  4 ,
  3 ,
  5 ,
  7 ,
  0 
}; /* e2n_temod_core_select */

char* e2s_temod_lane_select [CNT_temod_lane_select] = {
  "TEMOD_LANE_0_0_0_1" ,
  "TEMOD_LANE_0_0_1_0" ,
  "TEMOD_LANE_0_0_1_1" ,
  "TEMOD_LANE_0_1_0_0" ,
  "TEMOD_LANE_0_1_0_1" ,
  "TEMOD_LANE_0_1_1_0" ,
  "TEMOD_LANE_0_1_1_1" ,
  "TEMOD_LANE_1_0_0_0" ,
  "TEMOD_LANE_1_0_0_1" ,
  "TEMOD_LANE_1_0_1_0" ,
  "TEMOD_LANE_1_0_1_1" ,
  "TEMOD_LANE_1_1_0_0" ,
  "TEMOD_LANE_1_1_0_1" ,
  "TEMOD_LANE_1_1_1_0" ,
  "TEMOD_LANE_1_1_1_1" ,
  "TEMOD_LANE_BCST" ,
  "TEMOD_LANE_ILLEGAL" 
}; /* e2s_temod_lane_select */

int e2n_temod_lane_select [CNT_temod_lane_select] = {
  1 ,
  2 ,
  3 ,
  4 ,
  5 ,
  6 ,
  7 ,
  8 ,
  9 ,
  10 ,
  11 ,
  12 ,
  13 ,
  14 ,
  15 ,
  15 ,
  0 
}; /* e2n_temod_lane_select */

char* e2s_temod_spd_intfc_type [CNT_temod_spd_intfc_type] = {
  "TEMOD_SPD_ZERO" ,
  "TEMOD_SPD_10_X1_SGMII" ,
  "TEMOD_SPD_100_X1_SGMII" ,
  "TEMOD_SPD_1000_X1_SGMII" ,
  "TEMOD_SPD_2500_X1" ,
  "TEMOD_SPD_10_SGMII" ,
  "TEMOD_SPD_100_SGMII" ,
  "TEMOD_SPD_1000_SGMII" ,
  "TEMOD_SPD_2500" ,
  "TEMOD_SPD_5000" ,
  "TEMOD_SPD_1000_XFI" ,
  "TEMOD_SPD_5000_XFI" ,
  "TEMOD_SPD_10000_XFI" ,
  "TEMOD_SPD_10600_XFI_HG" ,
  "TEMOD_SPD_10000_HI" ,
  "TEMOD_SPD_10000" ,
  "TEMOD_SPD_12000_HI" ,
  "TEMOD_SPD_13000" ,
  "TEMOD_SPD_15000" ,
  "TEMOD_SPD_16000" ,
  "TEMOD_SPD_20000" ,
  "TEMOD_SPD_20000_SCR" ,
  "TEMOD_SPD_21000" ,
  "TEMOD_SPD_25455" ,
  "TEMOD_SPD_31500" ,
  "TEMOD_SPD_31500_MLD" ,
  "TEMOD_SPD_40G_X4" ,
  "TEMOD_SPD_42G_X4" ,
  "TEMOD_SPD_40G_XLAUI" ,
  "TEMOD_SPD_42G_XLAUI" ,
  "TEMOD_SPD_10000_X2" ,
  "TEMOD_SPD_10000_HI_DXGXS" ,
  "TEMOD_SPD_10000_DXGXS" ,
  "TEMOD_SPD_10000_HI_DXGXS_SCR" ,
  "TEMOD_SPD_10000_DXGXS_SCR" ,
  "TEMOD_SPD_10500_HI" ,
  "TEMOD_SPD_10500_HI_DXGXS" ,
  "TEMOD_SPD_12773_HI_DXGXS" ,
  "TEMOD_SPD_12773_DXGXS" ,
  "TEMOD_SPD_15750_HI_DXGXS" ,
  "TEMOD_SPD_20G_MLD_DXGXS" ,
  "TEMOD_SPD_21G_HI_MLD_DXGXS" ,
  "TEMOD_SPD_20G_DXGXS" ,
  "TEMOD_SPD_21G_HI_DXGXS" ,
  "TEMOD_SPD_100G_CR10" ,
  "TEMOD_SPD_107G_HG_CR10" ,
  "TEMOD_SPD_120G_CR12" ,
  "TEMOD_SPD_127G_HG_CR12" ,
  "TEMOD_SPD_4000" ,
  "TEMOD_SPD_ILLEGAL" 
}; /* e2s_temod_spd_intfc_type */

int e2n_temod_spd_intfc_type [CNT_temod_spd_intfc_type] = {
  0 ,
  10 ,
  100 ,
  1000 ,
  2500 ,
  10 ,
  100 ,
  1000 ,
  2500 ,
  5000 ,
  5000 ,
  5000 ,
  10000 ,
  10560 ,
  10000 ,
  10000 ,
  12000 ,
  13000 ,
  15000 ,
  16000 ,
  20000 ,
  20000 ,
  21000 ,
  25000 ,
  31500 ,
  31500 ,
  40000 ,
  40000 ,
  40000 ,
  42000 ,
  10000 ,
  10000 ,
  10000 ,
  10000 ,
  10000 ,
  10500 ,
  10500 ,
  12773 ,
  12773 ,
  15750 ,
  20000 ,
  20000 ,
  20000 ,
  21000 ,
  100000 ,
  107000 ,
  120000 ,
  127000 ,
  4000 ,
  0 
}; /* e2n_temod_spd_intfc_type */

char* e2s_temod_regacc_type [CNT_temod_regacc_type] = {
  "TEMOD_REGACC_CL22" ,
  "TEMOD_REGACC_CL45" ,
  "TEMOD_REGACC_TOTSC" ,
  "TEMOD_REGACC_SBUS_FD" ,
  "TEMOD_REGACC_SBUS_BD" ,
  "TEMOD_REGACC_ILLEGAL" 
}; /* e2s_temod_regacc_type */

char* e2s_temod_port_type [CNT_temod_port_type] = {
  "TEMOD_SINGLE_PORT" ,
  "TEMOD_MULTI_PORT" ,
  "TEMOD_DXGXS" ,
  "TEMOD_TRI1_PORT" ,
  "TEMOD_TRI2_PORT" ,
  "TEMOD_PORT_MODE_ILLEGAL" 
}; /* e2s_temod_port_type */

char* e2s_temod_diag_type [CNT_temod_diag_type] = {
  "TEMOD_DIAG_GENERAL" ,
  "TEMOD_DIAG_TOPOLOGY" ,
  "TEMOD_DIAG_LINK" ,
  "TEMOD_DIAG_SPEED" ,
  "TEMOD_DIAG_ANEG" ,
  "TEMOD_DIAG_TFC" ,
  "TEMOD_DIAG_AN_TIMERS" ,
  "TEMOD_DIAG_STATE" ,
  "TEMOD_DIAG_DEBUG" ,
  "TEMOD_DIAG_IEEE" ,
  "TEMOD_DIAG_EEE" ,
  "TEMOD_DIAG_BER" ,
  "TEMOD_DIAG_CFG" ,
  "TEMOD_DIAG_CL72" ,
  "TEMOD_DIAG_DSC",
  "TEMOD_SERDES_DIAG" ,
  "TEMOD_DIAG_ALL" ,
  "TEMOD_DIAG_ILLEGAL" 
}; /* e2s_temod_diag_type */

char* e2s_temod_pmd_diag_type [CNT_temod_pmd_diag_type] = {
  "TEMOD_SERDES_DIAG_CORE_CONFIG" ,
  "TEMOD_SERDES_DIAG_CORE_STATE" ,
  "TEMOD_SERDES_DIAG_LANE_CONFIG" ,
  "TEMOD_SERDES_DIAG_LANE_DEBUG_STATUS" ,
  "TEMOD_SERDES_DIAG_LANE_STATE" ,
  "TEMOD_SERDES_DIAG_LANE_STATE_HDR" ,
  "TEMOD_SERDES_DIAG_LANE_STATE_LEGEND" ,
  "TEMOD_SERDES_DIAG_CL72_STATUS" ,
  "TEMOD_SERDES_DIAG_EYE_DENSITY" ,
  "TEMOD_SERDES_DIAG_EYE_SCAN" ,
  "TEMOD_SERDES_DIAG_MEAS_EYE_DENSITY_DATA" ,
  "TEMOD_SERDES_DIAG_MEAS_EYE_SCAN_DONE" ,
  "TEMOD_SERDES_DIAG_MEAS_LOWBER_EYE" ,
  "TEMOD_SERDES_DIAG_READ_EYE_SCAN_STRIPE" ,
  "TEMOD_SERDES_DIAG_EYE_DENSITY_DATA" ,
  "TEMOD_SERDES_DIAG_LOWBER_EYE" ,
  "TEMOD_SERDES_DIAG_EYE_SCAN_VERTICAL" ,
  "TEMOD_SERDES_DIAG_EYE_SCAN_STRIPE" ,
  "TEMOD_SERDES_DIAG_EYE_SCAN_HEADER" ,
  "TEMOD_SERDES_DIAG_EYE_SCAN_FOOTER" ,
  "TEMOD_SERDES_DIAG_BER_SCAN_TEST" ,
  "TEMOD_SERDES_DIAG_READ_BER_SCAN_DATA" ,
  "TEMOD_SERDES_DIAG_EYE_MARGIN_PROJ" ,
  "TEMOD_SERDES_DIAG_DIG_LPBK" ,
  "TEMOD_SERDES_DIAG_MEAS_EYE_SCAN_START" ,
  "TEMOD_SERDES_DIAG_ILLEGAL" 
}; /* e2s_temod_pmd_diag_type */


char* e2s_temod_eye_direction [CNT_temod_eye_direction] = {
  "TEMOD_EYE_VU" ,
  "TEMOD_EYE_VD" ,
  "TEMOD_EYE_HL" ,
  "TEMOD_EYE_HR" ,
  "TEMOD_EYE_ILLEGAL" 
}; /* e2s_temod_eye_direction */

char* e2s_temod_tech_ability [CNT_temod_tech_ability] = {
  "TEMOD_ABILITY_1G_KX" ,
  "TEMOD_ABILITY_10G_KX4" ,
  "TEMOD_ABILITY_10G_KR" ,
  "TEMOD_ABILITY_40G_KR4" ,
  "TEMOD_ABILITY_40G_CR4" ,
  "TEMOD_ABILITY_100G_CR10" ,
  "TEMOD_ABILITY_20G_KR2" ,
  "TEMOD_ABILITY_20G_CR2" ,
  "TEMOD_ABILITY_ILLEGAL" 
}; /* e2s_temod_tech_ability */

int e2n_temod_tech_ability [CNT_temod_tech_ability] = {
  0x5 ,
  0x6 ,
  0x7 ,
  0x8 ,
  0x9 ,
  0xa ,
  0x100 ,
  0x101 ,
  0x102 
}; /* e2n_temod_tech_ability */

char* e2s_temod_cl37bam_ability [CNT_temod_cl37bam_ability] = {
  "TEMOD_BAM37ABL_2P5G" ,
  "TEMOD_BAM37ABL_5G_X4" ,
  "TEMOD_BAM37ABL_6G_X4" ,
  "TEMOD_BAM37ABL_10G_HIGIG" ,
  "TEMOD_BAM37ABL_10G_CX4" ,
  "TEMOD_BAM37ABL_12G_X4" ,
  "TEMOD_BAM37ABL_12P5_X4" ,
  "TEMOD_BAM37ABL_13G_X4" ,
  "TEMOD_BAM37ABL_15G_X4" ,
  "TEMOD_BAM37ABL_16G_X4" ,
  "TEMOD_BAM37ABL_20G_X4_CX4" ,
  "TEMOD_BAM37ABL_20G_X4" ,
  "TEMOD_BAM37ABL_21G_X4" ,
  "TEMOD_BAM37ABL_25P455G" ,
  "TEMOD_BAM37ABL_31P5G" ,
  "TEMOD_BAM37ABL_32P7G" ,
  "TEMOD_BAM37ABL_40G" ,
  "TEMOD_BAM37ABL_10G_X2_CX4" ,
  "TEMOD_BAM37ABL_10G_DXGXS" ,
  "TEMOD_BAM37ABL_10P5G_DXGXS" ,
  "TEMOD_BAM37ABL_12P7_DXGXS" ,
  "TEMOD_BAM37ABL_15P75G_R2" ,
  "TEMOD_BAM37ABL_20G_X2_CX4" ,
  "TEMOD_BAM37ABL_20G_X2" ,
  "TEMOD_BAM37ABL_ILLEGAL" 
}; /* e2s_temod_cl37bam_ability */

char* e2s_temod_diag_an_type [CNT_temod_diag_an_type] = {
  "TEMOD_DIAG_AN_DONE" ,
  "TEMOD_DIAG_AN_HCD" ,
  "TEMOD_DIAG_AN_TYPE_ILLEGAL" 
}; /* e2s_temod_diag_an_type */

char* e2s_temod_tier1_function_type [CNT_temod_tier1_function_type] = {
  "PCS_BYPASS_CTL" ,
  "INIT_PCS" ,
  "INIT_PMD_SW" ,
  "INIT_PMD" ,
  "PMD_RESET_SEQ" ,
  "PMD_X4_RESET" ,
  "WAIT_SC_DONE" ,
  "ENABLE_SET" ,
  "FECMODE_SET" ,
  "GET_PCS_LINK_STATUS" ,
  "OVERRIDE_SET" ,
  "CREDIT_OVERRIDE_SET" ,
  "ENCODE_SET" ,
  "DECODE_SET" ,
  "CREDIT_CONTROL" ,
  "TX_LANE_CONTROL" ,
  "RX_LANE_CONTROL" ,
  "TX_LANE_DISABLE" ,
  "POWER_CONTROL" ,
  "AUTONEG_SET" ,
  "AUTONEG_GET" ,
  "AUTONEG_CONTROL" ,
  "TSC12_CONTROL" ,
  "CHECK_SC_STATS" ,
  "REG_READ" ,
  "REG_WRITE" ,
  "PRBS_CHECK" ,
  "CJPAT_CRPAT_MODE_SET" ,
  "CJPAT_CRPAT_CHECK" ,
  "TEMOD_DIAG" ,
  "PCS_LANE_SWAP" ,
  "PMD_LANE_SWAP" ,
  "PMD_LANE_SWAP_TX" ,
  "PARALLEL_DETECT_CONTROL" ,
  "REVID_READ" ,
  "SOFT_RESET" ,
  "SET_SPD_INTF" ,
  "SET_PORT_MODE" ,
  "EEE_PASSTHRU_SET" ,
  "EEE_PASSTHRU_GET" ,
  "FEC_CONTROL" ,
  "HIGIG2_CONTROL" ,
  "LF_RF_CONTROL" ,
  "RX_FAST_LOCK_CONTROL" ,
  "PMD_CORE_RESET" ,
  "PMD_LANE_RESET" ,
  "AFE_SPEED_UP_DSC_VGA" ,
  "CLAUSE_72_CONTROL" ,
  "PLL_SEQUENCER_CONTROL" ,
  "PLL_LOCK_WAIT" ,
  "PROG_DATA" ,
  "RX_SEQ_CONTROL" ,
  "SET_POLARITY" ,
  "PRBS_CONTROL" ,
  "PRBS_MODE" ,
  "RX_PF_CONTROL" ,
  "RX_VGA_CONTROL" ,
  "CJPAT_CRPAT_CONTROL" ,
  "TX_LOOPBACK_CONTROL" ,
  "TX_PMD_LOOPBACK_CONTROL" ,
  "RX_LOOPBACK_CONTROL" ,
  "RX_P1_SLICER_CONTROL" ,
  "RX_M1_SLICER_CONTROL" ,
  "RX_D_SLICER_CONTROL" ,
  "WAIT_PMD_LOCK" ,
  "FIRMWARE_SET" ,
  "INIT_PMD_QSGMII" ,
  "INIT_PCS_ILKN" ,
  "PMD_RESET_BYPASS" ,
  "PMD_OVERRIDE_CONTROL" ,
  "TIER1_FUNCTION_ILLEGAL" 
}; /* e2s_temod_tier1_function_type */

char* e2s_sc_mode_type [CNT_sc_mode_type] = {
  "TEMOD_SC_MODE_HT_WITH_BASIC_OVERRIDE" ,
  "TEMOD_SC_MODE_HT_OVERRIDE" ,
  "TEMOD_SC_MODE_ST" ,
  "TEMOD_SC_MODE_ST_OVERRIDE" ,
  "TEMOD_SC_MODE_AN_CL37" ,
  "TEMOD_SC_MODE_AN_CL73" ,
  "TEMOD_SC_MODE_BYPASS" ,
  "TEMOD_SC_MODE_ILLEGAL" 
}; /* e2s_sc_mode_type */

int e2n_sc_mode_type [CNT_sc_mode_type] = {
  0 ,
  1 ,
  2 ,
  3 ,
  4 ,
  5 ,
  6 ,
  7 
}; /* e2n_sc_mode_type */

char* e2s_temod_pll_mode_type [CNT_temod_pll_mode_type] = {
  "TEMOD_PLL_MODE_DIV_ZERO" ,
  "TEMOD_PLL_MODE_DIV_72" ,
  "TEMOD_PLL_MODE_DIV_40" ,
  "TEMOD_PLL_MODE_DIV_42" ,
  "TEMOD_PLL_MODE_DIV_48" ,
  "TEMOD_PLL_MODE_DIV_50" ,
  "TEMOD_PLL_MODE_DIV_52" ,
  "TEMOD_PLL_MODE_DIV_54" ,
  "TEMOD_PLL_MODE_DIV_60" ,
  "TEMOD_PLL_MODE_DIV_64" ,
  "TEMOD_PLL_MODE_DIV_66" ,
  "TEMOD_PLL_MODE_DIV_68" ,
  "TEMOD_PLL_MODE_DIV_70" ,
  "TEMOD_PLL_MODE_DIV_80" ,
  "TEMOD_PLL_MODE_DIV_92" ,
  "TEMOD_PLL_MODE_DIV_100" ,
  "TEMOD_PLL_MODE_DIV_82P5" ,
  "TEMOD_PLL_MODE_DIV_87P5" ,
  "TEMOD_PLL_MODE_DIV_ILLEGAL" 
}; /* e2s_temod_pll_mode_type */

int e2n_temod_pll_mode_type [CNT_temod_pll_mode_type] = {
  0 ,
  40 ,
  42 ,
  48 ,
  52 ,
  54 ,
  60 ,
  64 ,
  66 ,
  70 ,
  80 ,
  92 ,
  0 
}; /* e2n_temod_pll_mode_type */

char* e2s_temod_os_mode_type [CNT_temod_os_mode_type] = {
  "TEMOD_PMA_OS_MODE_1" ,
  "TEMOD_PMA_OS_MODE_2" ,
  "TEMOD_PMA_OS_MODE_3" ,
  "TEMOD_PMA_OS_MODE_3_3" ,
  "TEMOD_PMA_OS_MODE_4" ,
  "TEMOD_PMA_OS_MODE_5" ,
  "TEMOD_PMA_OS_MODE_7_25" ,
  "TEMOD_PMA_OS_MODE_8" ,
  "TEMOD_PMA_OS_MODE_8_25" ,
  "TEMOD_PMA_OS_MODE_10" ,
  "TEMOD_PMA_OS_MODE_ILLEGAL" 
}; /* e2s_temod_os_mode_type */

int e2n_temod_os_mode_type [CNT_temod_os_mode_type] = {
  1 ,
  2 ,
  3 ,
  33 ,
  4 ,
  5 ,
  725 ,
  8 ,
  825 ,
  9 ,
  0 
}; /* e2n_temod_os_mode_type */

char* e2s_temod_scr_mode [CNT_temod_scr_mode] = {
  "TEMOD_SCR_MODE_BYPASS" ,
  "TEMOD_SCR_MODE_66B" ,
  "TEMOD_SCR_MODE_80B" ,
  "TEMOD_SCR_MODE_64B" 
}; /* e2s_temod_scr_mode */

int e2n_temod_scr_mode [CNT_temod_scr_mode] = {
  0 ,
  1 ,
  2 ,
  3 
}; /* e2n_temod_scr_mode */

char* e2s_temod_encode_mode [CNT_temod_encode_mode] = {
  "TEMOD_ENCODE_MODE_NONE" ,
  "TEMOD_ENCODE_MODE_CL48" ,
  "TEMOD_ENCODE_MODE_CL48_2_LANE" ,
  "TEMOD_ENCODE_MODE_CL36" ,
  "TEMOD_ENCODE_MODE_CL82" ,
  "TEMOD_ENCODE_MODE_CL49" ,
  "TEMOD_ENCODE_MODE_BRCM" ,
  "TEMOD_ENCODE_MODE_ILLEGAL" 
}; /* e2s_temod_encode_mode */

int e2n_temod_encode_mode [CNT_temod_encode_mode] = {
  0 ,
  1 ,
  2 ,
  3 ,
  4 ,
  5 ,
  6 ,
  7 
}; /* e2n_temod_encode_mode */

char* e2s_temod_check_end_mode [CNT_temod_check_end_mode] = {
  "TEMOD_CL48_CHECK_END_OFF" ,
  "TEMOD_CL48_CHECK_END_ON" 
}; /* e2s_temod_check_end_mode */

char* e2s_temod_sigdet_filter [CNT_temod_sigdet_filter] = {
  "TEMOD_SIGDET_FILTER_NONCX4" ,
  "TEMOD_SIGDET_FILTER_CX4" 
}; /* e2s_temod_sigdet_filter */

char* e2s_temod_blocksync_mode [CNT_temod_blocksync_mode] = {
  "TEMOD_BLOCKSYNC_MODE_NONE" ,
  "TEMOD_BLOCKSYNC_MODE_CL49" ,
  "TEMOD_BLOCKSYNC_MODE_CL82" ,
  "TEMOD_BLOCKSYNC_MODE_8B10B" ,
  "TEMOD_BLOCKSYNC_MODE_FEC" ,
  "TEMOD_BLOCKSYNC_MODE_BRCM" ,
  "TEMOD_BLOCKSYNC_MODE_ILLEGAL" 
}; /* e2s_temod_blocksync_mode */

char* e2s_temod_reorder_mode [CNT_temod_reorder_mode] = {
  "TEMOD_R_REORDER_MODE_NONE" ,
  "TEMOD_R_REORDER_MODE_CL48" ,
  "TEMOD_R_REORDER_MODE_CL36" ,
  "TEMOD_R_REORDER_MODE_CL36_CL48" 
}; /* e2s_temod_reorder_mode */

char* e2s_temod_cl36_mode [CNT_temod_cl36_mode] = {
  "TEMOD_CL36_DISABLE" ,
  "TEMOD_CL36_ENABLE" 
}; /* e2s_temod_cl36_mode */

char* e2s_temod_descrambler_mode [CNT_temod_descrambler_mode] = {
  "TEMOD_R_DESCR1_MODE_BYPASS" ,
  "TEMOD_R_DESCR1_MODE_66B" ,
  "TEMOD_R_DESCR1_MODE_10B" ,
  "TEMOD_R_DESCR1_MODE_ILLEGAL" 
}; /* e2s_temod_descrambler_mode */

char* e2s_temod_decoder_mode [CNT_temod_decoder_mode] = {
  "TEMOD_DECODER_MODE_NONE" ,
  "TEMOD_DECODER_MODE_CL49" ,
  "TEMOD_DECODER_MODE_BRCM" ,
  "TEMOD_DECODER_MODE_ALU" ,
  "TEMOD_DECODER_MODE_CL48" ,
  "TEMOD_DECODER_MODE_CL36" ,
  "TEMOD_DECODER_MODE_CL82" ,
  "TEMOD_DECODER_MODE_ILLEGAL" 
}; /* e2s_temod_decoder_mode */

char* e2s_temod_deskew_mode [CNT_temod_deskew_mode] = {
  "TEMOD_R_DESKEW_MODE_BYPASS" ,
  "TEMOD_R_DESKEW_MODE_8B_10B" ,
  "TEMOD_R_DESKEW_MODE_BRCM_66B" ,
  "TEMOD_R_DESKEW_MODE_CL82_66B" ,
  "TEMOD_R_DESKEW_MODE_CL36_10B" ,
  "TEMOD_R_DESKEW_MODE_ILLEGAL" 
}; /* e2s_temod_deskew_mode */

char* e2s_temod_descrambler2_mode [CNT_temod_descrambler2_mode] = {
  "TEMOD_DESC2_MODE_NONE" ,
  "TEMOD_DESC2_MODE_CL49" ,
  "TEMOD_DESC2_MODE_BRCM" ,
  "TEMOD_DESC2_MODE_ALU" ,
  "TEMOD_DESC2_MODE_CL48" ,
  "TEMOD_DESC2_MODE_CL36" ,
  "TEMOD_DESC2_MODE_CL82" ,
  "TEMOD_DESC2_MODE_ILLEGAL" 
}; /* e2s_temod_descrambler2_mode */

char* e2s_temod_byte_del_mode [CNT_temod_byte_del_mode] = {
  "TEMOD_R_DESC2_BYTE_DELETION_100M" ,
  "TEMOD_R_DESC2_BYTE_DELETION_10M" ,
  "TEMOD_R_DESC2_BYTE_DELETION_NONE" 
}; /* e2s_temod_byte_del_mode */

char* e2s_temod_decode_descr_mode [CNT_temod_decode_descr_mode] = {
  "TEMOD_R_DEC1_DESCR_MODE_NONE" ,
  "TEMOD_R_DEC1_DESCR_MODE_BRCM64B66B" 
}; /* e2s_temod_decode_descr_mode */

char* e2s_an_property_enable [CNT_an_property_enable] = {
  "TEMOD_AN_PROPERTY_ENABLE_NONE" ,
  "TEMOD_AN_PROPERTY_ENABLE_SGMII_MASTER_MODE" ,
  "TEMOD_AN_PROPERTY_ENABLE_AN_PD_TO_CL37" ,
  "TEMOD_AN_PROPERTY_ENABLE_SGMII_TO_CL37_AUTO" ,
  "TEMOD_AN_PROPERTY_ENABLE_CL37_BAM_to_SGMII_AUTO" ,
  "TEMOD_AN_PROPERTY_ENABLE_HPAM_TO_CL73_AUTO" ,
  "TEMOD_AN_PROPERTY_ENABLE_CL73_BAM_TO_HPAM_AUTO" ,
  "TEMOD_AN_PROPERTY_ENABLE_ILLEGAL" 
}; /* e2s_an_property_enable */

char* e2s_credit_type_t [CNT_credit_type_t] = {
  "TEMOD_CREDIT_RESET" ,
  "TEMOD_CREDIT_TABLE" ,
  "TEMOD_CREDIT_CLOCK_COUNT_0" ,
  "TEMOD_CREDIT_CLOCK_COUNT_1" ,
  "TEMOD_CREDIT_LOOP_COUNT_0" ,
  "TEMOD_CREDIT_LOOP_COUNT_1" ,
  "TEMOD_CREDIT_MAC" ,
  "TEMOD_CREDIT_PCS_CLOCK_COUNT_0" ,
  "TEMOD_CREDIT_PCS_GEN_COUNT" ,
  "TEMOD_CREDIT_EN" ,
  "TEMOD_CREDIT_PCS_REPCNT" ,
  "TEMOD_CREDIT_SGMII_SPD" ,
  "TEMOD_CREDIT_ILLEGAL" 
}; /* e2s_credit_type_t */

char* e2s_override_type_t [CNT_override_type_t] = {
  "TEMOD_OVERRIDE_RESET" ,
  "TEMOD_OVERRIDE_CL72" ,
  "TEMOD_OVERRIDE_SPDID" ,
  "TEMOD_OVERRIDE_NUM_LANES" ,
  "TEMOD_OVERRIDE_OS_MODE" ,
  "TEMOD_OVERRIDE_FEC_EN" ,
  "TEMOD_OVERRIDE_DESKEW_MODE" ,
  "TEMOD_OVERRIDE_DESC2_MODE" ,
  "TEMOD_OVERRIDE_CL36BYTEDEL_MODE" ,
  "TEMOD_OVERRIDE_BRCM64B66_DESCR_MODE" ,
  "TEMOD_OVERRIDE_CHKEND_EN" ,
  "TEMOD_OVERRIDE_BLKSYNC_MODE" ,
  "TEMOD_OVERRIDE_DECODE_MODE" ,
  "TEMOD_OVERRIDE_REORDER_EN" ,
  "TEMOD_OVERRIDE_CL36_EN" ,
  "TEMOD_OVERRIDE_SCR_MODE" ,
  "TEMOD_OVERRIDE_DESCR_MODE" ,
  "TEMOD_OVERRIDE_ENCODE_MODE" ,
  "TEMOD_OVERRIDE_ALL" 
}; /* e2s_override_type_t */

char* e2s_temod_ref_clk_t [CNT_temod_ref_clk_t] = {
  "TEMODREFCLK156MHZ" ,
  "TEMODREFCLK125MHZ" ,
  "TEMODREFCLKCOUNT" 
}; /* e2s_temod_ref_clk_t */

