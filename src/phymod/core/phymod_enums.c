/*
 *         
 * $Id: phymod.xml,v 1.1.2.5 2013/09/12 10:43:06 nirf Exp $
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
 * 
 * 
 *         
 *     
 * DO NOT EDIT THIS FILE!
 */

#include <phymod/phymod.h>
#include <phymod/phymod.h>
#include <phymod/phymod_dispatch.h>

#ifdef PHYMOD_DIAG

enum_mapping_t phymod_dispatch_type_t_mapping[] = {
#ifdef PHYMOD_EAGLE_SUPPORT
    {"Eagle", phymodDispatchTypeEagle},
#endif /*PHYMOD_EAGLE_SUPPORT  */
#ifdef PHYMOD_FALCON_SUPPORT
    {"Falcon", phymodDispatchTypeFalcon},
#endif /*PHYMOD_FALCON_SUPPORT  */
#ifdef PHYMOD_QSGMIIE_SUPPORT
    {"Qsgmiie", phymodDispatchTypeQsgmiie},
#endif /*PHYMOD_QSGMIIE_SUPPORT  */
#ifdef PHYMOD_TSCE_SUPPORT
    {"Tsce", phymodDispatchTypeTsce},
#endif /*PHYMOD_TSCE_SUPPORT  */
#ifdef PHYMOD_TSCF_SUPPORT
    {"Tscf", phymodDispatchTypeTscf},
#endif /*PHYMOD_TSCF_SUPPORT  */
#ifdef PHYMOD_PHY8806X_SUPPORT
    {"Phy8806x", phymodDispatchTypePhy8806x},
#endif /*PHYMOD_PHY8806X_SUPPORT  */
#ifdef PHYMOD_FURIA_SUPPORT
    {"Furia", phymodDispatchTypeFuria},
#endif /*PHYMOD_FURIA_SUPPORT  */
#ifdef PHYMOD_VIPER_SUPPORT
    {"Viper", phymodDispatchTypeViper},
#endif /*PHYMOD_VIPER_SUPPORT  */
#ifdef PHYMOD_SESTO_SUPPORT
    {"Sesto", phymodDispatchTypeSesto},
#endif /*PHYMOD_SESTO_SUPPORT  */
#ifdef PHYMOD_QUADRA28_SUPPORT
    {"Quadra28", phymodDispatchTypeQuadra28},
#endif /*PHYMOD_QUADRA28_SUPPORT  */
#ifdef PHYMOD_QTCE_SUPPORT
    {"Qtce", phymodDispatchTypeQtce},
#endif /*PHYMOD_QTCE_SUPPORT  */
#ifdef PHYMOD_HURACAN_SUPPORT
    {"Huracan", phymodDispatchTypeHuracan},
#endif /*PHYMOD_HURACAN_SUPPORT  */
#ifdef PHYMOD_MADURA_SUPPORT
    {"Madura", phymodDispatchTypeMadura},
#endif /*PHYMOD_MADURA_SUPPORT  */
#ifdef PHYMOD_FURIA_SUPPORT
    {"Furia_82212", phymodDispatchTypeFuria_82212},
#endif /*PHYMOD_FURIA_SUPPORT  */
#ifdef PHYMOD_DINO_SUPPORT
    {"Dino", phymodDispatchTypeDino},
#endif /*PHYMOD_DINO_SUPPORT  */
#ifdef PHYMOD_TSCE_DPLL_SUPPORT
    {"Tsce_dpll", phymodDispatchTypeTsce_dpll},
#endif /*PHYMOD_TSCE_DPLL_SUPPORT  */
#ifdef PHYMOD_EAGLE_DPLL_SUPPORT
    {"Eagle_dpll", phymodDispatchTypeEagle_dpll},
#endif /*PHYMOD_EAGLE_DPLL_SUPPORT  */
#ifdef PHYMOD_TSCF16_SUPPORT
    {"Tscf16", phymodDispatchTypeTscf16},
#endif /*PHYMOD_TSCF16_SUPPORT  */
#ifdef PHYMOD_FALCON16_SUPPORT
    {"Falcon16", phymodDispatchTypeFalcon16},
#endif /*PHYMOD_FALCON16_SUPPORT  */
#ifdef PHYMOD_MERLIN16_SUPPORT
    {"Merlin16", phymodDispatchTypeMerlin16},
#endif /*PHYMOD_MERLIN16_SUPPORT  */
#ifdef PHYMOD_TSCE16_SUPPORT
    {"Tsce16", phymodDispatchTypeTsce16},
#endif /*PHYMOD_TSCE16_SUPPORT  */
#ifdef PHYMOD_TSCF_GEN3_SUPPORT
    {"Tscf_gen3", phymodDispatchTypeTscf_gen3},
#endif /*PHYMOD_TSCF_GEN3_SUPPORT  */
#ifdef PHYMOD_FALCON_DPLL_SUPPORT
    {"Falcon_dpll", phymodDispatchTypeFalcon_dpll},
#endif /*PHYMOD_FALCON_DPLL_SUPPORT  */
#ifdef PHYMOD_BLACKHAWK_SUPPORT
    {"Blackhawk", phymodDispatchTypeBlackhawk},
#endif /*PHYMOD_BLACKHAWK_SUPPORT  */
#ifdef PHYMOD_TSCBH_SUPPORT
    {"Tscbh", phymodDispatchTypeTscbh},
#endif /*PHYMOD_TSCBH_SUPPORT  */
#ifdef PHYMOD_PHYMODNULL_SUPPORT
    {"PhymodNull", phymodDispatchTypePhymodNull},
#endif /*PHYMOD_PHYMODNULL_SUPPORT  */
    {"Invalid", phymodDispatchTypeInvalid},
#ifdef PHYMOD_NULL_SUPPORT
    {"Null", phymodDispatchTypeNull},
#endif /*PHYMOD_NULL_SUPPORT  */
    {NULL, 0}
};

enum_mapping_t phymod_mem_type_t_mapping[] = {
    {"SpeedIdTable", phymodMemSpeedIdTable},
    {"AMTable", phymodMemAMTable},
    {"UMTable", phymodMemUMTable},
    {"TxLkup1588Mpp0", phymodMemTxLkup1588Mpp0},
    {"TxLkup1588Mpp1", phymodMemTxLkup1588Mpp1},
    {"TxLkup1588400G", phymodMemTxLkup1588400G},
    {"RxLkup1588Mpp0", phymodMemRxLkup1588Mpp0},
    {"RxLkup1588Mpp1", phymodMemRxLkup1588Mpp1},
    {"RxLkup1588400G", phymodMemRxLkup1588400G},
    {"SpeedPriorityMapTable", phymodMemSpeedPriorityMapTable},
    {NULL, 0}
};

enum_mapping_t phymod_port_loc_t_mapping[] = {
    {"LocDC", phymodPortLocDC},
    {"LocLine", phymodPortLocLine},
    {"LocSys", phymodPortLocSys},
    {NULL, 0}
};

enum_mapping_t phymod_core_version_t_mapping[] = {
    {"FalconA0", phymodCoreVersionFalconA0},
    {"EagleA0", phymodCoreVersionEagleA0},
    {"QsgmiieA0", phymodCoreVersionQsgmiieA0},
    {"Tsce4A0", phymodCoreVersionTsce4A0},
    {"Tsce12A0", phymodCoreVersionTsce12A0},
    {"TscfA0", phymodCoreVersionTscfA0},
    {"TscfB0", phymodCoreVersionTscfB0},
    {"Phy8806x", phymodCoreVersionPhy8806x},
    {"FuriaA2", phymodCoreVersionFuriaA2},
    {"ViperXA0", phymodCoreVersionViperXA0},
    {"ViperGA0", phymodCoreVersionViperGA0},
    {"SestoA0", phymodCoreVersionSestoA0},
    {"Quadra28", phymodCoreVersionQuadra28},
    {"Huracan", phymodCoreVersionHuracan},
    {"Madura", phymodCoreVersionMadura},
    {"SestoB0", phymodCoreVersionSestoB0},
    {"Dino", phymodCoreVersionDino},
    {"TsceDpll", phymodCoreVersionTsceDpll},
    {"Falcon16", phymodCoreVersionFalcon16},
    {"Tscf16", phymodCoreVersionTscf16},
    {"Merlin16", phymodCoreVersionMerlin16},
    {"TscfB1", phymodCoreVersionTscfB1},
    {"Tsce16", phymodCoreVersionTsce16},
    {"falconDpll", phymodCoreVersionfalconDpll},
    {"TscfGen3", phymodCoreVersionTscfGen3},
    {"Blackhawk16", phymodCoreVersionBlackhawk16},
    {"Tscbh16", phymodCoreVersionTscbh16},
    {NULL, 0}
};

enum_mapping_t phymod_reset_mode_t_mapping[] = {
    {"Hard", phymodResetModeHard},
    {"Soft", phymodResetModeSoft},
    {NULL, 0}
};

enum_mapping_t phymod_reset_direction_t_mapping[] = {
    {"In", phymodResetDirectionIn},
    {"Out", phymodResetDirectionOut},
    {"InOut", phymodResetDirectionInOut},
    {NULL, 0}
};

enum_mapping_t phymod_firmware_media_type_t_mapping[] = {
    {"PcbTraceBackPlane", phymodFirmwareMediaTypePcbTraceBackPlane},
    {"CopperCable", phymodFirmwareMediaTypeCopperCable},
    {"Optics", phymodFirmwareMediaTypeOptics},
    {NULL, 0}
};

enum_mapping_t phymod_sequencer_operation_t_mapping[] = {
    {"Stop", phymodSeqOpStop},
    {"Start", phymodSeqOpStart},
    {"Restart", phymodSeqOpRestart},
    {NULL, 0}
};

enum_mapping_t phymod_core_event_t_mapping[] = {
    {"PllLock", phymodCoreEventPllLock},
    {NULL, 0}
};

enum_mapping_t phymod_drivermode_t_mapping[] = {
    {"Default", phymodTxDriverModeDefault},
    {"NotSupported", phymodTxDriverModeNotSupported},
    {"HalfAmp", phymodTxDriverModeHalfAmp},
    {"HalfAmpHiImped", phymodTxDriverModeHalfAmpHiImped},
    {NULL, 0}
};

enum_mapping_t phymod_txTapMode_t_mapping[] = {
    {"Default", phymodTxTapModeDefault},
    {"6Tap", phymodTxTapMode6Tap},
    {"3Tap", phymodTxTapMode3Tap},
    {NULL, 0}
};

enum_mapping_t phymod_phy_signalling_method_t_mapping[] = {
    {"NRZ", phymodSignallingMethodNRZ},
    {"PAM4", phymodSignallingMethodPAM4},
    {NULL, 0}
};

enum_mapping_t phymod_media_typed_t_mapping[] = {
    {"ChipToChip", phymodMediaTypeChipToChip},
    {"Short", phymodMediaTypeShort},
    {"Mid", phymodMediaTypeMid},
    {"Long", phymodMediaTypeLong},
    {NULL, 0}
};

enum_mapping_t phymod_power_t_mapping[] = {
    {"Off", phymodPowerOff},
    {"On", phymodPowerOn},
    {"OffOn", phymodPowerOffOn},
    {"NoChange", phymodPowerNoChange},
    {NULL, 0}
};

enum_mapping_t phymod_phy_hg2_codec_t_mapping[] = {
    {"Off", phymodBcmHG2CodecOff},
    {"OnWith8ByteIPG", phymodBcmHG2CodecOnWith8ByteIPG},
    {"OnWith9ByteIPG", phymodBcmHG2CodecOnWith9ByteIPG},
    {NULL, 0}
};

enum_mapping_t phymod_phy_tx_lane_control_t_mapping[] = {
    {"TrafficDisable", phymodTxTrafficDisable},
    {"TrafficEnable", phymodTxTrafficEnable},
    {"Reset", phymodTxReset},
    {"SquelchOn", phymodTxSquelchOn},
    {"SquelchOff", phymodTxSquelchOff},
    {"ElectricalIdleEnable", phymodTxElectricalIdleEnable},
    {"ElectricalIdleDisable", phymodTxElectricalIdleDisable},
    {NULL, 0}
};

enum_mapping_t phymod_phy_rx_lane_control_t_mapping[] = {
    {"Reset", phymodRxReset},
    {"SquelchOn", phymodRxSquelchOn},
    {"SquelchOff", phymodRxSquelchOff},
    {"Disable", phymodRxDisable},
    {NULL, 0}
};

enum_mapping_t phymod_interface_t_mapping[] = {
    {"Bypass", phymodInterfaceBypass},
    {"SR", phymodInterfaceSR},
    {"SR4", phymodInterfaceSR4},
    {"KX", phymodInterfaceKX},
    {"KX4", phymodInterfaceKX4},
    {"KR", phymodInterfaceKR},
    {"KR2", phymodInterfaceKR2},
    {"KR4", phymodInterfaceKR4},
    {"CX", phymodInterfaceCX},
    {"CX2", phymodInterfaceCX2},
    {"CX4", phymodInterfaceCX4},
    {"CR", phymodInterfaceCR},
    {"CR2", phymodInterfaceCR2},
    {"CR4", phymodInterfaceCR4},
    {"CR10", phymodInterfaceCR10},
    {"XFI", phymodInterfaceXFI},
    {"SFI", phymodInterfaceSFI},
    {"SFPDAC", phymodInterfaceSFPDAC},
    {"XGMII", phymodInterfaceXGMII},
    {"1000X", phymodInterface1000X},
    {"SGMII", phymodInterfaceSGMII},
    {"XAUI", phymodInterfaceXAUI},
    {"RXAUI", phymodInterfaceRXAUI},
    {"X2", phymodInterfaceX2},
    {"XLAUI", phymodInterfaceXLAUI},
    {"XLAUI2", phymodInterfaceXLAUI2},
    {"CAUI", phymodInterfaceCAUI},
    {"QSGMII", phymodInterfaceQSGMII},
    {"LR4", phymodInterfaceLR4},
    {"LR", phymodInterfaceLR},
    {"LR2", phymodInterfaceLR2},
    {"ER", phymodInterfaceER},
    {"ER2", phymodInterfaceER2},
    {"ER4", phymodInterfaceER4},
    {"SR2", phymodInterfaceSR2},
    {"SR10", phymodInterfaceSR10},
    {"CAUI4", phymodInterfaceCAUI4},
    {"VSR", phymodInterfaceVSR},
    {"LR10", phymodInterfaceLR10},
    {"KR10", phymodInterfaceKR10},
    {"CAUI4_C2C", phymodInterfaceCAUI4_C2C},
    {"CAUI4_C2M", phymodInterfaceCAUI4_C2M},
    {"ZR", phymodInterfaceZR},
    {"LRM", phymodInterfaceLRM},
    {"XLPPI", phymodInterfaceXLPPI},
    {"OTN", phymodInterfaceOTN},
    {NULL, 0}
};

enum_mapping_t phymod_ref_clk_t_mapping[] = {
    {"156Mhz", phymodRefClk156Mhz},
    {"125Mhz", phymodRefClk125Mhz},
    {"106Mhz", phymodRefClk106Mhz},
    {"161Mhz", phymodRefClk161Mhz},
    {"174Mhz", phymodRefClk174Mhz},
    {"312Mhz", phymodRefClk312Mhz},
    {"322Mhz", phymodRefClk322Mhz},
    {"349Mhz", phymodRefClk349Mhz},
    {"644Mhz", phymodRefClk644Mhz},
    {"698Mhz", phymodRefClk698Mhz},
    {"155Mhz", phymodRefClk155Mhz},
    {"156P6Mhz", phymodRefClk156P6Mhz},
    {"157Mhz", phymodRefClk157Mhz},
    {"158Mhz", phymodRefClk158Mhz},
    {"159Mhz", phymodRefClk159Mhz},
    {"168Mhz", phymodRefClk168Mhz},
    {"172Mhz", phymodRefClk172Mhz},
    {"173Mhz", phymodRefClk173Mhz},
    {"169P409Mhz", phymodRefClk169P409Mhz},
    {"348P125Mhz", phymodRefClk348P125Mhz},
    {"162P948Mhz", phymodRefClk162P948Mhz},
    {"336P094Mhz", phymodRefClk336P094Mhz},
    {"168P12Mhz", phymodRefClk168P12Mhz},
    {"346P74Mhz", phymodRefClk346P74Mhz},
    {"167P41Mhz", phymodRefClk167P41Mhz},
    {"345P28Mhz", phymodRefClk345P28Mhz},
    {"162P26Mhz", phymodRefClk162P26Mhz},
    {"334P66Mhz", phymodRefClk334P66Mhz},
    {NULL, 0}
};

enum_mapping_t phymod_triple_core_t_mapping[] = {
    {"444", phymodTripleCore444},
    {"343", phymodTripleCore343},
    {"442", phymodTripleCore442},
    {"244", phymodTripleCore244},
    {NULL, 0}
};

enum_mapping_t phymod_otn_type_t_mapping[] = {
    {"OTU1", phymodOTNOTU1},
    {"OTU1e", phymodOTNOTU1e},
    {"OTU2", phymodOTNOTU2},
    {"OTU2e", phymodOTNOTU2e},
    {"OTU2f", phymodOTNOTU2f},
    {"OTU3", phymodOTNOTU3},
    {"OTU3e2", phymodOTNOTU3e2},
    {"OTU4", phymodOTNOTU4},
    {"OTU4p10", phymodOTNOTU4p10},
    {NULL, 0}
};

enum_mapping_t phymod_an_mode_type_t_mapping[] = {
    {"NONE", phymod_AN_MODE_NONE},
    {"CL73", phymod_AN_MODE_CL73},
    {"CL37", phymod_AN_MODE_CL37},
    {"CL73BAM", phymod_AN_MODE_CL73BAM},
    {"CL37BAM", phymod_AN_MODE_CL37BAM},
    {"HPAM", phymod_AN_MODE_HPAM},
    {"SGMII", phymod_AN_MODE_SGMII},
    {"CL37BAM_10P9375G_VCO", phymod_AN_MODE_CL37BAM_10P9375G_VCO},
    {"CL37_SGMII", phymod_AN_MODE_CL37_SGMII},
    {"CL73_MSA", phymod_AN_MODE_CL73_MSA},
    {"MSA", phymod_AN_MODE_MSA},
    {NULL, 0}
};

enum_mapping_t phymod_cl37_sgmii_speed_t_mapping[] = {
    {"10M", phymod_CL37_SGMII_10M},
    {"100M", phymod_CL37_SGMII_100M},
    {"1000M", phymod_CL37_SGMII_1000M},
    {NULL, 0}
};

enum_mapping_t phymod_firmware_load_force_t_mapping[] = {
    {"Skip", phymodFirmwareLoadSkip},
    {"Force", phymodFirmwareLoadForce},
    {"Auto", phymodFirmwareLoadAuto},
    {NULL, 0}
};

enum_mapping_t phymod_firmware_load_method_t_mapping[] = {
    {"None", phymodFirmwareLoadMethodNone},
    {"Internal", phymodFirmwareLoadMethodInternal},
    {"External", phymodFirmwareLoadMethodExternal},
    {"ProgEEPROM", phymodFirmwareLoadMethodProgEEPROM},
    {NULL, 0}
};

enum_mapping_t phymod_datapath_t_mapping[] = {
    {"Normal", phymodDatapathNormal},
    {"Ull", phymodDatapathUll},
    {NULL, 0}
};

enum_mapping_t phymod_tx_input_voltage_t_mapping[] = {
    {"Default", phymodTxInputVoltageDefault},
    {"1p00", phymodTxInputVoltage1p00},
    {"1p25", phymodTxInputVoltage1p25},
    {NULL, 0}
};

enum_mapping_t phymod_operation_mode_t_mapping[] = {
    {"Retimer", phymodOperationModeRetimer},
    {"Repeater", phymodOperationModeRepeater},
    {"Passthru", phymodOperationModePassthru},
    {NULL, 0}
};

enum_mapping_t phymod_autoneg_link_qualifier_t_mapping[] = {
    {"RegisterWrite", phymodAutonegLinkQualifierRegisterWrite},
    {"KRBlockLock", phymodAutonegLinkQualifierKRBlockLock},
    {"KR4BlockLock", phymodAutonegLinkQualifierKR4BlockLock},
    {"KR4PMDLock", phymodAutonegLinkQualifierKR4PMDLock},
    {"ExternalPCS", phymodAutonegLinkQualifierExternalPCS},
    {"Default", phymodAutonegLinkQualifierDefault},
    {NULL, 0}
};

enum_mapping_t phymod_loopback_mode_t_mapping[] = {
    {"Global", phymodLoopbackGlobal},
    {"GlobalPMD", phymodLoopbackGlobalPMD},
    {"GlobalPCS", phymodLoopbackGlobalPCS},
    {"RemotePMD", phymodLoopbackRemotePMD},
    {"RemotePCS", phymodLoopbackRemotePCS},
    {"SysGlobal", phymodLoopbackSysGlobal},
    {"SysGlobalPMD", phymodLoopbackSysGlobalPMD},
    {"SysGlobalPCS", phymodLoopbackSysGlobalPCS},
    {"SysRemotePMD", phymodLoopbackSysRemotePMD},
    {"SysRemotePCS", phymodLoopbackSysRemotePCS},
    {NULL, 0}
};

enum_mapping_t phymod_pcs_userspeed_mode_t_mapping[] = {
    {"ST", phymodPcsUserSpeedModeST},
    {"HTO", phymodPcsUserSpeedModeHTO},
    {NULL, 0}
};

enum_mapping_t phymod_pcs_userspeed_param_t_mapping[] = {
    {"Entry", phymodPcsUserSpeedParamEntry},
    {"HCD", phymodPcsUserSpeedParamHCD},
    {"Clear", phymodPcsUserSpeedParamClear},
    {"PllDiv", phymodPcsUserSpeedParamPllDiv},
    {"PmaOS", phymodPcsUserSpeedParamPmaOS},
    {"Scramble", phymodPcsUserSpeedParamScramble},
    {"Encode", phymodPcsUserSpeedParamEncode},
    {"Cl48CheckEnd", phymodPcsUserSpeedParamCl48CheckEnd},
    {"BlkSync", phymodPcsUserSpeedParamBlkSync},
    {"Reorder", phymodPcsUserSpeedParamReorder},
    {"Cl36Enable", phymodPcsUserSpeedParamCl36Enable},
    {"Descr1", phymodPcsUserSpeedParamDescr1},
    {"Decode1", phymodPcsUserSpeedParamDecode1},
    {"Deskew", phymodPcsUserSpeedParamDeskew},
    {"Descr2", phymodPcsUserSpeedParamDescr2},
    {"Descr2ByteDel", phymodPcsUserSpeedParamDescr2ByteDel},
    {"Brcm64B66", phymodPcsUserSpeedParamBrcm64B66},
    {"Sgmii", phymodPcsUserSpeedParamSgmii},
    {"Clkcnt0", phymodPcsUserSpeedParamClkcnt0},
    {"Clkcnt1", phymodPcsUserSpeedParamClkcnt1},
    {"Lpcnt0", phymodPcsUserSpeedParamLpcnt0},
    {"Lpcnt1", phymodPcsUserSpeedParamLpcnt1},
    {"MacCGC", phymodPcsUserSpeedParamMacCGC},
    {"Repcnt", phymodPcsUserSpeedParamRepcnt},
    {"CrdtEn", phymodPcsUserSpeedParamCrdtEn},
    {"PcsClkcnt", phymodPcsUserSpeedParamPcsClkcnt},
    {"PcsCGC", phymodPcsUserSpeedParamPcsCGC},
    {"Cl72En", phymodPcsUserSpeedParamCl72En},
    {"NumOfLanes", phymodPcsUserSpeedParamNumOfLanes},
    {NULL, 0}
};

enum_mapping_t phymod_gpio_mode_t_mapping[] = {
    {"Disabled", phymodGpioModeDisabled},
    {"Output", phymodGpioModeOutput},
    {"Input", phymodGpioModeInput},
    {NULL, 0}
};

enum_mapping_t phymod_osr_mode_t_mapping[] = {
    {"1", phymodOversampleMode1},
    {"2", phymodOversampleMode2},
    {"3", phymodOversampleMode3},
    {"3P3", phymodOversampleMode3P3},
    {"4", phymodOversampleMode4},
    {"5", phymodOversampleMode5},
    {"7P5", phymodOversampleMode7P5},
    {"8", phymodOversampleMode8},
    {"8P25", phymodOversampleMode8P25},
    {"10", phymodOversampleMode10},
    {"16P5", phymodOversampleMode16P5},
    {"20P625", phymodOversampleMode20P625},
    {NULL, 0}
};

enum_mapping_t phymod_timesync_timer_mode_t_mapping[] = {
    {"None", phymodTimesyncTimerModeNone},
    {"Default", phymodTimesyncTimerModeDefault},
    {"32Bit", phymodTimesyncTimerMode32Bit},
    {"48Bit", phymodTimesyncTimerMode48Bit},
    {"64Bit", phymodTimesyncTimerMode64Bit},
    {"80Bit", phymodTimesyncTimerMode80Bit},
    {NULL, 0}
};

enum_mapping_t phymod_timesync_global_mode_t_mapping[] = {
    {"Free", phymodTimesyncGLobalModeFree},
    {"SyncIn", phymodTimesyncGLobalModeSyncIn},
    {"Cpu", phymodTimesyncGLobalModeCpu},
    {NULL, 0}
};

enum_mapping_t phymod_timesync_framesync_mode_t_mapping[] = {
    {"None", phymodTimesyncFramsyncModeNone},
    {"SyncIn0", phymodTimesyncFramsyncModeSyncIn0},
    {"SyncIn1", phymodTimesyncFramsyncModeSyncIn1},
    {"SyncOut", phymodTimesyncFramsyncModeSyncOut},
    {"Cpu", phymodTimesyncFramsyncModeCpu},
    {NULL, 0}
};

enum_mapping_t phymod_timesync_syncout_mode_t_mapping[] = {
    {"Disable", phymodTimesyncSyncoutModeDisable},
    {"OneTime", phymodTimesyncSyncoutModeOneTime},
    {"PulseTrain", phymodTimesyncSyncoutModePulseTrain},
    {"PulseTrainWithSync", phymodTimesyncSyncoutModePulseTrainWithSync},
    {NULL, 0}
};

enum_mapping_t phymod_timesync_event_msg_action_t_mapping[] = {
    {"None", phymodTimesyncEventMsgActionNone},
    {"EgrModeUpdateCorrectionField", phymodTimesyncEventMsgActionEgrModeUpdateCorrectionField},
    {"EgrModeReplaceCorrectionFieldOrigin", phymodTimesyncEventMsgActionEgrModeReplaceCorrectionFieldOrigin},
    {"EgrModeCaptureTimestamp", phymodTimesyncEventMsgActionEgrModeCaptureTimestamp},
    {"IngModeUpdateCorrectionField", phymodTimesyncEventMsgActionIngModeUpdateCorrectionField},
    {"IngModeInsertTimestamp", phymodTimesyncEventMsgActionIngModeInsertTimestamp},
    {"IngModeInsertDelaytime", phymodTimesyncEventMsgActionIngModeInsertDelaytime},
    {NULL, 0}
};

enum_mapping_t phymod_timesync_compensation_mode_t_mapping[] = {
    {"None", phymodTimesyncCompensationModeNone},
    {"EarliestLane", phymodTimesyncCompensationModeEarliestLane},
    {"Latestlane", phymodTimesyncCompensationModeLatestlane},
    {NULL, 0}
};

enum_mapping_t phymod_edc_config_method_t_mapping[] = {
    {"None", phymodEdcConfigMethodNone},
    {"Hardware", phymodEdcConfigMethodHardware},
    {"Software", phymodEdcConfigMethodSoftware},
    {NULL, 0}
};

enum_mapping_t phymod_core_mode_t_mapping[] = {
    {"Default", phymodCoreModeDefault},
    {"Single", phymodCoreModeSingle},
    {"Dual", phymodCoreModeDual},
    {"IndepLane", phymodCoreModeIndepLane},
    {"Split012", phymodCoreModeSplit012},
    {"Split023", phymodCoreModeSplit023},
    {"Triple244", phymodCoreModeTriple244},
    {"Triple343", phymodCoreModeTriple343},
    {"Triple442", phymodCoreModeTriple442},
    {NULL, 0}
};

enum_mapping_t phymod_failover_mode_t_mapping[] = {
    {"None", phymodFailovermodeNone},
    {"Enable", phymodFailovermodeEnable},
    {NULL, 0}
};

enum_mapping_t phymod_eye_margin_mode_t_mapping[] = {
    {"HZ_L", phymod_eye_marign_HZ_L},
    {"HZ_R", phymod_eye_marign_HZ_R},
    {"VT_U", phymod_eye_marign_VT_U},
    {"VT_D", phymod_eye_marign_VT_D},
    {NULL, 0}
};

enum_mapping_t phymod_tsce_pll_multiplier_t_mapping[] = {
    {"DIV46", phymod_TSCE_PLL_DIV46},
    {"DIV72", phymod_TSCE_PLL_DIV72},
    {"DIV40", phymod_TSCE_PLL_DIV40},
    {"DIV42", phymod_TSCE_PLL_DIV42},
    {"DIV48", phymod_TSCE_PLL_DIV48},
    {"DIV50", phymod_TSCE_PLL_DIV50},
    {"DIV52", phymod_TSCE_PLL_DIV52},
    {"DIV54", phymod_TSCE_PLL_DIV54},
    {"DIV60", phymod_TSCE_PLL_DIV60},
    {"DIV64", phymod_TSCE_PLL_DIV64},
    {"DIV66", phymod_TSCE_PLL_DIV66},
    {"DIV68", phymod_TSCE_PLL_DIV68},
    {"DIV70", phymod_TSCE_PLL_DIV70},
    {"DIV80", phymod_TSCE_PLL_DIV80},
    {"DIV92", phymod_TSCE_PLL_DIV92},
    {"DIV100", phymod_TSCE_PLL_DIV100},
    {"DIV82P5", phymod_TSCE_PLL_DIV82P5},
    {"DIV87P5", phymod_TSCE_PLL_DIV87P5},
    {NULL, 0}
};

enum_mapping_t phymod_tscf_pll_multiplier_t_mapping[] = {
    {"DIV64", phymod_TSCF_PLL_DIV64},
    {"DIV66", phymod_TSCF_PLL_DIV66},
    {"DIV80", phymod_TSCF_PLL_DIV80},
    {"DIV128", phymod_TSCF_PLL_DIV128},
    {"DIV132", phymod_TSCF_PLL_DIV132},
    {"DIV140", phymod_TSCF_PLL_DIV140},
    {"DIV160", phymod_TSCF_PLL_DIV160},
    {"DIV165", phymod_TSCF_PLL_DIV165},
    {"DIV168", phymod_TSCF_PLL_DIV168},
    {"DIV170", phymod_TSCF_PLL_DIV170},
    {"DIV175", phymod_TSCF_PLL_DIV175},
    {"DIV180", phymod_TSCF_PLL_DIV180},
    {"DIV184", phymod_TSCF_PLL_DIV184},
    {"DIV200", phymod_TSCF_PLL_DIV200},
    {"DIV224", phymod_TSCF_PLL_DIV224},
    {"DIV264", phymod_TSCF_PLL_DIV264},
    {"DIV96", phymod_TSCF_PLL_DIV96},
    {"DIV120", phymod_TSCF_PLL_DIV120},
    {"DIV144", phymod_TSCF_PLL_DIV144},
    {"DIV198", phymod_TSCF_PLL_DIV198},
    {NULL, 0}
};

enum_mapping_t phymod_tscbh_pll_multiplier_t_mapping[] = {
    {"DIVNONE", phymod_TSCBH_PLL_DIVNONE},
    {"DIV66", phymod_TSCBH_PLL_DIV66},
    {"DIV67", phymod_TSCBH_PLL_DIV67},
    {"DIV70", phymod_TSCBH_PLL_DIV70},
    {"DIV72", phymod_TSCBH_PLL_DIV72},
    {"DIV73P6", phymod_TSCBH_PLL_DIV73P6},
    {"DIV79P2", phymod_TSCBH_PLL_DIV79P2},
    {"DIV80", phymod_TSCBH_PLL_DIV80},
    {"DIV82P5", phymod_TSCBH_PLL_DIV82P5},
    {"DIV84", phymod_TSCBH_PLL_DIV84},
    {"DIV85", phymod_TSCBH_PLL_DIV85},
    {"DIV87P5", phymod_TSCBH_PLL_DIV87P5},
    {"DIV89P6", phymod_TSCBH_PLL_DIV89P6},
    {"DIV90", phymod_TSCBH_PLL_DIV90},
    {"DIV96", phymod_TSCBH_PLL_DIV96},
    {"DIV100", phymod_TSCBH_PLL_DIV100},
    {"DIV120", phymod_TSCBH_PLL_DIV120},
    {"DIV127P4", phymod_TSCBH_PLL_DIV127P4},
    {"DIV128", phymod_TSCBH_PLL_DIV128},
    {"DIV132", phymod_TSCBH_PLL_DIV132},
    {"DIV140", phymod_TSCBH_PLL_DIV140},
    {"DIV144", phymod_TSCBH_PLL_DIV144},
    {"DIV147P2", phymod_TSCBH_PLL_DIV147P2},
    {"DIV158P4", phymod_TSCBH_PLL_DIV158P4},
    {"DIV160", phymod_TSCBH_PLL_DIV160},
    {"DIV165", phymod_TSCBH_PLL_DIV165},
    {"DIV168", phymod_TSCBH_PLL_DIV168},
    {"DIV170", phymod_TSCBH_PLL_DIV170},
    {"DIV175", phymod_TSCBH_PLL_DIV175},
    {"DIV180", phymod_TSCBH_PLL_DIV180},
    {"DIV184", phymod_TSCBH_PLL_DIV184},
    {"DIV192", phymod_TSCBH_PLL_DIV192},
    {"DIV198", phymod_TSCBH_PLL_DIV198},
    {"DIV200", phymod_TSCBH_PLL_DIV200},
    {"DIV224", phymod_TSCBH_PLL_DIV224},
    {"DIV240", phymod_TSCBH_PLL_DIV240},
    {"DIV264", phymod_TSCBH_PLL_DIV264},
    {"DIV280", phymod_TSCBH_PLL_DIV280},
    {NULL, 0}
};

enum_mapping_t phymod_fec_type_t_mapping[] = {
    {"None", phymod_fec_None},
    {"CL74", phymod_fec_CL74},
    {"CL91", phymod_fec_CL91},
    {"RS544", phymod_fec_RS544},
    {"RS272", phymod_fec_RS272},
    {NULL, 0}
};

enum_mapping_t phymod_dfe_mode_t_mapping[] = {
    {"off", phymod_dfe_off},
    {"on", phymod_dfe_on},
    {"lp_on", phymod_dfe_lp_on},
    {NULL, 0}
};

enum_mapping_t phymod_pause_type_t_mapping[] = {
    {"none", phymod_pause_none},
    {"symm", phymod_pause_symm},
    {"asym", phymod_pause_asym},
    {"asym_symm", phymod_pause_asym_symm},
    {NULL, 0}
};

enum_mapping_t phymod_channel_type_t_mapping[] = {
    {"long", phymod_channel_long},
    {"short", phymod_channel_short},
    {NULL, 0}
};

#endif /*PHYMOD_DIAG*/
