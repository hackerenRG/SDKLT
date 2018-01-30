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

#ifndef _PHYMOD_H__H_
#define _PHYMOD_H__H_

#include <phymod/phymod_definitions.h>

/*!
 * @enum phymod_dispatch_type_e
 * @brief Supported Drivers 
 */ 
typedef enum phymod_dispatch_type_e {
#ifdef PHYMOD_EAGLE_SUPPORT
    phymodDispatchTypeEagle,
#endif /*PHYMOD_EAGLE_SUPPORT  */
#ifdef PHYMOD_FALCON_SUPPORT
    phymodDispatchTypeFalcon,
#endif /*PHYMOD_FALCON_SUPPORT  */
#ifdef PHYMOD_QSGMIIE_SUPPORT
    phymodDispatchTypeQsgmiie,
#endif /*PHYMOD_QSGMIIE_SUPPORT  */
#ifdef PHYMOD_TSCE_SUPPORT
    phymodDispatchTypeTsce,
#endif /*PHYMOD_TSCE_SUPPORT  */
#ifdef PHYMOD_TSCF_SUPPORT
    phymodDispatchTypeTscf,
#endif /*PHYMOD_TSCF_SUPPORT  */
#ifdef PHYMOD_PHY8806X_SUPPORT
    phymodDispatchTypePhy8806x,
#endif /*PHYMOD_PHY8806X_SUPPORT  */
#ifdef PHYMOD_FURIA_SUPPORT
    phymodDispatchTypeFuria,
#endif /*PHYMOD_FURIA_SUPPORT  */
#ifdef PHYMOD_VIPER_SUPPORT
    phymodDispatchTypeViper,
#endif /*PHYMOD_VIPER_SUPPORT  */
#ifdef PHYMOD_SESTO_SUPPORT
    phymodDispatchTypeSesto,
#endif /*PHYMOD_SESTO_SUPPORT  */
#ifdef PHYMOD_QUADRA28_SUPPORT
    phymodDispatchTypeQuadra28,
#endif /*PHYMOD_QUADRA28_SUPPORT  */
#ifdef PHYMOD_QTCE_SUPPORT
    phymodDispatchTypeQtce,
#endif /*PHYMOD_QTCE_SUPPORT  */
#ifdef PHYMOD_HURACAN_SUPPORT
    phymodDispatchTypeHuracan,
#endif /*PHYMOD_HURACAN_SUPPORT  */
#ifdef PHYMOD_MADURA_SUPPORT
    phymodDispatchTypeMadura,
#endif /*PHYMOD_MADURA_SUPPORT  */
#ifdef PHYMOD_FURIA_SUPPORT
    phymodDispatchTypeFuria_82212,
#endif /*PHYMOD_FURIA_SUPPORT  */
#ifdef PHYMOD_DINO_SUPPORT
    phymodDispatchTypeDino,
#endif /*PHYMOD_DINO_SUPPORT  */
#ifdef PHYMOD_TSCE_DPLL_SUPPORT
    phymodDispatchTypeTsce_dpll,
#endif /*PHYMOD_TSCE_DPLL_SUPPORT  */
#ifdef PHYMOD_EAGLE_DPLL_SUPPORT
    phymodDispatchTypeEagle_dpll,
#endif /*PHYMOD_EAGLE_DPLL_SUPPORT  */
#ifdef PHYMOD_TSCF16_SUPPORT
    phymodDispatchTypeTscf16,
#endif /*PHYMOD_TSCF16_SUPPORT  */
#ifdef PHYMOD_FALCON16_SUPPORT
    phymodDispatchTypeFalcon16,
#endif /*PHYMOD_FALCON16_SUPPORT  */
#ifdef PHYMOD_MERLIN16_SUPPORT
    phymodDispatchTypeMerlin16,
#endif /*PHYMOD_MERLIN16_SUPPORT  */
#ifdef PHYMOD_TSCE16_SUPPORT
    phymodDispatchTypeTsce16,
#endif /*PHYMOD_TSCE16_SUPPORT  */
#ifdef PHYMOD_TSCF_GEN3_SUPPORT
    phymodDispatchTypeTscf_gen3,
#endif /*PHYMOD_TSCF_GEN3_SUPPORT  */
#ifdef PHYMOD_FALCON_DPLL_SUPPORT
    phymodDispatchTypeFalcon_dpll,
#endif /*PHYMOD_FALCON_DPLL_SUPPORT  */
#ifdef PHYMOD_BLACKHAWK_SUPPORT
    phymodDispatchTypeBlackhawk,
#endif /*PHYMOD_BLACKHAWK_SUPPORT  */
#ifdef PHYMOD_TSCBH_SUPPORT
    phymodDispatchTypeTscbh,
#endif /*PHYMOD_TSCBH_SUPPORT  */
#ifdef PHYMOD_PHYMODNULL_SUPPORT
    phymodDispatchTypePhymodNull,
#endif /*PHYMOD_PHYMODNULL_SUPPORT  */
    phymodDispatchTypeInvalid,
#ifdef PHYMOD_NULL_SUPPORT
    phymodDispatchTypeNull,
#endif /*PHYMOD_NULL_SUPPORT  */
    phymodDispatchTypeCount
} phymod_dispatch_type_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_dispatch_type_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_dispatch_type_t validation */
int phymod_dispatch_type_t_validate(phymod_dispatch_type_t phymod_dispatch_type);
#define PHYMOD_MAX_LANES_PER_CORE PHYMOD_CONFIG_MAX_LANES_PER_CORE

#define PHYMOD_MAX_LANES_PER_PORT 12


/*!
 * @enum phymod_mem_type_e
 * @brief phymod tsc memory type 
 */ 
typedef enum phymod_mem_type_e {
    phymodMemSpeedIdTable = 1, /**< speed id table */
    phymodMemAMTable, /**< Am table */
    phymodMemUMTable, /**< UM table */
    phymodMemTxLkup1588Mpp0,
    phymodMemTxLkup1588Mpp1,
    phymodMemTxLkup1588400G,
    phymodMemRxLkup1588Mpp0,
    phymodMemRxLkup1588Mpp1,
    phymodMemRxLkup1588400G,
    phymodMemSpeedPriorityMapTable,
    phymodMemCount
} phymod_mem_type_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_mem_type_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_mem_type_t validation */
int phymod_mem_type_t_validate(phymod_mem_type_t phymod_mem_type);
/*! 
 * phymod_bus_read_f
 *
 * @brief function definition for register read operations 
 *
 * @param [inout] user_acc        - Optional application data
 * @param [in]  core_addr       - Core address
 * @param [in]  reg_addr        - address to read
 * @param [out]  val             - read value
 */
typedef int (*phymod_bus_read_f)(void* user_acc, uint32_t core_addr, uint32_t reg_addr, uint32_t* val);

/*! 
 * phymod_bus_write_f
 *
 * @brief function definition for register write operations 
 *
 * @param [inout] user_acc        - Optional application data
 * @param [in]  core_addr       - Core address
 * @param [in]  reg_addr        - address to write
 * @param [in]  val             - write value
 */
typedef int (*phymod_bus_write_f)(void* user_acc, uint32_t core_addr, uint32_t reg_addr, uint32_t val);

/*! 
 * phymod_mem_read_f
 *
 * @brief function definition for tsc mem read operations 
 *
 * @param [inout] user_acc        - Optional application data
 * @param [in]  mem_type        - address to read
 * @param [in]  mem_index       - which index to read
 * @param [out]  val             - read value
 */
typedef int (*phymod_mem_read_f)(void* user_acc, phymod_mem_type_t mem_type, uint32_t mem_index, uint32_t* val);

/*! 
 * phymod_mem_write_f
 *
 * @brief function definition for tsc mem write operations 
 *
 * @param [inout] user_acc        - Optional application data
 * @param [in]  mem_type        - address to write
 * @param [in]  mem_index       - which index to write
 * @param [in]  val             - write data
 */
typedef int (*phymod_mem_write_f)(void* user_acc, phymod_mem_type_t mem_type, uint32_t mem_index, const uint32_t* val);

/*! 
 * phymod_bus_write_disabled_f
 *
 * @brief function definition for finding out if wormboot  
 *
 * @param [inout] user_acc        - Optional application data
 * @param [out]  val             - val - 0 if writes are enabled, 1 otherwise
 */
typedef int (*phymod_bus_write_disabled_f)(void* user_acc, uint32_t* val);

/*! 
 * phymod_bus_mutex_take_f
 *
 * @brief function definition for take bus mutex 
 *
 * @param [inout] user_acc        - Optional application data
 */
typedef int (*phymod_bus_mutex_take_f)(void* user_acc);

/*! 
 * phymod_bus_mutex_give_f
 *
 * @brief function definition for give bus mutex 
 *
 * @param [inout] user_acc        - Optional application data
 */
typedef int (*phymod_bus_mutex_give_f)(void* user_acc);

/*! 
 * @brief Bus capabilities 
 */ 
#define PHYMOD_BUS_CAP_WR_MODIFY 0x1 /**< The bus support modify functionality */
#define PHYMOD_BUS_CAP_LANE_CTRL 0x2 /**< The bus support direct lane configuration */

#define PHYMOD_BUS_CAP_WR_MODIFY_SET(bus) ((bus)->bus_capabilities |= PHYMOD_BUS_CAP_WR_MODIFY)
#define PHYMOD_BUS_CAP_LANE_CTRL_SET(bus) ((bus)->bus_capabilities |= PHYMOD_BUS_CAP_LANE_CTRL)

#define PHYMOD_BUS_CAP_WR_MODIFY_CLR(bus) ((bus)->bus_capabilities &= ~PHYMOD_BUS_CAP_WR_MODIFY)
#define PHYMOD_BUS_CAP_LANE_CTRL_CLR(bus) ((bus)->bus_capabilities &= ~PHYMOD_BUS_CAP_LANE_CTRL)

#define PHYMOD_BUS_CAP_WR_MODIFY_GET(bus) ((bus)->bus_capabilities & PHYMOD_BUS_CAP_WR_MODIFY ? 1 : 0)
#define PHYMOD_BUS_CAP_LANE_CTRL_GET(bus) ((bus)->bus_capabilities & PHYMOD_BUS_CAP_LANE_CTRL ? 1 : 0)

typedef struct phymod_bus_s {
    char* bus_name;
    phymod_bus_read_f read;
    phymod_bus_write_f write;
    phymod_bus_write_disabled_f is_write_disabled;
    phymod_bus_mutex_take_f mutex_take;
    phymod_bus_mutex_give_f mutex_give;
    phymod_mem_read_f mem_read;
    phymod_mem_write_f mem_write;
    uint32_t bus_capabilities;
} phymod_bus_t;

/* phymod_bus_t initialization and validation */
int phymod_bus_t_validate(const phymod_bus_t* phymod_bus);
int phymod_bus_t_init(phymod_bus_t* phymod_bus);

/*! 
 * @brief Phymod access flags 
 */ 
#define PHYMOD_ACC_F_CLAUSE45 0x1 /**< Use CL45 to access */
#define PHYMOD_ACC_F_QMODE 0x2 /**< Qmode lane mask access */
#define PHYMOD_ACC_F_PRECONDITION 0x4 /**< Qmode lane mask access */

#define PHYMOD_ACC_F_CLAUSE45_SET(access) ((access)->flags |= PHYMOD_ACC_F_CLAUSE45)
#define PHYMOD_ACC_F_QMODE_SET(access) ((access)->flags |= PHYMOD_ACC_F_QMODE)
#define PHYMOD_ACC_F_PRECONDITION_SET(access) ((access)->flags |= PHYMOD_ACC_F_PRECONDITION)

#define PHYMOD_ACC_F_CLAUSE45_CLR(access) ((access)->flags &= ~PHYMOD_ACC_F_CLAUSE45)
#define PHYMOD_ACC_F_QMODE_CLR(access) ((access)->flags &= ~PHYMOD_ACC_F_QMODE)
#define PHYMOD_ACC_F_PRECONDITION_CLR(access) ((access)->flags &= ~PHYMOD_ACC_F_PRECONDITION)

#define PHYMOD_ACC_F_CLAUSE45_GET(access) ((access)->flags & PHYMOD_ACC_F_CLAUSE45 ? 1 : 0)
#define PHYMOD_ACC_F_QMODE_GET(access) ((access)->flags & PHYMOD_ACC_F_QMODE ? 1 : 0)
#define PHYMOD_ACC_F_PRECONDITION_GET(access) ((access)->flags & PHYMOD_ACC_F_PRECONDITION ? 1 : 0)

#define PHYMOD_ACC_DEVAD_0_OVERRIDE_MASK (0x80000000) /**< bit 31 for Override DEVAD=0 */
#define PHYMOD_ACC_DEVAD_FORCE_MASK (0x40000000) /**< bit 30 Force DEVAD */
#define PHYMOD_ACC_DEVAD_MASK (0x1f) /**< bit [4:0] DEVAD override value */

/*! 
 * phymod_ext_acc_f
 *
 * @brief function definition for external access 
 *
 * @param [inout] acc_data        - Data for external access.
 */
typedef int (*phymod_ext_acc_f)(void* acc_data);

typedef struct phymod_access_s {
    void* user_acc; /**< Optional application data - not used by PHY driver */
    phymod_ext_acc_f ext_acc; /**< External Access Method */
    phymod_bus_t* bus; /**< PHY bus driver */
    uint32_t flags; /**< PHYMOD_ACC_F_xxx flags */
    uint32_t lane_mask; /**< specific lanes bitmap */
    uint32_t addr; /**< PHY address (PHYAD) used by this PHY */
    uint32_t devad; /**< Default clause 45 DEVAD if none are specified */
    uint8_t pll_idx; /**< PLL number to be used. Default to 0 if multi-pll is not supported */
} phymod_access_t;

/* phymod_access_t initialization and validation */
int phymod_access_t_validate(const phymod_access_t* phymod_access);
int phymod_access_t_init(phymod_access_t* phymod_access);

#define PHYMOD_ACC_USER_ACC(access_) ((access_)->user_acc)
#define PHYMOD_ACC_EXT_ACC(access_) ((access_)->ext_acc)
#define PHYMOD_ACC_BUS(access_) ((access_)->bus)
#define PHYMOD_ACC_FLAGS(access_) ((access_)->flags)
#define PHYMOD_ACC_LANE_MASK(access_) ((access_)->lane_mask)
#define PHYMOD_ACC_ADDR(access_) ((access_)->addr)
#define PHYMOD_ACC_DEVAD(access_) ((access_)->devad)
#define PHYMOD_ACC_PLLIDX(access_) ((access_)->pll_idx)


/*!
 * @enum phymod_port_loc_e
 * @brief phymod line side/system side port location in the board layout 
 */ 
typedef enum phymod_port_loc_e {
    phymodPortLocDC = 0, /**< Loc/side don't care */
    phymodPortLocLine, /**< Loc/line side */
    phymodPortLocSys, /**< Loc/system side */
    phymodPortCount
} phymod_port_loc_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_port_loc_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_port_loc_t validation */
int phymod_port_loc_t_validate(phymod_port_loc_t phymod_port_loc);
/*! 
 * @brief specify pcs by pass mode or not 
 */ 
#define PHYMOD_DEVICE_OP_MODE_PCS_BYPASS 0x10000 /**< to set or clear pcs by pass mode */

#define PHYMOD_DEVICE_OP_MODE_PCS_BYPASS_SET(op_mode) (op_mode |= PHYMOD_DEVICE_OP_MODE_PCS_BYPASS)

#define PHYMOD_DEVICE_OP_MODE_PCS_BYPASS_CLR(op_mode) (op_mode &= ~PHYMOD_DEVICE_OP_MODE_PCS_BYPASS)

#define PHYMOD_DEVICE_OP_MODE_PCS_BYPASS_GET(op_mode) (op_mode & PHYMOD_DEVICE_OP_MODE_PCS_BYPASS ? 1 : 0)

typedef struct phymod_core_access_s {
    phymod_port_loc_t port_loc; /**< phymod line side/system side port location in board layout */
    uint32_t device_op_mode; /**< phy device operation mode for chip speicific designs */
    phymod_access_t access;
    phymod_dispatch_type_t type; /**< Driver Type */
} phymod_core_access_t;

/* phymod_core_access_t initialization and validation */
int phymod_core_access_t_validate(const phymod_core_access_t* phymod_core_access);
int phymod_core_access_t_init(phymod_core_access_t* phymod_core_access);

typedef struct phymod_phy_access_s {
    phymod_port_loc_t port_loc; /**< phymod line side/system side port location in board layout */
    uint32_t device_op_mode; /**< phy device operation mode for chip speicific designs */
    phymod_access_t access;
    phymod_dispatch_type_t type; /**< Driver Type */
} phymod_phy_access_t;

/* phymod_phy_access_t initialization and validation */
int phymod_phy_access_t_validate(const phymod_phy_access_t* phymod_phy_access);
int phymod_phy_access_t_init(phymod_phy_access_t* phymod_phy_access);

typedef struct phymod_port_config_s {
    uint32_t speed;
    uint8_t interface;
    uint8_t sys_lane_count;
    uint8_t ln_lane_count;
    uint8_t an_mode;
    uint8_t an_cl72;
    uint8_t fs_cl72;
    uint8_t fs_cl72_sys;
    uint8_t an_fec;
    uint8_t port_is_higig;
    uint8_t fiber_pref;
    uint8_t fiber_pref_sys;
    uint8_t port_mode;
    uint8_t is_bootmaster;
    uint8_t fs_fec;
    uint8_t fs_fec_sys;
    uint8_t is_flex;
    uint8_t quad_mode;
} phymod_port_config_t;

/* phymod_port_config_t initialization and validation */
int phymod_port_config_t_validate(const phymod_port_config_t* phymod_port_config);
int phymod_port_config_t_init(phymod_port_config_t* phymod_port_config);

/*! 
 * phymod_firmware_loader_f
 *
 * @brief function definition for firmware loading 
 *
 * @param [in]  core            - core access information
 * @param [in]  length          - Firmware length
 * @param [in]  data            - Frimware data
 */
typedef int (*phymod_firmware_loader_f)(const phymod_core_access_t* core, uint32_t length, const uint8_t* data);


/*!
 * @struct phymod_value_override_s
 * @brief The value_override structure is used for values which can be auto-set (enable=0) or override (enable=1 + value) 
 */ 
typedef struct phymod_value_override_s {
    uint32_t enable;
    int32_t value;
} phymod_value_override_t;

/* phymod_value_override_t initialization and validation */
int phymod_value_override_t_validate(const phymod_value_override_t* phymod_value_override);
int phymod_value_override_t_init(phymod_value_override_t* phymod_value_override);

/*! 
 * phymod_core_probe
 *
 * @brief Probe Core 
 *
 * @param [in]  access          - Access information
 * @param [out]  type            - Driver type
 * @param [out]  is_probed       - 1 if core probed successfully, 0 otherwise
 */
int phymod_core_probe(const phymod_access_t* access, phymod_dispatch_type_t* type, int* is_probed);

/*! 
 * phymod_core_identify
 *
 * @brief Initialize phymod module 
 *
 * @param [in]  core            - core access information
 * @param [in]  core_id         - If 0 read the id from the hardware and compare to the driver id. Else compare this parameter to the driver id.
 * @param [out]  is_identified   - 1 if indentification IDs match type, 0 otherwise
 */
int phymod_core_identify(const phymod_core_access_t* core, uint32_t core_id, uint32_t* is_identified);


/*!
 * @enum phymod_core_version_e
 * @brief core version 
 */ 
typedef enum phymod_core_version_e {
    phymodCoreVersionFalconA0 = 0,
    phymodCoreVersionEagleA0,
    phymodCoreVersionQsgmiieA0,
    phymodCoreVersionTsce4A0,
    phymodCoreVersionTsce12A0,
    phymodCoreVersionTscfA0,
    phymodCoreVersionTscfB0,
    phymodCoreVersionPhy8806x,
    phymodCoreVersionFuriaA2,
    phymodCoreVersionViperXA0,
    phymodCoreVersionViperGA0,
    phymodCoreVersionSestoA0,
    phymodCoreVersionQuadra28,
    phymodCoreVersionHuracan,
    phymodCoreVersionMadura,
    phymodCoreVersionSestoB0,
    phymodCoreVersionDino,
    phymodCoreVersionTsceDpll,
    phymodCoreVersionFalcon16,
    phymodCoreVersionTscf16,
    phymodCoreVersionMerlin16,
    phymodCoreVersionTscfB1,
    phymodCoreVersionTsce16,
    phymodCoreVersionfalconDpll,
    phymodCoreVersionTscfGen3,
    phymodCoreVersionBlackhawk16,
    phymodCoreVersionTscbh16,
    phymodCoreVersionCount
} phymod_core_version_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_core_version_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_core_version_t validation */
int phymod_core_version_t_validate(phymod_core_version_t phymod_core_version);

/*!
 * @struct phymod_core_info_s
 * @brief Core information 
 */ 
typedef struct phymod_core_info_s {
    phymod_core_version_t core_version; /**< core version */
    uint32_t serdes_id; /**< serdes_id */
    uint32_t phy_id0; /**< phy_id0 */
    uint32_t phy_id1; /**< phy_id1 */
    char name[30];
} phymod_core_info_t;

/* phymod_core_info_t initialization and validation */
int phymod_core_info_t_validate(const phymod_core_info_t* phymod_core_info);
int phymod_core_info_t_init(phymod_core_info_t* phymod_core_info);

/*! 
 * phymod_core_info_get
 *
 * @brief Retrive core information 
 *
 * @param [in]  core            - core access information
 * @param [out]  info            - core information
 */
int phymod_core_info_get(const phymod_core_access_t* core, phymod_core_info_t* info);


/*!
 * @struct phymod_lane_map_s
 * @brief Core information 
 */ 
typedef struct phymod_lane_map_s {
    uint32_t num_of_lanes; /**< Number of elements in lane_map_rx/tx arrays */
    uint32_t lane_map_rx[PHYMOD_MAX_LANES_PER_CORE]; /**< lane_map_rx[x]=y means that rx lane x is mapped to rx lane y */
    uint32_t lane_map_tx[PHYMOD_MAX_LANES_PER_CORE]; /**< lane_map_tx[x]=y means that tx lane x is mapped to tx lane y */
} phymod_lane_map_t;

/* phymod_lane_map_t initialization and validation */
int phymod_lane_map_t_validate(const phymod_lane_map_t* phymod_lane_map);
int phymod_lane_map_t_init(phymod_lane_map_t* phymod_lane_map);

/*! 
 * phymod_core_lane_map_set
 *
 * @brief Set/get lane mapping 
 *
 * @param [in]  core            - core access information
 * @param [in]  lane_map        - core information
 */
int phymod_core_lane_map_set(const phymod_core_access_t* core, const phymod_lane_map_t* lane_map);
/*! 
 * phymod_core_lane_map_get
 *
 * @brief Set/get lane mapping 
 *
 * @param [in]  core            - core access information
 * @param [out]  lane_map        - core information
 */
int phymod_core_lane_map_get(const phymod_core_access_t* core, phymod_lane_map_t* lane_map);


/*!
 * @enum phymod_reset_mode_e
 * @brief Reset modes 
 */ 
typedef enum phymod_reset_mode_e {
    phymodResetModeHard = 0, /**< Hard Reset */
    phymodResetModeSoft, /**< Soft Reset */
    phymodResetModeCount
} phymod_reset_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_reset_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_reset_mode_t validation */
int phymod_reset_mode_t_validate(phymod_reset_mode_t phymod_reset_mode);

/*!
 * @enum phymod_reset_direction_e
 * @brief Reset modes 
 */ 
typedef enum phymod_reset_direction_e {
    phymodResetDirectionIn = 0, /**< In Reset */
    phymodResetDirectionOut, /**< Out of Reset */
    phymodResetDirectionInOut, /**< Toggle Reset */
    phymodResetDirectionCount
} phymod_reset_direction_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_reset_direction_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_reset_direction_t validation */
int phymod_reset_direction_t_validate(phymod_reset_direction_t phymod_reset_direction);
/*! 
 * phymod_core_reset_set
 *
 * @brief Reset Core 
 *
 * @param [in]  core            - core access information
 * @param [in]  reset_mode      - reset mode
 * @param [in]  direction       - reset direction
 */
int phymod_core_reset_set(const phymod_core_access_t* core, phymod_reset_mode_t reset_mode, phymod_reset_direction_t direction);
/*! 
 * phymod_core_reset_get
 *
 * @brief Reset Core 
 *
 * @param [in]  core            - core access information
 * @param [in]  reset_mode      - reset mode
 * @param [out]  direction       - reset state
 */
int phymod_core_reset_get(const phymod_core_access_t* core, phymod_reset_mode_t reset_mode, phymod_reset_direction_t* direction);


/*!
 * @struct phymod_core_firmware_info_s
 * @brief Firmware information 
 */ 
typedef struct phymod_core_firmware_info_s {
    uint32_t fw_version;
    uint32_t fw_crc;
} phymod_core_firmware_info_t;

/* phymod_core_firmware_info_t initialization and validation */
int phymod_core_firmware_info_t_validate(const phymod_core_firmware_info_t* phymod_core_firmware_info);
int phymod_core_firmware_info_t_init(phymod_core_firmware_info_t* phymod_core_firmware_info);

/*! 
 * phymod_core_firmware_info_get
 *
 * @brief Retrive firmware information 
 *
 * @param [in]  core            - core access information
 * @param [out]  fw_info         - 
 */
int phymod_core_firmware_info_get(const phymod_core_access_t* core, phymod_core_firmware_info_t* fw_info);


/*!
 * @enum phymod_firmware_media_type_e
 * @brief media_type for firmware 
 */ 
typedef enum phymod_firmware_media_type_e {
    phymodFirmwareMediaTypePcbTraceBackPlane = 0, /**< back plane */
    phymodFirmwareMediaTypeCopperCable, /**< copper cable */
    phymodFirmwareMediaTypeOptics, /**< optical */
    phymodFirmwareMediaTypeCount
} phymod_firmware_media_type_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_firmware_media_type_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_firmware_media_type_t validation */
int phymod_firmware_media_type_t_validate(phymod_firmware_media_type_t phymod_firmware_media_type);

/*!
 * @struct phymod_firmware_core_config_s
 * @brief Firmware core config 
 */ 
typedef struct phymod_firmware_core_config_s {
    uint32_t CoreConfigFromPCS;
    uint32_t VcoRate; /**< vco rate */
    uint32_t disable_write_pll_iqp; /**< When 1 ucode will not update pll_iqp */
} phymod_firmware_core_config_t;

/* phymod_firmware_core_config_t initialization and validation */
int phymod_firmware_core_config_t_validate(const phymod_firmware_core_config_t* phymod_firmware_core_config);
int phymod_firmware_core_config_t_init(phymod_firmware_core_config_t* phymod_firmware_core_config);

/*! 
 * phymod_phy_firmware_core_config_set
 *
 * @brief Set/get firmware operation mode 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  fw_core_config   - firmware core config
 */
int phymod_phy_firmware_core_config_set(const phymod_phy_access_t* phy, phymod_firmware_core_config_t fw_core_config);
/*! 
 * phymod_phy_firmware_core_config_get
 *
 * @brief Set/get firmware operation mode 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  fw_core_config   - firmware core config
 */
int phymod_phy_firmware_core_config_get(const phymod_phy_access_t* phy, phymod_firmware_core_config_t* fw_core_config);


/*!
 * @struct phymod_firmware_lane_config_s
 * @brief Firmware lane config 
 */ 
typedef struct phymod_firmware_lane_config_s {
    uint32_t LaneConfigFromPCS;
    uint32_t AnEnabled; /**< Autoneg */
    uint32_t DfeOn; /**< Enable DFE */
    uint32_t ForceBrDfe; /**< Force Baud rate DFE */
    uint32_t LpDfeOn; /**< Enable low power DFE */
    phymod_firmware_media_type_t MediaType; /**< Media Type */
    uint32_t UnreliableLos; /**< For optical use */
    uint32_t ScramblingDisable; /**< disable scrambling */
    uint32_t Cl72AutoPolEn; /**< Forced CL72 */
    uint32_t Cl72RestTO; /**< Forced CL72 */
    uint32_t ForceExtenedReach; /**< Forced extened reach mode */
    uint32_t ForceNormalReach; /**< Forced normal reach mode */
    uint32_t LpPrecoderEnabled; /**< linker partner has pre-coder on */
    uint32_t ForcePAM4Mode; /**< Force PAM4 mode */
    uint32_t ForceNRZMode; /**< Forced CL72 */
} phymod_firmware_lane_config_t;

/* phymod_firmware_lane_config_t initialization and validation */
int phymod_firmware_lane_config_t_validate(const phymod_firmware_lane_config_t* phymod_firmware_lane_config);
int phymod_firmware_lane_config_t_init(phymod_firmware_lane_config_t* phymod_firmware_lane_config);

/*! 
 * phymod_phy_firmware_lane_config_set
 *
 * @brief Set/get firmware operation mode 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  fw_lane_config   - firmware lane config
 */
int phymod_phy_firmware_lane_config_set(const phymod_phy_access_t* phy, phymod_firmware_lane_config_t fw_lane_config);
/*! 
 * phymod_phy_firmware_lane_config_get
 *
 * @brief Set/get firmware operation mode 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  fw_lane_config   - firmware lane config
 */
int phymod_phy_firmware_lane_config_get(const phymod_phy_access_t* phy, phymod_firmware_lane_config_t* fw_lane_config);


/*!
 * @enum phymod_sequencer_operation_e
 * @brief Sequencer operations 
 */ 
typedef enum phymod_sequencer_operation_e {
    phymodSeqOpStop = 0, /**< Stop Sequencer */
    phymodSeqOpStart, /**< Start Sequencer */
    phymodSeqOpRestart, /**< Toggle Sequencer */
    phymodSeqOpCount
} phymod_sequencer_operation_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_sequencer_operation_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_sequencer_operation_t validation */
int phymod_sequencer_operation_t_validate(phymod_sequencer_operation_t phymod_sequencer_operation);
/*! 
 * phymod_core_pll_sequencer_restart
 *
 * @brief Start/Stop the sequencer 
 *
 * @param [in]  core            - core access information
 * @param [in]  flags           - 
 * @param [in]  operation       - 
 */
int phymod_core_pll_sequencer_restart(const phymod_core_access_t* core, uint32_t flags, phymod_sequencer_operation_t operation);

#define PHYMOD_SEQ_F_WAIT_UNTIL_DONE 0x1 /**< Use this flag to wait for PLL lock when starting the sequencer */

typedef enum phymod_core_event_e {
    phymodCoreEventPllLock = 0, /**< PLL locked */
    phymodCoreEventCount
} phymod_core_event_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_core_event_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_core_event_t validation */
int phymod_core_event_t_validate(phymod_core_event_t phymod_core_event);
#define PHYMOD_TIMEOUT_DEFAULT 0xFFFFFFFF /**< Use default timeout */

/*! 
 * phymod_core_wait_event
 *
 * @brief Wait for core event 
 *
 * @param [in]  core            - core access information
 * @param [in]  event           - event to wait for
 * @param [in]  timeout         - 
 */
int phymod_core_wait_event(const phymod_core_access_t* core, phymod_core_event_t event, uint32_t timeout);

/*! 
 * phymod_phy_rx_restart
 *
 * @brief  re-tune rx path 
 *
 * @param [in]  phy             - phy access information
 */
int phymod_phy_rx_restart(const phymod_phy_access_t* phy);


/*!
 * @struct phymod_polarity_s
 * @brief Polarity bitmaps. The bitmap refers to number of lanes in access structure. 
            For example if the structure contains 2 lanes (at any position), two first bits of these bitmaps are relevant. 
 */ 
typedef struct phymod_polarity_s {
    uint32_t rx_polarity; /**< TX polarity bitmap */
    uint32_t tx_polarity; /**< RX polarity bitmap */
} phymod_polarity_t;

/* phymod_polarity_t initialization and validation */
int phymod_polarity_t_validate(const phymod_polarity_t* phymod_polarity);
int phymod_polarity_t_init(phymod_polarity_t* phymod_polarity);

/*! 
 * phymod_phy_polarity_set
 *
 * @brief Set phy polarity 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  polarity        - 
 */
int phymod_phy_polarity_set(const phymod_phy_access_t* phy, const phymod_polarity_t* polarity);
/*! 
 * phymod_phy_polarity_get
 *
 * @brief Set phy polarity 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  polarity        - 
 */
int phymod_phy_polarity_get(const phymod_phy_access_t* phy, phymod_polarity_t* polarity);

/*! 
 * @brief when field of phymod_tx_t struct set to this val. the phymod_tx_set API will not change the specified member value in the HW 
 */ 
#define PHYMOD_TX_DO_NOT_CHANGE_VAL 0xFFFFFFFF

typedef enum phymod_drivermode_e {
    phymodTxDriverModeDefault = 0,
    phymodTxDriverModeNotSupported,
    phymodTxDriverModeHalfAmp,
    phymodTxDriverModeHalfAmpHiImped,
    phymodTxDriverModeCount
} phymod_drivermode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_drivermode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_drivermode_t validation */
int phymod_drivermode_t_validate(phymod_drivermode_t phymod_drivermode);
typedef enum phymod_txTapMode_e {
    phymodTxTapModeDefault = 0,
    phymodTxTapMode6Tap,
    phymodTxTapMode3Tap,
    phymodTxTapModeCount
} phymod_txTapMode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_txTapMode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_txTapMode_t validation */
int phymod_txTapMode_t_validate(phymod_txTapMode_t phymod_txTapMode);

/*!
 * @enum phymod_phy_signalling_method_e
 * @brief PAM4 or NRZ mode 
 */ 
typedef enum phymod_phy_signalling_method_e {
    phymodSignallingMethodNRZ = 1, /**< NRZ mode tx default */
    phymodSignallingMethodPAM4, /**< PAM4 mode tx default */
    phymodSignallingMethodCount
} phymod_phy_signalling_method_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_phy_signalling_method_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_phy_signalling_method_t validation */
int phymod_phy_signalling_method_t_validate(phymod_phy_signalling_method_t phymod_phy_signalling_method);

/*!
 * @struct phymod_tx_s
 * @brief TX Parameters 
 */ 
typedef struct phymod_tx_s {
    int8_t pre;
    int8_t main;
    int8_t post;
    int8_t post2;
    int8_t post3;
    int8_t amp;
    int8_t drivermode;
    int8_t pre2;
    phymod_txTapMode_t txTapMode;
    int8_t rpara;
    phymod_phy_signalling_method_t signallingMode;
} phymod_tx_t;

/* phymod_tx_t initialization and validation */
int phymod_tx_t_validate(const phymod_tx_t* phymod_tx);
int phymod_tx_t_init(phymod_tx_t* phymod_tx);

/*! 
 * phymod_phy_tx_set
 *
 * @brief Set/Get TX Parameters 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  tx              - 
 */
int phymod_phy_tx_set(const phymod_phy_access_t* phy, const phymod_tx_t* tx);
/*! 
 * phymod_phy_tx_get
 *
 * @brief Set/Get TX Parameters 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  tx              - 
 */
int phymod_phy_tx_get(const phymod_phy_access_t* phy, phymod_tx_t* tx);

typedef enum phymod_media_typed_e {
    phymodMediaTypeChipToChip = 0,
    phymodMediaTypeShort,
    phymodMediaTypeMid,
    phymodMediaTypeLong,
    phymodMediaTypeCount
} phymod_media_typed_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_media_typed_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_media_typed_t validation */
int phymod_media_typed_t_validate(phymod_media_typed_t phymod_media_typed);
/*! 
 * phymod_phy_media_type_tx_get
 *
 * @brief Request for default TX parameters configuration per media type 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  media           - 
 * @param [out]  tx              - 
 */
int phymod_phy_media_type_tx_get(const phymod_phy_access_t* phy, phymod_media_typed_t media, phymod_tx_t* tx);


/*!
 * @struct phymod_tx_override_s
 * @brief TX parameters which can be auto-set or override 
 */ 
typedef struct phymod_tx_override_s {
    phymod_value_override_t phase_interpolator;
} phymod_tx_override_t;

/* phymod_tx_override_t initialization and validation */
int phymod_tx_override_t_validate(const phymod_tx_override_t* phymod_tx_override);
int phymod_tx_override_t_init(phymod_tx_override_t* phymod_tx_override);

/*! 
 * phymod_phy_tx_override_set
 *
 * @brief Set/Get TX override Parameters 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  tx_override     - 
 */
int phymod_phy_tx_override_set(const phymod_phy_access_t* phy, const phymod_tx_override_t* tx_override);
/*! 
 * phymod_phy_tx_override_get
 *
 * @brief Set/Get TX override Parameters 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  tx_override     - 
 */
int phymod_phy_tx_override_get(const phymod_phy_access_t* phy, phymod_tx_override_t* tx_override);

#define PHYMOD_TXPI_NORMAL_MODE 0 /**< TXPI normal mode: use internal SDM logic */

#define PHYMOD_TXPI_EXT_PD_MODE 1 /**< TXPI external phase detect mode */


/*!
 * @struct phymod_txpi_config_s
 * @brief Enable/disable TXPI and set it's work mode 
 */ 
typedef struct phymod_txpi_config_s {
    uint32_t enable;
    uint32_t mode;
} phymod_txpi_config_t;

/* phymod_txpi_config_t initialization and validation */
int phymod_txpi_config_t_validate(const phymod_txpi_config_t* phymod_txpi_config);
int phymod_txpi_config_t_init(phymod_txpi_config_t* phymod_txpi_config);

/*! 
 * phymod_phy_txpi_config_set
 *
 * @brief Set/get TXPI config: enable/disable it and set work mode.  
 *
 * @param [in]  phy             - phy access information
 * @param [in]  config          - 
 */
int phymod_phy_txpi_config_set(const phymod_phy_access_t* phy, const phymod_txpi_config_t* config);
/*! 
 * phymod_phy_txpi_config_get
 *
 * @brief Set/get TXPI config: enable/disable it and set work mode.  
 *
 * @param [in]  phy             - phy access information
 * @param [out]  config          - 
 */
int phymod_phy_txpi_config_get(const phymod_phy_access_t* phy, phymod_txpi_config_t* config);

#define PHYMOD_NUM_DFE_TAPS 14 /**< MAX num of DFE TAPS */

/*! 
 * @brief rx_adaptation check 
 */ 
#define PHYMOD_RX_ADAPTATION_ON 0x1 /**< rx_adaptation check */

#define PHYMOD_RX_ADAPTATION_ON_SET(rx) ((rx)->rx_adaptation_on |= PHYMOD_RX_ADAPTATION_ON)

#define PHYMOD_RX_ADAPTATION_ON_CLR(rx) ((rx)->rx_adaptation_on &= ~PHYMOD_RX_ADAPTATION_ON)

#define PHYMOD_RX_ADAPTATION_ON_GET(rx) ((rx)->rx_adaptation_on & PHYMOD_RX_ADAPTATION_ON ? 1 : 0)


/*!
 * @struct phymod_rx_s
 * @brief RX Parameters 
 */ 
typedef struct phymod_rx_s {
    phymod_value_override_t vga;
    uint32_t num_of_dfe_taps; /**< number of elements in DFE array */
    phymod_value_override_t dfe[PHYMOD_NUM_DFE_TAPS];
    phymod_value_override_t peaking_filter;
    phymod_value_override_t low_freq_peaking_filter;
    phymod_value_override_t high_freq_peaking_filter;
    uint32_t rx_adaptation_on;
} phymod_rx_t;

/* phymod_rx_t initialization and validation */
int phymod_rx_t_validate(const phymod_rx_t* phymod_rx);
int phymod_rx_t_init(phymod_rx_t* phymod_rx);

/*! 
 * phymod_phy_rx_set
 *
 * @brief Set/Get RX Parameters 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  rx              - 
 */
int phymod_phy_rx_set(const phymod_phy_access_t* phy, const phymod_rx_t* rx);
/*! 
 * phymod_phy_rx_get
 *
 * @brief Set/Get RX Parameters 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  rx              - 
 */
int phymod_phy_rx_get(const phymod_phy_access_t* phy, phymod_rx_t* rx);

/*! 
 * phymod_phy_rx_adaptation_resume
 *
 * @brief PHY Rx adaptation resume 
 *
 * @param [in]  phy             - phy access information
 */
int phymod_phy_rx_adaptation_resume(const phymod_phy_access_t* phy);


/*!
 * @struct phymod_phy_reset_s
 * @brief Direction (In,Out,inOut) for RX/TX to reset 
 */ 
typedef struct phymod_phy_reset_s {
    phymod_reset_direction_t rx;
    phymod_reset_direction_t tx;
} phymod_phy_reset_t;

/* phymod_phy_reset_t initialization and validation */
int phymod_phy_reset_t_validate(const phymod_phy_reset_t* phymod_phy_reset);
int phymod_phy_reset_t_init(phymod_phy_reset_t* phymod_phy_reset);

/*! 
 * phymod_phy_reset_set
 *
 * @brief Reset phy 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  reset           - 
 */
int phymod_phy_reset_set(const phymod_phy_access_t* phy, const phymod_phy_reset_t* reset);
/*! 
 * phymod_phy_reset_get
 *
 * @brief Reset phy 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  reset           - 
 */
int phymod_phy_reset_get(const phymod_phy_access_t* phy, phymod_phy_reset_t* reset);

typedef enum phymod_power_e {
    phymodPowerOff = 0, /**< turn off power */
    phymodPowerOn, /**< turn on power */
    phymodPowerOffOn, /**< toggle power */
    phymodPowerNoChange, /**< stay where you are */
    phymodPowerCount
} phymod_power_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_power_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_power_t validation */
int phymod_power_t_validate(phymod_power_t phymod_power);

/*!
 * @struct phymod_phy_power_s
 * @brief Power operation (On,Off,Off and On) for RX/TX 
 */ 
typedef struct phymod_phy_power_s {
    phymod_power_t rx;
    phymod_power_t tx;
} phymod_phy_power_t;

/* phymod_phy_power_t initialization and validation */
int phymod_phy_power_t_validate(const phymod_phy_power_t* phymod_phy_power);
int phymod_phy_power_t_init(phymod_phy_power_t* phymod_phy_power);

/*! 
 * phymod_phy_power_set
 *
 * @brief Control phy power 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  power           - 
 */
int phymod_phy_power_set(const phymod_phy_access_t* phy, const phymod_phy_power_t* power);
/*! 
 * phymod_phy_power_get
 *
 * @brief Control phy power 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  power           - 
 */
int phymod_phy_power_get(const phymod_phy_access_t* phy, phymod_phy_power_t* power);

typedef enum phymod_phy_hg2_codec_e {
    phymodBcmHG2CodecOff = 0, /**< hg2 codec off  */
    phymodBcmHG2CodecOnWith8ByteIPG, /**< 8-byte IPG setting */
    phymodBcmHG2CodecOnWith9ByteIPG, /**< 9-byte IPG setting */
    phymodBcmHG2CodecCount
} phymod_phy_hg2_codec_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_phy_hg2_codec_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_phy_hg2_codec_t validation */
int phymod_phy_hg2_codec_t_validate(phymod_phy_hg2_codec_t phymod_phy_hg2_codec);
/*! 
 * phymod_phy_hg2_codec_control_set
 *
 * @brief Control phy hg2 codec 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  hg2_codec       - 
 */
int phymod_phy_hg2_codec_control_set(const phymod_phy_access_t* phy, phymod_phy_hg2_codec_t hg2_codec);
/*! 
 * phymod_phy_hg2_codec_control_get
 *
 * @brief Control phy hg2 codec 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  hg2_codec       - 
 */
int phymod_phy_hg2_codec_control_get(const phymod_phy_access_t* phy, phymod_phy_hg2_codec_t* hg2_codec);

typedef enum phymod_phy_tx_lane_control_e {
    phymodTxTrafficDisable = 0, /**< disable tx traffic */
    phymodTxTrafficEnable, /**< enable tx traffic */
    phymodTxReset, /**< reset tx data path */
    phymodTxSquelchOn, /**< squelch tx */
    phymodTxSquelchOff, /**< squelch tx off */
    phymodTxElectricalIdleEnable, /**< enable elctrical idle */
    phymodTxElectricalIdleDisable, /**< disable elctrical idle */
    phymodTxCount
} phymod_phy_tx_lane_control_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_phy_tx_lane_control_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_phy_tx_lane_control_t validation */
int phymod_phy_tx_lane_control_t_validate(phymod_phy_tx_lane_control_t phymod_phy_tx_lane_control);

/*!
 * @struct phymod_autoneg_oui_s
 * @brief autoneg_oui 
 */ 
typedef struct phymod_autoneg_oui_s {
    uint32_t oui; /**< New oui */
    uint16_t oui_override_bam73_adv; /**< Adv new OUI for BAM73 */
    uint16_t oui_override_bam73_det; /**< Detect new OUI for BAM73 */
    uint16_t oui_override_hpam_adv; /**< Adv new OUI for HPAM */
    uint16_t oui_override_hpam_det; /**< Detect new OUI for HPAM */
    uint16_t oui_override_bam37_adv; /**< Adv new OUI for BAM37 */
    uint16_t oui_override_bam37_det; /**< Detect new OUI for BAM37 */
} phymod_autoneg_oui_t;

/* phymod_autoneg_oui_t initialization and validation */
int phymod_autoneg_oui_t_validate(const phymod_autoneg_oui_t* phymod_autoneg_oui);
int phymod_autoneg_oui_t_init(phymod_autoneg_oui_t* phymod_autoneg_oui);

typedef enum phymod_phy_rx_lane_control_e {
    phymodRxReset, /**< reset rx data path */
    phymodRxSquelchOn, /**< squelch rx */
    phymodRxSquelchOff, /**< squelch rx off */
    phymodRxDisable, /**< disable rx data path */
    phymodRxCount
} phymod_phy_rx_lane_control_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_phy_rx_lane_control_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_phy_rx_lane_control_t validation */
int phymod_phy_rx_lane_control_t_validate(phymod_phy_rx_lane_control_t phymod_phy_rx_lane_control);
/*! 
 * phymod_phy_tx_lane_control_set
 *
 * @brief TX transmission control 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  tx_control      - 
 */
int phymod_phy_tx_lane_control_set(const phymod_phy_access_t* phy, phymod_phy_tx_lane_control_t tx_control);
/*! 
 * phymod_phy_tx_lane_control_get
 *
 * @brief TX transmission control 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  tx_control      - 
 */
int phymod_phy_tx_lane_control_get(const phymod_phy_access_t* phy, phymod_phy_tx_lane_control_t* tx_control);

/*! 
 * phymod_phy_rx_lane_control_set
 *
 * @brief Rx control 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  rx_control      - 
 */
int phymod_phy_rx_lane_control_set(const phymod_phy_access_t* phy, phymod_phy_rx_lane_control_t rx_control);
/*! 
 * phymod_phy_rx_lane_control_get
 *
 * @brief Rx control 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  rx_control      - 
 */
int phymod_phy_rx_lane_control_get(const phymod_phy_access_t* phy, phymod_phy_rx_lane_control_t* rx_control);

/*! 
 * @brief fec_cl91 
 */ 
#define PHYMOD_FEC_CL91 0x10000 /**< enable/disable FEC cl91 */

#define PHYMOD_FEC_CL91_SET(enable) (enable |= PHYMOD_FEC_CL91)

#define PHYMOD_FEC_CL91_CLR(enable) (enable &= ~PHYMOD_FEC_CL91)

#define PHYMOD_FEC_CL91_GET(enable) (enable & PHYMOD_FEC_CL91 ? 1 : 0)

/*! 
 * @brief LPI_bypass 
 */ 
#define PHYMOD_LPI_BYPASS 0x10 /**< enable/disable LPI Bypass the SerDes */

#define PHYMOD_LPI_BYPASS_SET(enable) (enable |= PHYMOD_LPI_BYPASS)

#define PHYMOD_LPI_BYPASS_CLR(enable) (enable &= ~PHYMOD_LPI_BYPASS)

#define PHYMOD_LPI_BYPASS_GET(enable) (enable & PHYMOD_LPI_BYPASS ? 1 : 0)

/*! 
 * phymod_phy_fec_enable_set
 *
 * @brief forced speed FEC control 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  enable          - 
 */
int phymod_phy_fec_enable_set(const phymod_phy_access_t* phy, uint32_t enable);
/*! 
 * phymod_phy_fec_enable_get
 *
 * @brief forced speed FEC control 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  enable          - 
 */
int phymod_phy_fec_enable_get(const phymod_phy_access_t* phy, uint32_t* enable);

/*! 
 * phymod_phy_forced_speed_line_side_set
 *
 * @brief Line side forced speed set 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  speed           - 
 */
int phymod_phy_forced_speed_line_side_set(const phymod_phy_access_t* phy, uint32_t speed);
/*! 
 * phymod_phy_forced_speed_line_side_get
 *
 * @brief Line side forced speed set 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  speed           - 
 */
int phymod_phy_forced_speed_line_side_get(const phymod_phy_access_t* phy, uint32_t* speed);

/*! 
 * phymod_phy_autoneg_line_side_set
 *
 * @brief Enable Autoneg only on line side of PHY device 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  enable          - 
 */
int phymod_phy_autoneg_line_side_set(const phymod_phy_access_t* phy, uint32_t enable);
/*! 
 * phymod_phy_autoneg_line_side_get
 *
 * @brief Enable Autoneg only on line side of PHY device 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  enable          - 
 */
int phymod_phy_autoneg_line_side_get(const phymod_phy_access_t* phy, uint32_t* enable);

/*! 
 * phymod_phy_flow_control_mode_set
 *
 * @brief Flow control mode get 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  mode            - 
 * @param [in]  ingress         - 
 */
int phymod_phy_flow_control_mode_set(const phymod_phy_access_t* phy, uint32_t mode, uint32_t ingress);
/*! 
 * phymod_phy_flow_control_mode_get
 *
 * @brief Flow control mode get 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  ingress         - 
 * @param [out]  mode            - 
 */
int phymod_phy_flow_control_mode_get(const phymod_phy_access_t* phy, uint32_t ingress, uint32_t* mode);

/*! 
 * phymod_phy_psm_cos_bmp_set
 *
 * @brief Flow control mode get 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  cos_bmp         - 
 */
int phymod_phy_psm_cos_bmp_set(const phymod_phy_access_t* phy, uint32_t cos_bmp);
/*! 
 * phymod_phy_psm_cos_bmp_get
 *
 * @brief Flow control mode get 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  cos_bmp         - 
 */
int phymod_phy_psm_cos_bmp_get(const phymod_phy_access_t* phy, uint32_t* cos_bmp);

/*! 
 * phymod_phy_autoneg_oui_set
 *
 * @brief Change OUI to consortium OUI 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  an_oui          - 
 */
int phymod_phy_autoneg_oui_set(const phymod_phy_access_t* phy, phymod_autoneg_oui_t an_oui);
/*! 
 * phymod_phy_autoneg_oui_get
 *
 * @brief Change OUI to consortium OUI 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  an_oui          - 
 */
int phymod_phy_autoneg_oui_get(const phymod_phy_access_t* phy, phymod_autoneg_oui_t* an_oui);

/*! 
 * phymod_phy_eee_set
 *
 * @brief energy efficient control 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  enable          - 
 */
int phymod_phy_eee_set(const phymod_phy_access_t* phy, uint32_t enable);
/*! 
 * phymod_phy_eee_get
 *
 * @brief energy efficient control 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  enable          - 
 */
int phymod_phy_eee_get(const phymod_phy_access_t* phy, uint32_t* enable);

typedef enum phymod_interface_e {
    phymodInterfaceBypass = 0,
    phymodInterfaceSR,
    phymodInterfaceSR4,
    phymodInterfaceKX,
    phymodInterfaceKX4,
    phymodInterfaceKR,
    phymodInterfaceKR2,
    phymodInterfaceKR4,
    phymodInterfaceCX,
    phymodInterfaceCX2,
    phymodInterfaceCX4,
    phymodInterfaceCR,
    phymodInterfaceCR2,
    phymodInterfaceCR4,
    phymodInterfaceCR10,
    phymodInterfaceXFI,
    phymodInterfaceSFI,
    phymodInterfaceSFPDAC,
    phymodInterfaceXGMII,
    phymodInterface1000X,
    phymodInterfaceSGMII,
    phymodInterfaceXAUI,
    phymodInterfaceRXAUI,
    phymodInterfaceX2,
    phymodInterfaceXLAUI,
    phymodInterfaceXLAUI2,
    phymodInterfaceCAUI,
    phymodInterfaceQSGMII,
    phymodInterfaceLR4,
    phymodInterfaceLR,
    phymodInterfaceLR2,
    phymodInterfaceER,
    phymodInterfaceER2,
    phymodInterfaceER4,
    phymodInterfaceSR2,
    phymodInterfaceSR10,
    phymodInterfaceCAUI4,
    phymodInterfaceVSR,
    phymodInterfaceLR10,
    phymodInterfaceKR10,
    phymodInterfaceCAUI4_C2C,
    phymodInterfaceCAUI4_C2M,
    phymodInterfaceZR,
    phymodInterfaceLRM,
    phymodInterfaceXLPPI,
    phymodInterfaceOTN,
    phymodInterfaceCount
} phymod_interface_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_interface_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_interface_t validation */
int phymod_interface_t_validate(phymod_interface_t phymod_interface);

/*!
 * @enum phymod_ref_clk_e
 * @brief Reference Clock 
 */ 
typedef enum phymod_ref_clk_e {
    phymodRefClk156Mhz = 0, /**< 156.25MHz */
    phymodRefClk125Mhz, /**< 125MHz */
    phymodRefClk106Mhz, /**< 106Mhz */
    phymodRefClk161Mhz, /**< 161Mhz */
    phymodRefClk174Mhz, /**< 174Mhz */
    phymodRefClk312Mhz, /**< 312Mhz */
    phymodRefClk322Mhz, /**< 322Mhz */
    phymodRefClk349Mhz, /**< 349Mhz */
    phymodRefClk644Mhz, /**< 644Mhz */
    phymodRefClk698Mhz, /**< 698Mhz */
    phymodRefClk155Mhz, /**< 155Mhz */
    phymodRefClk156P6Mhz, /**< 156P6Mhz */
    phymodRefClk157Mhz, /**< 157Mhz */
    phymodRefClk158Mhz, /**< 158Mhz */
    phymodRefClk159Mhz, /**< 159Mhz */
    phymodRefClk168Mhz, /**< 168Mhz */
    phymodRefClk172Mhz, /**< 172Mhz */
    phymodRefClk173Mhz, /**< 173Mhz */
    phymodRefClk169P409Mhz, /**< 169P409Mhz */
    phymodRefClk348P125Mhz, /**< 348P125Mhz */
    phymodRefClk162P948Mhz, /**< 162P948Mhz */
    phymodRefClk336P094Mhz, /**< 336P094Mhz */
    phymodRefClk168P12Mhz, /**< 168P12Mhz */
    phymodRefClk346P74Mhz, /**< 346P74Mhz */
    phymodRefClk167P41Mhz, /**< 167P41Mhz */
    phymodRefClk345P28Mhz, /**< 345P28Mhz */
    phymodRefClk162P26Mhz, /**< 162P26Mhz */
    phymodRefClk334P66Mhz, /**< 334P66Mhz */
    phymodRefClkCount
} phymod_ref_clk_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_ref_clk_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_ref_clk_t validation */
int phymod_ref_clk_t_validate(phymod_ref_clk_t phymod_ref_clk);

/*!
 * @enum phymod_triple_core_e
 * @brief Triple Core modes 
 */ 
typedef enum phymod_triple_core_e {
    phymodTripleCore444 = 0, /**< 120G */
    phymodTripleCore343, /**< 100G 3-4-3 */
    phymodTripleCore442, /**< 100G 4-4-2 */
    phymodTripleCore244, /**< 100G 2-4-4 */
    phymodTripleCoreCount
} phymod_triple_core_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_triple_core_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_triple_core_t validation */
int phymod_triple_core_t_validate(phymod_triple_core_t phymod_triple_core);

/*!
 * @enum phymod_otn_type_e
 * @brief OTN type 
 */ 
typedef enum phymod_otn_type_e {
    phymodOTNOTU1 = 0,
    phymodOTNOTU1e,
    phymodOTNOTU2,
    phymodOTNOTU2e,
    phymodOTNOTU2f,
    phymodOTNOTU3,
    phymodOTNOTU3e2,
    phymodOTNOTU4,
    phymodOTNOTU4p10,
    phymodOTNCount
} phymod_otn_type_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_otn_type_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_otn_type_t validation */
int phymod_otn_type_t_validate(phymod_otn_type_t phymod_otn_type);
typedef struct phymod_phy_inf_config_s {
    phymod_interface_t interface_type;
    uint32_t data_rate;
    uint32_t interface_modes;
    phymod_ref_clk_t ref_clock; /**< Core reference clock. */
    uint16_t pll_divider_req; /**< Core pll divider request. */
    void* device_aux_modes; /**< Device auxiliary modes. */
    phymod_otn_type_t otn_type; /**< OTN type. */
} phymod_phy_inf_config_t;

/* phymod_phy_inf_config_t initialization and validation */
int phymod_phy_inf_config_t_validate(const phymod_phy_inf_config_t* phymod_phy_inf_config);
int phymod_phy_inf_config_t_init(phymod_phy_inf_config_t* phymod_phy_inf_config);

#define PHYMOD_DEFAULT_RATE 0xFFFFFFFF /**< Use data_rate=PHYMOD_DEFAULT_RATE to set interface default */

/*! 
 * phymod_phy_interface_config_set
 *
 * @brief Set the interface mode, speed and other configuration related to interface. 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  flags           - See PHYMOD_INTF_F_
 * @param [in]  config          - 
 */
int phymod_phy_interface_config_set(const phymod_phy_access_t* phy, uint32_t flags, const phymod_phy_inf_config_t* config);
/*! 
 * phymod_phy_interface_config_get
 *
 * @brief Set the interface mode, speed and other configuration related to interface. 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  flags           - See PHYMOD_INTF_F_
 * @param [in]  ref_clock       - Input core reference clock
 * @param [out]  config          - 
 */
int phymod_phy_interface_config_get(const phymod_phy_access_t* phy, uint32_t flags, phymod_ref_clk_t ref_clock, phymod_phy_inf_config_t* config);

/*! 
 * @brief Interface properties 
 */ 
#define PHYMOD_INTF_MODES_HIGIG 0x1 /**< Interface is Higig */
#define PHYMOD_INTF_MODES_OS2 0x2 /**< Force working in OS 2 */
#define PHYMOD_INTF_MODES_SCR 0x4 /**< enable scrambler */
#define PHYMOD_INTF_MODES_HALF_DUPLEX 0x8 /**< Interface is half-duplex */
#define PHYMOD_INTF_MODES_FIBER 0x10 /**< Interface is connected to fiber */
#define PHYMOD_INTF_MODES_TRIPLE_CORE 0x20 /**< 127G/120G 444(default) or less(100G) interface specified by TC_xxx */
#define PHYMOD_INTF_MODES_TC_343 0x40 /**< triple-core 343 */
#define PHYMOD_INTF_MODES_TC_442 0x80 /**< triple-core 442 */
#define PHYMOD_INTF_MODES_TC_244 0x100 /**< triple-core 244 */
#define PHYMOD_INTF_MODES_BACKPLANE 0x200 /**< Interface is connected to backplane */
#define PHYMOD_INTF_MODES_COPPER 0x400 /**< Interface is connected to copper cable */
#define PHYMOD_INTF_MODES_OTN 0x800 /**< Interface is OTN */
#define PHYMOD_INTF_MODES_SIMPLEX 0x1000 /**< Interface is SIMPLEX */
#define PHYMOD_INTF_MODES_UNRELIABLE_LOS 0x2000 /**< Interface is UNRELIABLE_LOS */

#define PHYMOD_INTF_MODES_HIGIG_SET(config) ((config)->interface_modes |= PHYMOD_INTF_MODES_HIGIG)
#define PHYMOD_INTF_MODES_OS2_SET(config) ((config)->interface_modes |= PHYMOD_INTF_MODES_OS2)
#define PHYMOD_INTF_MODES_SCR_SET(config) ((config)->interface_modes |= PHYMOD_INTF_MODES_SCR)
#define PHYMOD_INTF_MODES_HALF_DUPLEX_SET(config) ((config)->interface_modes |= PHYMOD_INTF_MODES_HALF_DUPLEX)
#define PHYMOD_INTF_MODES_FIBER_SET(config) ((config)->interface_modes |= PHYMOD_INTF_MODES_FIBER)
#define PHYMOD_INTF_MODES_TRIPLE_CORE_SET(config) ((config)->interface_modes |= PHYMOD_INTF_MODES_TRIPLE_CORE)
#define PHYMOD_INTF_MODES_TC_343_SET(config) ((config)->interface_modes |= PHYMOD_INTF_MODES_TC_343)
#define PHYMOD_INTF_MODES_TC_442_SET(config) ((config)->interface_modes |= PHYMOD_INTF_MODES_TC_442)
#define PHYMOD_INTF_MODES_TC_244_SET(config) ((config)->interface_modes |= PHYMOD_INTF_MODES_TC_244)
#define PHYMOD_INTF_MODES_BACKPLANE_SET(config) ((config)->interface_modes |= PHYMOD_INTF_MODES_BACKPLANE)
#define PHYMOD_INTF_MODES_COPPER_SET(config) ((config)->interface_modes |= PHYMOD_INTF_MODES_COPPER)
#define PHYMOD_INTF_MODES_OTN_SET(config) ((config)->interface_modes |= PHYMOD_INTF_MODES_OTN)
#define PHYMOD_INTF_MODES_SIMPLEX_SET(config) ((config)->interface_modes |= PHYMOD_INTF_MODES_SIMPLEX)
#define PHYMOD_INTF_MODES_UNRELIABLE_LOS_SET(config) ((config)->interface_modes |= PHYMOD_INTF_MODES_UNRELIABLE_LOS)

#define PHYMOD_INTF_MODES_HIGIG_CLR(config) ((config)->interface_modes &= ~PHYMOD_INTF_MODES_HIGIG)
#define PHYMOD_INTF_MODES_OS2_CLR(config) ((config)->interface_modes &= ~PHYMOD_INTF_MODES_OS2)
#define PHYMOD_INTF_MODES_SCR_CLR(config) ((config)->interface_modes &= ~PHYMOD_INTF_MODES_SCR)
#define PHYMOD_INTF_MODES_HALF_DUPLEX_CLR(config) ((config)->interface_modes &= ~PHYMOD_INTF_MODES_HALF_DUPLEX)
#define PHYMOD_INTF_MODES_FIBER_CLR(config) ((config)->interface_modes &= ~PHYMOD_INTF_MODES_FIBER)
#define PHYMOD_INTF_MODES_TRIPLE_CORE_CLR(config) ((config)->interface_modes &= ~PHYMOD_INTF_MODES_TRIPLE_CORE)
#define PHYMOD_INTF_MODES_TC_343_CLR(config) ((config)->interface_modes &= ~PHYMOD_INTF_MODES_TC_343)
#define PHYMOD_INTF_MODES_TC_442_CLR(config) ((config)->interface_modes &= ~PHYMOD_INTF_MODES_TC_442)
#define PHYMOD_INTF_MODES_TC_244_CLR(config) ((config)->interface_modes &= ~PHYMOD_INTF_MODES_TC_244)
#define PHYMOD_INTF_MODES_BACKPLANE_CLR(config) ((config)->interface_modes &= ~PHYMOD_INTF_MODES_BACKPLANE)
#define PHYMOD_INTF_MODES_COPPER_CLR(config) ((config)->interface_modes &= ~PHYMOD_INTF_MODES_COPPER)
#define PHYMOD_INTF_MODES_OTN_CLR(config) ((config)->interface_modes &= ~PHYMOD_INTF_MODES_OTN)
#define PHYMOD_INTF_MODES_SIMPLEX_CLR(config) ((config)->interface_modes &= ~PHYMOD_INTF_MODES_SIMPLEX)
#define PHYMOD_INTF_MODES_UNRELIABLE_LOS_CLR(config) ((config)->interface_modes &= ~PHYMOD_INTF_MODES_UNRELIABLE_LOS)

#define PHYMOD_INTF_MODES_HIGIG_GET(config) ((config)->interface_modes & PHYMOD_INTF_MODES_HIGIG ? 1 : 0)
#define PHYMOD_INTF_MODES_OS2_GET(config) ((config)->interface_modes & PHYMOD_INTF_MODES_OS2 ? 1 : 0)
#define PHYMOD_INTF_MODES_SCR_GET(config) ((config)->interface_modes & PHYMOD_INTF_MODES_SCR ? 1 : 0)
#define PHYMOD_INTF_MODES_HALF_DUPLEX_GET(config) ((config)->interface_modes & PHYMOD_INTF_MODES_HALF_DUPLEX ? 1 : 0)
#define PHYMOD_INTF_MODES_FIBER_GET(config) ((config)->interface_modes & PHYMOD_INTF_MODES_FIBER ? 1 : 0)
#define PHYMOD_INTF_MODES_TRIPLE_CORE_GET(config) ((config)->interface_modes & PHYMOD_INTF_MODES_TRIPLE_CORE ? 1 : 0)
#define PHYMOD_INTF_MODES_TC_343_GET(config) ((config)->interface_modes & PHYMOD_INTF_MODES_TC_343 ? 1 : 0)
#define PHYMOD_INTF_MODES_TC_442_GET(config) ((config)->interface_modes & PHYMOD_INTF_MODES_TC_442 ? 1 : 0)
#define PHYMOD_INTF_MODES_TC_244_GET(config) ((config)->interface_modes & PHYMOD_INTF_MODES_TC_244 ? 1 : 0)
#define PHYMOD_INTF_MODES_BACKPLANE_GET(config) ((config)->interface_modes & PHYMOD_INTF_MODES_BACKPLANE ? 1 : 0)
#define PHYMOD_INTF_MODES_COPPER_GET(config) ((config)->interface_modes & PHYMOD_INTF_MODES_COPPER ? 1 : 0)
#define PHYMOD_INTF_MODES_OTN_GET(config) ((config)->interface_modes & PHYMOD_INTF_MODES_OTN ? 1 : 0)
#define PHYMOD_INTF_MODES_SIMPLEX_GET(config) ((config)->interface_modes & PHYMOD_INTF_MODES_SIMPLEX ? 1 : 0)
#define PHYMOD_INTF_MODES_UNRELIABLE_LOS_GET(config) ((config)->interface_modes & PHYMOD_INTF_MODES_UNRELIABLE_LOS ? 1 : 0)

/*! 
 * @brief Flags for phymod_phy_interface_config_set API 
 */ 
#define PHYMOD_INTF_F_DONT_TURN_OFF_PLL 0x1 /**< Dont turn off PLL when switching the speed */
#define PHYMOD_INTF_F_DONT_OVERIDE_FW_MODE 0x2 /**< Dont change  fw mode settings during interface_config */
#define PHYMOD_INTF_F_DONT_OVERIDE_TX_PARAMS 0x4 /**< Dont change tx parameters during interface_config */
#define PHYMOD_INTF_F_PLL_DIVIDER_OVERRIDE 0x8 /**< Change pll div parameters during interface_config */
#define PHYMOD_INTF_F_PCS_TABLE_OVERRIDE 0x10 /**< Change pcs parameter table during interface_config */
#define PHYMOD_INTF_F_INTF_PARAM_SET_ONLY 0x20 /**< Only change interface parameter variable */
#define PHYMOD_INTF_F_SET_CORE_MAP_MODE 0x40 /**< Only Set Mode information */
#define PHYMOD_INTF_F_SET_SPD_TRIGGER 0x80 /**< Only Trigger Speed  */
#define PHYMOD_INTF_F_SET_SPD_DISABLE 0x100 /**< Only Disable Speed for 100G mode.  */
#define PHYMOD_INTF_F_SET_SPD_NO_TRIGGER 0x200 /**< Only Disable Speed  */
#define PHYMOD_INTF_F_CL72_REQUESTED_BY_CNFG 0x400 /**< CL72 is requested by config file */
#define PHYMOD_INTF_F_CL72_REQUESTED_BY_API 0x800 /**< CL72 is requested by API */
#define PHYMOD_INTF_F_UPDATE_SPEED_LINKUP 0x1000 /**< Only update speed */
#define PHYMOD_INTF_F_UPDATE_INTERNAL_SERDES_ONLY 0x2000 /**< Only update mac speed */
#define PHYMOD_INTF_F_CORE_MAP_MODE_FLIP 0x4000 /**< Flag to indicate flip between 244 and 442 */
#define PHYMOD_INTF_F_SPEED_CONFIG_CLEAR 0x8000 /**< Flag to clear 100G speed configuration */
#define PHYMOD_INTF_F_SCRAMBLE_FORCED_ON 0x10000 /**< Flag to force scramble on */
#define PHYMOD_INTF_F_SCRAMBLE_FORCED_OFF 0x20000 /**< Flag to force scramble off */
#define PHYMOD_INTF_F_SINGLE_PLL_ONLY 0x40000 /**< Flag to single PLL only */


/*! 
 * @brief soc config properties for device_op_mode to specify phy device operation mode 
 */ 
#define PHYMOD_INTF_CONFIG_PHY_GEARBOX_ENABLE 0x1 /**< enables the gearbox data path mode */
#define PHYMOD_INTF_CONFIG_PHY_PIN_COMPATIBILITY_ENABLE 0x2 /**< enables backward pin-compatibility */
#define PHYMOD_INTF_CONFIG_PORT_PHY_MODE_REVERSE 0x4 /**< enables the port reverse direction */
#define PHYMOD_INTF_CONFIG_PHY_PSC_REPEATER_MODE 0x8 /**< work on the psc repeater mode */
#define PHYMOD_INTF_CONFIG_TX_FIR_DRIVERMODE_ENABLE 0x10 /**< work on the TX drivermode mode */

#define PHYMOD_INTF_CONFIG_PHY_GEARBOX_ENABLE_SET(phy_acc) ((phy_acc)->device_op_mode |= PHYMOD_INTF_CONFIG_PHY_GEARBOX_ENABLE)
#define PHYMOD_INTF_CONFIG_PHY_PIN_COMPATIBILITY_ENABLE_SET(phy_acc) ((phy_acc)->device_op_mode |= PHYMOD_INTF_CONFIG_PHY_PIN_COMPATIBILITY_ENABLE)
#define PHYMOD_INTF_CONFIG_PORT_PHY_MODE_REVERSE_SET(phy_acc) ((phy_acc)->device_op_mode |= PHYMOD_INTF_CONFIG_PORT_PHY_MODE_REVERSE)
#define PHYMOD_INTF_CONFIG_PHY_PSC_REPEATER_MODE_SET(phy_acc) ((phy_acc)->device_op_mode |= PHYMOD_INTF_CONFIG_PHY_PSC_REPEATER_MODE)
#define PHYMOD_INTF_CONFIG_TX_FIR_DRIVERMODE_ENABLE_SET(phy_acc) ((phy_acc)->device_op_mode |= PHYMOD_INTF_CONFIG_TX_FIR_DRIVERMODE_ENABLE)

#define PHYMOD_INTF_CONFIG_PHY_GEARBOX_ENABLE_CLR(phy_acc) ((phy_acc)->device_op_mode &= ~PHYMOD_INTF_CONFIG_PHY_GEARBOX_ENABLE)
#define PHYMOD_INTF_CONFIG_PHY_PIN_COMPATIBILITY_ENABLE_CLR(phy_acc) ((phy_acc)->device_op_mode &= ~PHYMOD_INTF_CONFIG_PHY_PIN_COMPATIBILITY_ENABLE)
#define PHYMOD_INTF_CONFIG_PORT_PHY_MODE_REVERSE_CLR(phy_acc) ((phy_acc)->device_op_mode &= ~PHYMOD_INTF_CONFIG_PORT_PHY_MODE_REVERSE)
#define PHYMOD_INTF_CONFIG_PHY_PSC_REPEATER_MODE_CLR(phy_acc) ((phy_acc)->device_op_mode &= ~PHYMOD_INTF_CONFIG_PHY_PSC_REPEATER_MODE)
#define PHYMOD_INTF_CONFIG_TX_FIR_DRIVERMODE_ENABLE_CLR(phy_acc) ((phy_acc)->device_op_mode &= ~PHYMOD_INTF_CONFIG_TX_FIR_DRIVERMODE_ENABLE)

#define PHYMOD_INTF_CONFIG_PHY_GEARBOX_ENABLE_GET(phy_acc) ((phy_acc)->device_op_mode & PHYMOD_INTF_CONFIG_PHY_GEARBOX_ENABLE ? 1 : 0)
#define PHYMOD_INTF_CONFIG_PHY_PIN_COMPATIBILITY_ENABLE_GET(phy_acc) ((phy_acc)->device_op_mode & PHYMOD_INTF_CONFIG_PHY_PIN_COMPATIBILITY_ENABLE ? 1 : 0)
#define PHYMOD_INTF_CONFIG_PORT_PHY_MODE_REVERSE_GET(phy_acc) ((phy_acc)->device_op_mode & PHYMOD_INTF_CONFIG_PORT_PHY_MODE_REVERSE ? 1 : 0)
#define PHYMOD_INTF_CONFIG_PHY_PSC_REPEATER_MODE_GET(phy_acc) ((phy_acc)->device_op_mode & PHYMOD_INTF_CONFIG_PHY_PSC_REPEATER_MODE ? 1 : 0)
#define PHYMOD_INTF_CONFIG_TX_FIR_DRIVERMODE_ENABLE_GET(phy_acc) ((phy_acc)->device_op_mode & PHYMOD_INTF_CONFIG_TX_FIR_DRIVERMODE_ENABLE ? 1 : 0)

/*! 
 * phymod_phy_cl72_set
 *
 * @brief Set/Get CL72 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  cl72_en         - 
 */
int phymod_phy_cl72_set(const phymod_phy_access_t* phy, uint32_t cl72_en);
/*! 
 * phymod_phy_cl72_get
 *
 * @brief Set/Get CL72 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  cl72_en         - 
 */
int phymod_phy_cl72_get(const phymod_phy_access_t* phy, uint32_t* cl72_en);

typedef struct phymod_cl72_status_s {
    uint32_t enabled;
    uint32_t locked;
} phymod_cl72_status_t;

/* phymod_cl72_status_t initialization and validation */
int phymod_cl72_status_t_validate(const phymod_cl72_status_t* phymod_cl72_status);
int phymod_cl72_status_t_init(phymod_cl72_status_t* phymod_cl72_status);

/*! 
 * phymod_phy_cl72_status_get
 *
 * @brief Get CL72 status 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  status          - 
 */
int phymod_phy_cl72_status_get(const phymod_phy_access_t* phy, phymod_cl72_status_t* status);

/*! 
 * @brief Capabilities for CL73 
 */ 
#define PHYMOD_AN_CAP_1G_KX 0x1
#define PHYMOD_AN_CAP_10G_KX4 0x2
#define PHYMOD_AN_CAP_10G_KR 0x4
#define PHYMOD_AN_CAP_40G_KR4 0x8
#define PHYMOD_AN_CAP_40G_CR4 0x10
#define PHYMOD_AN_CAP_100G_CR10 0x20
#define PHYMOD_AN_CAP_100G_CR4 0x40
#define PHYMOD_AN_CAP_100G_KR4 0x80
#define PHYMOD_AN_CAP_100G_KR10 0x100
#define PHYMOD_AN_CAP_100M 0x200
#define PHYMOD_AN_CAP_25G_KR1 0x400
#define PHYMOD_AN_CAP_25G_CR1 0x800
#define PHYMOD_AN_CAP_25G_KRS1 0x1000
#define PHYMOD_AN_CAP_25G_CRS1 0x2000
#define PHYMOD_AN_CAP_2P5G_X 0x4000
#define PHYMOD_AN_CAP_5G_KR1 0x8000

#define PHYMOD_AN_CAP_1G_KX_SET(cap) (cap |= PHYMOD_AN_CAP_1G_KX)
#define PHYMOD_AN_CAP_10G_KX4_SET(cap) (cap |= PHYMOD_AN_CAP_10G_KX4)
#define PHYMOD_AN_CAP_10G_KR_SET(cap) (cap |= PHYMOD_AN_CAP_10G_KR)
#define PHYMOD_AN_CAP_40G_KR4_SET(cap) (cap |= PHYMOD_AN_CAP_40G_KR4)
#define PHYMOD_AN_CAP_40G_CR4_SET(cap) (cap |= PHYMOD_AN_CAP_40G_CR4)
#define PHYMOD_AN_CAP_100G_CR10_SET(cap) (cap |= PHYMOD_AN_CAP_100G_CR10)
#define PHYMOD_AN_CAP_100G_CR4_SET(cap) (cap |= PHYMOD_AN_CAP_100G_CR4)
#define PHYMOD_AN_CAP_100G_KR4_SET(cap) (cap |= PHYMOD_AN_CAP_100G_KR4)
#define PHYMOD_AN_CAP_100G_KR10_SET(cap) (cap |= PHYMOD_AN_CAP_100G_KR10)
#define PHYMOD_AN_CAP_100M_SET(cap) (cap |= PHYMOD_AN_CAP_100M)
#define PHYMOD_AN_CAP_25G_KR1_SET(cap) (cap |= PHYMOD_AN_CAP_25G_KR1)
#define PHYMOD_AN_CAP_25G_CR1_SET(cap) (cap |= PHYMOD_AN_CAP_25G_CR1)
#define PHYMOD_AN_CAP_25G_KRS1_SET(cap) (cap |= PHYMOD_AN_CAP_25G_KRS1)
#define PHYMOD_AN_CAP_25G_CRS1_SET(cap) (cap |= PHYMOD_AN_CAP_25G_CRS1)
#define PHYMOD_AN_CAP_2P5G_X_SET(cap) (cap |= PHYMOD_AN_CAP_2P5G_X)
#define PHYMOD_AN_CAP_5G_KR1_SET(cap) (cap |= PHYMOD_AN_CAP_5G_KR1)

#define PHYMOD_AN_CAP_1G_KX_CLR(cap) (cap &= ~PHYMOD_AN_CAP_1G_KX)
#define PHYMOD_AN_CAP_10G_KX4_CLR(cap) (cap &= ~PHYMOD_AN_CAP_10G_KX4)
#define PHYMOD_AN_CAP_10G_KR_CLR(cap) (cap &= ~PHYMOD_AN_CAP_10G_KR)
#define PHYMOD_AN_CAP_40G_KR4_CLR(cap) (cap &= ~PHYMOD_AN_CAP_40G_KR4)
#define PHYMOD_AN_CAP_40G_CR4_CLR(cap) (cap &= ~PHYMOD_AN_CAP_40G_CR4)
#define PHYMOD_AN_CAP_100G_CR10_CLR(cap) (cap &= ~PHYMOD_AN_CAP_100G_CR10)
#define PHYMOD_AN_CAP_100G_CR4_CLR(cap) (cap &= ~PHYMOD_AN_CAP_100G_CR4)
#define PHYMOD_AN_CAP_100G_KR4_CLR(cap) (cap &= ~PHYMOD_AN_CAP_100G_KR4)
#define PHYMOD_AN_CAP_100G_KR10_CLR(cap) (cap &= ~PHYMOD_AN_CAP_100G_KR10)
#define PHYMOD_AN_CAP_100M_CLR(cap) (cap &= ~PHYMOD_AN_CAP_100M)
#define PHYMOD_AN_CAP_25G_KR1_CLR(cap) (cap &= ~PHYMOD_AN_CAP_25G_KR1)
#define PHYMOD_AN_CAP_25G_CR1_CLR(cap) (cap &= ~PHYMOD_AN_CAP_25G_CR1)
#define PHYMOD_AN_CAP_25G_KRS1_CLR(cap) (cap &= ~PHYMOD_AN_CAP_25G_KRS1)
#define PHYMOD_AN_CAP_25G_CRS1_CLR(cap) (cap &= ~PHYMOD_AN_CAP_25G_CRS1)
#define PHYMOD_AN_CAP_2P5G_X_CLR(cap) (cap &= ~PHYMOD_AN_CAP_2P5G_X)
#define PHYMOD_AN_CAP_5G_KR1_CLR(cap) (cap &= ~PHYMOD_AN_CAP_5G_KR1)

#define PHYMOD_AN_CAP_1G_KX_GET(cap) (cap & PHYMOD_AN_CAP_1G_KX ? 1 : 0)
#define PHYMOD_AN_CAP_10G_KX4_GET(cap) (cap & PHYMOD_AN_CAP_10G_KX4 ? 1 : 0)
#define PHYMOD_AN_CAP_10G_KR_GET(cap) (cap & PHYMOD_AN_CAP_10G_KR ? 1 : 0)
#define PHYMOD_AN_CAP_40G_KR4_GET(cap) (cap & PHYMOD_AN_CAP_40G_KR4 ? 1 : 0)
#define PHYMOD_AN_CAP_40G_CR4_GET(cap) (cap & PHYMOD_AN_CAP_40G_CR4 ? 1 : 0)
#define PHYMOD_AN_CAP_100G_CR10_GET(cap) (cap & PHYMOD_AN_CAP_100G_CR10 ? 1 : 0)
#define PHYMOD_AN_CAP_100G_CR4_GET(cap) (cap & PHYMOD_AN_CAP_100G_CR4 ? 1 : 0)
#define PHYMOD_AN_CAP_100G_KR4_GET(cap) (cap & PHYMOD_AN_CAP_100G_KR4 ? 1 : 0)
#define PHYMOD_AN_CAP_100G_KR10_GET(cap) (cap & PHYMOD_AN_CAP_100G_KR10 ? 1 : 0)
#define PHYMOD_AN_CAP_100M_GET(cap) (cap & PHYMOD_AN_CAP_100M ? 1 : 0)
#define PHYMOD_AN_CAP_25G_KR1_GET(cap) (cap & PHYMOD_AN_CAP_25G_KR1 ? 1 : 0)
#define PHYMOD_AN_CAP_25G_CR1_GET(cap) (cap & PHYMOD_AN_CAP_25G_CR1 ? 1 : 0)
#define PHYMOD_AN_CAP_25G_KRS1_GET(cap) (cap & PHYMOD_AN_CAP_25G_KRS1 ? 1 : 0)
#define PHYMOD_AN_CAP_25G_CRS1_GET(cap) (cap & PHYMOD_AN_CAP_25G_CRS1 ? 1 : 0)
#define PHYMOD_AN_CAP_2P5G_X_GET(cap) (cap & PHYMOD_AN_CAP_2P5G_X ? 1 : 0)
#define PHYMOD_AN_CAP_5G_KR1_GET(cap) (cap & PHYMOD_AN_CAP_5G_KR1 ? 1 : 0)

/*! 
 * @brief Capabilities for CL73_BAM 
 */ 
#define PHYMOD_BAM_CL73_CAP_20G_KR2 0x1
#define PHYMOD_BAM_CL73_CAP_20G_CR2 0x2
#define PHYMOD_BAM_CL73_CAP_40G_KR2 0x4
#define PHYMOD_BAM_CL73_CAP_40G_CR2 0x8
#define PHYMOD_BAM_CL73_CAP_50G_KR2 0x10
#define PHYMOD_BAM_CL73_CAP_50G_CR2 0x20
#define PHYMOD_BAM_CL73_CAP_50G_KR4 0x40
#define PHYMOD_BAM_CL73_CAP_50G_CR4 0x80
#define PHYMOD_BAM_CL73_CAP_20G_KR1 0x100
#define PHYMOD_BAM_CL73_CAP_20G_CR1 0x200
#define PHYMOD_BAM_CL73_CAP_25G_KR1 0x400
#define PHYMOD_BAM_CL73_CAP_25G_CR1 0x800

#define PHYMOD_BAM_CL73_CAP_20G_KR2_SET(bam73_cap) (bam73_cap |= PHYMOD_BAM_CL73_CAP_20G_KR2)
#define PHYMOD_BAM_CL73_CAP_20G_CR2_SET(bam73_cap) (bam73_cap |= PHYMOD_BAM_CL73_CAP_20G_CR2)
#define PHYMOD_BAM_CL73_CAP_40G_KR2_SET(bam73_cap) (bam73_cap |= PHYMOD_BAM_CL73_CAP_40G_KR2)
#define PHYMOD_BAM_CL73_CAP_40G_CR2_SET(bam73_cap) (bam73_cap |= PHYMOD_BAM_CL73_CAP_40G_CR2)
#define PHYMOD_BAM_CL73_CAP_50G_KR2_SET(bam73_cap) (bam73_cap |= PHYMOD_BAM_CL73_CAP_50G_KR2)
#define PHYMOD_BAM_CL73_CAP_50G_CR2_SET(bam73_cap) (bam73_cap |= PHYMOD_BAM_CL73_CAP_50G_CR2)
#define PHYMOD_BAM_CL73_CAP_50G_KR4_SET(bam73_cap) (bam73_cap |= PHYMOD_BAM_CL73_CAP_50G_KR4)
#define PHYMOD_BAM_CL73_CAP_50G_CR4_SET(bam73_cap) (bam73_cap |= PHYMOD_BAM_CL73_CAP_50G_CR4)
#define PHYMOD_BAM_CL73_CAP_20G_KR1_SET(bam73_cap) (bam73_cap |= PHYMOD_BAM_CL73_CAP_20G_KR1)
#define PHYMOD_BAM_CL73_CAP_20G_CR1_SET(bam73_cap) (bam73_cap |= PHYMOD_BAM_CL73_CAP_20G_CR1)
#define PHYMOD_BAM_CL73_CAP_25G_KR1_SET(bam73_cap) (bam73_cap |= PHYMOD_BAM_CL73_CAP_25G_KR1)
#define PHYMOD_BAM_CL73_CAP_25G_CR1_SET(bam73_cap) (bam73_cap |= PHYMOD_BAM_CL73_CAP_25G_CR1)

#define PHYMOD_BAM_CL73_CAP_20G_KR2_CLR(bam73_cap) (bam73_cap &= ~PHYMOD_BAM_CL73_CAP_20G_KR2)
#define PHYMOD_BAM_CL73_CAP_20G_CR2_CLR(bam73_cap) (bam73_cap &= ~PHYMOD_BAM_CL73_CAP_20G_CR2)
#define PHYMOD_BAM_CL73_CAP_40G_KR2_CLR(bam73_cap) (bam73_cap &= ~PHYMOD_BAM_CL73_CAP_40G_KR2)
#define PHYMOD_BAM_CL73_CAP_40G_CR2_CLR(bam73_cap) (bam73_cap &= ~PHYMOD_BAM_CL73_CAP_40G_CR2)
#define PHYMOD_BAM_CL73_CAP_50G_KR2_CLR(bam73_cap) (bam73_cap &= ~PHYMOD_BAM_CL73_CAP_50G_KR2)
#define PHYMOD_BAM_CL73_CAP_50G_CR2_CLR(bam73_cap) (bam73_cap &= ~PHYMOD_BAM_CL73_CAP_50G_CR2)
#define PHYMOD_BAM_CL73_CAP_50G_KR4_CLR(bam73_cap) (bam73_cap &= ~PHYMOD_BAM_CL73_CAP_50G_KR4)
#define PHYMOD_BAM_CL73_CAP_50G_CR4_CLR(bam73_cap) (bam73_cap &= ~PHYMOD_BAM_CL73_CAP_50G_CR4)
#define PHYMOD_BAM_CL73_CAP_20G_KR1_CLR(bam73_cap) (bam73_cap &= ~PHYMOD_BAM_CL73_CAP_20G_KR1)
#define PHYMOD_BAM_CL73_CAP_20G_CR1_CLR(bam73_cap) (bam73_cap &= ~PHYMOD_BAM_CL73_CAP_20G_CR1)
#define PHYMOD_BAM_CL73_CAP_25G_KR1_CLR(bam73_cap) (bam73_cap &= ~PHYMOD_BAM_CL73_CAP_25G_KR1)
#define PHYMOD_BAM_CL73_CAP_25G_CR1_CLR(bam73_cap) (bam73_cap &= ~PHYMOD_BAM_CL73_CAP_25G_CR1)

#define PHYMOD_BAM_CL73_CAP_20G_KR2_GET(bam73_cap) (bam73_cap & PHYMOD_BAM_CL73_CAP_20G_KR2 ? 1 : 0)
#define PHYMOD_BAM_CL73_CAP_20G_CR2_GET(bam73_cap) (bam73_cap & PHYMOD_BAM_CL73_CAP_20G_CR2 ? 1 : 0)
#define PHYMOD_BAM_CL73_CAP_40G_KR2_GET(bam73_cap) (bam73_cap & PHYMOD_BAM_CL73_CAP_40G_KR2 ? 1 : 0)
#define PHYMOD_BAM_CL73_CAP_40G_CR2_GET(bam73_cap) (bam73_cap & PHYMOD_BAM_CL73_CAP_40G_CR2 ? 1 : 0)
#define PHYMOD_BAM_CL73_CAP_50G_KR2_GET(bam73_cap) (bam73_cap & PHYMOD_BAM_CL73_CAP_50G_KR2 ? 1 : 0)
#define PHYMOD_BAM_CL73_CAP_50G_CR2_GET(bam73_cap) (bam73_cap & PHYMOD_BAM_CL73_CAP_50G_CR2 ? 1 : 0)
#define PHYMOD_BAM_CL73_CAP_50G_KR4_GET(bam73_cap) (bam73_cap & PHYMOD_BAM_CL73_CAP_50G_KR4 ? 1 : 0)
#define PHYMOD_BAM_CL73_CAP_50G_CR4_GET(bam73_cap) (bam73_cap & PHYMOD_BAM_CL73_CAP_50G_CR4 ? 1 : 0)
#define PHYMOD_BAM_CL73_CAP_20G_KR1_GET(bam73_cap) (bam73_cap & PHYMOD_BAM_CL73_CAP_20G_KR1 ? 1 : 0)
#define PHYMOD_BAM_CL73_CAP_20G_CR1_GET(bam73_cap) (bam73_cap & PHYMOD_BAM_CL73_CAP_20G_CR1 ? 1 : 0)
#define PHYMOD_BAM_CL73_CAP_25G_KR1_GET(bam73_cap) (bam73_cap & PHYMOD_BAM_CL73_CAP_25G_KR1 ? 1 : 0)
#define PHYMOD_BAM_CL73_CAP_25G_CR1_GET(bam73_cap) (bam73_cap & PHYMOD_BAM_CL73_CAP_25G_CR1 ? 1 : 0)

/*! 
 * @brief Capabilities for CL37BAM 
 */ 
#define PHYMOD_BAM_CL37_CAP_2P5G 0x1
#define PHYMOD_BAM_CL37_CAP_5G_X4 0x2
#define PHYMOD_BAM_CL37_CAP_6G_X4 0x4
#define PHYMOD_BAM_CL37_CAP_10G_HIGIG 0x8
#define PHYMOD_BAM_CL37_CAP_10G_CX4 0x10
#define PHYMOD_BAM_CL37_CAP_12G_X4 0x20
#define PHYMOD_BAM_CL37_CAP_12P5_X4 0x40
#define PHYMOD_BAM_CL37_CAP_13G_X4 0x80
#define PHYMOD_BAM_CL37_CAP_15G_X4 0x100
#define PHYMOD_BAM_CL37_CAP_16G_X4 0x200
#define PHYMOD_BAM_CL37_CAP_20G_X4_CX4 0x400
#define PHYMOD_BAM_CL37_CAP_20G_X4 0x800
#define PHYMOD_BAM_CL37_CAP_21G_X4 0x1000
#define PHYMOD_BAM_CL37_CAP_25P455G 0x2000
#define PHYMOD_BAM_CL37_CAP_31P5G 0x4000
#define PHYMOD_BAM_CL37_CAP_32P7G 0x8000
#define PHYMOD_BAM_CL37_CAP_40G 0x10000
#define PHYMOD_BAM_CL37_CAP_10G_X2_CX4 0x20000
#define PHYMOD_BAM_CL37_CAP_10G_DXGXS 0x40000
#define PHYMOD_BAM_CL37_CAP_10P5G_DXGXS 0x80000
#define PHYMOD_BAM_CL37_CAP_12P7_DXGXS 0x100000
#define PHYMOD_BAM_CL37_CAP_15P75G_R2 0x200000
#define PHYMOD_BAM_CL37_CAP_20G_X2_CX4 0x400000
#define PHYMOD_BAM_CL37_CAP_20G_X2 0x800000

#define PHYMOD_BAM_CL37_CAP_2P5G_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_2P5G)
#define PHYMOD_BAM_CL37_CAP_5G_X4_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_5G_X4)
#define PHYMOD_BAM_CL37_CAP_6G_X4_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_6G_X4)
#define PHYMOD_BAM_CL37_CAP_10G_HIGIG_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_10G_HIGIG)
#define PHYMOD_BAM_CL37_CAP_10G_CX4_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_10G_CX4)
#define PHYMOD_BAM_CL37_CAP_12G_X4_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_12G_X4)
#define PHYMOD_BAM_CL37_CAP_12P5_X4_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_12P5_X4)
#define PHYMOD_BAM_CL37_CAP_13G_X4_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_13G_X4)
#define PHYMOD_BAM_CL37_CAP_15G_X4_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_15G_X4)
#define PHYMOD_BAM_CL37_CAP_16G_X4_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_16G_X4)
#define PHYMOD_BAM_CL37_CAP_20G_X4_CX4_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_20G_X4_CX4)
#define PHYMOD_BAM_CL37_CAP_20G_X4_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_20G_X4)
#define PHYMOD_BAM_CL37_CAP_21G_X4_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_21G_X4)
#define PHYMOD_BAM_CL37_CAP_25P455G_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_25P455G)
#define PHYMOD_BAM_CL37_CAP_31P5G_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_31P5G)
#define PHYMOD_BAM_CL37_CAP_32P7G_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_32P7G)
#define PHYMOD_BAM_CL37_CAP_40G_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_40G)
#define PHYMOD_BAM_CL37_CAP_10G_X2_CX4_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_10G_X2_CX4)
#define PHYMOD_BAM_CL37_CAP_10G_DXGXS_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_10G_DXGXS)
#define PHYMOD_BAM_CL37_CAP_10P5G_DXGXS_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_10P5G_DXGXS)
#define PHYMOD_BAM_CL37_CAP_12P7_DXGXS_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_12P7_DXGXS)
#define PHYMOD_BAM_CL37_CAP_15P75G_R2_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_15P75G_R2)
#define PHYMOD_BAM_CL37_CAP_20G_X2_CX4_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_20G_X2_CX4)
#define PHYMOD_BAM_CL37_CAP_20G_X2_SET(bam37_cap) (bam37_cap |= PHYMOD_BAM_CL37_CAP_20G_X2)

#define PHYMOD_BAM_CL37_CAP_2P5G_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_2P5G)
#define PHYMOD_BAM_CL37_CAP_5G_X4_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_5G_X4)
#define PHYMOD_BAM_CL37_CAP_6G_X4_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_6G_X4)
#define PHYMOD_BAM_CL37_CAP_10G_HIGIG_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_10G_HIGIG)
#define PHYMOD_BAM_CL37_CAP_10G_CX4_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_10G_CX4)
#define PHYMOD_BAM_CL37_CAP_12G_X4_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_12G_X4)
#define PHYMOD_BAM_CL37_CAP_12P5_X4_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_12P5_X4)
#define PHYMOD_BAM_CL37_CAP_13G_X4_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_13G_X4)
#define PHYMOD_BAM_CL37_CAP_15G_X4_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_15G_X4)
#define PHYMOD_BAM_CL37_CAP_16G_X4_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_16G_X4)
#define PHYMOD_BAM_CL37_CAP_20G_X4_CX4_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_20G_X4_CX4)
#define PHYMOD_BAM_CL37_CAP_20G_X4_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_20G_X4)
#define PHYMOD_BAM_CL37_CAP_21G_X4_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_21G_X4)
#define PHYMOD_BAM_CL37_CAP_25P455G_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_25P455G)
#define PHYMOD_BAM_CL37_CAP_31P5G_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_31P5G)
#define PHYMOD_BAM_CL37_CAP_32P7G_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_32P7G)
#define PHYMOD_BAM_CL37_CAP_40G_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_40G)
#define PHYMOD_BAM_CL37_CAP_10G_X2_CX4_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_10G_X2_CX4)
#define PHYMOD_BAM_CL37_CAP_10G_DXGXS_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_10G_DXGXS)
#define PHYMOD_BAM_CL37_CAP_10P5G_DXGXS_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_10P5G_DXGXS)
#define PHYMOD_BAM_CL37_CAP_12P7_DXGXS_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_12P7_DXGXS)
#define PHYMOD_BAM_CL37_CAP_15P75G_R2_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_15P75G_R2)
#define PHYMOD_BAM_CL37_CAP_20G_X2_CX4_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_20G_X2_CX4)
#define PHYMOD_BAM_CL37_CAP_20G_X2_CLR(bam37_cap) (bam37_cap &= ~PHYMOD_BAM_CL37_CAP_20G_X2)

#define PHYMOD_BAM_CL37_CAP_2P5G_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_2P5G ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_5G_X4_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_5G_X4 ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_6G_X4_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_6G_X4 ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_10G_HIGIG_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_10G_HIGIG ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_10G_CX4_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_10G_CX4 ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_12G_X4_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_12G_X4 ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_12P5_X4_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_12P5_X4 ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_13G_X4_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_13G_X4 ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_15G_X4_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_15G_X4 ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_16G_X4_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_16G_X4 ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_20G_X4_CX4_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_20G_X4_CX4 ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_20G_X4_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_20G_X4 ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_21G_X4_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_21G_X4 ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_25P455G_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_25P455G ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_31P5G_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_31P5G ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_32P7G_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_32P7G ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_40G_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_40G ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_10G_X2_CX4_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_10G_X2_CX4 ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_10G_DXGXS_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_10G_DXGXS ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_10P5G_DXGXS_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_10P5G_DXGXS ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_12P7_DXGXS_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_12P7_DXGXS ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_15P75G_R2_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_15P75G_R2 ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_20G_X2_CX4_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_20G_X2_CX4 ? 1 : 0)
#define PHYMOD_BAM_CL37_CAP_20G_X2_GET(bam37_cap) (bam37_cap & PHYMOD_BAM_CL37_CAP_20G_X2 ? 1 : 0)

/*! 
 * @brief Capabilities for CL73 FEC 
 */ 
#define PHYMOD_AN_FEC_OFF 0x1
#define PHYMOD_AN_FEC_CL74 0x2
#define PHYMOD_AN_FEC_CL91 0x4

#define PHYMOD_AN_FEC_OFF_SET(an_fec) (an_fec |= PHYMOD_AN_FEC_OFF)
#define PHYMOD_AN_FEC_CL74_SET(an_fec) (an_fec |= PHYMOD_AN_FEC_CL74)
#define PHYMOD_AN_FEC_CL91_SET(an_fec) (an_fec |= PHYMOD_AN_FEC_CL91)

#define PHYMOD_AN_FEC_OFF_CLR(an_fec) (an_fec &= ~PHYMOD_AN_FEC_OFF)
#define PHYMOD_AN_FEC_CL74_CLR(an_fec) (an_fec &= ~PHYMOD_AN_FEC_CL74)
#define PHYMOD_AN_FEC_CL91_CLR(an_fec) (an_fec &= ~PHYMOD_AN_FEC_CL91)

#define PHYMOD_AN_FEC_OFF_GET(an_fec) (an_fec & PHYMOD_AN_FEC_OFF ? 1 : 0)
#define PHYMOD_AN_FEC_CL74_GET(an_fec) (an_fec & PHYMOD_AN_FEC_CL74 ? 1 : 0)
#define PHYMOD_AN_FEC_CL91_GET(an_fec) (an_fec & PHYMOD_AN_FEC_CL91 ? 1 : 0)


/*!
 * @enum phymod_an_mode_type_e
 * @brief an mode type 
 */ 
typedef enum phymod_an_mode_type_e {
    phymod_AN_MODE_NONE = 0,
    phymod_AN_MODE_CL73,
    phymod_AN_MODE_CL37,
    phymod_AN_MODE_CL73BAM,
    phymod_AN_MODE_CL37BAM,
    phymod_AN_MODE_HPAM,
    phymod_AN_MODE_SGMII,
    phymod_AN_MODE_CL37BAM_10P9375G_VCO,
    phymod_AN_MODE_CL37_SGMII,
    phymod_AN_MODE_CL73_MSA,
    phymod_AN_MODE_MSA,
    phymod_AN_MODE_Count
} phymod_an_mode_type_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_an_mode_type_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_an_mode_type_t validation */
int phymod_an_mode_type_t_validate(phymod_an_mode_type_t phymod_an_mode_type);

/*!
 * @enum phymod_cl37_sgmii_speed_e
 * @brief cl37 sgmii speed type 
 */ 
typedef enum phymod_cl37_sgmii_speed_e {
    phymod_CL37_SGMII_10M = 0,
    phymod_CL37_SGMII_100M,
    phymod_CL37_SGMII_1000M,
    phymod_CL37_SGMII_Count
} phymod_cl37_sgmii_speed_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_cl37_sgmii_speed_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_cl37_sgmii_speed_t validation */
int phymod_cl37_sgmii_speed_t_validate(phymod_cl37_sgmii_speed_t phymod_cl37_sgmii_speed);

/*!
 * @struct phymod_autoneg_ability_s
 * @brief autoneg_ability 
 */ 
typedef struct phymod_autoneg_ability_s {
    uint32_t an_cap; /**< This indicates the CL73 capability. For instance, CL73 40G KR4 */
    uint32_t cl73bam_cap; /**< This indicates the CL73 BAM capability. For instance, CL73 BAM 20G KR2 */
    uint32_t cl37bam_cap; /**< This indicates the CL37 BAM capability. For instance, CL37 BAM 5G X4 */
    uint32_t an_fec; /**< Whether to enable CL74 FEC or not */
    uint32_t an_cl72; /**< Whether CL72 should be turned on when system is in AN mode. Default value is 1 */
    uint32_t an_hg2; /**< Whether HG2 mode should be enabled during AN mode */
    uint32_t capabilities; /**< AN capabilities, such as CL37, CL73, CL37BAM, etc */
    phymod_cl37_sgmii_speed_t sgmii_speed;
    uint32_t an_master_lane; /**< Master lane belongs to port. For 10 lane port[0-9], for 4 lane port [0-3], for 2 lane port [0-1]. This paramter is ignored for single lane port */
} phymod_autoneg_ability_t;

/* phymod_autoneg_ability_t initialization and validation */
int phymod_autoneg_ability_t_validate(const phymod_autoneg_ability_t* phymod_autoneg_ability);
int phymod_autoneg_ability_t_init(phymod_autoneg_ability_t* phymod_autoneg_ability);

/*! 
 * @brief Capabilities for phymod_phy_autoneg_set API 
 */ 
#define PHYMOD_AN_CAP_CL37 0x1
#define PHYMOD_AN_CAP_CL73 0x2
#define PHYMOD_AN_CAP_CL37BAM 0x4
#define PHYMOD_AN_CAP_CL73BAM 0x8
#define PHYMOD_AN_CAP_HPAM 0x10
#define PHYMOD_AN_CAP_SGMII 0x20
#define PHYMOD_AN_CAP_SYMM_PAUSE 0x40
#define PHYMOD_AN_CAP_ASYM_PAUSE 0x80
#define PHYMOD_AN_CAP_HALF_DUPLEX 0x100

#define PHYMOD_AN_CAP_CL37_SET(an) ((an)->capabilities |= PHYMOD_AN_CAP_CL37)
#define PHYMOD_AN_CAP_CL73_SET(an) ((an)->capabilities |= PHYMOD_AN_CAP_CL73)
#define PHYMOD_AN_CAP_CL37BAM_SET(an) ((an)->capabilities |= PHYMOD_AN_CAP_CL37BAM)
#define PHYMOD_AN_CAP_CL73BAM_SET(an) ((an)->capabilities |= PHYMOD_AN_CAP_CL73BAM)
#define PHYMOD_AN_CAP_HPAM_SET(an) ((an)->capabilities |= PHYMOD_AN_CAP_HPAM)
#define PHYMOD_AN_CAP_SGMII_SET(an) ((an)->capabilities |= PHYMOD_AN_CAP_SGMII)
#define PHYMOD_AN_CAP_SYMM_PAUSE_SET(an) ((an)->capabilities |= PHYMOD_AN_CAP_SYMM_PAUSE)
#define PHYMOD_AN_CAP_ASYM_PAUSE_SET(an) ((an)->capabilities |= PHYMOD_AN_CAP_ASYM_PAUSE)
#define PHYMOD_AN_CAP_HALF_DUPLEX_SET(an) ((an)->capabilities |= PHYMOD_AN_CAP_HALF_DUPLEX)

#define PHYMOD_AN_CAP_CL37_CLR(an) ((an)->capabilities &= ~PHYMOD_AN_CAP_CL37)
#define PHYMOD_AN_CAP_CL73_CLR(an) ((an)->capabilities &= ~PHYMOD_AN_CAP_CL73)
#define PHYMOD_AN_CAP_CL37BAM_CLR(an) ((an)->capabilities &= ~PHYMOD_AN_CAP_CL37BAM)
#define PHYMOD_AN_CAP_CL73BAM_CLR(an) ((an)->capabilities &= ~PHYMOD_AN_CAP_CL73BAM)
#define PHYMOD_AN_CAP_HPAM_CLR(an) ((an)->capabilities &= ~PHYMOD_AN_CAP_HPAM)
#define PHYMOD_AN_CAP_SGMII_CLR(an) ((an)->capabilities &= ~PHYMOD_AN_CAP_SGMII)
#define PHYMOD_AN_CAP_SYMM_PAUSE_CLR(an) ((an)->capabilities &= ~PHYMOD_AN_CAP_SYMM_PAUSE)
#define PHYMOD_AN_CAP_ASYM_PAUSE_CLR(an) ((an)->capabilities &= ~PHYMOD_AN_CAP_ASYM_PAUSE)
#define PHYMOD_AN_CAP_HALF_DUPLEX_CLR(an) ((an)->capabilities &= ~PHYMOD_AN_CAP_HALF_DUPLEX)

#define PHYMOD_AN_CAP_CL37_GET(an) ((an)->capabilities & PHYMOD_AN_CAP_CL37 ? 1 : 0)
#define PHYMOD_AN_CAP_CL73_GET(an) ((an)->capabilities & PHYMOD_AN_CAP_CL73 ? 1 : 0)
#define PHYMOD_AN_CAP_CL37BAM_GET(an) ((an)->capabilities & PHYMOD_AN_CAP_CL37BAM ? 1 : 0)
#define PHYMOD_AN_CAP_CL73BAM_GET(an) ((an)->capabilities & PHYMOD_AN_CAP_CL73BAM ? 1 : 0)
#define PHYMOD_AN_CAP_HPAM_GET(an) ((an)->capabilities & PHYMOD_AN_CAP_HPAM ? 1 : 0)
#define PHYMOD_AN_CAP_SGMII_GET(an) ((an)->capabilities & PHYMOD_AN_CAP_SGMII ? 1 : 0)
#define PHYMOD_AN_CAP_SYMM_PAUSE_GET(an) ((an)->capabilities & PHYMOD_AN_CAP_SYMM_PAUSE ? 1 : 0)
#define PHYMOD_AN_CAP_ASYM_PAUSE_GET(an) ((an)->capabilities & PHYMOD_AN_CAP_ASYM_PAUSE ? 1 : 0)
#define PHYMOD_AN_CAP_HALF_DUPLEX_GET(an) ((an)->capabilities & PHYMOD_AN_CAP_HALF_DUPLEX ? 1 : 0)

/*! 
 * @brief Flags for autoneg_set API 
 */ 
#define PHYMOD_AN_F_ALLOW_PLL_CHANGE 0x1
#define PHYMOD_AN_F_SET_PRIOR_ENABLE 0x2
#define PHYMOD_AN_F_ALLOW_CL72_CONFIG_CHANGE 0x4
#define PHYMOD_AN_F_IGNORE_MEDIUM_CHECK 0x8
#define PHYMOD_AN_F_SET_CL73_PDET_KX_ENABLE 0x10
#define PHYMOD_AN_F_SET_CL73_PDET_KX4_ENABLE 0x20
#define PHYMOD_AN_F_SET_CL73_PDET_2P5G_KX_ENABLE 0x40

#define PHYMOD_AN_F_ALLOW_PLL_CHANGE_SET(an) ((an)->flags |= PHYMOD_AN_F_ALLOW_PLL_CHANGE)
#define PHYMOD_AN_F_SET_PRIOR_ENABLE_SET(an) ((an)->flags |= PHYMOD_AN_F_SET_PRIOR_ENABLE)
#define PHYMOD_AN_F_ALLOW_CL72_CONFIG_CHANGE_SET(an) ((an)->flags |= PHYMOD_AN_F_ALLOW_CL72_CONFIG_CHANGE)
#define PHYMOD_AN_F_IGNORE_MEDIUM_CHECK_SET(an) ((an)->flags |= PHYMOD_AN_F_IGNORE_MEDIUM_CHECK)
#define PHYMOD_AN_F_SET_CL73_PDET_KX_ENABLE_SET(an) ((an)->flags |= PHYMOD_AN_F_SET_CL73_PDET_KX_ENABLE)
#define PHYMOD_AN_F_SET_CL73_PDET_KX4_ENABLE_SET(an) ((an)->flags |= PHYMOD_AN_F_SET_CL73_PDET_KX4_ENABLE)
#define PHYMOD_AN_F_SET_CL73_PDET_2P5G_KX_ENABLE_SET(an) ((an)->flags |= PHYMOD_AN_F_SET_CL73_PDET_2P5G_KX_ENABLE)

#define PHYMOD_AN_F_ALLOW_PLL_CHANGE_CLR(an) ((an)->flags &= ~PHYMOD_AN_F_ALLOW_PLL_CHANGE)
#define PHYMOD_AN_F_SET_PRIOR_ENABLE_CLR(an) ((an)->flags &= ~PHYMOD_AN_F_SET_PRIOR_ENABLE)
#define PHYMOD_AN_F_ALLOW_CL72_CONFIG_CHANGE_CLR(an) ((an)->flags &= ~PHYMOD_AN_F_ALLOW_CL72_CONFIG_CHANGE)
#define PHYMOD_AN_F_IGNORE_MEDIUM_CHECK_CLR(an) ((an)->flags &= ~PHYMOD_AN_F_IGNORE_MEDIUM_CHECK)
#define PHYMOD_AN_F_SET_CL73_PDET_KX_ENABLE_CLR(an) ((an)->flags &= ~PHYMOD_AN_F_SET_CL73_PDET_KX_ENABLE)
#define PHYMOD_AN_F_SET_CL73_PDET_KX4_ENABLE_CLR(an) ((an)->flags &= ~PHYMOD_AN_F_SET_CL73_PDET_KX4_ENABLE)
#define PHYMOD_AN_F_SET_CL73_PDET_2P5G_KX_ENABLE_CLR(an) ((an)->flags &= ~PHYMOD_AN_F_SET_CL73_PDET_2P5G_KX_ENABLE)

#define PHYMOD_AN_F_ALLOW_PLL_CHANGE_GET(an) ((an)->flags & PHYMOD_AN_F_ALLOW_PLL_CHANGE ? 1 : 0)
#define PHYMOD_AN_F_SET_PRIOR_ENABLE_GET(an) ((an)->flags & PHYMOD_AN_F_SET_PRIOR_ENABLE ? 1 : 0)
#define PHYMOD_AN_F_ALLOW_CL72_CONFIG_CHANGE_GET(an) ((an)->flags & PHYMOD_AN_F_ALLOW_CL72_CONFIG_CHANGE ? 1 : 0)
#define PHYMOD_AN_F_IGNORE_MEDIUM_CHECK_GET(an) ((an)->flags & PHYMOD_AN_F_IGNORE_MEDIUM_CHECK ? 1 : 0)
#define PHYMOD_AN_F_SET_CL73_PDET_KX_ENABLE_GET(an) ((an)->flags & PHYMOD_AN_F_SET_CL73_PDET_KX_ENABLE ? 1 : 0)
#define PHYMOD_AN_F_SET_CL73_PDET_KX4_ENABLE_GET(an) ((an)->flags & PHYMOD_AN_F_SET_CL73_PDET_KX4_ENABLE ? 1 : 0)
#define PHYMOD_AN_F_SET_CL73_PDET_2P5G_KX_ENABLE_GET(an) ((an)->flags & PHYMOD_AN_F_SET_CL73_PDET_2P5G_KX_ENABLE ? 1 : 0)

/*! 
 * phymod_phy_autoneg_ability_set
 *
 * @brief Set/Get autoneg 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  an_ability_set_type   - 
 */
int phymod_phy_autoneg_ability_set(const phymod_phy_access_t* phy, const phymod_autoneg_ability_t* an_ability_set_type);
/*! 
 * phymod_phy_autoneg_ability_get
 *
 * @brief Set/Get autoneg 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  an_ability_get_type   - 
 */
int phymod_phy_autoneg_ability_get(const phymod_phy_access_t* phy, phymod_autoneg_ability_t* an_ability_get_type);

/*! 
 * phymod_phy_autoneg_remote_ability_get
 *
 * @brief Get  remote link autoneg 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  an_ability_get_type   - 
 */
int phymod_phy_autoneg_remote_ability_get(const phymod_phy_access_t* phy, phymod_autoneg_ability_t* an_ability_get_type);

typedef struct phymod_autoneg_control_s {
    phymod_an_mode_type_t an_mode;
    uint32_t num_lane_adv; /**< The number of lanes the autoneg advert */
    uint32_t flags; /**< see AN_F */
    uint32_t enable;
} phymod_autoneg_control_t;

/* phymod_autoneg_control_t initialization and validation */
int phymod_autoneg_control_t_validate(const phymod_autoneg_control_t* phymod_autoneg_control);
int phymod_autoneg_control_t_init(phymod_autoneg_control_t* phymod_autoneg_control);

/*! 
 * phymod_phy_autoneg_set
 *
 * @brief Set/Get autoneg 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  an              - 
 */
int phymod_phy_autoneg_set(const phymod_phy_access_t* phy, const phymod_autoneg_control_t* an);
/*! 
 * phymod_phy_autoneg_get
 *
 * @brief Set/Get autoneg 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  an              - 
 * @param [out]  an_done         - 
 */
int phymod_phy_autoneg_get(const phymod_phy_access_t* phy, phymod_autoneg_control_t* an, uint32_t* an_done);

/*! 
 * phymod_phy_autoneg_restart_set
 *
 * @brief Set/Get autoneg restart 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  an              - 
 */
int phymod_phy_autoneg_restart_set(const phymod_phy_access_t* phy, const phymod_autoneg_control_t* an);

typedef struct phymod_autoneg_status_s {
    uint32_t enabled;
    uint32_t locked;
    uint32_t data_rate;
    phymod_interface_t interface;
} phymod_autoneg_status_t;

/* phymod_autoneg_status_t initialization and validation */
int phymod_autoneg_status_t_validate(const phymod_autoneg_status_t* phymod_autoneg_status);
int phymod_autoneg_status_t_init(phymod_autoneg_status_t* phymod_autoneg_status);

/*! 
 * phymod_phy_autoneg_status_get
 *
 * @brief Get Autoneg status 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  status          - 
 */
int phymod_phy_autoneg_status_get(const phymod_phy_access_t* phy, phymod_autoneg_status_t* status);


/*!
 * @enum phymod_firmware_load_force_e
 * @brief Firmware load force 
 */ 
typedef enum phymod_firmware_load_force_e {
    phymodFirmwareLoadSkip = 0, /**< Skip load FW */
    phymodFirmwareLoadForce, /**< Force load FW */
    phymodFirmwareLoadAuto, /**< Auto load FW in case of firmware change */
    phymodFirmwareLoadCount
} phymod_firmware_load_force_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_firmware_load_force_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_firmware_load_force_t validation */
int phymod_firmware_load_force_t_validate(phymod_firmware_load_force_t phymod_firmware_load_force);

/*!
 * @enum phymod_firmware_load_method_e
 * @brief Firmware load method 
 */ 
typedef enum phymod_firmware_load_method_e {
    phymodFirmwareLoadMethodNone = 0, /**< Don't load FW */
    phymodFirmwareLoadMethodInternal, /**< Load FW internaly */
    phymodFirmwareLoadMethodExternal, /**< Load FW by a given function */
    phymodFirmwareLoadMethodProgEEPROM, /**< Program EEPROM */
    phymodFirmwareLoadMethodCount
} phymod_firmware_load_method_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_firmware_load_method_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_firmware_load_method_t validation */
int phymod_firmware_load_method_t_validate(phymod_firmware_load_method_t phymod_firmware_load_method);
/*! 
 * @brief Core init flags 
 */ 
#define PHYMOD_CORE_INIT_F_UNTIL_FW_LOAD 0x1 /**< Run init sequence until FW load stage (without loading FW) */
#define PHYMOD_CORE_INIT_F_RESUME_AFTER_FW_LOAD 0x2 /**< Run init sequence from FW loading stage (without loading FW) */
#define PHYMOD_CORE_INIT_F_FIRMWARE_LOAD_VERIFY 0x4 /**< Verify FW loaded correctly */
#define PHYMOD_CORE_INIT_F_EXECUTE_PASS1 0x8 /**< core init state pass1 */
#define PHYMOD_CORE_INIT_F_EXECUTE_PASS2 0x10 /**< core init state pass2 */
#define PHYMOD_CORE_INIT_F_BYPASS_CRC_CHECK 0x20 /**< by pass crc check */
#define PHYMOD_CORE_INIT_F_FW_FORCE_DOWNLOAD 0x40 /**< force the FW download */
#define PHYMOD_CORE_INIT_F_EXECUTE_FW_LOAD 0x80 /**< Perform the firmware load */
#define PHYMOD_CORE_INIT_F_RESET_CORE_FOR_FW_LOAD 0x100 /**< Reset Core for F/W Load */
#define PHYMOD_CORE_INIT_F_FW_LOAD_END 0x200 /**< Firmware load end */
#define PHYMOD_CORE_INIT_F_FW_AUTO_DOWNLOAD 0x400 /**< force the FW download */
#define PHYMOD_CORE_INIT_F_SERDES_FW_BCAST 0x800 /**< Firmware broadcast download */
#define PHYMOD_CORE_INIT_F_ONLY_PLL0_IS_ACTIVE 0x1000 /**< Only PLL0 is active (Ramon A0) */

#define PHYMOD_CORE_INIT_F_UNTIL_FW_LOAD_SET(conf) ((conf)->flags |= PHYMOD_CORE_INIT_F_UNTIL_FW_LOAD)
#define PHYMOD_CORE_INIT_F_RESUME_AFTER_FW_LOAD_SET(conf) ((conf)->flags |= PHYMOD_CORE_INIT_F_RESUME_AFTER_FW_LOAD)
#define PHYMOD_CORE_INIT_F_FIRMWARE_LOAD_VERIFY_SET(conf) ((conf)->flags |= PHYMOD_CORE_INIT_F_FIRMWARE_LOAD_VERIFY)
#define PHYMOD_CORE_INIT_F_EXECUTE_PASS1_SET(conf) ((conf)->flags |= PHYMOD_CORE_INIT_F_EXECUTE_PASS1)
#define PHYMOD_CORE_INIT_F_EXECUTE_PASS2_SET(conf) ((conf)->flags |= PHYMOD_CORE_INIT_F_EXECUTE_PASS2)
#define PHYMOD_CORE_INIT_F_BYPASS_CRC_CHECK_SET(conf) ((conf)->flags |= PHYMOD_CORE_INIT_F_BYPASS_CRC_CHECK)
#define PHYMOD_CORE_INIT_F_FW_FORCE_DOWNLOAD_SET(conf) ((conf)->flags |= PHYMOD_CORE_INIT_F_FW_FORCE_DOWNLOAD)
#define PHYMOD_CORE_INIT_F_EXECUTE_FW_LOAD_SET(conf) ((conf)->flags |= PHYMOD_CORE_INIT_F_EXECUTE_FW_LOAD)
#define PHYMOD_CORE_INIT_F_RESET_CORE_FOR_FW_LOAD_SET(conf) ((conf)->flags |= PHYMOD_CORE_INIT_F_RESET_CORE_FOR_FW_LOAD)
#define PHYMOD_CORE_INIT_F_FW_LOAD_END_SET(conf) ((conf)->flags |= PHYMOD_CORE_INIT_F_FW_LOAD_END)
#define PHYMOD_CORE_INIT_F_FW_AUTO_DOWNLOAD_SET(conf) ((conf)->flags |= PHYMOD_CORE_INIT_F_FW_AUTO_DOWNLOAD)
#define PHYMOD_CORE_INIT_F_SERDES_FW_BCAST_SET(conf) ((conf)->flags |= PHYMOD_CORE_INIT_F_SERDES_FW_BCAST)
#define PHYMOD_CORE_INIT_F_ONLY_PLL0_IS_ACTIVE_SET(conf) ((conf)->flags |= PHYMOD_CORE_INIT_F_ONLY_PLL0_IS_ACTIVE)

#define PHYMOD_CORE_INIT_F_UNTIL_FW_LOAD_CLR(conf) ((conf)->flags &= ~PHYMOD_CORE_INIT_F_UNTIL_FW_LOAD)
#define PHYMOD_CORE_INIT_F_RESUME_AFTER_FW_LOAD_CLR(conf) ((conf)->flags &= ~PHYMOD_CORE_INIT_F_RESUME_AFTER_FW_LOAD)
#define PHYMOD_CORE_INIT_F_FIRMWARE_LOAD_VERIFY_CLR(conf) ((conf)->flags &= ~PHYMOD_CORE_INIT_F_FIRMWARE_LOAD_VERIFY)
#define PHYMOD_CORE_INIT_F_EXECUTE_PASS1_CLR(conf) ((conf)->flags &= ~PHYMOD_CORE_INIT_F_EXECUTE_PASS1)
#define PHYMOD_CORE_INIT_F_EXECUTE_PASS2_CLR(conf) ((conf)->flags &= ~PHYMOD_CORE_INIT_F_EXECUTE_PASS2)
#define PHYMOD_CORE_INIT_F_BYPASS_CRC_CHECK_CLR(conf) ((conf)->flags &= ~PHYMOD_CORE_INIT_F_BYPASS_CRC_CHECK)
#define PHYMOD_CORE_INIT_F_FW_FORCE_DOWNLOAD_CLR(conf) ((conf)->flags &= ~PHYMOD_CORE_INIT_F_FW_FORCE_DOWNLOAD)
#define PHYMOD_CORE_INIT_F_EXECUTE_FW_LOAD_CLR(conf) ((conf)->flags &= ~PHYMOD_CORE_INIT_F_EXECUTE_FW_LOAD)
#define PHYMOD_CORE_INIT_F_RESET_CORE_FOR_FW_LOAD_CLR(conf) ((conf)->flags &= ~PHYMOD_CORE_INIT_F_RESET_CORE_FOR_FW_LOAD)
#define PHYMOD_CORE_INIT_F_FW_LOAD_END_CLR(conf) ((conf)->flags &= ~PHYMOD_CORE_INIT_F_FW_LOAD_END)
#define PHYMOD_CORE_INIT_F_FW_AUTO_DOWNLOAD_CLR(conf) ((conf)->flags &= ~PHYMOD_CORE_INIT_F_FW_AUTO_DOWNLOAD)
#define PHYMOD_CORE_INIT_F_SERDES_FW_BCAST_CLR(conf) ((conf)->flags &= ~PHYMOD_CORE_INIT_F_SERDES_FW_BCAST)
#define PHYMOD_CORE_INIT_F_ONLY_PLL0_IS_ACTIVE_CLR(conf) ((conf)->flags &= ~PHYMOD_CORE_INIT_F_ONLY_PLL0_IS_ACTIVE)

#define PHYMOD_CORE_INIT_F_UNTIL_FW_LOAD_GET(conf) ((conf)->flags & PHYMOD_CORE_INIT_F_UNTIL_FW_LOAD ? 1 : 0)
#define PHYMOD_CORE_INIT_F_RESUME_AFTER_FW_LOAD_GET(conf) ((conf)->flags & PHYMOD_CORE_INIT_F_RESUME_AFTER_FW_LOAD ? 1 : 0)
#define PHYMOD_CORE_INIT_F_FIRMWARE_LOAD_VERIFY_GET(conf) ((conf)->flags & PHYMOD_CORE_INIT_F_FIRMWARE_LOAD_VERIFY ? 1 : 0)
#define PHYMOD_CORE_INIT_F_EXECUTE_PASS1_GET(conf) ((conf)->flags & PHYMOD_CORE_INIT_F_EXECUTE_PASS1 ? 1 : 0)
#define PHYMOD_CORE_INIT_F_EXECUTE_PASS2_GET(conf) ((conf)->flags & PHYMOD_CORE_INIT_F_EXECUTE_PASS2 ? 1 : 0)
#define PHYMOD_CORE_INIT_F_BYPASS_CRC_CHECK_GET(conf) ((conf)->flags & PHYMOD_CORE_INIT_F_BYPASS_CRC_CHECK ? 1 : 0)
#define PHYMOD_CORE_INIT_F_FW_FORCE_DOWNLOAD_GET(conf) ((conf)->flags & PHYMOD_CORE_INIT_F_FW_FORCE_DOWNLOAD ? 1 : 0)
#define PHYMOD_CORE_INIT_F_EXECUTE_FW_LOAD_GET(conf) ((conf)->flags & PHYMOD_CORE_INIT_F_EXECUTE_FW_LOAD ? 1 : 0)
#define PHYMOD_CORE_INIT_F_RESET_CORE_FOR_FW_LOAD_GET(conf) ((conf)->flags & PHYMOD_CORE_INIT_F_RESET_CORE_FOR_FW_LOAD ? 1 : 0)
#define PHYMOD_CORE_INIT_F_FW_LOAD_END_GET(conf) ((conf)->flags & PHYMOD_CORE_INIT_F_FW_LOAD_END ? 1 : 0)
#define PHYMOD_CORE_INIT_F_FW_AUTO_DOWNLOAD_GET(conf) ((conf)->flags & PHYMOD_CORE_INIT_F_FW_AUTO_DOWNLOAD ? 1 : 0)
#define PHYMOD_CORE_INIT_F_SERDES_FW_BCAST_GET(conf) ((conf)->flags & PHYMOD_CORE_INIT_F_SERDES_FW_BCAST ? 1 : 0)
#define PHYMOD_CORE_INIT_F_ONLY_PLL0_IS_ACTIVE_GET(conf) ((conf)->flags & PHYMOD_CORE_INIT_F_ONLY_PLL0_IS_ACTIVE ? 1 : 0)


/*!
 * @enum phymod_datapath_e
 * @brief Datapath 
 */ 
typedef enum phymod_datapath_e {
    phymodDatapathNormal = 0, /**< Normal Datapath */
    phymodDatapathUll, /**< Ultra Low Latency Datapath, provide minimum latency */
    phymodDatapathCount
} phymod_datapath_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_datapath_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_datapath_t validation */
int phymod_datapath_t_validate(phymod_datapath_t phymod_datapath);

/*!
 * @enum phymod_tx_input_voltage_e
 * @brief Tx input voltage 
 */ 
typedef enum phymod_tx_input_voltage_e {
    phymodTxInputVoltageDefault = 0, /**< Default */
    phymodTxInputVoltage1p00, /**< Tx input voltage as 1.00v */
    phymodTxInputVoltage1p25, /**< Tx input voltage as 1.25v */
    phymodTxInputVoltageCount
} phymod_tx_input_voltage_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_tx_input_voltage_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_tx_input_voltage_t validation */
int phymod_tx_input_voltage_t_validate(phymod_tx_input_voltage_t phymod_tx_input_voltage);

/*!
 * @struct phymod_afe_pll_s
 * @brief AFE/PLL related parameter 
 */ 
typedef struct phymod_afe_pll_s {
    uint32_t afe_pll_change_default; /**< If 1 change AFE/PLL reg */
    uint32_t ams_pll_iqp;
    uint32_t ams_pll_en_hrz;
} phymod_afe_pll_t;

/* phymod_afe_pll_t initialization and validation */
int phymod_afe_pll_t_validate(const phymod_afe_pll_t* phymod_afe_pll);
int phymod_afe_pll_t_init(phymod_afe_pll_t* phymod_afe_pll);

typedef struct phymod_core_init_config_s {
    phymod_lane_map_t lane_map;
    phymod_polarity_t polarity_map;
    phymod_firmware_load_method_t firmware_load_method;
    phymod_firmware_loader_f firmware_loader;
    phymod_firmware_core_config_t firmware_core_config;
    phymod_phy_inf_config_t interface; /**< init values for all lanes */
    uint32_t flags; /**< init flags */
    phymod_datapath_t op_datapath; /**< Datapath */
    int rx_fifo_sync_offset; /**< Extra cycles between read and write pointer in the RX data path FIFO, it also accept negative values */
    int tx_fifo_sync_offset; /**< Extra cycles between read and write pointer in the TX data path FIFO, it also accepts negative values */
    phymod_tx_input_voltage_t tx_input_voltage; /**< Tx input voltage */
    phymod_afe_pll_t afe_pll; /**< AFE/PLL register value */
    uint8_t core_mode;
    uint8_t trcvr_host_managed;
    uint32_t pll0_div_init_value;
    uint32_t pll1_div_init_value;
    phymod_ref_clk_t ref_clock; /**< Core reference clock. */
} phymod_core_init_config_t;

/* phymod_core_init_config_t initialization and validation */
int phymod_core_init_config_t_validate(const phymod_core_init_config_t* phymod_core_init_config);
int phymod_core_init_config_t_init(phymod_core_init_config_t* phymod_core_init_config);

typedef struct phymod_core_status_s {
    uint32_t pmd_active;
} phymod_core_status_t;

/* phymod_core_status_t initialization and validation */
int phymod_core_status_t_validate(const phymod_core_status_t* phymod_core_status);
int phymod_core_status_t_init(phymod_core_status_t* phymod_core_status);

/*! 
 * phymod_core_init
 *
 * @brief Core Initialization 
 *
 * @param [in]  core            - core access information
 * @param [in]  init_config     - 
 * @param [in]  core_status     - 
 */
int phymod_core_init(const phymod_core_access_t* core, const phymod_core_init_config_t* init_config, const phymod_core_status_t* core_status);

/*! 
 * phymod_phy_pll_multiplier_get
 *
 * @brief Core vco freq get function 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  core_vco_pll_multiplier   - 
 */
int phymod_phy_pll_multiplier_get(const phymod_phy_access_t* phy, uint32_t* core_vco_pll_multiplier);


/*!
 * @enum phymod_operation_mode_e
 * @brief Operation mode 
 */ 
typedef enum phymod_operation_mode_e {
    phymodOperationModeRetimer = 0, /**< Retimer mode */
    phymodOperationModeRepeater, /**< Repeater Mode */
    phymodOperationModePassthru, /**< 1G Pass thru Mode */
    phymodOperationModeCount
} phymod_operation_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_operation_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_operation_mode_t validation */
int phymod_operation_mode_t_validate(phymod_operation_mode_t phymod_operation_mode);

/*!
 * @enum phymod_autoneg_link_qualifier_e
 * @brief AN link qualifier type 
 */ 
typedef enum phymod_autoneg_link_qualifier_e {
    phymodAutonegLinkQualifierRegisterWrite = 0, /**< Qualify link based on Register Write */
    phymodAutonegLinkQualifierKRBlockLock, /**< Qualify link based on KR Block lock */
    phymodAutonegLinkQualifierKR4BlockLock, /**< Qualify link based on KR4 Block Lock */
    phymodAutonegLinkQualifierKR4PMDLock, /**< Qualify link based on KR4 PMD lock */
    phymodAutonegLinkQualifierExternalPCS, /**< Qualify link based on External PCS */
    phymodAutonegLinkQualifierDefault, /**< HW default */
    phymodAutonegLinkQualifierCount
} phymod_autoneg_link_qualifier_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_autoneg_link_qualifier_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_autoneg_link_qualifier_t validation */
int phymod_autoneg_link_qualifier_t_validate(phymod_autoneg_link_qualifier_t phymod_autoneg_link_qualifier);
typedef struct phymod_rx_los_s {
    uint32_t rx_los_en;
    uint32_t rx_los_invert_en;
} phymod_rx_los_t;

/* phymod_rx_los_t initialization and validation */
int phymod_rx_los_t_validate(const phymod_rx_los_t* phymod_rx_los);
int phymod_rx_los_t_init(phymod_rx_los_t* phymod_rx_los);

typedef struct phymod_phy_init_config_s {
    phymod_polarity_t polarity;
    uint32_t tx_params_user_flag[PHYMOD_MAX_LANES_PER_CORE];
    phymod_tx_t tx[PHYMOD_MAX_LANES_PER_CORE];
    uint32_t cl72_en;
    uint32_t an_en;
    phymod_operation_mode_t op_mode;
    phymod_autoneg_link_qualifier_t an_link_qualifier;
    phymod_phy_inf_config_t interface; /**< init values for all lanes */
    phymod_rx_los_t rx_los; /**< rx los config for all lanes */
    uint32_t ext_phy_tx_params_user_flag[PHYMOD_MAX_LANES_PER_CORE];
    phymod_tx_t ext_phy_tx[PHYMOD_MAX_LANES_PER_CORE];
    uint32_t rx_swing;
} phymod_phy_init_config_t;

/* phymod_phy_init_config_t initialization and validation */
int phymod_phy_init_config_t_validate(const phymod_phy_init_config_t* phymod_phy_init_config);
int phymod_phy_init_config_t_init(phymod_phy_init_config_t* phymod_phy_init_config);

/*! 
 * phymod_phy_init
 *
 * @brief Phy Initialization 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  init_config     - 
 */
int phymod_phy_init(const phymod_phy_access_t* phy, const phymod_phy_init_config_t* init_config);


/*!
 * @enum phymod_loopback_mode_e
 * @brief Loopback modes 
 */ 
typedef enum phymod_loopback_mode_e {
    phymodLoopbackGlobal = 0,
    phymodLoopbackGlobalPMD,
    phymodLoopbackGlobalPCS,
    phymodLoopbackRemotePMD,
    phymodLoopbackRemotePCS,
    phymodLoopbackSysGlobal,
    phymodLoopbackSysGlobalPMD,
    phymodLoopbackSysGlobalPCS,
    phymodLoopbackSysRemotePMD,
    phymodLoopbackSysRemotePCS,
    phymodLoopbackCount
} phymod_loopback_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_loopback_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_loopback_mode_t validation */
int phymod_loopback_mode_t_validate(phymod_loopback_mode_t phymod_loopback_mode);
/*! 
 * phymod_phy_loopback_set
 *
 * @brief Set/get loopback mode 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  loopback        - loopback mode
 * @param [in]  enable          - is loopback set
 */
int phymod_phy_loopback_set(const phymod_phy_access_t* phy, phymod_loopback_mode_t loopback, uint32_t enable);
/*! 
 * phymod_phy_loopback_get
 *
 * @brief Set/get loopback mode 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  loopback        - loopback mode
 * @param [out]  enable          - is loopback set
 */
int phymod_phy_loopback_get(const phymod_phy_access_t* phy, phymod_loopback_mode_t loopback, uint32_t* enable);

/*! 
 * phymod_phy_rx_pmd_locked_get
 *
 * @brief Get rx pmd locked indication 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  rx_pmd_locked   - bmap of rx pmd locked indications
 */
int phymod_phy_rx_pmd_locked_get(const phymod_phy_access_t* phy, uint32_t* rx_pmd_locked);

/*! 
 * phymod_phy_rx_signal_detect_get
 *
 * @brief Get rx pmd locked indication 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  rx_signal_detect   - signal detect indication
 */
int phymod_phy_rx_signal_detect_get(const phymod_phy_access_t* phy, uint32_t* rx_signal_detect);

/*! 
 * phymod_phy_link_status_get
 *
 * @brief Get link up status indication 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  link_status     - 
 */
int phymod_phy_link_status_get(const phymod_phy_access_t* phy, uint32_t* link_status);

/*! 
 * phymod_phy_status_dump
 *
 * @brief Get the serdes status 
 *
 * @param [in]  phy             - phy access information
 */
int phymod_phy_status_dump(const phymod_phy_access_t* phy);


/*!
 * @enum phymod_pcs_userspeed_mode_e
 * @brief modes for phymod_phy_pcs_userspeed API 
 */ 
typedef enum phymod_pcs_userspeed_mode_e {
    phymodPcsUserSpeedModeST = 0, /**< PCS Sw Table */
    phymodPcsUserSpeedModeHTO, /**< PCS Hw Table Override */
    phymodPcsUserSpeedModeCount
} phymod_pcs_userspeed_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_pcs_userspeed_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_pcs_userspeed_mode_t validation */
int phymod_pcs_userspeed_mode_t_validate(phymod_pcs_userspeed_mode_t phymod_pcs_userspeed_mode);

/*!
 * @enum phymod_pcs_userspeed_param_e
 * @brief parameters for phymod_phy_pcs_userspeed API 
 */ 
typedef enum phymod_pcs_userspeed_param_e {
    phymodPcsUserSpeedParamEntry = 0, /**< ST current entry */
    phymodPcsUserSpeedParamHCD, /**< ST HCD */
    phymodPcsUserSpeedParamClear, /**< HTO Clear */
    phymodPcsUserSpeedParamPllDiv, /**< ST/HTO PLL DIV */
    phymodPcsUserSpeedParamPmaOS, /**< ST/HTO PMA OS */
    phymodPcsUserSpeedParamScramble, /**< Scramble mode */
    phymodPcsUserSpeedParamEncode, /**< Encode mode */
    phymodPcsUserSpeedParamCl48CheckEnd, /**< CL48 Check end */
    phymodPcsUserSpeedParamBlkSync, /**< Block sync mode */
    phymodPcsUserSpeedParamReorder, /**< Reorder mode */
    phymodPcsUserSpeedParamCl36Enable, /**< CL36 enable */
    phymodPcsUserSpeedParamDescr1, /**< Descramble1 mode */
    phymodPcsUserSpeedParamDecode1, /**< Decode1 mode */
    phymodPcsUserSpeedParamDeskew, /**< Deskew mode */
    phymodPcsUserSpeedParamDescr2, /**< Descramble2 mode */
    phymodPcsUserSpeedParamDescr2ByteDel,
    phymodPcsUserSpeedParamBrcm64B66, /**< Drcm64/66 descramble */
    phymodPcsUserSpeedParamSgmii, /**< SGMII mode */
    phymodPcsUserSpeedParamClkcnt0, /**< clock count0 */
    phymodPcsUserSpeedParamClkcnt1, /**< clock count1 */
    phymodPcsUserSpeedParamLpcnt0, /**< Loop count0 */
    phymodPcsUserSpeedParamLpcnt1, /**< Loop count1 */
    phymodPcsUserSpeedParamMacCGC, /**< Mac CGC */
    phymodPcsUserSpeedParamRepcnt, /**< Repeat Count */
    phymodPcsUserSpeedParamCrdtEn, /**< Credit Enable */
    phymodPcsUserSpeedParamPcsClkcnt, /**< PCS clock count */
    phymodPcsUserSpeedParamPcsCGC, /**< PCS CGC */
    phymodPcsUserSpeedParamCl72En, /**< Cl72 enable */
    phymodPcsUserSpeedParamNumOfLanes, /**< Num of lanes */
    phymodPcsUserSpeedParamCount
} phymod_pcs_userspeed_param_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_pcs_userspeed_param_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_pcs_userspeed_param_t validation */
int phymod_pcs_userspeed_param_t_validate(phymod_pcs_userspeed_param_t phymod_pcs_userspeed_param);
typedef struct phymod_pcs_userspeed_config_s {
    phymod_pcs_userspeed_mode_t mode;
    phymod_pcs_userspeed_param_t param;
    uint32_t value;
    uint16_t current_entry;
} phymod_pcs_userspeed_config_t;

/* phymod_pcs_userspeed_config_t initialization and validation */
int phymod_pcs_userspeed_config_t_validate(const phymod_pcs_userspeed_config_t* phymod_pcs_userspeed_config);
int phymod_pcs_userspeed_config_t_init(phymod_pcs_userspeed_config_t* phymod_pcs_userspeed_config);

/*! 
 * phymod_phy_pcs_userspeed_set
 *
 * @brief Set/Get User Speed Paramateres 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  config          - 
 */
int phymod_phy_pcs_userspeed_set(const phymod_phy_access_t* phy, const phymod_pcs_userspeed_config_t* config);
/*! 
 * phymod_phy_pcs_userspeed_get
 *
 * @brief Set/Get User Speed Paramateres 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  config          - 
 */
int phymod_phy_pcs_userspeed_get(const phymod_phy_access_t* phy, phymod_pcs_userspeed_config_t* config);

/*! 
 * phymod_phy_reg_read
 *
 * @brief Read phymod register 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  reg_addr        - Register address
 * @param [out]  val             - read value
 */
int phymod_phy_reg_read(const phymod_phy_access_t* phy, uint32_t reg_addr, uint32_t* val);

/*! 
 * phymod_phy_reg_write
 *
 * @brief Write phymod register 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  reg_addr        - Register address
 * @param [in]  val             - write value
 */
int phymod_phy_reg_write(const phymod_phy_access_t* phy, uint32_t reg_addr, uint32_t val);

/*! 
 * phymod_phy_private_read
 *
 * @brief Read phymod private register 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  addr            - Register address
 * @param [out]  val             - read value
 */
int phymod_phy_private_read(const phymod_phy_access_t* phy, uint32_t addr, uint32_t* val);

/*! 
 * phymod_phy_private_write
 *
 * @brief Write phymod private register 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  addr            - Register address
 * @param [in]  val             - write value
 */
int phymod_phy_private_write(const phymod_phy_access_t* phy, uint32_t addr, uint32_t val);

/*! 
 * phymod_phy_rev_id
 *
 * @brief Read Revision id 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  rev_id          - Revision id
 */
int phymod_phy_rev_id(const phymod_phy_access_t* phy, uint32_t* rev_id);

/*! 
 * phymod_phy_lane_cross_switch_map_set
 *
 * @brief Get/Set cross switch swap 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  tx_array        - lane_map[x]=y means that Output data on Physical TX lane x will come from corresponding physical RX lane y
 */
int phymod_phy_lane_cross_switch_map_set(const phymod_phy_access_t* phy, const uint32_t* tx_array);
/*! 
 * phymod_phy_lane_cross_switch_map_get
 *
 * @brief Get/Set cross switch swap 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  tx_array        - lane_map[x]=y means that Output data on Physical TX lane x will come from corresponding physical RX lane y
 */
int phymod_phy_lane_cross_switch_map_get(const phymod_phy_access_t* phy, uint32_t* tx_array);

/*! 
 * @brief PHY interrupt sources 
 */ 
#define PHYMOD_INTR_TIMESYNC_FRAMESYNC 0x1 /**< Timesync framesync interrupt */
#define PHYMOD_INTR_TIMESYNC_TIMESTAMP 0x2 /**< Timesync timestamp interrupt */
#define PHYMOD_INTR_LINK_EVENT 0x4 /**< Link status event interrupt (link up/down, change in signal detect, etc.) */
#define PHYMOD_INTR_AUTONEG_EVENT 0x8 /**< Auto-negotiation event interrupt (auto-neg start/done) */
#define PHYMOD_INTR_PLL_EVENT 0x10 /**< PLL status event interrupt (lock lost/found) */
#define PHYMOD_INTR_UC_EVENT 0x20 /**< Microcontroller event interrupt (e.g. uC messaging event) */
#define PHYMOD_INTR_EMON_EVENT 0x40 /**< Error monitor event interrupt (e.g. PCS monitor event) */
#define PHYMOD_INTR_AUX_EVENT 0x80 /**< Non-standard PHY event interrupt */


/*! 
 * phymod_phy_intr_enable_set
 *
 * @brief Get/Set PHY interrupt enable mask 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  enable          - Mask of interrupts to enable/disable. Bit set means enable interrupt. See PHYMOD_INTR_xxx for list of supported interrupts.
 */
int phymod_phy_intr_enable_set(const phymod_phy_access_t* phy, uint32_t enable);
/*! 
 * phymod_phy_intr_enable_get
 *
 * @brief Get/Set PHY interrupt enable mask 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  enable          - Mask of enabled interrupts. Bit set means interrupt enabled. See PHYMOD_INTR_xxx for list of supported interrupts.
 */
int phymod_phy_intr_enable_get(const phymod_phy_access_t* phy, uint32_t* enable);

/*! 
 * phymod_phy_intr_status_get
 *
 * @brief PHY interrupt status get 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  intr_status     - Get mask of active interrupts. See PHYMOD_INTR_xxx for list of supported interrupts.
 */
int phymod_phy_intr_status_get(const phymod_phy_access_t* phy, uint32_t* intr_status);

/*! 
 * phymod_phy_intr_status_clear
 *
 * @brief Clear PHY interrupt status  
 *
 * @param [in]  phy             - phy access information
 * @param [in]  intr_clr        - Mask of interrupts to be cleared. See PHYMOD_INTR_xxx for list of supported interrupts.
 */
int phymod_phy_intr_status_clear(const phymod_phy_access_t* phy, uint32_t intr_clr);

/*! 
 * phymod_phy_i2c_read
 *
 * @brief Read data from I2C device attached to PHY 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  flags           - Optional device flags (currently unused)
 * @param [in]  addr            - I2C slave address
 * @param [in]  offset          - Offset in I2C device to read from
 * @param [in]  size            - Number of bytes to read
 * @param [out]  data            - 
 */
int phymod_phy_i2c_read(const phymod_phy_access_t* phy, uint32_t flags, uint32_t addr, uint32_t offset, uint32_t size, uint8_t* data);

/*! 
 * phymod_phy_i2c_write
 *
 * @brief Write data to I2C device attached to PHY 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  flags           - Optional device flags (currently unused)
 * @param [in]  addr            - I2C slave address
 * @param [in]  offset          - Offset in I2C device to write to
 * @param [in]  size            - Number of bytes to write
 * @param [in]  data            - 
 */
int phymod_phy_i2c_write(const phymod_phy_access_t* phy, uint32_t flags, uint32_t addr, uint32_t offset, uint32_t size, const uint8_t* data);


/*!
 * @enum phymod_gpio_mode_e
 * @brief GPIO pin mode 
 */ 
typedef enum phymod_gpio_mode_e {
    phymodGpioModeDisabled = 0,
    phymodGpioModeOutput,
    phymodGpioModeInput,
    phymodGpioModeCount
} phymod_gpio_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_gpio_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_gpio_mode_t validation */
int phymod_gpio_mode_t_validate(phymod_gpio_mode_t phymod_gpio_mode);
/*! 
 * phymod_phy_gpio_config_set
 *
 * @brief Set/Get the configuration of a PHY GPIO pin 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  pin_no          - GPIO pin number [0-7]
 * @param [in]  gpio_mode       - GPIO mode
 */
int phymod_phy_gpio_config_set(const phymod_phy_access_t* phy, int pin_no, phymod_gpio_mode_t gpio_mode);
/*! 
 * phymod_phy_gpio_config_get
 *
 * @brief Set/Get the configuration of a PHY GPIO pin 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  pin_no          - GPIO pin number [0-7]
 * @param [out]  gpio_mode       - GPIO mode
 */
int phymod_phy_gpio_config_get(const phymod_phy_access_t* phy, int pin_no, phymod_gpio_mode_t* gpio_mode);

/*! 
 * phymod_phy_gpio_pin_value_set
 *
 * @brief Set/Get the output/input value of a PHY GPIO pin 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  pin_no          - GPIO Pin number [0-7]
 * @param [in]  value           - GPIO Pin value (0 or 1)
 */
int phymod_phy_gpio_pin_value_set(const phymod_phy_access_t* phy, int pin_no, int value);
/*! 
 * phymod_phy_gpio_pin_value_get
 *
 * @brief Set/Get the output/input value of a PHY GPIO pin 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  pin_no          - GPIO Pin number [0-7]
 * @param [out]  value           - GPIO Pin value (0 or 1)
 */
int phymod_phy_gpio_pin_value_get(const phymod_phy_access_t* phy, int pin_no, int* value);


/*!
 * @enum phymod_osr_mode_e
 * @brief over sample modes 
 */ 
typedef enum phymod_osr_mode_e {
    phymodOversampleMode1 = 0,
    phymodOversampleMode2,
    phymodOversampleMode3,
    phymodOversampleMode3P3,
    phymodOversampleMode4,
    phymodOversampleMode5,
    phymodOversampleMode7P5,
    phymodOversampleMode8,
    phymodOversampleMode8P25,
    phymodOversampleMode10,
    phymodOversampleMode16P5,
    phymodOversampleMode20P625,
    phymodOversampleModeCount
} phymod_osr_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_osr_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_osr_mode_t validation */
int phymod_osr_mode_t_validate(phymod_osr_mode_t phymod_osr_mode);
/*! 
 * phymod_osr_mode_to_actual_os
 *
 * @brief Get oversample actual value 
 *
 * @param [in]  osr_mode        - OS mode
 * @param [out]  os_int          - OS integer value
 * @param [out]  os_remainder    - OS reminder
 */
int phymod_osr_mode_to_actual_os(phymod_osr_mode_t osr_mode, uint32_t* os_int, uint32_t* os_remainder);

/*! 
 * @brief Timesync capability flags 
 */ 
#define PHYMOD_TS_CAP_MPLS 0x1
#define PHYMOD_TS_CAP_ENHANCED_TSFIFO 0x2
#define PHYMOD_TS_CAP_INBAND_TS 0x4
#define PHYMOD_TS_CAP_FOLLOW_UP_ASSIST 0x8
#define PHYMOD_TS_CAP_DELAY_RESP_ASSIST 0x10
#define PHYMOD_TS_CAP_CAPTURE_TIMESTAMP_MSG 0x20

#define PHYMOD_TS_CAP_MPLS_SET(ts_cap) (ts_cap |= PHYMOD_TS_CAP_MPLS)
#define PHYMOD_TS_CAP_ENHANCED_TSFIFO_SET(ts_cap) (ts_cap |= PHYMOD_TS_CAP_ENHANCED_TSFIFO)
#define PHYMOD_TS_CAP_INBAND_TS_SET(ts_cap) (ts_cap |= PHYMOD_TS_CAP_INBAND_TS)
#define PHYMOD_TS_CAP_FOLLOW_UP_ASSIST_SET(ts_cap) (ts_cap |= PHYMOD_TS_CAP_FOLLOW_UP_ASSIST)
#define PHYMOD_TS_CAP_DELAY_RESP_ASSIST_SET(ts_cap) (ts_cap |= PHYMOD_TS_CAP_DELAY_RESP_ASSIST)
#define PHYMOD_TS_CAP_CAPTURE_TIMESTAMP_MSG_SET(ts_cap) (ts_cap |= PHYMOD_TS_CAP_CAPTURE_TIMESTAMP_MSG)

#define PHYMOD_TS_CAP_MPLS_CLR(ts_cap) (ts_cap &= ~PHYMOD_TS_CAP_MPLS)
#define PHYMOD_TS_CAP_ENHANCED_TSFIFO_CLR(ts_cap) (ts_cap &= ~PHYMOD_TS_CAP_ENHANCED_TSFIFO)
#define PHYMOD_TS_CAP_INBAND_TS_CLR(ts_cap) (ts_cap &= ~PHYMOD_TS_CAP_INBAND_TS)
#define PHYMOD_TS_CAP_FOLLOW_UP_ASSIST_CLR(ts_cap) (ts_cap &= ~PHYMOD_TS_CAP_FOLLOW_UP_ASSIST)
#define PHYMOD_TS_CAP_DELAY_RESP_ASSIST_CLR(ts_cap) (ts_cap &= ~PHYMOD_TS_CAP_DELAY_RESP_ASSIST)
#define PHYMOD_TS_CAP_CAPTURE_TIMESTAMP_MSG_CLR(ts_cap) (ts_cap &= ~PHYMOD_TS_CAP_CAPTURE_TIMESTAMP_MSG)

#define PHYMOD_TS_CAP_MPLS_GET(ts_cap) (ts_cap & PHYMOD_TS_CAP_MPLS ? 1 : 0)
#define PHYMOD_TS_CAP_ENHANCED_TSFIFO_GET(ts_cap) (ts_cap & PHYMOD_TS_CAP_ENHANCED_TSFIFO ? 1 : 0)
#define PHYMOD_TS_CAP_INBAND_TS_GET(ts_cap) (ts_cap & PHYMOD_TS_CAP_INBAND_TS ? 1 : 0)
#define PHYMOD_TS_CAP_FOLLOW_UP_ASSIST_GET(ts_cap) (ts_cap & PHYMOD_TS_CAP_FOLLOW_UP_ASSIST ? 1 : 0)
#define PHYMOD_TS_CAP_DELAY_RESP_ASSIST_GET(ts_cap) (ts_cap & PHYMOD_TS_CAP_DELAY_RESP_ASSIST ? 1 : 0)
#define PHYMOD_TS_CAP_CAPTURE_TIMESTAMP_MSG_GET(ts_cap) (ts_cap & PHYMOD_TS_CAP_CAPTURE_TIMESTAMP_MSG ? 1 : 0)

/*! 
 * @brief Timesync flags> 
 */ 
#define PHYMOD_TS_F_CAPTURE_TS_ENABLE 0x1
#define PHYMOD_TS_F_HEARTBEAT_TS_ENABLE 0x2
#define PHYMOD_TS_F_RX_CRC_ENABLE 0x4
#define PHYMOD_TS_F_8021AS_ENABLE 0x8
#define PHYMOD_TS_F_L2_ENABLE 0x10
#define PHYMOD_TS_F_IP4_ENABLE 0x20
#define PHYMOD_TS_F_IP6_ENABLE 0x40
#define PHYMOD_TS_F_CLOCK_SRC_EXT 0x80
#define PHYMOD_TS_F_CLOCK_SRC_EXT_MODE 0x100
#define PHYMOD_TS_F_1588_ENCRYPTED_MODE 0x200
#define PHYMOD_TS_F_FOLLOW_UP_ASSIST_ENABLE 0x400
#define PHYMOD_TS_F_DELAY_RESP_ASSIST_ENABLE 0x800
#define PHYMOD_TS_F_64BIT_TIMESTAMP_ENABLE 0x1000
#define PHYMOD_TS_F_1588_OVER_HSR_ENABLE 0x2000
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_SYNC 0x4000
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_DELAY_REQ 0x8000
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_PDELAY_REQ 0x10000
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_PDELAY_RESP 0x20000
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_SYNC 0x40000
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_DELAY_REQ 0x80000
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_PDELAY_REQ 0x100000
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_PDELAY_RESP 0x200000

#define PHYMOD_TS_F_CAPTURE_TS_ENABLE_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_CAPTURE_TS_ENABLE)
#define PHYMOD_TS_F_HEARTBEAT_TS_ENABLE_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_HEARTBEAT_TS_ENABLE)
#define PHYMOD_TS_F_RX_CRC_ENABLE_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_RX_CRC_ENABLE)
#define PHYMOD_TS_F_8021AS_ENABLE_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_8021AS_ENABLE)
#define PHYMOD_TS_F_L2_ENABLE_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_L2_ENABLE)
#define PHYMOD_TS_F_IP4_ENABLE_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_IP4_ENABLE)
#define PHYMOD_TS_F_IP6_ENABLE_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_IP6_ENABLE)
#define PHYMOD_TS_F_CLOCK_SRC_EXT_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_CLOCK_SRC_EXT)
#define PHYMOD_TS_F_CLOCK_SRC_EXT_MODE_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_CLOCK_SRC_EXT_MODE)
#define PHYMOD_TS_F_1588_ENCRYPTED_MODE_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_1588_ENCRYPTED_MODE)
#define PHYMOD_TS_F_FOLLOW_UP_ASSIST_ENABLE_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_FOLLOW_UP_ASSIST_ENABLE)
#define PHYMOD_TS_F_DELAY_RESP_ASSIST_ENABLE_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_DELAY_RESP_ASSIST_ENABLE)
#define PHYMOD_TS_F_64BIT_TIMESTAMP_ENABLE_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_64BIT_TIMESTAMP_ENABLE)
#define PHYMOD_TS_F_1588_OVER_HSR_ENABLE_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_1588_OVER_HSR_ENABLE)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_SYNC_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_SYNC)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_DELAY_REQ_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_DELAY_REQ)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_PDELAY_REQ_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_PDELAY_REQ)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_PDELAY_RESP_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_PDELAY_RESP)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_SYNC_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_SYNC)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_DELAY_REQ_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_DELAY_REQ)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_PDELAY_REQ_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_PDELAY_REQ)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_PDELAY_RESP_SET(ts_flags) (ts_flags |= PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_PDELAY_RESP)

#define PHYMOD_TS_F_CAPTURE_TS_ENABLE_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_CAPTURE_TS_ENABLE)
#define PHYMOD_TS_F_HEARTBEAT_TS_ENABLE_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_HEARTBEAT_TS_ENABLE)
#define PHYMOD_TS_F_RX_CRC_ENABLE_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_RX_CRC_ENABLE)
#define PHYMOD_TS_F_8021AS_ENABLE_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_8021AS_ENABLE)
#define PHYMOD_TS_F_L2_ENABLE_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_L2_ENABLE)
#define PHYMOD_TS_F_IP4_ENABLE_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_IP4_ENABLE)
#define PHYMOD_TS_F_IP6_ENABLE_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_IP6_ENABLE)
#define PHYMOD_TS_F_CLOCK_SRC_EXT_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_CLOCK_SRC_EXT)
#define PHYMOD_TS_F_CLOCK_SRC_EXT_MODE_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_CLOCK_SRC_EXT_MODE)
#define PHYMOD_TS_F_1588_ENCRYPTED_MODE_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_1588_ENCRYPTED_MODE)
#define PHYMOD_TS_F_FOLLOW_UP_ASSIST_ENABLE_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_FOLLOW_UP_ASSIST_ENABLE)
#define PHYMOD_TS_F_DELAY_RESP_ASSIST_ENABLE_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_DELAY_RESP_ASSIST_ENABLE)
#define PHYMOD_TS_F_64BIT_TIMESTAMP_ENABLE_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_64BIT_TIMESTAMP_ENABLE)
#define PHYMOD_TS_F_1588_OVER_HSR_ENABLE_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_1588_OVER_HSR_ENABLE)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_SYNC_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_SYNC)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_DELAY_REQ_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_DELAY_REQ)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_PDELAY_REQ_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_PDELAY_REQ)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_PDELAY_RESP_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_PDELAY_RESP)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_SYNC_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_SYNC)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_DELAY_REQ_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_DELAY_REQ)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_PDELAY_REQ_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_PDELAY_REQ)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_PDELAY_RESP_CLR(ts_flags) (ts_flags &= ~PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_PDELAY_RESP)

#define PHYMOD_TS_F_CAPTURE_TS_ENABLE_GET(ts_flags) (ts_flags & PHYMOD_TS_F_CAPTURE_TS_ENABLE ? 1 : 0)
#define PHYMOD_TS_F_HEARTBEAT_TS_ENABLE_GET(ts_flags) (ts_flags & PHYMOD_TS_F_HEARTBEAT_TS_ENABLE ? 1 : 0)
#define PHYMOD_TS_F_RX_CRC_ENABLE_GET(ts_flags) (ts_flags & PHYMOD_TS_F_RX_CRC_ENABLE ? 1 : 0)
#define PHYMOD_TS_F_8021AS_ENABLE_GET(ts_flags) (ts_flags & PHYMOD_TS_F_8021AS_ENABLE ? 1 : 0)
#define PHYMOD_TS_F_L2_ENABLE_GET(ts_flags) (ts_flags & PHYMOD_TS_F_L2_ENABLE ? 1 : 0)
#define PHYMOD_TS_F_IP4_ENABLE_GET(ts_flags) (ts_flags & PHYMOD_TS_F_IP4_ENABLE ? 1 : 0)
#define PHYMOD_TS_F_IP6_ENABLE_GET(ts_flags) (ts_flags & PHYMOD_TS_F_IP6_ENABLE ? 1 : 0)
#define PHYMOD_TS_F_CLOCK_SRC_EXT_GET(ts_flags) (ts_flags & PHYMOD_TS_F_CLOCK_SRC_EXT ? 1 : 0)
#define PHYMOD_TS_F_CLOCK_SRC_EXT_MODE_GET(ts_flags) (ts_flags & PHYMOD_TS_F_CLOCK_SRC_EXT_MODE ? 1 : 0)
#define PHYMOD_TS_F_1588_ENCRYPTED_MODE_GET(ts_flags) (ts_flags & PHYMOD_TS_F_1588_ENCRYPTED_MODE ? 1 : 0)
#define PHYMOD_TS_F_FOLLOW_UP_ASSIST_ENABLE_GET(ts_flags) (ts_flags & PHYMOD_TS_F_FOLLOW_UP_ASSIST_ENABLE ? 1 : 0)
#define PHYMOD_TS_F_DELAY_RESP_ASSIST_ENABLE_GET(ts_flags) (ts_flags & PHYMOD_TS_F_DELAY_RESP_ASSIST_ENABLE ? 1 : 0)
#define PHYMOD_TS_F_64BIT_TIMESTAMP_ENABLE_GET(ts_flags) (ts_flags & PHYMOD_TS_F_64BIT_TIMESTAMP_ENABLE ? 1 : 0)
#define PHYMOD_TS_F_1588_OVER_HSR_ENABLE_GET(ts_flags) (ts_flags & PHYMOD_TS_F_1588_OVER_HSR_ENABLE ? 1 : 0)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_SYNC_GET(ts_flags) (ts_flags & PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_SYNC ? 1 : 0)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_DELAY_REQ_GET(ts_flags) (ts_flags & PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_DELAY_REQ ? 1 : 0)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_PDELAY_REQ_GET(ts_flags) (ts_flags & PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_PDELAY_REQ ? 1 : 0)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_PDELAY_RESP_GET(ts_flags) (ts_flags & PHYMOD_TS_F_CAPTURE_TIMESTAMP_TX_PDELAY_RESP ? 1 : 0)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_SYNC_GET(ts_flags) (ts_flags & PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_SYNC ? 1 : 0)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_DELAY_REQ_GET(ts_flags) (ts_flags & PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_DELAY_REQ ? 1 : 0)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_PDELAY_REQ_GET(ts_flags) (ts_flags & PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_PDELAY_REQ ? 1 : 0)
#define PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_PDELAY_RESP_GET(ts_flags) (ts_flags & PHYMOD_TS_F_CAPTURE_TIMESTAMP_RX_PDELAY_RESP ? 1 : 0)

/*! 
 * @brief Load control flags> 
 */ 
#define PHYMOD_TS_LDCTL_TN_LOAD 0x1
#define PHYMOD_TS_LDCTL_TIMECODE_LOAD 0x2
#define PHYMOD_TS_LDCTL_SYNCOUT_LOAD 0x4
#define PHYMOD_TS_LDCTL_NCO_DIVIDER_LOAD 0x8
#define PHYMOD_TS_LDCTL_LOCAL_TIME_LOAD 0x10
#define PHYMOD_TS_LDCTL_NCO_ADDEND_LOAD 0x20
#define PHYMOD_TS_LDCTL_DPLL_LOOP_FILTER_LOAD 0x40
#define PHYMOD_TS_LDCTL_DPLL_REF_PHASE_LOAD 0x80
#define PHYMOD_TS_LDCTL_DPLL_REF_PHASE_DELTA_LOAD 0x100
#define PHYMOD_TS_LDCTL_DPLL_K3_LOAD 0x200
#define PHYMOD_TS_LDCTL_DPLL_K2_LOAD 0x400
#define PHYMOD_TS_LDCTL_DPLL_K1_LOAD 0x800

#define PHYMOD_TS_LDCTL_TN_LOAD_SET(ts_ldctl) (ts_ldctl |= PHYMOD_TS_LDCTL_TN_LOAD)
#define PHYMOD_TS_LDCTL_TIMECODE_LOAD_SET(ts_ldctl) (ts_ldctl |= PHYMOD_TS_LDCTL_TIMECODE_LOAD)
#define PHYMOD_TS_LDCTL_SYNCOUT_LOAD_SET(ts_ldctl) (ts_ldctl |= PHYMOD_TS_LDCTL_SYNCOUT_LOAD)
#define PHYMOD_TS_LDCTL_NCO_DIVIDER_LOAD_SET(ts_ldctl) (ts_ldctl |= PHYMOD_TS_LDCTL_NCO_DIVIDER_LOAD)
#define PHYMOD_TS_LDCTL_LOCAL_TIME_LOAD_SET(ts_ldctl) (ts_ldctl |= PHYMOD_TS_LDCTL_LOCAL_TIME_LOAD)
#define PHYMOD_TS_LDCTL_NCO_ADDEND_LOAD_SET(ts_ldctl) (ts_ldctl |= PHYMOD_TS_LDCTL_NCO_ADDEND_LOAD)
#define PHYMOD_TS_LDCTL_DPLL_LOOP_FILTER_LOAD_SET(ts_ldctl) (ts_ldctl |= PHYMOD_TS_LDCTL_DPLL_LOOP_FILTER_LOAD)
#define PHYMOD_TS_LDCTL_DPLL_REF_PHASE_LOAD_SET(ts_ldctl) (ts_ldctl |= PHYMOD_TS_LDCTL_DPLL_REF_PHASE_LOAD)
#define PHYMOD_TS_LDCTL_DPLL_REF_PHASE_DELTA_LOAD_SET(ts_ldctl) (ts_ldctl |= PHYMOD_TS_LDCTL_DPLL_REF_PHASE_DELTA_LOAD)
#define PHYMOD_TS_LDCTL_DPLL_K3_LOAD_SET(ts_ldctl) (ts_ldctl |= PHYMOD_TS_LDCTL_DPLL_K3_LOAD)
#define PHYMOD_TS_LDCTL_DPLL_K2_LOAD_SET(ts_ldctl) (ts_ldctl |= PHYMOD_TS_LDCTL_DPLL_K2_LOAD)
#define PHYMOD_TS_LDCTL_DPLL_K1_LOAD_SET(ts_ldctl) (ts_ldctl |= PHYMOD_TS_LDCTL_DPLL_K1_LOAD)

#define PHYMOD_TS_LDCTL_TN_LOAD_CLR(ts_ldctl) (ts_ldctl &= ~PHYMOD_TS_LDCTL_TN_LOAD)
#define PHYMOD_TS_LDCTL_TIMECODE_LOAD_CLR(ts_ldctl) (ts_ldctl &= ~PHYMOD_TS_LDCTL_TIMECODE_LOAD)
#define PHYMOD_TS_LDCTL_SYNCOUT_LOAD_CLR(ts_ldctl) (ts_ldctl &= ~PHYMOD_TS_LDCTL_SYNCOUT_LOAD)
#define PHYMOD_TS_LDCTL_NCO_DIVIDER_LOAD_CLR(ts_ldctl) (ts_ldctl &= ~PHYMOD_TS_LDCTL_NCO_DIVIDER_LOAD)
#define PHYMOD_TS_LDCTL_LOCAL_TIME_LOAD_CLR(ts_ldctl) (ts_ldctl &= ~PHYMOD_TS_LDCTL_LOCAL_TIME_LOAD)
#define PHYMOD_TS_LDCTL_NCO_ADDEND_LOAD_CLR(ts_ldctl) (ts_ldctl &= ~PHYMOD_TS_LDCTL_NCO_ADDEND_LOAD)
#define PHYMOD_TS_LDCTL_DPLL_LOOP_FILTER_LOAD_CLR(ts_ldctl) (ts_ldctl &= ~PHYMOD_TS_LDCTL_DPLL_LOOP_FILTER_LOAD)
#define PHYMOD_TS_LDCTL_DPLL_REF_PHASE_LOAD_CLR(ts_ldctl) (ts_ldctl &= ~PHYMOD_TS_LDCTL_DPLL_REF_PHASE_LOAD)
#define PHYMOD_TS_LDCTL_DPLL_REF_PHASE_DELTA_LOAD_CLR(ts_ldctl) (ts_ldctl &= ~PHYMOD_TS_LDCTL_DPLL_REF_PHASE_DELTA_LOAD)
#define PHYMOD_TS_LDCTL_DPLL_K3_LOAD_CLR(ts_ldctl) (ts_ldctl &= ~PHYMOD_TS_LDCTL_DPLL_K3_LOAD)
#define PHYMOD_TS_LDCTL_DPLL_K2_LOAD_CLR(ts_ldctl) (ts_ldctl &= ~PHYMOD_TS_LDCTL_DPLL_K2_LOAD)
#define PHYMOD_TS_LDCTL_DPLL_K1_LOAD_CLR(ts_ldctl) (ts_ldctl &= ~PHYMOD_TS_LDCTL_DPLL_K1_LOAD)

#define PHYMOD_TS_LDCTL_TN_LOAD_GET(ts_ldctl) (ts_ldctl & PHYMOD_TS_LDCTL_TN_LOAD ? 1 : 0)
#define PHYMOD_TS_LDCTL_TIMECODE_LOAD_GET(ts_ldctl) (ts_ldctl & PHYMOD_TS_LDCTL_TIMECODE_LOAD ? 1 : 0)
#define PHYMOD_TS_LDCTL_SYNCOUT_LOAD_GET(ts_ldctl) (ts_ldctl & PHYMOD_TS_LDCTL_SYNCOUT_LOAD ? 1 : 0)
#define PHYMOD_TS_LDCTL_NCO_DIVIDER_LOAD_GET(ts_ldctl) (ts_ldctl & PHYMOD_TS_LDCTL_NCO_DIVIDER_LOAD ? 1 : 0)
#define PHYMOD_TS_LDCTL_LOCAL_TIME_LOAD_GET(ts_ldctl) (ts_ldctl & PHYMOD_TS_LDCTL_LOCAL_TIME_LOAD ? 1 : 0)
#define PHYMOD_TS_LDCTL_NCO_ADDEND_LOAD_GET(ts_ldctl) (ts_ldctl & PHYMOD_TS_LDCTL_NCO_ADDEND_LOAD ? 1 : 0)
#define PHYMOD_TS_LDCTL_DPLL_LOOP_FILTER_LOAD_GET(ts_ldctl) (ts_ldctl & PHYMOD_TS_LDCTL_DPLL_LOOP_FILTER_LOAD ? 1 : 0)
#define PHYMOD_TS_LDCTL_DPLL_REF_PHASE_LOAD_GET(ts_ldctl) (ts_ldctl & PHYMOD_TS_LDCTL_DPLL_REF_PHASE_LOAD ? 1 : 0)
#define PHYMOD_TS_LDCTL_DPLL_REF_PHASE_DELTA_LOAD_GET(ts_ldctl) (ts_ldctl & PHYMOD_TS_LDCTL_DPLL_REF_PHASE_DELTA_LOAD ? 1 : 0)
#define PHYMOD_TS_LDCTL_DPLL_K3_LOAD_GET(ts_ldctl) (ts_ldctl & PHYMOD_TS_LDCTL_DPLL_K3_LOAD ? 1 : 0)
#define PHYMOD_TS_LDCTL_DPLL_K2_LOAD_GET(ts_ldctl) (ts_ldctl & PHYMOD_TS_LDCTL_DPLL_K2_LOAD ? 1 : 0)
#define PHYMOD_TS_LDCTL_DPLL_K1_LOAD_GET(ts_ldctl) (ts_ldctl & PHYMOD_TS_LDCTL_DPLL_K1_LOAD ? 1 : 0)


/*!
 * @enum phymod_timesync_timer_mode_e
 * @brief Timesync timer mode 
 */ 
typedef enum phymod_timesync_timer_mode_e {
    phymodTimesyncTimerModeNone = 0x0,
    phymodTimesyncTimerModeDefault = 0x1,
    phymodTimesyncTimerMode32Bit = 0x2,
    phymodTimesyncTimerMode48Bit = 0x4,
    phymodTimesyncTimerMode64Bit = 0x8,
    phymodTimesyncTimerMode80Bit = 0x10,
    phymodTimesyncTimerModeCount
} phymod_timesync_timer_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_timesync_timer_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_timesync_timer_mode_t validation */
int phymod_timesync_timer_mode_t_validate(phymod_timesync_timer_mode_t phymod_timesync_timer_mode);

/*!
 * @enum phymod_timesync_global_mode_e
 * @brief Timesync timer mode 
 */ 
typedef enum phymod_timesync_global_mode_e {
    phymodTimesyncGLobalModeFree = 0x0,
    phymodTimesyncGLobalModeSyncIn = 0x1,
    phymodTimesyncGLobalModeCpu = 0x2,
    phymodTimesyncGLobalModeCount
} phymod_timesync_global_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_timesync_global_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_timesync_global_mode_t validation */
int phymod_timesync_global_mode_t_validate(phymod_timesync_global_mode_t phymod_timesync_global_mode);

/*!
 * @enum phymod_timesync_framesync_mode_e
 * @brief Timesync framsync mode 
 */ 
typedef enum phymod_timesync_framesync_mode_e {
    phymodTimesyncFramsyncModeNone = 0x0,
    phymodTimesyncFramsyncModeSyncIn0 = 0x1,
    phymodTimesyncFramsyncModeSyncIn1 = 0x2,
    phymodTimesyncFramsyncModeSyncOut = 0x3,
    phymodTimesyncFramsyncModeCpu = 0x4,
    phymodTimesyncFramsyncModeCount
} phymod_timesync_framesync_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_timesync_framesync_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_timesync_framesync_mode_t validation */
int phymod_timesync_framesync_mode_t_validate(phymod_timesync_framesync_mode_t phymod_timesync_framesync_mode);

/*!
 * @enum phymod_timesync_syncout_mode_e
 * @brief Timesync syncout mode 
 */ 
typedef enum phymod_timesync_syncout_mode_e {
    phymodTimesyncSyncoutModeDisable,
    phymodTimesyncSyncoutModeOneTime,
    phymodTimesyncSyncoutModePulseTrain,
    phymodTimesyncSyncoutModePulseTrainWithSync,
    phymodTimesyncSyncoutModeCount
} phymod_timesync_syncout_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_timesync_syncout_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_timesync_syncout_mode_t validation */
int phymod_timesync_syncout_mode_t_validate(phymod_timesync_syncout_mode_t phymod_timesync_syncout_mode);

/*!
 * @enum phymod_timesync_event_msg_action_e
 * @brief Actions on timesync event messages 
 */ 
typedef enum phymod_timesync_event_msg_action_e {
    phymodTimesyncEventMsgActionNone,
    phymodTimesyncEventMsgActionEgrModeUpdateCorrectionField,
    phymodTimesyncEventMsgActionEgrModeReplaceCorrectionFieldOrigin,
    phymodTimesyncEventMsgActionEgrModeCaptureTimestamp,
    phymodTimesyncEventMsgActionIngModeUpdateCorrectionField,
    phymodTimesyncEventMsgActionIngModeInsertTimestamp,
    phymodTimesyncEventMsgActionIngModeInsertDelaytime,
    phymodTimesyncEventMsgActionCount
} phymod_timesync_event_msg_action_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_timesync_event_msg_action_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_timesync_event_msg_action_t validation */
int phymod_timesync_event_msg_action_t_validate(phymod_timesync_event_msg_action_t phymod_timesync_event_msg_action);
typedef struct phymod_timesync_timer_adjust_s {
    phymod_timesync_timer_mode_t mode; /**< Timer mode */
    int delta; /**< Delta */
} phymod_timesync_timer_adjust_t;

/* phymod_timesync_timer_adjust_t initialization and validation */
int phymod_timesync_timer_adjust_t_validate(const phymod_timesync_timer_adjust_t* phymod_timesync_timer_adjust);
int phymod_timesync_timer_adjust_t_init(phymod_timesync_timer_adjust_t* phymod_timesync_timer_adjust);

typedef struct phymod_timesync_inband_ctrl_s {
    uint32_t flags; /**< Flags */
    int resv0_id; /**< Reserved ID */
    phymod_timesync_timer_mode_t timer_mode; /**< Timer mode */
} phymod_timesync_inband_ctrl_t;

/* phymod_timesync_inband_ctrl_t initialization and validation */
int phymod_timesync_inband_ctrl_t_validate(const phymod_timesync_inband_ctrl_t* phymod_timesync_inband_ctrl);
int phymod_timesync_inband_ctrl_t_init(phymod_timesync_inband_ctrl_t* phymod_timesync_inband_ctrl);

typedef struct phymod_timesync_framesync_s {
    phymod_timesync_framesync_mode_t mode; /**< Mode */
    uint32_t length_threshold; /**< Threshold */
    uint32_t event_offset; /**< Even off set */
} phymod_timesync_framesync_t;

/* phymod_timesync_framesync_t initialization and validation */
int phymod_timesync_framesync_t_validate(const phymod_timesync_framesync_t* phymod_timesync_framesync);
int phymod_timesync_framesync_t_init(phymod_timesync_framesync_t* phymod_timesync_framesync);

typedef struct phymod_timesync_syncout_s {
    uint16_t pulse_1_length; /**< Pulse 1 length in nanoseconds */
    uint16_t pulse_2_length; /**< Pulse 2 length in nanoseconds */
    uint32_t interval; /**< Interval in nanoseconds */
    uint64_t timestamp; /**< Syncout timestamp */
} phymod_timesync_syncout_t;

/* phymod_timesync_syncout_t initialization and validation */
int phymod_timesync_syncout_t_validate(const phymod_timesync_syncout_t* phymod_timesync_syncout);
int phymod_timesync_syncout_t_init(phymod_timesync_syncout_t* phymod_timesync_syncout);

typedef struct phymod_timesync_timespec_s {
    uint8_t isnegative; /**< Sign identifier. */
    uint64_t seconds; /**< Seconds absolute value. */
    uint32_t nanoseconds; /**< Nanoseconds absolute value. */
} phymod_timesync_timespec_t;

/* phymod_timesync_timespec_t initialization and validation */
int phymod_timesync_timespec_t_validate(const phymod_timesync_timespec_t* phymod_timesync_timespec);
int phymod_timesync_timespec_t_init(phymod_timesync_timespec_t* phymod_timesync_timespec);

/*! 
 * @brief Timesync MPLS label flags 
 */ 
#define PHYMOD_TS_MPLS_LABEL_F_IN 0x1
#define PHYMOD_TS_MPLS_LABEL_F_OUT 0x2

#define PHYMOD_TS_MPLS_LABEL_F_IN_SET(ts_mpls_label_f) (ts_mpls_label_f |= PHYMOD_TS_MPLS_LABEL_F_IN)
#define PHYMOD_TS_MPLS_LABEL_F_OUT_SET(ts_mpls_label_f) (ts_mpls_label_f |= PHYMOD_TS_MPLS_LABEL_F_OUT)

#define PHYMOD_TS_MPLS_LABEL_F_IN_CLR(ts_mpls_label_f) (ts_mpls_label_f &= ~PHYMOD_TS_MPLS_LABEL_F_IN)
#define PHYMOD_TS_MPLS_LABEL_F_OUT_CLR(ts_mpls_label_f) (ts_mpls_label_f &= ~PHYMOD_TS_MPLS_LABEL_F_OUT)

#define PHYMOD_TS_MPLS_LABEL_F_IN_GET(ts_mpls_label_f) (ts_mpls_label_f & PHYMOD_TS_MPLS_LABEL_F_IN ? 1 : 0)
#define PHYMOD_TS_MPLS_LABEL_F_OUT_GET(ts_mpls_label_f) (ts_mpls_label_f & PHYMOD_TS_MPLS_LABEL_F_OUT ? 1 : 0)

typedef struct phymod_timesync_mpls_label_s {
    uint32_t value; /**< MPLS label bits [19:0] */
    uint32_t mask; /**< MPLS label mask bits [19:0] */
    uint32_t flags; /**< MPLS label flags */
} phymod_timesync_mpls_label_t;

/* phymod_timesync_mpls_label_t initialization and validation */
int phymod_timesync_mpls_label_t_validate(const phymod_timesync_mpls_label_t* phymod_timesync_mpls_label);
int phymod_timesync_mpls_label_t_init(phymod_timesync_mpls_label_t* phymod_timesync_mpls_label);

/*! 
 * @brief Timesync MPLS control flags 
 */ 
#define PHYMOD_TS_MPLS_F_ENABLE 0x1
#define PHYMOD_TS_MPLS_F_ENTROPY_ENABLE 0x2
#define PHYMOD_TS_MPLS_F_SPECIAL_LABEL_ENABLE 0x4
#define PHYMOD_TS_MPLS_F_CONTROL_WORD_ENABLE 0x8

#define PHYMOD_TS_MPLS_F_ENABLE_SET(ts_mpls_f) (ts_mpls_f |= PHYMOD_TS_MPLS_F_ENABLE)
#define PHYMOD_TS_MPLS_F_ENTROPY_ENABLE_SET(ts_mpls_f) (ts_mpls_f |= PHYMOD_TS_MPLS_F_ENTROPY_ENABLE)
#define PHYMOD_TS_MPLS_F_SPECIAL_LABEL_ENABLE_SET(ts_mpls_f) (ts_mpls_f |= PHYMOD_TS_MPLS_F_SPECIAL_LABEL_ENABLE)
#define PHYMOD_TS_MPLS_F_CONTROL_WORD_ENABLE_SET(ts_mpls_f) (ts_mpls_f |= PHYMOD_TS_MPLS_F_CONTROL_WORD_ENABLE)

#define PHYMOD_TS_MPLS_F_ENABLE_CLR(ts_mpls_f) (ts_mpls_f &= ~PHYMOD_TS_MPLS_F_ENABLE)
#define PHYMOD_TS_MPLS_F_ENTROPY_ENABLE_CLR(ts_mpls_f) (ts_mpls_f &= ~PHYMOD_TS_MPLS_F_ENTROPY_ENABLE)
#define PHYMOD_TS_MPLS_F_SPECIAL_LABEL_ENABLE_CLR(ts_mpls_f) (ts_mpls_f &= ~PHYMOD_TS_MPLS_F_SPECIAL_LABEL_ENABLE)
#define PHYMOD_TS_MPLS_F_CONTROL_WORD_ENABLE_CLR(ts_mpls_f) (ts_mpls_f &= ~PHYMOD_TS_MPLS_F_CONTROL_WORD_ENABLE)

#define PHYMOD_TS_MPLS_F_ENABLE_GET(ts_mpls_f) (ts_mpls_f & PHYMOD_TS_MPLS_F_ENABLE ? 1 : 0)
#define PHYMOD_TS_MPLS_F_ENTROPY_ENABLE_GET(ts_mpls_f) (ts_mpls_f & PHYMOD_TS_MPLS_F_ENTROPY_ENABLE ? 1 : 0)
#define PHYMOD_TS_MPLS_F_SPECIAL_LABEL_ENABLE_GET(ts_mpls_f) (ts_mpls_f & PHYMOD_TS_MPLS_F_SPECIAL_LABEL_ENABLE ? 1 : 0)
#define PHYMOD_TS_MPLS_F_CONTROL_WORD_ENABLE_GET(ts_mpls_f) (ts_mpls_f & PHYMOD_TS_MPLS_F_CONTROL_WORD_ENABLE ? 1 : 0)

typedef struct phymod_timesync_mpls_ctrl_s {
    uint32_t flags; /**< Flags */
    uint32_t special_label; /**< bits [19:0] */
    phymod_timesync_mpls_label_t labels[10]; /**< Timesync MPLS labels */
    int size; /**< Number of elements in label array */
} phymod_timesync_mpls_ctrl_t;

/* phymod_timesync_mpls_ctrl_t initialization and validation */
int phymod_timesync_mpls_ctrl_t_validate(const phymod_timesync_mpls_ctrl_t* phymod_timesync_mpls_ctrl);
int phymod_timesync_mpls_ctrl_t_init(phymod_timesync_mpls_ctrl_t* phymod_timesync_mpls_ctrl);

typedef struct phymod_timesync_config_s {
    uint32_t capabilities; /**< Flags PHYMOD_TS_CAP_* */
    uint32_t flags; /**< Flags PHYMOD_TS_F_* */
    uint16_t itpid; /**< 1588 inner tag */
    uint16_t otpid; /**< 1588 outer tag */
    uint16_t otpid2; /**< 1588 outer tag2 */
    phymod_timesync_timer_adjust_t timer_adjust; /**< Inband TS control */
    phymod_timesync_inband_ctrl_t inband_ctrl; /**< Inband TS control */
    phymod_timesync_global_mode_t gmode; /**< Global mode */
    phymod_timesync_syncout_t syncout; /**< Syncout */
    uint16_t ts_divider; /**< TS divider */
    phymod_timesync_timespec_t original_timecode; /**< Original timecode to be inserted */
    uint32_t rx_link_delay; /**< RX link delay */
    phymod_timesync_event_msg_action_t tx_sync_mode; /**< sync */
    phymod_timesync_event_msg_action_t tx_delay_req_mode; /**< delay request */
    phymod_timesync_event_msg_action_t tx_pdelay_req_mode; /**< pdelay request */
    phymod_timesync_event_msg_action_t tx_pdelay_resp_mode; /**< pdelay response */
    phymod_timesync_event_msg_action_t rx_sync_mode; /**< sync */
    phymod_timesync_event_msg_action_t rx_delay_req_mode; /**< delay request */
    phymod_timesync_event_msg_action_t rx_pdelay_req_mode; /**< pdelay request */
    phymod_timesync_event_msg_action_t rx_pdelay_resp_mode; /**< pdelay response */
    phymod_timesync_mpls_ctrl_t mpls_ctrl; /**< MPLS control */
    uint32_t sync_freq; /**< sync frequency */
    uint16_t phy_1588_dpll_k1; /**< DPLL K1 */
    uint16_t phy_1588_dpll_k2; /**< DPLL K2 */
    uint16_t phy_1588_dpll_k3; /**< DPLL K3 */
    uint64_t phy_1588_dpll_loop_filter; /**< DPLL loop filter */
    uint64_t phy_1588_dpll_ref_phase; /**< DPLL ref phase */
    uint32_t phy_1588_dpll_ref_phase_delta; /**< DPLL ref phase delta */
} phymod_timesync_config_t;

/* phymod_timesync_config_t initialization and validation */
int phymod_timesync_config_t_validate(const phymod_timesync_config_t* phymod_timesync_config);
int phymod_timesync_config_t_init(phymod_timesync_config_t* phymod_timesync_config);


/*!
 * @enum phymod_timesync_compensation_mode_e
 * @brief AM norm modes for aggregated port speeds 
 */ 
typedef enum phymod_timesync_compensation_mode_e {
    phymodTimesyncCompensationModeNone = 0x0,
    phymodTimesyncCompensationModeEarliestLane = 0x1,
    phymodTimesyncCompensationModeLatestlane = 0x2,
    phymodTimesyncCompensationModeCount
} phymod_timesync_compensation_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_timesync_compensation_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_timesync_compensation_mode_t validation */
int phymod_timesync_compensation_mode_t_validate(phymod_timesync_compensation_mode_t phymod_timesync_compensation_mode);
/*! 
 * phymod_timesync_config_set
 *
 * @brief Set/Get timesync configuration 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  config          - Timesync configuration
 */
int phymod_timesync_config_set(const phymod_phy_access_t* phy, const phymod_timesync_config_t* config);
/*! 
 * phymod_timesync_config_get
 *
 * @brief Set/Get timesync configuration 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  config          - Timesync configuration
 */
int phymod_timesync_config_get(const phymod_phy_access_t* phy, phymod_timesync_config_t* config);

/*! 
 * phymod_timesync_enable_set
 *
 * @brief Set/Get timesync enable 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  enable          - Timesync enable
 */
int phymod_timesync_enable_set(const phymod_phy_access_t* phy, uint32_t enable);
/*! 
 * phymod_timesync_enable_get
 *
 * @brief Set/Get timesync enable 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  enable          - Timesync enable
 */
int phymod_timesync_enable_get(const phymod_phy_access_t* phy, uint32_t* enable);

/*! 
 * phymod_timesync_nco_addend_set
 *
 * @brief Set/Get timesync enable 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  freq_step       - NCO frequency step (device-specific)
 */
int phymod_timesync_nco_addend_set(const phymod_phy_access_t* phy, uint32_t freq_step);
/*! 
 * phymod_timesync_nco_addend_get
 *
 * @brief Set/Get timesync enable 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  freq_step       - NCO frequency step (device-specific)
 */
int phymod_timesync_nco_addend_get(const phymod_phy_access_t* phy, uint32_t* freq_step);

/*! 
 * phymod_timesync_framesync_mode_set
 *
 * @brief Set/Get framesync mode 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  framesync       - Framesync mode
 */
int phymod_timesync_framesync_mode_set(const phymod_phy_access_t* phy, const phymod_timesync_framesync_t* framesync);
/*! 
 * phymod_timesync_framesync_mode_get
 *
 * @brief Set/Get framesync mode 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  framesync       - Framesync mode
 */
int phymod_timesync_framesync_mode_get(const phymod_phy_access_t* phy, phymod_timesync_framesync_t* framesync);

/*! 
 * phymod_timesync_local_time_set
 *
 * @brief Set/Get local time 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  local_time      - Local time (device-specific)
 */
int phymod_timesync_local_time_set(const phymod_phy_access_t* phy, uint64_t local_time);
/*! 
 * phymod_timesync_local_time_get
 *
 * @brief Set/Get local time 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  local_time      - Local time (device-specific)
 */
int phymod_timesync_local_time_get(const phymod_phy_access_t* phy, uint64_t* local_time);

/*! 
 * phymod_timesync_load_ctrl_set
 *
 * @brief Set/Get load mode mode 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  load_once       - Load control mask PHYMOD_TS_LDCTL_xxx
 * @param [in]  load_always     - Load control mask PHYMOD_TS_LDCTL_xxx (persistent across FrameSync)
 */
int phymod_timesync_load_ctrl_set(const phymod_phy_access_t* phy, uint32_t load_once, uint32_t load_always);
/*! 
 * phymod_timesync_load_ctrl_get
 *
 * @brief Set/Get load mode mode 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  load_once       - Load control mask PHYMOD_TS_LDCTL_xxx
 * @param [out]  load_always     - Load control mask PHYMOD_TS_LDCTL_xxx (persistent across FrameSync)
 */
int phymod_timesync_load_ctrl_get(const phymod_phy_access_t* phy, uint32_t* load_once, uint32_t* load_always);

/*! 
 * phymod_timesync_tx_timestamp_offset_set
 *
 * @brief Set/Get timesync Tx AFE delay 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  ts_offset       - Tx AFE delay in ns
 */
int phymod_timesync_tx_timestamp_offset_set(const phymod_phy_access_t* phy, uint32_t ts_offset);
/*! 
 * phymod_timesync_tx_timestamp_offset_get
 *
 * @brief Set/Get timesync Tx AFE delay 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  ts_offset       - Tx AFE delay in ns
 */
int phymod_timesync_tx_timestamp_offset_get(const phymod_phy_access_t* phy, uint32_t* ts_offset);

/*! 
 * phymod_timesync_rx_timestamp_offset_set
 *
 * @brief Set/Get timesync Rx AFE delay 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  ts_offset       - Rx AFE delay in ns
 */
int phymod_timesync_rx_timestamp_offset_set(const phymod_phy_access_t* phy, uint32_t ts_offset);
/*! 
 * phymod_timesync_rx_timestamp_offset_get
 *
 * @brief Set/Get timesync Rx AFE delay 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  ts_offset       - Rx AFE delay in ns
 */
int phymod_timesync_rx_timestamp_offset_get(const phymod_phy_access_t* phy, uint32_t* ts_offset);

/*! 
 * phymod_timesync_capture_timestamp_get
 *
 * @brief Get timesync capture timestamp 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  cap_ts          - Capture timestamp
 */
int phymod_timesync_capture_timestamp_get(const phymod_phy_access_t* phy, uint64_t* cap_ts);

/*! 
 * phymod_timesync_heartbeat_timestamp_get
 *
 * @brief Get timesync heartbeat timestamp 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  hb_ts           - Heartbeat timestamp
 */
int phymod_timesync_heartbeat_timestamp_get(const phymod_phy_access_t* phy, uint64_t* hb_ts);

/*! 
 * phymod_timesync_do_sync
 *
 * @brief Force a framesync event 
 *
 * @param [in]  phy             - phy access information
 */
int phymod_timesync_do_sync(const phymod_phy_access_t* phy);

/*! 
 * phymod_timesync_offset_set
 *
 * @brief Set/Get timesync ts_offset 
 *
 * @param [in]  core            - core access information
 * @param [in]  ts_offset       - Timesync offset
 */
int phymod_timesync_offset_set(const phymod_core_access_t* core, uint32_t ts_offset);

/*! 
 * phymod_timesync_adjust_set
 *
 * @brief Set timesync adjust 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  ts_am_norm_mode   - Timesync adjust
 */
int phymod_timesync_adjust_set(const phymod_phy_access_t* phy, phymod_timesync_compensation_mode_t ts_am_norm_mode);


/*!
 * @enum phymod_edc_config_method_e
 * @brief Configuration method for Electronic Dispersion Compensation (EDC) 
 */ 
typedef enum phymod_edc_config_method_e {
    phymodEdcConfigMethodNone,
    phymodEdcConfigMethodHardware, /**< EDC mode is set automatically by hardware */
    phymodEdcConfigMethodSoftware, /**< EDC mode is selected by driver software */
    phymodEdcConfigMethodCount
} phymod_edc_config_method_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_edc_config_method_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_edc_config_method_t validation */
int phymod_edc_config_method_t_validate(phymod_edc_config_method_t phymod_edc_config_method);
typedef struct phymod_edc_config_s {
    phymod_edc_config_method_t method; /**< EDC configuration method */
    uint32_t mode_val; /**< Device-specific EDC mode value (valid only when software configuration method is used) */
} phymod_edc_config_t;

/* phymod_edc_config_t initialization and validation */
int phymod_edc_config_t_validate(const phymod_edc_config_t* phymod_edc_config);
int phymod_edc_config_t_init(phymod_edc_config_t* phymod_edc_config);

/*! 
 * phymod_edc_config_set
 *
 * @brief Set/get EDC mode 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  edc_config      - Electronic Dispersion Compensation (EDC) configuration
 */
int phymod_edc_config_set(const phymod_phy_access_t* phy, const phymod_edc_config_t* edc_config);
/*! 
 * phymod_edc_config_get
 *
 * @brief Set/get EDC mode 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  edc_config      - Electronic Dispersion Compensation (EDC) configuration
 */
int phymod_edc_config_get(const phymod_phy_access_t* phy, phymod_edc_config_t* edc_config);

typedef enum phymod_core_mode_e {
    phymodCoreModeDefault = 0, /**< default core mode */
    phymodCoreModeSingle, /**< Core serves a single 4-lane */
    phymodCoreModeDual, /**< Core spits to 2-lane  */
    phymodCoreModeIndepLane, /**< Each lane is independent logic port */
    phymodCoreModeSplit012, /**< Two 1-lane and one 2-lane logic ports */
    phymodCoreModeSplit023, /**< One 2-lane and two 1-lane logic ports */
    phymodCoreModeTriple244, /**< triple-core 244 mode */
    phymodCoreModeTriple343, /**< triple-core 343 mode */
    phymodCoreModeTriple442, /**< triple-core 442 mode */
    phymodCoreModeCount
} phymod_core_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_core_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_core_mode_t validation */
int phymod_core_mode_t_validate(phymod_core_mode_t phymod_core_mode);
/*! 
 * phymod_phy_core_mode_set
 *
 * @brief Set/Get phy core mode 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  core_mode       - 
 */
int phymod_phy_core_mode_set(const phymod_phy_access_t* phy, phymod_core_mode_t core_mode);
/*! 
 * phymod_phy_core_mode_get
 *
 * @brief Set/Get phy core mode 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  core_mode       - 
 */
int phymod_phy_core_mode_get(const phymod_phy_access_t* phy, phymod_core_mode_t* core_mode);


/*!
 * @enum phymod_failover_mode_e
 * @brief Failover configuration 
 */ 
typedef enum phymod_failover_mode_e {
    phymodFailovermodeNone,
    phymodFailovermodeEnable, /**< enable Failover mode */
    phymodFailovermodeCount
} phymod_failover_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_failover_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_failover_mode_t validation */
int phymod_failover_mode_t_validate(phymod_failover_mode_t phymod_failover_mode);
/*! 
 * phymod_failover_mode_set
 *
 * @brief Set/get failover mode  
 *
 * @param [in]  phy             - phy access information
 * @param [in]  failover_mode   - Failover(FOV) configuration
 */
int phymod_failover_mode_set(const phymod_phy_access_t* phy, phymod_failover_mode_t failover_mode);
/*! 
 * phymod_failover_mode_get
 *
 * @brief Set/get failover mode  
 *
 * @param [in]  phy             - phy access information
 * @param [out]  failover_mode   - Failover(FOV) configuration
 */
int phymod_failover_mode_get(const phymod_phy_access_t* phy, phymod_failover_mode_t* failover_mode);

/*! 
 * phymod_port_init
 *
 * @brief Port config init 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  port_config     - port config
 */
int phymod_port_init(const phymod_phy_access_t* phy, const phymod_port_config_t* port_config);

typedef struct phymod_an_try_enable_control_s {
    phymod_an_mode_type_t an_mode;
    uint32_t num_lane_adv; /**< The number of lanes the autoneg advert */
    uint32_t flags; /**< see AN_F */
    uint32_t enable;
    uint32_t speed;
} phymod_an_try_enable_control_t;

/* phymod_an_try_enable_control_t initialization and validation */
int phymod_an_try_enable_control_t_validate(const phymod_an_try_enable_control_t* phymod_an_try_enable_control);
int phymod_an_try_enable_control_t_init(phymod_an_try_enable_control_t* phymod_an_try_enable_control);

typedef struct phymod_phy_an_status_s {
    uint32_t hcd_speed; /**< negotiated speed */
    uint8_t result; /**< Autoneg result. */
} phymod_phy_an_status_t;

/* phymod_phy_an_status_t initialization and validation */
int phymod_phy_an_status_t_validate(const phymod_phy_an_status_t* phymod_phy_an_status);
int phymod_phy_an_status_t_init(phymod_phy_an_status_t* phymod_phy_an_status);

/*! 
 * phymod_phy_autoneg_try_enable
 *
 * @brief Autoneg try enable 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  an              - 
 * @param [out]  an_status       - 
 */
int phymod_phy_autoneg_try_enable(const phymod_phy_access_t* phy, const phymod_an_try_enable_control_t* an, phymod_phy_an_status_t* an_status);

/*! 
 * phymod_debug_ether
 *
 * @brief Ethernet Debug 
 *
 * @param [in]  phy             - phy access information
 */
int phymod_debug_ether(const phymod_phy_access_t* phy);

/*! 
 * phymod_reset_interface
 *
 * @brief Reset Interface 
 *
 * @param [in]  phy             - phy access information
 */
int phymod_reset_interface(const phymod_phy_access_t* phy);

/*! 
 * phymod_phy_short_chn_mode_enable_set
 *
 * @brief Short channel mode 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  enable          - 
 */
int phymod_phy_short_chn_mode_enable_set(const phymod_phy_access_t* phy, uint32_t enable);
/*! 
 * phymod_phy_short_chn_mode_enable_get
 *
 * @brief Short channel mode 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  enable          - 
 * @param [out]  status          - 
 */
int phymod_phy_short_chn_mode_enable_get(const phymod_phy_access_t* phy, uint32_t* enable, uint32_t* status);

/*! 
 * phymod_port_enable_set
 *
 * @brief port enable set 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  enable          - 
 */
int phymod_port_enable_set(const phymod_phy_access_t* phy, uint32_t enable);
/*! 
 * phymod_port_enable_get
 *
 * @brief port enable set 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  enable          - 
 */
int phymod_port_enable_get(const phymod_phy_access_t* phy, uint32_t* enable);


/*!
 * @enum phymod_eye_margin_mode_e
 * @brief eye_margin  
 */ 
typedef enum phymod_eye_margin_mode_e {
    phymod_eye_marign_HZ_L, /**< Horizontal_left */
    phymod_eye_marign_HZ_R, /**< Horizontal_right */
    phymod_eye_marign_VT_U, /**< Vertical_upper */
    phymod_eye_marign_VT_D, /**< Vertical_down */
    phymod_eye_marign_Count
} phymod_eye_margin_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_eye_margin_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_eye_margin_mode_t validation */
int phymod_eye_margin_mode_t_validate(phymod_eye_margin_mode_t phymod_eye_margin_mode);
/*! 
 * phymod_phy_eye_margin_est_get
 *
 * @brief eye margin estimate get 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  eye_margin_mode   - 
 * @param [out]  value           - 
 */
int phymod_phy_eye_margin_est_get(const phymod_phy_access_t* phy, phymod_eye_margin_mode_t eye_margin_mode, uint32_t* value);

typedef struct phymod_multi_data_s {
    uint32_t flags;
    uint32_t dev_addr;
    uint32_t offset;
    uint32_t max_size;
    unsigned char* data;
    uint32_t* actual_size;
} phymod_multi_data_t;

/* phymod_multi_data_t initialization and validation */
int phymod_multi_data_t_validate(const phymod_multi_data_t* phymod_multi_data);
int phymod_multi_data_t_init(phymod_multi_data_t* phymod_multi_data);

/*! 
 * phymod_phy_multi_get
 *
 * @brief phy multi data get 
 *
 * @param [in]  phy             - phy access information
 * @param [inout] multi_data      - 
 */
int phymod_phy_multi_get(const phymod_phy_access_t* phy, phymod_multi_data_t* multi_data);


/*!
 * @enum phymod_tsce_pll_multiplier_e
 * @brief tsce_pll_multiplier  
 */ 
typedef enum phymod_tsce_pll_multiplier_e {
    phymod_TSCE_PLL_DIV46, /**< Multiply ref. clk by 46 */
    phymod_TSCE_PLL_DIV72, /**< Multiply ref. clk by 72 */
    phymod_TSCE_PLL_DIV40, /**< Multiply ref. clk by 40 */
    phymod_TSCE_PLL_DIV42, /**< Multiply ref. clk by 42 */
    phymod_TSCE_PLL_DIV48, /**< Multiply ref. clk by 48 */
    phymod_TSCE_PLL_DIV50, /**< Multiply ref. clk by 50 */
    phymod_TSCE_PLL_DIV52, /**< Multiply ref. clk by 52 */
    phymod_TSCE_PLL_DIV54, /**< Multiply ref. clk by 54 */
    phymod_TSCE_PLL_DIV60, /**< Multiply ref. clk by 60 */
    phymod_TSCE_PLL_DIV64, /**< Multiply ref. clk by 64 */
    phymod_TSCE_PLL_DIV66, /**< Multiply ref. clk by 66 */
    phymod_TSCE_PLL_DIV68, /**< Multiply ref. clk by 68 */
    phymod_TSCE_PLL_DIV70, /**< Multiply ref. clk by 70 */
    phymod_TSCE_PLL_DIV80, /**< Multiply ref. clk by 80 */
    phymod_TSCE_PLL_DIV92, /**< Multiply ref. clk by 92 */
    phymod_TSCE_PLL_DIV100, /**< Multiply ref. clk by 100 */
    phymod_TSCE_PLL_DIV82P5, /**< Multiply ref. clk by 82.5 */
    phymod_TSCE_PLL_DIV87P5, /**< Multiply ref. clk by 87.5 */
    phymod_TSCE_PLL_Count
} phymod_tsce_pll_multiplier_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_tsce_pll_multiplier_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_tsce_pll_multiplier_t validation */
int phymod_tsce_pll_multiplier_t_validate(phymod_tsce_pll_multiplier_t phymod_tsce_pll_multiplier);

/*!
 * @enum phymod_tscf_pll_multiplier_e
 * @brief tscf_pll_multiplier  
 */ 
typedef enum phymod_tscf_pll_multiplier_e {
    phymod_TSCF_PLL_DIV64, /**< Multiply ref. clk by 64 */
    phymod_TSCF_PLL_DIV66, /**< Multiply ref. clk by 66 */
    phymod_TSCF_PLL_DIV80, /**< Multiply ref. clk by 80 */
    phymod_TSCF_PLL_DIV128, /**< Multiply ref. clk by 128 */
    phymod_TSCF_PLL_DIV132, /**< Multiply ref. clk by 132 */
    phymod_TSCF_PLL_DIV140, /**< Multiply ref. clk by 140 */
    phymod_TSCF_PLL_DIV160, /**< Multiply ref. clk by 160 */
    phymod_TSCF_PLL_DIV165, /**< Multiply ref. clk by 165 */
    phymod_TSCF_PLL_DIV168, /**< Multiply ref. clk by 168 */
    phymod_TSCF_PLL_DIV170, /**< Multiply ref. clk by 170 */
    phymod_TSCF_PLL_DIV175, /**< Multiply ref. clk by 175 */
    phymod_TSCF_PLL_DIV180, /**< Multiply ref. clk by 180 */
    phymod_TSCF_PLL_DIV184, /**< Multiply ref. clk by 184 */
    phymod_TSCF_PLL_DIV200, /**< Multiply ref. clk by 200 */
    phymod_TSCF_PLL_DIV224, /**< Multiply ref. clk by 224 */
    phymod_TSCF_PLL_DIV264, /**< Multiply ref. clk by 264 */
    phymod_TSCF_PLL_DIV96, /**< Multiply ref. clk by 96 */
    phymod_TSCF_PLL_DIV120, /**< Multiply ref. clk by 120 */
    phymod_TSCF_PLL_DIV144, /**< Multiply ref. clk by 144 */
    phymod_TSCF_PLL_DIV198, /**< Multiply ref. clk by 198 */
    phymod_TSCF_PLL_Count
} phymod_tscf_pll_multiplier_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_tscf_pll_multiplier_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_tscf_pll_multiplier_t validation */
int phymod_tscf_pll_multiplier_t_validate(phymod_tscf_pll_multiplier_t phymod_tscf_pll_multiplier);

/*!
 * @enum phymod_tscbh_pll_multiplier_e
 * @brief tscbh_pll_multiplier  
 */ 
typedef enum phymod_tscbh_pll_multiplier_e {
    phymod_TSCBH_PLL_DIVNONE = (int32_t) 0xffffffff, /**< PLL is not used */
    phymod_TSCBH_PLL_DIV66 = 0x00000042, /**< Multiply ref. clk by 66 */
    phymod_TSCBH_PLL_DIV67 = 0x00000043, /**< Multiply ref. clk by 67 */
    phymod_TSCBH_PLL_DIV70 = 0x00000046, /**< Multiply ref. clk by 70 */
    phymod_TSCBH_PLL_DIV72 = 0x00000048, /**< Multiply ref. clk by 72 */
    phymod_TSCBH_PLL_DIV73P6 = (int32_t) 0x9999A049, /**< Multiply ref. clk by 73.6 */
    phymod_TSCBH_PLL_DIV79P2 = 0x3333304F, /**< Multiply ref. clk by 79.2 */
    phymod_TSCBH_PLL_DIV80 = 0x00000050, /**< Multiply ref. clk by 80 */
    phymod_TSCBH_PLL_DIV82P5 = (int32_t) 0x80000052, /**< Multiply ref. clk by 82.5 */
    phymod_TSCBH_PLL_DIV84 = 0x00000054, /**< Multiply ref. clk by 84 */
    phymod_TSCBH_PLL_DIV85 = 0x00000055, /**< Multiply ref. clk by 85 */
    phymod_TSCBH_PLL_DIV87P5 = (int32_t) 0x80000057, /**< Multiply ref. clk by 87.5 */
    phymod_TSCBH_PLL_DIV89P6 = (int32_t) 0x9999A059, /**< Multiply ref. clk by 89.6 */
    phymod_TSCBH_PLL_DIV90 = 0x0000005A, /**< Multiply ref. clk by 90 */
    phymod_TSCBH_PLL_DIV96 = 0x00000060, /**< Multiply ref. clk by 92 */
    phymod_TSCBH_PLL_DIV100 = 0x00000064, /**< Multiply ref. clk by 100 */
    phymod_TSCBH_PLL_DIV120 = 0x00000078, /**< Multiply ref. clk by 120 */
    phymod_TSCBH_PLL_DIV127P4 = 0x66E8707F, /**< Multiply ref. clk by 127.4 */
    phymod_TSCBH_PLL_DIV128 = 0x00000080, /**< Multiply ref. clk by 128 */
    phymod_TSCBH_PLL_DIV132 = 0x00000084, /**< Multiply ref. clk by 132 */
    phymod_TSCBH_PLL_DIV140 = 0x0000008C, /**< Multiply ref. clk by 140 */
    phymod_TSCBH_PLL_DIV144 = 0x00000090, /**< Multiply ref. clk by 144 */
    phymod_TSCBH_PLL_DIV147P2 = 0x33333093, /**< Multiply ref. clk by 147.2 */
    phymod_TSCBH_PLL_DIV158P4 = 0x6666609E, /**< Multiply ref. clk by 158.4 */
    phymod_TSCBH_PLL_DIV160 = 0x000000A0, /**< Multiply ref. clk by 160 */
    phymod_TSCBH_PLL_DIV165 = 0x000000A5, /**< Multiply ref. clk by 165 */
    phymod_TSCBH_PLL_DIV168 = 0x000000A8, /**< Multiply ref. clk by 168 */
    phymod_TSCBH_PLL_DIV170 = 0x000000AA, /**< Multiply ref. clk by 170 */
    phymod_TSCBH_PLL_DIV175 = 0x000000AF, /**< Multiply ref. clk by 175 */
    phymod_TSCBH_PLL_DIV180 = 0x000000B4, /**< Multiply ref. clk by 180 */
    phymod_TSCBH_PLL_DIV184 = 0x000000B8, /**< Multiply ref. clk by 184 */
    phymod_TSCBH_PLL_DIV192 = 0x000000C0, /**< Multiply ref. clk by 192 */
    phymod_TSCBH_PLL_DIV198 = 0x000000C6, /**< Multiply ref. clk by 198 */
    phymod_TSCBH_PLL_DIV200 = 0x000000C8, /**< Multiply ref. clk by 200 */
    phymod_TSCBH_PLL_DIV224 = 0x000000E0, /**< Multiply ref. clk by 224 */
    phymod_TSCBH_PLL_DIV240 = 0x000000F0, /**< Multiply ref. clk by 240 */
    phymod_TSCBH_PLL_DIV264 = 0x00000108, /**< Multiply ref. clk by 264 */
    phymod_TSCBH_PLL_DIV280 = 0x00000118, /**< Multiply ref. clk by 280 */
    phymod_TSCBH_PLL_Count
} phymod_tscbh_pll_multiplier_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_tscbh_pll_multiplier_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_tscbh_pll_multiplier_t validation */
int phymod_tscbh_pll_multiplier_t_validate(phymod_tscbh_pll_multiplier_t phymod_tscbh_pll_multiplier);
/*! 
 * phymod_phy_rescal_set
 *
 * @brief tscf16_rescal 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  enable          - 
 * @param [in]  value           - 
 */
int phymod_phy_rescal_set(const phymod_phy_access_t* phy, uint32_t enable, uint32_t value);
/*! 
 * phymod_phy_rescal_get
 *
 * @brief tscf16_rescal 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  value           - 
 */
int phymod_phy_rescal_get(const phymod_phy_access_t* phy, uint32_t* value);

typedef struct phymod_an_page_s {
    unsigned short page_0; /**< bit 0-15 of the cl73 AN page  */
    unsigned short page_1; /**< bit 16-31 of the cl73 AN page */
    unsigned short page_2; /**< bit 32-47 of the cl73 AN page */
} phymod_an_page_t;

/* phymod_an_page_t initialization and validation */
int phymod_an_page_t_validate(const phymod_an_page_t* phymod_an_page);
int phymod_an_page_t_init(phymod_an_page_t* phymod_an_page);

typedef struct phymod_sw_an_ctrl_status_s {
    uint8_t seq_restart; /**< indicates that an restart requested from base page */
    uint8_t lp_page_rdy; /**< Indicates that link partner page is rcvd */
    uint8_t page_req; /**< Request for new local device page */
    uint8_t an_completed; /**< Indicates that  the SW AN page exchaneg is done */
} phymod_sw_an_ctrl_status_t;

/* phymod_sw_an_ctrl_status_t initialization and validation */
int phymod_sw_an_ctrl_status_t_validate(const phymod_sw_an_ctrl_status_t* phymod_sw_an_ctrl_status);
int phymod_sw_an_ctrl_status_t_init(phymod_sw_an_ctrl_status_t* phymod_sw_an_ctrl_status);

typedef struct phymod_an_pages_s {
    phymod_an_page_t base_page; /**< Base page contents */
    phymod_an_page_t msg_page; /**< message page indicates BAM mode or consortium mode */
    phymod_an_page_t ufmt_page; /**< contetent of the msg page */
    phymod_an_page_t null_page; /**< NUll pages */
} phymod_an_pages_t;

/* phymod_an_pages_t initialization and validation */
int phymod_an_pages_t_validate(const phymod_an_pages_t* phymod_an_pages);
int phymod_an_pages_t_init(phymod_an_pages_t* phymod_an_pages);

typedef struct phymod_sw_an_ctxt_s {
    phymod_an_pages_t tx_pages; /**< content of the pages Txed from LD */
    phymod_an_pages_t rx_pages; /**< content of the pages rcvd from LP */
    uint32_t no_pages_to_be_txed; /**< Number of pages to be transmitted during AN */
    uint32_t tx_pages_cnt; /**< Number of pages Txed from Local device */
    uint32_t rx_pages_cnt; /**< Number of Pages received from Link Partner */
    phymod_an_mode_type_t an_mode; /**< AN mode CL73andMSA/MSA_ONLY */
} phymod_sw_an_ctxt_t;

/* phymod_sw_an_ctxt_t initialization and validation */
int phymod_sw_an_ctxt_t_validate(const phymod_sw_an_ctxt_t* phymod_sw_an_ctxt);
int phymod_sw_an_ctxt_t_init(phymod_sw_an_ctxt_t* phymod_sw_an_ctxt);

/*! 
 * phymod_phy_sw_an_control_status_get
 *
 * @brief retrieves the SW AN page exchange state machine state  
 *
 * @param [in]  phy             - phy access information
 * @param [out]  an_ctrl_status   - 
 */
int phymod_phy_sw_an_control_status_get(const phymod_phy_access_t* phy, phymod_sw_an_ctrl_status_t* an_ctrl_status);

/*! 
 * phymod_phy_sw_an_base_page_exchange_handler
 *
 * @brief  function to handle sw an base page exchange  
 *
 * @param [in]  phy             - phy access information
 * @param [inout] an_ctxt         - 
 */
int phymod_phy_sw_an_base_page_exchange_handler(const phymod_phy_access_t* phy, phymod_sw_an_ctxt_t* an_ctxt);

/*! 
 * phymod_phy_sw_an_lp_page_rdy_handler
 *
 * @brief  function to handle the link partner page ready event   
 *
 * @param [in]  phy             - phy access information
 * @param [inout] an_ctxt         - 
 */
int phymod_phy_sw_an_lp_page_rdy_handler(const phymod_phy_access_t* phy, phymod_sw_an_ctxt_t* an_ctxt);

/*! 
 * phymod_phy_sw_an_advert_set
 *
 * @brief Set/Get SW AN advertisement  
 *
 * @param [in]  phy             - phy access information
 * @param [in]  an_ability_set_type   - 
 * @param [inout] an_ctxt         - 
 */
int phymod_phy_sw_an_advert_set(const phymod_phy_access_t* phy, const phymod_autoneg_ability_t* an_ability_set_type, phymod_sw_an_ctxt_t* an_ctxt);

/*! 
 * phymod_phy_sw_autoneg_enable
 *
 * @brief  Enable/Disable SW Autoneg  
 *
 * @param [in]  phy             - phy access information
 * @param [in]  enable          - 
 */
int phymod_phy_sw_autoneg_enable(const phymod_phy_access_t* phy, int enable);


/*!
 * @enum phymod_fec_type_e
 * @brief fec type supported 
 */ 
typedef enum phymod_fec_type_e {
    phymod_fec_None = 0, /**< no fec */
    phymod_fec_CL74, /**< CL74 */
    phymod_fec_CL91, /**< CL91/RS 528 */
    phymod_fec_RS544, /**< RS544 */
    phymod_fec_RS272, /**< RS272 */
    phymod_fec_Count
} phymod_fec_type_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_fec_type_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_fec_type_t validation */
int phymod_fec_type_t_validate(phymod_fec_type_t phymod_fec_type);

/*!
 * @enum phymod_dfe_mode_e
 * @brief dfe mode supported 
 */ 
typedef enum phymod_dfe_mode_e {
    phymod_dfe_off = 0, /**< no dfe */
    phymod_dfe_on, /**< dfe on */
    phymod_dfe_lp_on, /**< low power dfe on */
    phymod_dfe_Count
} phymod_dfe_mode_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_dfe_mode_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_dfe_mode_t validation */
int phymod_dfe_mode_t_validate(phymod_dfe_mode_t phymod_dfe_mode);
typedef struct phymod_phy_speed_config_s {
    uint32_t data_rate;
    phymod_fec_type_t fec_type; /**< fec type */
    uint32_t linkTraining; /**< cl72/Cl93 on/off */
    uint32_t flags; /**< flags passed in */
    uint32_t PAM4_channel_loss; /**< PAM4 channel loss in DB */
    phymod_firmware_lane_config_t pmd_lane_config; /**< pmd lane config */
} phymod_phy_speed_config_t;

/* phymod_phy_speed_config_t initialization and validation */
int phymod_phy_speed_config_t_validate(const phymod_phy_speed_config_t* phymod_phy_speed_config);
int phymod_phy_speed_config_t_init(phymod_phy_speed_config_t* phymod_phy_speed_config);

/*! 
 * @brief Flags for speed-config API 
 */ 
#define PHYMOD_SPEED_CONFIG_ONLY_PLL0_IS_ACTIVE 0x1

#define PHYMOD_SPEED_CONFIG_ONLY_PLL0_IS_ACTIVE_SET(speed_config) ((speed_config)->flags |= PHYMOD_SPEED_CONFIG_ONLY_PLL0_IS_ACTIVE)

#define PHYMOD_SPEED_CONFIG_ONLY_PLL0_IS_ACTIVE_CLR(speed_config) ((speed_config)->flags &= ~PHYMOD_SPEED_CONFIG_ONLY_PLL0_IS_ACTIVE)

#define PHYMOD_SPEED_CONFIG_ONLY_PLL0_IS_ACTIVE_GET(speed_config) ((speed_config)->flags & PHYMOD_SPEED_CONFIG_ONLY_PLL0_IS_ACTIVE ? 1 : 0)

typedef struct phymod_phy_pll_state_s {
    uint32_t pll0_lanes_bitmap;
    uint32_t pll1_lanes_bitmap;
} phymod_phy_pll_state_t;

/* phymod_phy_pll_state_t initialization and validation */
int phymod_phy_pll_state_t_validate(const phymod_phy_pll_state_t* phymod_phy_pll_state);
int phymod_phy_pll_state_t_init(phymod_phy_pll_state_t* phymod_phy_pll_state);

/*! 
 * phymod_phy_speed_config_set
 *
 * @brief Set the interface mode, speed and other configuration related to interface. 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  speed_config    - 
 * @param [in]  old_pll_state   - 
 * @param [out]  new_pll_state   - 
 */
int phymod_phy_speed_config_set(const phymod_phy_access_t* phy, const phymod_phy_speed_config_t* speed_config, const phymod_phy_pll_state_t* old_pll_state, phymod_phy_pll_state_t* new_pll_state);
/*! 
 * phymod_phy_speed_config_get
 *
 * @brief Set the interface mode, speed and other configuration related to interface. 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  speed_config    - 
 */
int phymod_phy_speed_config_get(const phymod_phy_access_t* phy, phymod_phy_speed_config_t* speed_config);

/*! 
 * phymod_phy_op_mode_get
 *
 * @brief  get phy working operation mode 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  op_mode         - 
 */
int phymod_phy_op_mode_get(const phymod_phy_access_t* phy, phymod_operation_mode_t* op_mode);

typedef struct phymod_dual_plls_s {
    uint32_t pll0_div;
    uint32_t pll1_div;
} phymod_dual_plls_t;

/* phymod_dual_plls_t initialization and validation */
int phymod_dual_plls_t_validate(const phymod_dual_plls_t* phymod_dual_plls);
int phymod_dual_plls_t_init(phymod_dual_plls_t* phymod_dual_plls);

/*! 
 * phymod_phy_tx_taps_default_get
 *
 * @brief  get default tx taps 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  mode            - 
 * @param [out]  tx              - 
 */
int phymod_phy_tx_taps_default_get(const phymod_phy_access_t* phy, phymod_phy_signalling_method_t mode, phymod_tx_t* tx);

/*! 
 * phymod_phy_lane_config_default_get
 *
 * @brief  get default tx taps 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  mode            - 
 * @param [out]  lane_config     - 
 */
int phymod_phy_lane_config_default_get(const phymod_phy_access_t* phy, phymod_phy_signalling_method_t mode, phymod_firmware_lane_config_t* lane_config);

typedef struct phymod_firmware_load_info_s {
    unsigned char* ucode_ptr; /**< pointer to PMD micro code */
    unsigned int ucode_len; /**< PMD micro code length */
} phymod_firmware_load_info_t;

/* phymod_firmware_load_info_t initialization and validation */
int phymod_firmware_load_info_t_validate(const phymod_firmware_load_info_t* phymod_firmware_load_info);
int phymod_firmware_load_info_t_init(phymod_firmware_load_info_t* phymod_firmware_load_info);

/*! 
 * phymod_phy_firmware_load_info_get
 *
 * @brief  get PMD micro code and length 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  info            - 
 */
int phymod_phy_firmware_load_info_get(const phymod_phy_access_t* phy, phymod_firmware_load_info_t* info);


/*!
 * @enum phymod_pause_type_e
 * @brief Pause mode supported 
 */ 
typedef enum phymod_pause_type_e {
    phymod_pause_none = 0, /**< no pause */
    phymod_pause_symm, /**< Symmetric pause */
    phymod_pause_asym, /**< Asymmetric pause */
    phymod_pause_asym_symm, /**< Asymmetric and symmetric pause */
    phymod_pause_Count
} phymod_pause_type_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_pause_type_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_pause_type_t validation */
int phymod_pause_type_t_validate(phymod_pause_type_t phymod_pause_type);

/*!
 * @enum phymod_channel_type_e
 * @brief Channel type supported 
 */ 
typedef enum phymod_channel_type_e {
    phymod_channel_long = 0, /**< long channel */
    phymod_channel_short, /**< short channel */
    phymod_channel_Count
} phymod_channel_type_t;

#ifdef PHYMOD_DIAG
extern enum_mapping_t phymod_channel_type_t_mapping[];
#endif /*PHYMOD_DIAG*/

/* phymod_channel_type_t validation */
int phymod_channel_type_t_validate(phymod_channel_type_t phymod_channel_type);
typedef struct phymod_autoneg_advert_ability_s {
    uint32_t speed;
    uint32_t resolved_num_lanes; /**< Resolved lane number of the ability */
    phymod_fec_type_t fec; /**< fec type */
    phymod_pause_type_t pause; /**< pause type */
    phymod_firmware_media_type_t medium; /**< Media type */
    uint32_t channel; /**< Long/short channel */
    phymod_an_mode_type_t an_mode; /**< AN mode */
} phymod_autoneg_advert_ability_t;

/* phymod_autoneg_advert_ability_t initialization and validation */
int phymod_autoneg_advert_ability_t_validate(const phymod_autoneg_advert_ability_t* phymod_autoneg_advert_ability);
int phymod_autoneg_advert_ability_t_init(phymod_autoneg_advert_ability_t* phymod_autoneg_advert_ability);

typedef struct phymod_autoneg_advert_abilities_s {
    uint32_t num_abilities; /**< Number of abilities */
    phymod_autoneg_advert_ability_t* autoneg_abilities; /**< Abilities array */
} phymod_autoneg_advert_abilities_t;

/* phymod_autoneg_advert_abilities_t initialization and validation */
int phymod_autoneg_advert_abilities_t_validate(const phymod_autoneg_advert_abilities_t* phymod_autoneg_advert_abilities);
int phymod_autoneg_advert_abilities_t_init(phymod_autoneg_advert_abilities_t* phymod_autoneg_advert_abilities);

/*! 
 * phymod_phy_autoneg_advert_ability_set
 *
 * @brief  Set/Get autoneg advertising abilities 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  an_advert_abilities   - 
 * @param [in]  old_pll_adv_state   - current pll advert bitmap
 * @param [out]  new_pll_adv_state   - pll advert bitmap after setting an_advert_abilities
 */
int phymod_phy_autoneg_advert_ability_set(const phymod_phy_access_t* phy, const phymod_autoneg_advert_abilities_t* an_advert_abilities, const phymod_phy_pll_state_t* old_pll_adv_state, phymod_phy_pll_state_t* new_pll_adv_state);
/*! 
 * phymod_phy_autoneg_advert_ability_get
 *
 * @brief  Set/Get autoneg advertising abilities 
 *
 * @param [in]  phy             - phy access information
 * @param [inout] an_advert_abilities   - AN abilities
 */
int phymod_phy_autoneg_advert_ability_get(const phymod_phy_access_t* phy, phymod_autoneg_advert_abilities_t* an_advert_abilities);

/*! 
 * phymod_phy_autoneg_remote_advert_ability_get
 *
 * @brief  Get remote autoneg advertising abilities 
 *
 * @param [in]  phy             - phy access information
 * @param [inout] an_advert_abilities   - AN abilities
 */
int phymod_phy_autoneg_remote_advert_ability_get(const phymod_phy_access_t* phy, phymod_autoneg_advert_abilities_t* an_advert_abilities);

/*! 
 * phymod_phy_bond_in_pwrdn_override
 *
 * @brief  Override tx_clk_vld to enable mac credit 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  enable          - 
 */
int phymod_phy_bond_in_pwrdn_override(const phymod_phy_access_t* phy, uint32_t enable);

/*! 
 * phymod_phy_tx_pam4_precoder_enable_set
 *
 * @brief  enable tx pam4 precoder for extended reach channel 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  enable          - 
 */
int phymod_phy_tx_pam4_precoder_enable_set(const phymod_phy_access_t* phy, int enable);
/*! 
 * phymod_phy_tx_pam4_precoder_enable_get
 *
 * @brief  enable tx pam4 precoder for extended reach channel 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  enable          - 
 */
int phymod_phy_tx_pam4_precoder_enable_get(const phymod_phy_access_t* phy, int* enable);

/*! 
 * phymod_phy_tx_phase_lock_set
 *
 * @brief  Locks TX on RX  
 *
 * @param [in]  phy             - phy access information
 * @param [in]  enable          - 
 */
int phymod_phy_tx_phase_lock_set(const phymod_phy_access_t* phy, uint8_t enable);

/*! 
 * phymod_phy_plls_reconfig
 *
 * @brief  reconfig plls on a specific serdes core 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  num_plls        - number of PLLs to re-config
 * @param [in]  plls            - 
 */
int phymod_phy_plls_reconfig(const phymod_phy_access_t* phy, uint32_t num_plls, const uint32_t* plls);

/*! 
 * phymod_phy_linkdown_transmit_set
 *
 * @brief  Set/Get linkdown transmit 
 *
 * @param [in]  phy             - phy access information
 * @param [in]  enable          - 
 */
int phymod_phy_linkdown_transmit_set(const phymod_phy_access_t* phy, uint32_t enable);
/*! 
 * phymod_phy_linkdown_transmit_get
 *
 * @brief  Set/Get linkdown transmit 
 *
 * @param [in]  phy             - phy access information
 * @param [out]  enable          - 
 */
int phymod_phy_linkdown_transmit_get(const phymod_phy_access_t* phy, uint32_t* enable);

#endif /*_PHYMOD_H_*/
