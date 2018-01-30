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

#ifdef PHYMOD_EAGLE_SUPPORT
extern __phymod__dispatch__t__ phymod_eagle_driver;
#endif
#ifdef PHYMOD_FALCON_SUPPORT
extern __phymod__dispatch__t__ phymod_falcon_driver;
#endif
#ifdef PHYMOD_QSGMIIE_SUPPORT
extern __phymod__dispatch__t__ phymod_qsgmiie_driver;
#endif
#ifdef PHYMOD_TSCE_SUPPORT
extern __phymod__dispatch__t__ phymod_tsce_driver;
#endif
#ifdef PHYMOD_TSCF_SUPPORT
extern __phymod__dispatch__t__ phymod_tscf_driver;
#endif
#ifdef PHYMOD_PHY8806X_SUPPORT
extern __phymod__dispatch__t__ phymod_phy8806x_driver;
#endif
#ifdef PHYMOD_FURIA_SUPPORT
extern __phymod__dispatch__t__ phymod_furia_driver;
#endif
#ifdef PHYMOD_VIPER_SUPPORT
extern __phymod__dispatch__t__ phymod_viper_driver;
#endif
#ifdef PHYMOD_SESTO_SUPPORT
extern __phymod__dispatch__t__ phymod_sesto_driver;
#endif
#ifdef PHYMOD_QUADRA28_SUPPORT
extern __phymod__dispatch__t__ phymod_quadra28_driver;
#endif
#ifdef PHYMOD_QTCE_SUPPORT
extern __phymod__dispatch__t__ phymod_qtce_driver;
#endif
#ifdef PHYMOD_HURACAN_SUPPORT
extern __phymod__dispatch__t__ phymod_huracan_driver;
#endif
#ifdef PHYMOD_MADURA_SUPPORT
extern __phymod__dispatch__t__ phymod_madura_driver;
#endif
#ifdef PHYMOD_FURIA_SUPPORT
extern __phymod__dispatch__t__ phymod_furia_82212_driver;
#endif
#ifdef PHYMOD_DINO_SUPPORT
extern __phymod__dispatch__t__ phymod_dino_driver;
#endif
#ifdef PHYMOD_TSCE_DPLL_SUPPORT
extern __phymod__dispatch__t__ phymod_tsce_dpll_driver;
#endif
#ifdef PHYMOD_EAGLE_DPLL_SUPPORT
extern __phymod__dispatch__t__ phymod_eagle_dpll_driver;
#endif
#ifdef PHYMOD_TSCF16_SUPPORT
extern __phymod__dispatch__t__ phymod_tscf16_driver;
#endif
#ifdef PHYMOD_FALCON16_SUPPORT
extern __phymod__dispatch__t__ phymod_falcon16_driver;
#endif
#ifdef PHYMOD_MERLIN16_SUPPORT
extern __phymod__dispatch__t__ phymod_merlin16_driver;
#endif
#ifdef PHYMOD_TSCE16_SUPPORT
extern __phymod__dispatch__t__ phymod_tsce16_driver;
#endif
#ifdef PHYMOD_TSCF_GEN3_SUPPORT
extern __phymod__dispatch__t__ phymod_tscf_gen3_driver;
#endif
#ifdef PHYMOD_FALCON_DPLL_SUPPORT
extern __phymod__dispatch__t__ phymod_falcon_dpll_driver;
#endif
#ifdef PHYMOD_BLACKHAWK_SUPPORT
extern __phymod__dispatch__t__ phymod_blackhawk_driver;
#endif
#ifdef PHYMOD_TSCBH_SUPPORT
extern __phymod__dispatch__t__ phymod_tscbh_driver;
#endif
#ifdef PHYMOD_PHYMODNULL_SUPPORT
extern __phymod__dispatch__t__ phymod_phymodNull_driver;
#endif
__phymod__dispatch__t__ phymod_Invalid_driver = {NULL};
#ifdef PHYMOD_NULL_SUPPORT
extern __phymod__dispatch__t__ phymod_null_driver;
#endif

__phymod__dispatch__t__* __phymod__dispatch__[phymodDispatchTypeCount] = {
#ifdef PHYMOD_EAGLE_SUPPORT
    &phymod_eagle_driver,
#endif
#ifdef PHYMOD_FALCON_SUPPORT
    &phymod_falcon_driver,
#endif
#ifdef PHYMOD_QSGMIIE_SUPPORT
    &phymod_qsgmiie_driver,
#endif
#ifdef PHYMOD_TSCE_SUPPORT
    &phymod_tsce_driver,
#endif
#ifdef PHYMOD_TSCF_SUPPORT
    &phymod_tscf_driver,
#endif
#ifdef PHYMOD_PHY8806X_SUPPORT
    &phymod_phy8806x_driver,
#endif
#ifdef PHYMOD_FURIA_SUPPORT
    &phymod_furia_driver,
#endif
#ifdef PHYMOD_VIPER_SUPPORT
    &phymod_viper_driver,
#endif
#ifdef PHYMOD_SESTO_SUPPORT
    &phymod_sesto_driver,
#endif
#ifdef PHYMOD_QUADRA28_SUPPORT
    &phymod_quadra28_driver,
#endif
#ifdef PHYMOD_QTCE_SUPPORT
    &phymod_qtce_driver,
#endif
#ifdef PHYMOD_HURACAN_SUPPORT
    &phymod_huracan_driver,
#endif
#ifdef PHYMOD_MADURA_SUPPORT
    &phymod_madura_driver,
#endif
#ifdef PHYMOD_FURIA_SUPPORT
    &phymod_furia_82212_driver,
#endif
#ifdef PHYMOD_DINO_SUPPORT
    &phymod_dino_driver,
#endif
#ifdef PHYMOD_TSCE_DPLL_SUPPORT
    &phymod_tsce_dpll_driver,
#endif
#ifdef PHYMOD_EAGLE_DPLL_SUPPORT
    &phymod_eagle_dpll_driver,
#endif
#ifdef PHYMOD_TSCF16_SUPPORT
    &phymod_tscf16_driver,
#endif
#ifdef PHYMOD_FALCON16_SUPPORT
    &phymod_falcon16_driver,
#endif
#ifdef PHYMOD_MERLIN16_SUPPORT
    &phymod_merlin16_driver,
#endif
#ifdef PHYMOD_TSCE16_SUPPORT
    &phymod_tsce16_driver,
#endif
#ifdef PHYMOD_TSCF_GEN3_SUPPORT
    &phymod_tscf_gen3_driver,
#endif
#ifdef PHYMOD_FALCON_DPLL_SUPPORT
    &phymod_falcon_dpll_driver,
#endif
#ifdef PHYMOD_BLACKHAWK_SUPPORT
    &phymod_blackhawk_driver,
#endif
#ifdef PHYMOD_TSCBH_SUPPORT
    &phymod_tscbh_driver,
#endif
#ifdef PHYMOD_PHYMODNULL_SUPPORT
    &phymod_phymodNull_driver,
#endif
    &phymod_Invalid_driver,
#ifdef PHYMOD_NULL_SUPPORT
    &phymod_null_driver,
#endif

};

int phymod_dispatch_type_t_validate(phymod_dispatch_type_t phymod_dispatch_type)
{        
    if(phymod_dispatch_type >= phymodDispatchTypeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_mem_type_t_validate(phymod_mem_type_t phymod_mem_type)
{        
    if(phymod_mem_type >= phymodMemCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_bus_t_validate(const phymod_bus_t* phymod_bus)
{        
    if(phymod_bus == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    PHYMOD_NULL_CHECK(phymod_bus->bus_name);
    PHYMOD_NULL_CHECK(phymod_bus->read);
    PHYMOD_NULL_CHECK(phymod_bus->write);

        
    return PHYMOD_E_NONE;
    
}

int phymod_bus_t_init(phymod_bus_t* phymod_bus)
{        
    
    if(phymod_bus == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_bus NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_bus, 0, sizeof(phymod_bus_t));
    phymod_bus->bus_name = NULL;
    phymod_bus->read = NULL;
    phymod_bus->write = NULL;
    phymod_bus->is_write_disabled = NULL;
    phymod_bus->mutex_take = NULL;
    phymod_bus->mutex_give = NULL;
    phymod_bus->mem_read = NULL;
    phymod_bus->mem_write = NULL;
    phymod_bus->bus_capabilities = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_access_t_validate(const phymod_access_t* phymod_access)
{        
    if(phymod_access == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    PHYMOD_NULL_CHECK(phymod_access->bus);
    if(PHYMOD_E_OK != phymod_bus_t_validate(phymod_access->bus)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("bus validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_access_t_init(phymod_access_t* phymod_access)
{        
    
    if(phymod_access == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_access NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_access, 0, sizeof(phymod_access_t));
    phymod_access->user_acc = NULL;
    phymod_access->ext_acc = NULL;
    phymod_access->bus = NULL;
    phymod_access->flags = 0;
    phymod_access->lane_mask = 0;
    phymod_access->addr = 0;
    phymod_access->devad = 0;
    phymod_access->pll_idx = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_port_loc_t_validate(phymod_port_loc_t phymod_port_loc)
{        
    if(phymod_port_loc >= phymodPortCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_core_access_t_validate(const phymod_core_access_t* phymod_core_access)
{        
    if(phymod_core_access == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_port_loc_t_validate(phymod_core_access->port_loc)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("port_loc validation failed")));
    }

    if(PHYMOD_E_OK != phymod_access_t_validate(&phymod_core_access->access)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("access validation failed")));
    }

    if(PHYMOD_E_OK != phymod_dispatch_type_t_validate(phymod_core_access->type)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("type validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_core_access_t_init(phymod_core_access_t* phymod_core_access)
{        
    
    if(phymod_core_access == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_core_access NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_core_access, 0, sizeof(phymod_core_access_t));
    phymod_core_access->port_loc = phymodPortLocDC;
    phymod_core_access->device_op_mode = 0;
    if(PHYMOD_E_OK != phymod_access_t_init(&phymod_core_access->access)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("access initialization failed")));
    }

    phymod_core_access->type = phymodDispatchTypeInvalid;

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_access_t_validate(const phymod_phy_access_t* phymod_phy_access)
{        
    if(phymod_phy_access == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_port_loc_t_validate(phymod_phy_access->port_loc)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("port_loc validation failed")));
    }

    if(PHYMOD_E_OK != phymod_access_t_validate(&phymod_phy_access->access)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("access validation failed")));
    }

    if(PHYMOD_E_OK != phymod_dispatch_type_t_validate(phymod_phy_access->type)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("type validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_access_t_init(phymod_phy_access_t* phymod_phy_access)
{        
    
    if(phymod_phy_access == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_phy_access NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_phy_access, 0, sizeof(phymod_phy_access_t));
    phymod_phy_access->port_loc = phymodPortLocDC;
    phymod_phy_access->device_op_mode = 0;
    if(PHYMOD_E_OK != phymod_access_t_init(&phymod_phy_access->access)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("access initialization failed")));
    }

    phymod_phy_access->type = phymodDispatchTypeInvalid;

        
    return PHYMOD_E_NONE;
    
}

int phymod_port_config_t_validate(const phymod_port_config_t* phymod_port_config)
{        
    if(phymod_port_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_port_config_t_init(phymod_port_config_t* phymod_port_config)
{        
    
    if(phymod_port_config == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_port_config NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_port_config, 0, sizeof(phymod_port_config_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_value_override_t_validate(const phymod_value_override_t* phymod_value_override)
{        
    if(phymod_value_override == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    PHYMOD_ERR_VALUE_CHECK(phymod_value_override->enable, 0xFFFFFFFF);
    PHYMOD_ERR_VALUE_CHECK(phymod_value_override->value, 0xFFFFFFFF);

        
    return PHYMOD_E_NONE;
    
}

int phymod_value_override_t_init(phymod_value_override_t* phymod_value_override)
{        
    
    if(phymod_value_override == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_value_override NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_value_override, 0, sizeof(phymod_value_override_t));
    phymod_value_override->enable = 0xFFFFFFFF;
    phymod_value_override->value = 0xFFFFFFFF;

        
    return PHYMOD_E_NONE;
    
}

int phymod_core_identify(const phymod_core_access_t* core, uint32_t core_id, uint32_t* is_identified)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_core_access_t_validate(core)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core validation failed")));
    }

    if(is_identified == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("is_identified NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(core,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_core_identify) {
        PHYMOD_LOCK_TAKE(core);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_core_identify(core, core_id, is_identified);
        PHYMOD_LOCK_GIVE(core);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_core_version_t_validate(phymod_core_version_t phymod_core_version)
{        
    if(phymod_core_version >= phymodCoreVersionCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_core_info_t_validate(const phymod_core_info_t* phymod_core_info)
{        
    if(phymod_core_info == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_core_version_t_validate(phymod_core_info->core_version)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core_version validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_core_info_t_init(phymod_core_info_t* phymod_core_info)
{        
    
    if(phymod_core_info == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_core_info NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_core_info, 0, sizeof(phymod_core_info_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_core_info_get(const phymod_core_access_t* core, phymod_core_info_t* info)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_core_access_t_validate(core)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core validation failed")));
    }

    if(info == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("info NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_core_info_t_init(info)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("info initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(core,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_core_info_get) {
        PHYMOD_LOCK_TAKE(core);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_core_info_get(core, info);
        PHYMOD_LOCK_GIVE(core);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_lane_map_t_validate(const phymod_lane_map_t* phymod_lane_map)
{        
    if(phymod_lane_map == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_lane_map_t_init(phymod_lane_map_t* phymod_lane_map)
{        
    
    if(phymod_lane_map == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_lane_map NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_lane_map, 0, sizeof(phymod_lane_map_t));
    phymod_lane_map->num_of_lanes = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_core_lane_map_set(const phymod_core_access_t* core, const phymod_lane_map_t* lane_map)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_core_access_t_validate(core)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core validation failed")));
    }

    if(PHYMOD_E_OK != phymod_lane_map_t_validate(lane_map)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("lane_map validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(core,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_core_lane_map_set) {
        PHYMOD_LOCK_TAKE(core);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_core_lane_map_set(core, lane_map);
        PHYMOD_LOCK_GIVE(core);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_core_lane_map_get(const phymod_core_access_t* core, phymod_lane_map_t* lane_map)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_core_access_t_validate(core)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core validation failed")));
    }

    if(lane_map == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("lane_map NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_lane_map_t_init(lane_map)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("lane_map initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(core,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_core_lane_map_get) {
        PHYMOD_LOCK_TAKE(core);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_core_lane_map_get(core, lane_map);
        PHYMOD_LOCK_GIVE(core);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_reset_mode_t_validate(phymod_reset_mode_t phymod_reset_mode)
{        
    if(phymod_reset_mode >= phymodResetModeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_reset_direction_t_validate(phymod_reset_direction_t phymod_reset_direction)
{        
    if(phymod_reset_direction >= phymodResetDirectionCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_core_reset_set(const phymod_core_access_t* core, phymod_reset_mode_t reset_mode, phymod_reset_direction_t direction)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_core_access_t_validate(core)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core validation failed")));
    }

    if(PHYMOD_E_OK != phymod_reset_mode_t_validate(reset_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("reset_mode validation failed")));
    }

    if(PHYMOD_E_OK != phymod_reset_direction_t_validate(direction)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("direction validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(core,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_core_reset_set) {
        PHYMOD_LOCK_TAKE(core);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_core_reset_set(core, reset_mode, direction);
        PHYMOD_LOCK_GIVE(core);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_core_reset_get(const phymod_core_access_t* core, phymod_reset_mode_t reset_mode, phymod_reset_direction_t* direction)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_core_access_t_validate(core)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core validation failed")));
    }

    if(PHYMOD_E_OK != phymod_reset_mode_t_validate(reset_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("reset_mode validation failed")));
    }

    if(direction == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("direction NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(core,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_core_reset_get) {
        PHYMOD_LOCK_TAKE(core);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_core_reset_get(core, reset_mode, direction);
        PHYMOD_LOCK_GIVE(core);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_core_firmware_info_t_validate(const phymod_core_firmware_info_t* phymod_core_firmware_info)
{        
    if(phymod_core_firmware_info == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_core_firmware_info_t_init(phymod_core_firmware_info_t* phymod_core_firmware_info)
{        
    
    if(phymod_core_firmware_info == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_core_firmware_info NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_core_firmware_info, 0, sizeof(phymod_core_firmware_info_t));
    phymod_core_firmware_info->fw_version = 0xFFFFFFFF;
    phymod_core_firmware_info->fw_crc = 0xFFFFFFFF;

        
    return PHYMOD_E_NONE;
    
}

int phymod_core_firmware_info_get(const phymod_core_access_t* core, phymod_core_firmware_info_t* fw_info)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_core_access_t_validate(core)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core validation failed")));
    }

    if(fw_info == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("fw_info NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_core_firmware_info_t_init(fw_info)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("fw_info initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(core,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_core_firmware_info_get) {
        PHYMOD_LOCK_TAKE(core);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_core_firmware_info_get(core, fw_info);
        PHYMOD_LOCK_GIVE(core);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_firmware_media_type_t_validate(phymod_firmware_media_type_t phymod_firmware_media_type)
{        
    if(phymod_firmware_media_type >= phymodFirmwareMediaTypeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_firmware_core_config_t_validate(const phymod_firmware_core_config_t* phymod_firmware_core_config)
{        
    if(phymod_firmware_core_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_firmware_core_config_t_init(phymod_firmware_core_config_t* phymod_firmware_core_config)
{        
    
    if(phymod_firmware_core_config == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_firmware_core_config NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_firmware_core_config, 0, sizeof(phymod_firmware_core_config_t));
    phymod_firmware_core_config->CoreConfigFromPCS = 0x0;
    phymod_firmware_core_config->VcoRate = 0;
    phymod_firmware_core_config->disable_write_pll_iqp = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_firmware_core_config_set(const phymod_phy_access_t* phy, phymod_firmware_core_config_t fw_core_config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_firmware_core_config_t_validate(&fw_core_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("fw_core_config validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_firmware_core_config_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_firmware_core_config_set(phy, fw_core_config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_firmware_core_config_get(const phymod_phy_access_t* phy, phymod_firmware_core_config_t* fw_core_config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(fw_core_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("fw_core_config NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_firmware_core_config_t_init(fw_core_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("fw_core_config initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_firmware_core_config_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_firmware_core_config_get(phy, fw_core_config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_firmware_lane_config_t_validate(const phymod_firmware_lane_config_t* phymod_firmware_lane_config)
{        
    if(phymod_firmware_lane_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_firmware_media_type_t_validate(phymod_firmware_lane_config->MediaType)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("MediaType validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_firmware_lane_config_t_init(phymod_firmware_lane_config_t* phymod_firmware_lane_config)
{        
    
    if(phymod_firmware_lane_config == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_firmware_lane_config NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_firmware_lane_config, 0, sizeof(phymod_firmware_lane_config_t));
    phymod_firmware_lane_config->LaneConfigFromPCS = 0x0;
    phymod_firmware_lane_config->AnEnabled = 0;
    phymod_firmware_lane_config->DfeOn = 0;
    phymod_firmware_lane_config->ForceBrDfe = 0;
    phymod_firmware_lane_config->LpDfeOn = 0;
    phymod_firmware_lane_config->UnreliableLos = 0;
    phymod_firmware_lane_config->ScramblingDisable = 0;
    phymod_firmware_lane_config->Cl72AutoPolEn = 0;
    phymod_firmware_lane_config->Cl72RestTO = 0;
    phymod_firmware_lane_config->ForceExtenedReach = 0;
    phymod_firmware_lane_config->ForceNormalReach = 0;
    phymod_firmware_lane_config->LpPrecoderEnabled = 0;
    phymod_firmware_lane_config->ForcePAM4Mode = 0;
    phymod_firmware_lane_config->ForceNRZMode = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_firmware_lane_config_set(const phymod_phy_access_t* phy, phymod_firmware_lane_config_t fw_lane_config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_firmware_lane_config_t_validate(&fw_lane_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("fw_lane_config validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_firmware_lane_config_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_firmware_lane_config_set(phy, fw_lane_config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_firmware_lane_config_get(const phymod_phy_access_t* phy, phymod_firmware_lane_config_t* fw_lane_config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(fw_lane_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("fw_lane_config NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_firmware_lane_config_t_init(fw_lane_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("fw_lane_config initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_firmware_lane_config_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_firmware_lane_config_get(phy, fw_lane_config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_sequencer_operation_t_validate(phymod_sequencer_operation_t phymod_sequencer_operation)
{        
    if(phymod_sequencer_operation >= phymodSeqOpCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_core_pll_sequencer_restart(const phymod_core_access_t* core, uint32_t flags, phymod_sequencer_operation_t operation)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_core_access_t_validate(core)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core validation failed")));
    }

    if(PHYMOD_E_OK != phymod_sequencer_operation_t_validate(operation)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("operation validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(core,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_core_pll_sequencer_restart) {
        PHYMOD_LOCK_TAKE(core);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_core_pll_sequencer_restart(core, flags, operation);
        PHYMOD_LOCK_GIVE(core);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_core_event_t_validate(phymod_core_event_t phymod_core_event)
{        
    if(phymod_core_event >= phymodCoreEventCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_core_wait_event(const phymod_core_access_t* core, phymod_core_event_t event, uint32_t timeout)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_core_access_t_validate(core)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core validation failed")));
    }

    if(PHYMOD_E_OK != phymod_core_event_t_validate(event)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("event validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(core,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_core_wait_event) {
        PHYMOD_LOCK_TAKE(core);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_core_wait_event(core, event, timeout);
        PHYMOD_LOCK_GIVE(core);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_rx_restart(const phymod_phy_access_t* phy)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_rx_restart) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_rx_restart(phy);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_polarity_t_validate(const phymod_polarity_t* phymod_polarity)
{        
    if(phymod_polarity == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_polarity_t_init(phymod_polarity_t* phymod_polarity)
{        
    
    if(phymod_polarity == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_polarity NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_polarity, 0, sizeof(phymod_polarity_t));
    phymod_polarity->rx_polarity = 0x0;
    phymod_polarity->tx_polarity = 0x0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_polarity_set(const phymod_phy_access_t* phy, const phymod_polarity_t* polarity)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_polarity_t_validate(polarity)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("polarity validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_polarity_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_polarity_set(phy, polarity);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_polarity_get(const phymod_phy_access_t* phy, phymod_polarity_t* polarity)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(polarity == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("polarity NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_polarity_t_init(polarity)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("polarity initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_polarity_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_polarity_get(phy, polarity);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_drivermode_t_validate(phymod_drivermode_t phymod_drivermode)
{        
    if(phymod_drivermode >= phymodTxDriverModeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_txTapMode_t_validate(phymod_txTapMode_t phymod_txTapMode)
{        
    if(phymod_txTapMode >= phymodTxTapModeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_signalling_method_t_validate(phymod_phy_signalling_method_t phymod_phy_signalling_method)
{        
    if(phymod_phy_signalling_method >= phymodSignallingMethodCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_tx_t_validate(const phymod_tx_t* phymod_tx)
{        
    if(phymod_tx == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_tx_t_init(phymod_tx_t* phymod_tx)
{        
    
    if(phymod_tx == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_tx NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_tx, 0, sizeof(phymod_tx_t));
    phymod_tx->pre = -1;
    phymod_tx->main = -1;
    phymod_tx->post = -1;
    phymod_tx->post2 = -1;
    phymod_tx->post3 = -1;
    phymod_tx->amp = -1;
    phymod_tx->drivermode = -1;
    phymod_tx->pre2 = -1;
    phymod_tx->txTapMode = phymodTxTapMode6Tap;
    phymod_tx->rpara = -1;
    phymod_tx->signallingMode = phymodSignallingMethodNRZ;

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_tx_set(const phymod_phy_access_t* phy, const phymod_tx_t* tx)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_tx_t_validate(tx)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_tx_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_tx_set(phy, tx);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_tx_get(const phymod_phy_access_t* phy, phymod_tx_t* tx)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(tx == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_tx_t_init(tx)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_tx_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_tx_get(phy, tx);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_media_typed_t_validate(phymod_media_typed_t phymod_media_typed)
{        
    if(phymod_media_typed >= phymodMediaTypeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_media_type_tx_get(const phymod_phy_access_t* phy, phymod_media_typed_t media, phymod_tx_t* tx)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_media_typed_t_validate(media)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("media validation failed")));
    }

    if(tx == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_tx_t_init(tx)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_media_type_tx_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_media_type_tx_get(phy, media, tx);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_tx_override_t_validate(const phymod_tx_override_t* phymod_tx_override)
{        
    if(phymod_tx_override == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_value_override_t_validate(&phymod_tx_override->phase_interpolator)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phase_interpolator validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_tx_override_t_init(phymod_tx_override_t* phymod_tx_override)
{        
    
    if(phymod_tx_override == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_tx_override NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_tx_override, 0, sizeof(phymod_tx_override_t));
    if(PHYMOD_E_OK != phymod_value_override_t_init(&phymod_tx_override->phase_interpolator)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phase_interpolator initialization failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_tx_override_set(const phymod_phy_access_t* phy, const phymod_tx_override_t* tx_override)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_tx_override_t_validate(tx_override)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx_override validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_tx_override_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_tx_override_set(phy, tx_override);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_tx_override_get(const phymod_phy_access_t* phy, phymod_tx_override_t* tx_override)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(tx_override == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx_override NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_tx_override_t_init(tx_override)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx_override initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_tx_override_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_tx_override_get(phy, tx_override);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_txpi_config_t_validate(const phymod_txpi_config_t* phymod_txpi_config)
{        
    if(phymod_txpi_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_txpi_config_t_init(phymod_txpi_config_t* phymod_txpi_config)
{        
    
    if(phymod_txpi_config == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_txpi_config NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_txpi_config, 0, sizeof(phymod_txpi_config_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_txpi_config_set(const phymod_phy_access_t* phy, const phymod_txpi_config_t* config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_txpi_config_t_validate(config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("config validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_txpi_config_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_txpi_config_set(phy, config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_txpi_config_get(const phymod_phy_access_t* phy, phymod_txpi_config_t* config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("config NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_txpi_config_t_init(config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("config initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_txpi_config_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_txpi_config_get(phy, config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_rx_t_validate(const phymod_rx_t* phymod_rx)
{        
    if(phymod_rx == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_value_override_t_validate(&phymod_rx->peaking_filter)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("peaking_filter validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_rx_t_init(phymod_rx_t* phymod_rx)
{
    int _array_iter;
        
    
    if(phymod_rx == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_rx NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_rx, 0, sizeof(phymod_rx_t));
    if(PHYMOD_E_OK != phymod_value_override_t_init(&phymod_rx->vga)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("vga initialization failed")));
    }

    for(_array_iter = 0 ; _array_iter < PHYMOD_NUM_DFE_TAPS ; _array_iter++){
        if(PHYMOD_E_OK != phymod_value_override_t_init(&phymod_rx->dfe[_array_iter])) {
            PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("dfe initialization failed")));
        }
    }

    if(PHYMOD_E_OK != phymod_value_override_t_init(&phymod_rx->peaking_filter)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("peaking_filter initialization failed")));
    }

    if(PHYMOD_E_OK != phymod_value_override_t_init(&phymod_rx->low_freq_peaking_filter)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("low_freq_peaking_filter initialization failed")));
    }

    if(PHYMOD_E_OK != phymod_value_override_t_init(&phymod_rx->high_freq_peaking_filter)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("high_freq_peaking_filter initialization failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_rx_set(const phymod_phy_access_t* phy, const phymod_rx_t* rx)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_rx_t_validate(rx)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_rx_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_rx_set(phy, rx);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_rx_get(const phymod_phy_access_t* phy, phymod_rx_t* rx)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(rx == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_rx_t_init(rx)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_rx_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_rx_get(phy, rx);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_rx_adaptation_resume(const phymod_phy_access_t* phy)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_rx_adaptation_resume) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_rx_adaptation_resume(phy);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_reset_t_validate(const phymod_phy_reset_t* phymod_phy_reset)
{        
    if(phymod_phy_reset == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_reset_direction_t_validate(phymod_phy_reset->rx)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx validation failed")));
    }

    if(PHYMOD_E_OK != phymod_reset_direction_t_validate(phymod_phy_reset->tx)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_reset_t_init(phymod_phy_reset_t* phymod_phy_reset)
{        
    
    if(phymod_phy_reset == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_phy_reset NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_phy_reset, 0, sizeof(phymod_phy_reset_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_reset_set(const phymod_phy_access_t* phy, const phymod_phy_reset_t* reset)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_reset_t_validate(reset)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("reset validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_reset_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_reset_set(phy, reset);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_reset_get(const phymod_phy_access_t* phy, phymod_phy_reset_t* reset)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(reset == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("reset NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_phy_reset_t_init(reset)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("reset initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_reset_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_reset_get(phy, reset);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_power_t_validate(phymod_power_t phymod_power)
{        
    if(phymod_power >= phymodPowerCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_power_t_validate(const phymod_phy_power_t* phymod_phy_power)
{        
    if(phymod_phy_power == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_power_t_validate(phymod_phy_power->rx)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx validation failed")));
    }

    if(PHYMOD_E_OK != phymod_power_t_validate(phymod_phy_power->tx)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_power_t_init(phymod_phy_power_t* phymod_phy_power)
{        
    
    if(phymod_phy_power == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_phy_power NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_phy_power, 0, sizeof(phymod_phy_power_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_power_set(const phymod_phy_access_t* phy, const phymod_phy_power_t* power)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_power_t_validate(power)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("power validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_power_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_power_set(phy, power);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_power_get(const phymod_phy_access_t* phy, phymod_phy_power_t* power)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(power == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("power NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_phy_power_t_init(power)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("power initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_power_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_power_get(phy, power);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_hg2_codec_t_validate(phymod_phy_hg2_codec_t phymod_phy_hg2_codec)
{        
    if(phymod_phy_hg2_codec >= phymodBcmHG2CodecCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_hg2_codec_control_set(const phymod_phy_access_t* phy, phymod_phy_hg2_codec_t hg2_codec)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_hg2_codec_t_validate(hg2_codec)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("hg2_codec validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_hg2_codec_control_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_hg2_codec_control_set(phy, hg2_codec);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_hg2_codec_control_get(const phymod_phy_access_t* phy, phymod_phy_hg2_codec_t* hg2_codec)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(hg2_codec == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("hg2_codec NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_hg2_codec_control_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_hg2_codec_control_get(phy, hg2_codec);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_tx_lane_control_t_validate(phymod_phy_tx_lane_control_t phymod_phy_tx_lane_control)
{        
    if(phymod_phy_tx_lane_control >= phymodTxCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_autoneg_oui_t_validate(const phymod_autoneg_oui_t* phymod_autoneg_oui)
{        
    if(phymod_autoneg_oui == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_autoneg_oui_t_init(phymod_autoneg_oui_t* phymod_autoneg_oui)
{        
    
    if(phymod_autoneg_oui == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_autoneg_oui NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_autoneg_oui, 0, sizeof(phymod_autoneg_oui_t));
    phymod_autoneg_oui->oui = 0;
    phymod_autoneg_oui->oui_override_bam73_adv = 0;
    phymod_autoneg_oui->oui_override_bam73_det = 0;
    phymod_autoneg_oui->oui_override_hpam_adv = 0;
    phymod_autoneg_oui->oui_override_hpam_det = 0;
    phymod_autoneg_oui->oui_override_bam37_adv = 0;
    phymod_autoneg_oui->oui_override_bam37_det = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_rx_lane_control_t_validate(phymod_phy_rx_lane_control_t phymod_phy_rx_lane_control)
{        
    if(phymod_phy_rx_lane_control >= phymodRxCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_tx_lane_control_set(const phymod_phy_access_t* phy, phymod_phy_tx_lane_control_t tx_control)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_tx_lane_control_t_validate(tx_control)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx_control validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_tx_lane_control_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_tx_lane_control_set(phy, tx_control);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_tx_lane_control_get(const phymod_phy_access_t* phy, phymod_phy_tx_lane_control_t* tx_control)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(tx_control == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx_control NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_tx_lane_control_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_tx_lane_control_get(phy, tx_control);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_rx_lane_control_set(const phymod_phy_access_t* phy, phymod_phy_rx_lane_control_t rx_control)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_rx_lane_control_t_validate(rx_control)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx_control validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_rx_lane_control_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_rx_lane_control_set(phy, rx_control);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_rx_lane_control_get(const phymod_phy_access_t* phy, phymod_phy_rx_lane_control_t* rx_control)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(rx_control == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx_control NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_rx_lane_control_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_rx_lane_control_get(phy, rx_control);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_fec_enable_set(const phymod_phy_access_t* phy, uint32_t enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_fec_enable_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_fec_enable_set(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_fec_enable_get(const phymod_phy_access_t* phy, uint32_t* enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(enable == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("enable NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_fec_enable_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_fec_enable_get(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_forced_speed_line_side_set(const phymod_phy_access_t* phy, uint32_t speed)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_forced_speed_line_side_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_forced_speed_line_side_set(phy, speed);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_forced_speed_line_side_get(const phymod_phy_access_t* phy, uint32_t* speed)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(speed == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("speed NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_forced_speed_line_side_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_forced_speed_line_side_get(phy, speed);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_autoneg_line_side_set(const phymod_phy_access_t* phy, uint32_t enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_line_side_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_line_side_set(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_autoneg_line_side_get(const phymod_phy_access_t* phy, uint32_t* enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(enable == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("enable NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_line_side_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_line_side_get(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_flow_control_mode_set(const phymod_phy_access_t* phy, uint32_t mode, uint32_t ingress)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_flow_control_mode_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_flow_control_mode_set(phy, mode, ingress);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_flow_control_mode_get(const phymod_phy_access_t* phy, uint32_t ingress, uint32_t* mode)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(mode == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("mode NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_flow_control_mode_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_flow_control_mode_get(phy, ingress, mode);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_psm_cos_bmp_set(const phymod_phy_access_t* phy, uint32_t cos_bmp)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_psm_cos_bmp_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_psm_cos_bmp_set(phy, cos_bmp);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_psm_cos_bmp_get(const phymod_phy_access_t* phy, uint32_t* cos_bmp)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(cos_bmp == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("cos_bmp NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_psm_cos_bmp_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_psm_cos_bmp_get(phy, cos_bmp);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_autoneg_oui_set(const phymod_phy_access_t* phy, phymod_autoneg_oui_t an_oui)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_autoneg_oui_t_validate(&an_oui)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_oui validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_oui_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_oui_set(phy, an_oui);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_autoneg_oui_get(const phymod_phy_access_t* phy, phymod_autoneg_oui_t* an_oui)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(an_oui == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_oui NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_autoneg_oui_t_init(an_oui)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_oui initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_oui_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_oui_get(phy, an_oui);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_eee_set(const phymod_phy_access_t* phy, uint32_t enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_eee_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_eee_set(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_eee_get(const phymod_phy_access_t* phy, uint32_t* enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(enable == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("enable NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_eee_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_eee_get(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_interface_t_validate(phymod_interface_t phymod_interface)
{        
    if(phymod_interface >= phymodInterfaceCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_ref_clk_t_validate(phymod_ref_clk_t phymod_ref_clk)
{        
    if(phymod_ref_clk >= phymodRefClkCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_triple_core_t_validate(phymod_triple_core_t phymod_triple_core)
{        
    if(phymod_triple_core >= phymodTripleCoreCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_otn_type_t_validate(phymod_otn_type_t phymod_otn_type)
{        
    if(phymod_otn_type >= phymodOTNCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_inf_config_t_validate(const phymod_phy_inf_config_t* phymod_phy_inf_config)
{        
    if(phymod_phy_inf_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_interface_t_validate(phymod_phy_inf_config->interface_type)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("interface_type validation failed")));
    }

    if(PHYMOD_E_OK != phymod_ref_clk_t_validate(phymod_phy_inf_config->ref_clock)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("ref_clock validation failed")));
    }

    if(PHYMOD_E_OK != phymod_otn_type_t_validate(phymod_phy_inf_config->otn_type)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("otn_type validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_inf_config_t_init(phymod_phy_inf_config_t* phymod_phy_inf_config)
{        
    
    if(phymod_phy_inf_config == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_phy_inf_config NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_phy_inf_config, 0, sizeof(phymod_phy_inf_config_t));
    phymod_phy_inf_config->interface_type = phymodInterfaceBypass;
    phymod_phy_inf_config->data_rate = 0;
    phymod_phy_inf_config->interface_modes = 0;
    phymod_phy_inf_config->ref_clock = 0;
    phymod_phy_inf_config->pll_divider_req = 0;
    phymod_phy_inf_config->device_aux_modes = NULL;
    phymod_phy_inf_config->otn_type = phymodOTNOTU1;

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_interface_config_set(const phymod_phy_access_t* phy, uint32_t flags, const phymod_phy_inf_config_t* config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_inf_config_t_validate(config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("config validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_interface_config_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_interface_config_set(phy, flags, config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_interface_config_get(const phymod_phy_access_t* phy, uint32_t flags, phymod_ref_clk_t ref_clock, phymod_phy_inf_config_t* config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_ref_clk_t_validate(ref_clock)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("ref_clock validation failed")));
    }

    if(config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("config NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_phy_inf_config_t_init(config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("config initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_interface_config_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_interface_config_get(phy, flags, ref_clock, config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_cl72_set(const phymod_phy_access_t* phy, uint32_t cl72_en)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_cl72_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_cl72_set(phy, cl72_en);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_cl72_get(const phymod_phy_access_t* phy, uint32_t* cl72_en)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(cl72_en == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("cl72_en NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_cl72_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_cl72_get(phy, cl72_en);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_cl72_status_t_validate(const phymod_cl72_status_t* phymod_cl72_status)
{        
    if(phymod_cl72_status == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_cl72_status_t_init(phymod_cl72_status_t* phymod_cl72_status)
{        
    
    if(phymod_cl72_status == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_cl72_status NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_cl72_status, 0, sizeof(phymod_cl72_status_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_cl72_status_get(const phymod_phy_access_t* phy, phymod_cl72_status_t* status)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(status == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("status NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_cl72_status_t_init(status)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("status initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_cl72_status_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_cl72_status_get(phy, status);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_an_mode_type_t_validate(phymod_an_mode_type_t phymod_an_mode_type)
{        
    if(phymod_an_mode_type >= phymod_AN_MODE_Count) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_cl37_sgmii_speed_t_validate(phymod_cl37_sgmii_speed_t phymod_cl37_sgmii_speed)
{        
    if(phymod_cl37_sgmii_speed >= phymod_CL37_SGMII_Count) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_autoneg_ability_t_validate(const phymod_autoneg_ability_t* phymod_autoneg_ability)
{        
    if(phymod_autoneg_ability == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_cl37_sgmii_speed_t_validate(phymod_autoneg_ability->sgmii_speed)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("sgmii_speed validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_autoneg_ability_t_init(phymod_autoneg_ability_t* phymod_autoneg_ability)
{        
    
    if(phymod_autoneg_ability == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_autoneg_ability NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_autoneg_ability, 0, sizeof(phymod_autoneg_ability_t));
    phymod_autoneg_ability->an_cap = 0;
    phymod_autoneg_ability->cl73bam_cap = 0;
    phymod_autoneg_ability->cl37bam_cap = 0;
    phymod_autoneg_ability->an_fec = 0;
    phymod_autoneg_ability->an_cl72 = 0;
    phymod_autoneg_ability->an_hg2 = 0;
    phymod_autoneg_ability->capabilities = 0;
    phymod_autoneg_ability->an_master_lane = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_autoneg_ability_set(const phymod_phy_access_t* phy, const phymod_autoneg_ability_t* an_ability_set_type)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_autoneg_ability_t_validate(an_ability_set_type)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_ability_set_type validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_ability_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_ability_set(phy, an_ability_set_type);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_autoneg_ability_get(const phymod_phy_access_t* phy, phymod_autoneg_ability_t* an_ability_get_type)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(an_ability_get_type == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_ability_get_type NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_autoneg_ability_t_init(an_ability_get_type)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_ability_get_type initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_ability_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_ability_get(phy, an_ability_get_type);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_autoneg_remote_ability_get(const phymod_phy_access_t* phy, phymod_autoneg_ability_t* an_ability_get_type)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(an_ability_get_type == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_ability_get_type NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_autoneg_ability_t_init(an_ability_get_type)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_ability_get_type initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_remote_ability_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_remote_ability_get(phy, an_ability_get_type);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_autoneg_control_t_validate(const phymod_autoneg_control_t* phymod_autoneg_control)
{        
    if(phymod_autoneg_control == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_an_mode_type_t_validate(phymod_autoneg_control->an_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_mode validation failed")));
    }

    switch(phymod_autoneg_control->enable) {
        case 0:
        case 1:
            break;
        default:
            PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("enable not allowed value")));
            break;
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_autoneg_control_t_init(phymod_autoneg_control_t* phymod_autoneg_control)
{        
    
    if(phymod_autoneg_control == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_autoneg_control NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_autoneg_control, 0, sizeof(phymod_autoneg_control_t));
    phymod_autoneg_control->an_mode = 0;
    phymod_autoneg_control->num_lane_adv = 0;
    phymod_autoneg_control->flags = 0;
    phymod_autoneg_control->enable = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_autoneg_set(const phymod_phy_access_t* phy, const phymod_autoneg_control_t* an)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_autoneg_control_t_validate(an)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_set(phy, an);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_autoneg_get(const phymod_phy_access_t* phy, phymod_autoneg_control_t* an, uint32_t* an_done)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(an == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_autoneg_control_t_init(an)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an initialization failed")));
    }

    if(an_done == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_done NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_get(phy, an, an_done);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_autoneg_restart_set(const phymod_phy_access_t* phy, const phymod_autoneg_control_t* an)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_autoneg_control_t_validate(an)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_restart_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_restart_set(phy, an);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_autoneg_status_t_validate(const phymod_autoneg_status_t* phymod_autoneg_status)
{        
    if(phymod_autoneg_status == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_interface_t_validate(phymod_autoneg_status->interface)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("interface validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_autoneg_status_t_init(phymod_autoneg_status_t* phymod_autoneg_status)
{        
    
    if(phymod_autoneg_status == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_autoneg_status NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_autoneg_status, 0, sizeof(phymod_autoneg_status_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_autoneg_status_get(const phymod_phy_access_t* phy, phymod_autoneg_status_t* status)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(status == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("status NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_autoneg_status_t_init(status)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("status initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_status_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_status_get(phy, status);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_firmware_load_force_t_validate(phymod_firmware_load_force_t phymod_firmware_load_force)
{        
    if(phymod_firmware_load_force >= phymodFirmwareLoadCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_firmware_load_method_t_validate(phymod_firmware_load_method_t phymod_firmware_load_method)
{        
    if(phymod_firmware_load_method >= phymodFirmwareLoadMethodCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_datapath_t_validate(phymod_datapath_t phymod_datapath)
{        
    if(phymod_datapath >= phymodDatapathCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_tx_input_voltage_t_validate(phymod_tx_input_voltage_t phymod_tx_input_voltage)
{        
    if(phymod_tx_input_voltage >= phymodTxInputVoltageCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_afe_pll_t_validate(const phymod_afe_pll_t* phymod_afe_pll)
{        
    if(phymod_afe_pll == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_afe_pll_t_init(phymod_afe_pll_t* phymod_afe_pll)
{        
    
    if(phymod_afe_pll == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_afe_pll NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_afe_pll, 0, sizeof(phymod_afe_pll_t));
    phymod_afe_pll->afe_pll_change_default = 0;
    phymod_afe_pll->ams_pll_iqp = 0xf;
    phymod_afe_pll->ams_pll_en_hrz = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_core_init_config_t_validate(const phymod_core_init_config_t* phymod_core_init_config)
{        
    if(phymod_core_init_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_lane_map_t_validate(&phymod_core_init_config->lane_map)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("lane_map validation failed")));
    }

    if(PHYMOD_E_OK != phymod_polarity_t_validate(&phymod_core_init_config->polarity_map)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("polarity_map validation failed")));
    }

    if(PHYMOD_E_OK != phymod_firmware_load_method_t_validate(phymod_core_init_config->firmware_load_method)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("firmware_load_method validation failed")));
    }

    if(PHYMOD_E_OK != phymod_firmware_core_config_t_validate(&phymod_core_init_config->firmware_core_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("firmware_core_config validation failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_inf_config_t_validate(&phymod_core_init_config->interface)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("interface validation failed")));
    }

    if(PHYMOD_E_OK != phymod_datapath_t_validate(phymod_core_init_config->op_datapath)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("op_datapath validation failed")));
    }

    if(PHYMOD_E_OK != phymod_tx_input_voltage_t_validate(phymod_core_init_config->tx_input_voltage)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx_input_voltage validation failed")));
    }

    if(PHYMOD_E_OK != phymod_afe_pll_t_validate(&phymod_core_init_config->afe_pll)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("afe_pll validation failed")));
    }

    if(PHYMOD_E_OK != phymod_ref_clk_t_validate(phymod_core_init_config->ref_clock)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("ref_clock validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_core_init_config_t_init(phymod_core_init_config_t* phymod_core_init_config)
{        
    
    if(phymod_core_init_config == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_core_init_config NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_core_init_config, 0, sizeof(phymod_core_init_config_t));
    if(PHYMOD_E_OK != phymod_lane_map_t_init(&phymod_core_init_config->lane_map)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("lane_map initialization failed")));
    }

    if(PHYMOD_E_OK != phymod_polarity_t_init(&phymod_core_init_config->polarity_map)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("polarity_map initialization failed")));
    }

    phymod_core_init_config->firmware_load_method = phymodFirmwareLoadMethodInternal;
    phymod_core_init_config->firmware_loader = NULL;
    if(PHYMOD_E_OK != phymod_firmware_core_config_t_init(&phymod_core_init_config->firmware_core_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("firmware_core_config initialization failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_inf_config_t_init(&phymod_core_init_config->interface)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("interface initialization failed")));
    }

    phymod_core_init_config->flags = 0;
    if(PHYMOD_E_OK != phymod_afe_pll_t_init(&phymod_core_init_config->afe_pll)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("afe_pll initialization failed")));
    }

    phymod_core_init_config->ref_clock = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_core_status_t_validate(const phymod_core_status_t* phymod_core_status)
{        
    if(phymod_core_status == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_core_status_t_init(phymod_core_status_t* phymod_core_status)
{        
    
    if(phymod_core_status == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_core_status NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_core_status, 0, sizeof(phymod_core_status_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_core_init(const phymod_core_access_t* core, const phymod_core_init_config_t* init_config, const phymod_core_status_t* core_status)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_core_access_t_validate(core)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core validation failed")));
    }

    if(PHYMOD_E_OK != phymod_core_init_config_t_validate(init_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("init_config validation failed")));
    }

    if(PHYMOD_E_OK != phymod_core_status_t_validate(core_status)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core_status validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(core,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_core_init) {
        PHYMOD_LOCK_TAKE(core);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_core_init(core, init_config, core_status);
        PHYMOD_LOCK_GIVE(core);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_pll_multiplier_get(const phymod_phy_access_t* phy, uint32_t* core_vco_pll_multiplier)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(core_vco_pll_multiplier == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core_vco_pll_multiplier NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_pll_multiplier_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_pll_multiplier_get(phy, core_vco_pll_multiplier);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_operation_mode_t_validate(phymod_operation_mode_t phymod_operation_mode)
{        
    if(phymod_operation_mode >= phymodOperationModeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_autoneg_link_qualifier_t_validate(phymod_autoneg_link_qualifier_t phymod_autoneg_link_qualifier)
{        
    if(phymod_autoneg_link_qualifier >= phymodAutonegLinkQualifierCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_rx_los_t_validate(const phymod_rx_los_t* phymod_rx_los)
{        
    if(phymod_rx_los == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_rx_los_t_init(phymod_rx_los_t* phymod_rx_los)
{        
    
    if(phymod_rx_los == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_rx_los NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_rx_los, 0, sizeof(phymod_rx_los_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_init_config_t_validate(const phymod_phy_init_config_t* phymod_phy_init_config)
{        
    if(phymod_phy_init_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_polarity_t_validate(&phymod_phy_init_config->polarity)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("polarity validation failed")));
    }

    if(PHYMOD_E_OK != phymod_operation_mode_t_validate(phymod_phy_init_config->op_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("op_mode validation failed")));
    }

    if(PHYMOD_E_OK != phymod_autoneg_link_qualifier_t_validate(phymod_phy_init_config->an_link_qualifier)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_link_qualifier validation failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_inf_config_t_validate(&phymod_phy_init_config->interface)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("interface validation failed")));
    }

    if(PHYMOD_E_OK != phymod_rx_los_t_validate(&phymod_phy_init_config->rx_los)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx_los validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_init_config_t_init(phymod_phy_init_config_t* phymod_phy_init_config)
{
    int _array_iter;
        
    
    if(phymod_phy_init_config == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_phy_init_config NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_phy_init_config, 0, sizeof(phymod_phy_init_config_t));
    if(PHYMOD_E_OK != phymod_polarity_t_init(&phymod_phy_init_config->polarity)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("polarity initialization failed")));
    }

    for(_array_iter = 0 ; _array_iter < PHYMOD_MAX_LANES_PER_CORE ; _array_iter++){
        if(PHYMOD_E_OK != phymod_tx_t_init(&phymod_phy_init_config->tx[_array_iter])) {
            PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx initialization failed")));
        }
    }

    if(PHYMOD_E_OK != phymod_phy_inf_config_t_init(&phymod_phy_init_config->interface)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("interface initialization failed")));
    }

    if(PHYMOD_E_OK != phymod_rx_los_t_init(&phymod_phy_init_config->rx_los)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx_los initialization failed")));
    }

    for(_array_iter = 0 ; _array_iter < PHYMOD_MAX_LANES_PER_CORE ; _array_iter++){
        if(PHYMOD_E_OK != phymod_tx_t_init(&phymod_phy_init_config->ext_phy_tx[_array_iter])) {
            PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("ext_phy_tx initialization failed")));
        }
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_init(const phymod_phy_access_t* phy, const phymod_phy_init_config_t* init_config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_init_config_t_validate(init_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("init_config validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_init) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_init(phy, init_config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_loopback_mode_t_validate(phymod_loopback_mode_t phymod_loopback_mode)
{        
    if(phymod_loopback_mode >= phymodLoopbackCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_loopback_set(const phymod_phy_access_t* phy, phymod_loopback_mode_t loopback, uint32_t enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_loopback_mode_t_validate(loopback)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("loopback validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_loopback_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_loopback_set(phy, loopback, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_loopback_get(const phymod_phy_access_t* phy, phymod_loopback_mode_t loopback, uint32_t* enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_loopback_mode_t_validate(loopback)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("loopback validation failed")));
    }

    if(enable == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("enable NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_loopback_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_loopback_get(phy, loopback, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_rx_pmd_locked_get(const phymod_phy_access_t* phy, uint32_t* rx_pmd_locked)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(rx_pmd_locked == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx_pmd_locked NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_rx_pmd_locked_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_rx_pmd_locked_get(phy, rx_pmd_locked);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_rx_signal_detect_get(const phymod_phy_access_t* phy, uint32_t* rx_signal_detect)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(rx_signal_detect == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx_signal_detect NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_rx_signal_detect_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_rx_signal_detect_get(phy, rx_signal_detect);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_link_status_get(const phymod_phy_access_t* phy, uint32_t* link_status)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(link_status == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("link_status NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_link_status_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_link_status_get(phy, link_status);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_status_dump(const phymod_phy_access_t* phy)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_status_dump) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_status_dump(phy);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_pcs_userspeed_mode_t_validate(phymod_pcs_userspeed_mode_t phymod_pcs_userspeed_mode)
{        
    if(phymod_pcs_userspeed_mode >= phymodPcsUserSpeedModeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_pcs_userspeed_param_t_validate(phymod_pcs_userspeed_param_t phymod_pcs_userspeed_param)
{        
    if(phymod_pcs_userspeed_param >= phymodPcsUserSpeedParamCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_pcs_userspeed_config_t_validate(const phymod_pcs_userspeed_config_t* phymod_pcs_userspeed_config)
{        
    if(phymod_pcs_userspeed_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_pcs_userspeed_mode_t_validate(phymod_pcs_userspeed_config->mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("mode validation failed")));
    }

    if(PHYMOD_E_OK != phymod_pcs_userspeed_param_t_validate(phymod_pcs_userspeed_config->param)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("param validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_pcs_userspeed_config_t_init(phymod_pcs_userspeed_config_t* phymod_pcs_userspeed_config)
{        
    
    if(phymod_pcs_userspeed_config == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_pcs_userspeed_config NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_pcs_userspeed_config, 0, sizeof(phymod_pcs_userspeed_config_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_pcs_userspeed_set(const phymod_phy_access_t* phy, const phymod_pcs_userspeed_config_t* config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_pcs_userspeed_config_t_validate(config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("config validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_pcs_userspeed_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_pcs_userspeed_set(phy, config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_pcs_userspeed_get(const phymod_phy_access_t* phy, phymod_pcs_userspeed_config_t* config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("config NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_pcs_userspeed_config_t_init(config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("config initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_pcs_userspeed_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_pcs_userspeed_get(phy, config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_reg_read(const phymod_phy_access_t* phy, uint32_t reg_addr, uint32_t* val)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(val == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("val NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_reg_read) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_reg_read(phy, reg_addr, val);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_reg_write(const phymod_phy_access_t* phy, uint32_t reg_addr, uint32_t val)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_reg_write) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_reg_write(phy, reg_addr, val);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_private_read(const phymod_phy_access_t* phy, uint32_t addr, uint32_t* val)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(val == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("val NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_private_read) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_private_read(phy, addr, val);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_private_write(const phymod_phy_access_t* phy, uint32_t addr, uint32_t val)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_private_write) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_private_write(phy, addr, val);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_rev_id(const phymod_phy_access_t* phy, uint32_t* rev_id)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(rev_id == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rev_id NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_rev_id) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_rev_id(phy, rev_id);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_lane_cross_switch_map_set(const phymod_phy_access_t* phy, const uint32_t* tx_array)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_lane_cross_switch_map_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_lane_cross_switch_map_set(phy, tx_array);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_lane_cross_switch_map_get(const phymod_phy_access_t* phy, uint32_t* tx_array)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(tx_array == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx_array NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_lane_cross_switch_map_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_lane_cross_switch_map_get(phy, tx_array);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_intr_enable_set(const phymod_phy_access_t* phy, uint32_t enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_intr_enable_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_intr_enable_set(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_intr_enable_get(const phymod_phy_access_t* phy, uint32_t* enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(enable == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("enable NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_intr_enable_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_intr_enable_get(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_intr_status_get(const phymod_phy_access_t* phy, uint32_t* intr_status)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(intr_status == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("intr_status NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_intr_status_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_intr_status_get(phy, intr_status);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_intr_status_clear(const phymod_phy_access_t* phy, uint32_t intr_clr)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_intr_status_clear) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_intr_status_clear(phy, intr_clr);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_i2c_read(const phymod_phy_access_t* phy, uint32_t flags, uint32_t addr, uint32_t offset, uint32_t size, uint8_t* data)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(data == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("data NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_i2c_read) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_i2c_read(phy, flags, addr, offset, size, data);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_i2c_write(const phymod_phy_access_t* phy, uint32_t flags, uint32_t addr, uint32_t offset, uint32_t size, const uint8_t* data)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_i2c_write) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_i2c_write(phy, flags, addr, offset, size, data);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_gpio_mode_t_validate(phymod_gpio_mode_t phymod_gpio_mode)
{        
    if(phymod_gpio_mode >= phymodGpioModeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_gpio_config_set(const phymod_phy_access_t* phy, int pin_no, phymod_gpio_mode_t gpio_mode)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_gpio_mode_t_validate(gpio_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("gpio_mode validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_gpio_config_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_gpio_config_set(phy, pin_no, gpio_mode);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_gpio_config_get(const phymod_phy_access_t* phy, int pin_no, phymod_gpio_mode_t* gpio_mode)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(gpio_mode == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("gpio_mode NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_gpio_config_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_gpio_config_get(phy, pin_no, gpio_mode);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_gpio_pin_value_set(const phymod_phy_access_t* phy, int pin_no, int value)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_gpio_pin_value_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_gpio_pin_value_set(phy, pin_no, value);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_gpio_pin_value_get(const phymod_phy_access_t* phy, int pin_no, int* value)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(value == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("value NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_gpio_pin_value_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_gpio_pin_value_get(phy, pin_no, value);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_osr_mode_t_validate(phymod_osr_mode_t phymod_osr_mode)
{        
    if(phymod_osr_mode >= phymodOversampleModeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_timer_mode_t_validate(phymod_timesync_timer_mode_t phymod_timesync_timer_mode)
{        
    if(phymod_timesync_timer_mode >= phymodTimesyncTimerModeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_global_mode_t_validate(phymod_timesync_global_mode_t phymod_timesync_global_mode)
{        
    if(phymod_timesync_global_mode >= phymodTimesyncGLobalModeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_framesync_mode_t_validate(phymod_timesync_framesync_mode_t phymod_timesync_framesync_mode)
{        
    if(phymod_timesync_framesync_mode >= phymodTimesyncFramsyncModeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_syncout_mode_t_validate(phymod_timesync_syncout_mode_t phymod_timesync_syncout_mode)
{        
    if(phymod_timesync_syncout_mode >= phymodTimesyncSyncoutModeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_event_msg_action_t_validate(phymod_timesync_event_msg_action_t phymod_timesync_event_msg_action)
{        
    if(phymod_timesync_event_msg_action >= phymodTimesyncEventMsgActionCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_timer_adjust_t_validate(const phymod_timesync_timer_adjust_t* phymod_timesync_timer_adjust)
{        
    if(phymod_timesync_timer_adjust == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_timesync_timer_mode_t_validate(phymod_timesync_timer_adjust->mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("mode validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_timer_adjust_t_init(phymod_timesync_timer_adjust_t* phymod_timesync_timer_adjust)
{        
    
    if(phymod_timesync_timer_adjust == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_timesync_timer_adjust NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_timesync_timer_adjust, 0, sizeof(phymod_timesync_timer_adjust_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_inband_ctrl_t_validate(const phymod_timesync_inband_ctrl_t* phymod_timesync_inband_ctrl)
{        
    if(phymod_timesync_inband_ctrl == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_timesync_timer_mode_t_validate(phymod_timesync_inband_ctrl->timer_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("timer_mode validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_inband_ctrl_t_init(phymod_timesync_inband_ctrl_t* phymod_timesync_inband_ctrl)
{        
    
    if(phymod_timesync_inband_ctrl == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_timesync_inband_ctrl NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_timesync_inband_ctrl, 0, sizeof(phymod_timesync_inband_ctrl_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_framesync_t_validate(const phymod_timesync_framesync_t* phymod_timesync_framesync)
{        
    if(phymod_timesync_framesync == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_timesync_framesync_mode_t_validate(phymod_timesync_framesync->mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("mode validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_framesync_t_init(phymod_timesync_framesync_t* phymod_timesync_framesync)
{        
    
    if(phymod_timesync_framesync == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_timesync_framesync NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_timesync_framesync, 0, sizeof(phymod_timesync_framesync_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_syncout_t_validate(const phymod_timesync_syncout_t* phymod_timesync_syncout)
{        
    if(phymod_timesync_syncout == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_syncout_t_init(phymod_timesync_syncout_t* phymod_timesync_syncout)
{        
    
    if(phymod_timesync_syncout == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_timesync_syncout NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_timesync_syncout, 0, sizeof(phymod_timesync_syncout_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_timespec_t_validate(const phymod_timesync_timespec_t* phymod_timesync_timespec)
{        
    if(phymod_timesync_timespec == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_timespec_t_init(phymod_timesync_timespec_t* phymod_timesync_timespec)
{        
    
    if(phymod_timesync_timespec == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_timesync_timespec NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_timesync_timespec, 0, sizeof(phymod_timesync_timespec_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_mpls_label_t_validate(const phymod_timesync_mpls_label_t* phymod_timesync_mpls_label)
{        
    if(phymod_timesync_mpls_label == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_mpls_label_t_init(phymod_timesync_mpls_label_t* phymod_timesync_mpls_label)
{        
    
    if(phymod_timesync_mpls_label == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_timesync_mpls_label NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_timesync_mpls_label, 0, sizeof(phymod_timesync_mpls_label_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_mpls_ctrl_t_validate(const phymod_timesync_mpls_ctrl_t* phymod_timesync_mpls_ctrl)
{        
    if(phymod_timesync_mpls_ctrl == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_mpls_ctrl_t_init(phymod_timesync_mpls_ctrl_t* phymod_timesync_mpls_ctrl)
{
    int _array_iter;
        
    
    if(phymod_timesync_mpls_ctrl == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_timesync_mpls_ctrl NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_timesync_mpls_ctrl, 0, sizeof(phymod_timesync_mpls_ctrl_t));
    for(_array_iter = 0 ; _array_iter < 10 ; _array_iter++){
        if(PHYMOD_E_OK != phymod_timesync_mpls_label_t_init(&phymod_timesync_mpls_ctrl->labels[_array_iter])) {
            PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("labels initialization failed")));
        }
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_config_t_validate(const phymod_timesync_config_t* phymod_timesync_config)
{        
    if(phymod_timesync_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_timesync_timer_adjust_t_validate(&phymod_timesync_config->timer_adjust)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("timer_adjust validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_inband_ctrl_t_validate(&phymod_timesync_config->inband_ctrl)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("inband_ctrl validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_global_mode_t_validate(phymod_timesync_config->gmode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("gmode validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_syncout_t_validate(&phymod_timesync_config->syncout)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("syncout validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_timespec_t_validate(&phymod_timesync_config->original_timecode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("original_timecode validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_event_msg_action_t_validate(phymod_timesync_config->tx_sync_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx_sync_mode validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_event_msg_action_t_validate(phymod_timesync_config->tx_delay_req_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx_delay_req_mode validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_event_msg_action_t_validate(phymod_timesync_config->tx_pdelay_req_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx_pdelay_req_mode validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_event_msg_action_t_validate(phymod_timesync_config->tx_pdelay_resp_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx_pdelay_resp_mode validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_event_msg_action_t_validate(phymod_timesync_config->rx_sync_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx_sync_mode validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_event_msg_action_t_validate(phymod_timesync_config->rx_delay_req_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx_delay_req_mode validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_event_msg_action_t_validate(phymod_timesync_config->rx_pdelay_req_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx_pdelay_req_mode validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_event_msg_action_t_validate(phymod_timesync_config->rx_pdelay_resp_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx_pdelay_resp_mode validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_mpls_ctrl_t_validate(&phymod_timesync_config->mpls_ctrl)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("mpls_ctrl validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_config_t_init(phymod_timesync_config_t* phymod_timesync_config)
{        
    
    if(phymod_timesync_config == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_timesync_config NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_timesync_config, 0, sizeof(phymod_timesync_config_t));
    if(PHYMOD_E_OK != phymod_timesync_timer_adjust_t_init(&phymod_timesync_config->timer_adjust)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("timer_adjust initialization failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_inband_ctrl_t_init(&phymod_timesync_config->inband_ctrl)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("inband_ctrl initialization failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_syncout_t_init(&phymod_timesync_config->syncout)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("syncout initialization failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_timespec_t_init(&phymod_timesync_config->original_timecode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("original_timecode initialization failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_mpls_ctrl_t_init(&phymod_timesync_config->mpls_ctrl)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("mpls_ctrl initialization failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_compensation_mode_t_validate(phymod_timesync_compensation_mode_t phymod_timesync_compensation_mode)
{        
    if(phymod_timesync_compensation_mode >= phymodTimesyncCompensationModeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_timesync_config_set(const phymod_phy_access_t* phy, const phymod_timesync_config_t* config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_config_t_validate(config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("config validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_config_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_config_set(phy, config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_config_get(const phymod_phy_access_t* phy, phymod_timesync_config_t* config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("config NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_timesync_config_t_init(config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("config initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_config_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_config_get(phy, config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_enable_set(const phymod_phy_access_t* phy, uint32_t enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_enable_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_enable_set(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_enable_get(const phymod_phy_access_t* phy, uint32_t* enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(enable == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("enable NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_enable_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_enable_get(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_nco_addend_set(const phymod_phy_access_t* phy, uint32_t freq_step)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_nco_addend_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_nco_addend_set(phy, freq_step);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_nco_addend_get(const phymod_phy_access_t* phy, uint32_t* freq_step)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(freq_step == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("freq_step NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_nco_addend_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_nco_addend_get(phy, freq_step);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_framesync_mode_set(const phymod_phy_access_t* phy, const phymod_timesync_framesync_t* framesync)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_framesync_t_validate(framesync)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("framesync validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_framesync_mode_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_framesync_mode_set(phy, framesync);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_framesync_mode_get(const phymod_phy_access_t* phy, phymod_timesync_framesync_t* framesync)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(framesync == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("framesync NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_timesync_framesync_t_init(framesync)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("framesync initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_framesync_mode_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_framesync_mode_get(phy, framesync);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_local_time_set(const phymod_phy_access_t* phy, uint64_t local_time)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_local_time_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_local_time_set(phy, local_time);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_local_time_get(const phymod_phy_access_t* phy, uint64_t* local_time)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(local_time == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("local_time NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_local_time_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_local_time_get(phy, local_time);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_load_ctrl_set(const phymod_phy_access_t* phy, uint32_t load_once, uint32_t load_always)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_load_ctrl_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_load_ctrl_set(phy, load_once, load_always);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_load_ctrl_get(const phymod_phy_access_t* phy, uint32_t* load_once, uint32_t* load_always)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(load_once == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("load_once NULL parameter")));
    }
    if(load_always == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("load_always NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_load_ctrl_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_load_ctrl_get(phy, load_once, load_always);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_tx_timestamp_offset_set(const phymod_phy_access_t* phy, uint32_t ts_offset)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_tx_timestamp_offset_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_tx_timestamp_offset_set(phy, ts_offset);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_tx_timestamp_offset_get(const phymod_phy_access_t* phy, uint32_t* ts_offset)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(ts_offset == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("ts_offset NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_tx_timestamp_offset_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_tx_timestamp_offset_get(phy, ts_offset);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_rx_timestamp_offset_set(const phymod_phy_access_t* phy, uint32_t ts_offset)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_rx_timestamp_offset_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_rx_timestamp_offset_set(phy, ts_offset);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_rx_timestamp_offset_get(const phymod_phy_access_t* phy, uint32_t* ts_offset)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(ts_offset == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("ts_offset NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_rx_timestamp_offset_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_rx_timestamp_offset_get(phy, ts_offset);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_capture_timestamp_get(const phymod_phy_access_t* phy, uint64_t* cap_ts)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(cap_ts == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("cap_ts NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_capture_timestamp_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_capture_timestamp_get(phy, cap_ts);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_heartbeat_timestamp_get(const phymod_phy_access_t* phy, uint64_t* hb_ts)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(hb_ts == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("hb_ts NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_heartbeat_timestamp_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_heartbeat_timestamp_get(phy, hb_ts);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_do_sync(const phymod_phy_access_t* phy)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_do_sync) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_do_sync(phy);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_offset_set(const phymod_core_access_t* core, uint32_t ts_offset)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_core_access_t_validate(core)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(core,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_offset_set) {
        PHYMOD_LOCK_TAKE(core);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_offset_set(core, ts_offset);
        PHYMOD_LOCK_GIVE(core);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_timesync_adjust_set(const phymod_phy_access_t* phy, phymod_timesync_compensation_mode_t ts_am_norm_mode)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_timesync_compensation_mode_t_validate(ts_am_norm_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("ts_am_norm_mode validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_timesync_adjust_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_timesync_adjust_set(phy, ts_am_norm_mode);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_edc_config_method_t_validate(phymod_edc_config_method_t phymod_edc_config_method)
{        
    if(phymod_edc_config_method >= phymodEdcConfigMethodCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_edc_config_t_validate(const phymod_edc_config_t* phymod_edc_config)
{        
    if(phymod_edc_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_edc_config_method_t_validate(phymod_edc_config->method)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("method validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_edc_config_t_init(phymod_edc_config_t* phymod_edc_config)
{        
    
    if(phymod_edc_config == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_edc_config NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_edc_config, 0, sizeof(phymod_edc_config_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_edc_config_set(const phymod_phy_access_t* phy, const phymod_edc_config_t* edc_config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_edc_config_t_validate(edc_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("edc_config validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_edc_config_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_edc_config_set(phy, edc_config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_edc_config_get(const phymod_phy_access_t* phy, phymod_edc_config_t* edc_config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(edc_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("edc_config NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_edc_config_t_init(edc_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("edc_config initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_edc_config_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_edc_config_get(phy, edc_config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_core_mode_t_validate(phymod_core_mode_t phymod_core_mode)
{        
    if(phymod_core_mode >= phymodCoreModeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_core_mode_set(const phymod_phy_access_t* phy, phymod_core_mode_t core_mode)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_core_mode_t_validate(core_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core_mode validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_core_mode_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_core_mode_set(phy, core_mode);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_core_mode_get(const phymod_phy_access_t* phy, phymod_core_mode_t* core_mode)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(core_mode == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("core_mode NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_core_mode_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_core_mode_get(phy, core_mode);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_failover_mode_t_validate(phymod_failover_mode_t phymod_failover_mode)
{        
    if(phymod_failover_mode >= phymodFailovermodeCount) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_failover_mode_set(const phymod_phy_access_t* phy, phymod_failover_mode_t failover_mode)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_failover_mode_t_validate(failover_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("failover_mode validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_failover_mode_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_failover_mode_set(phy, failover_mode);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_failover_mode_get(const phymod_phy_access_t* phy, phymod_failover_mode_t* failover_mode)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(failover_mode == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("failover_mode NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_failover_mode_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_failover_mode_get(phy, failover_mode);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_port_init(const phymod_phy_access_t* phy, const phymod_port_config_t* port_config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_port_config_t_validate(port_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("port_config validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_port_init) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_port_init(phy, port_config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_an_try_enable_control_t_validate(const phymod_an_try_enable_control_t* phymod_an_try_enable_control)
{        
    if(phymod_an_try_enable_control == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_an_mode_type_t_validate(phymod_an_try_enable_control->an_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_mode validation failed")));
    }

    switch(phymod_an_try_enable_control->enable) {
        case 0:
        case 1:
            break;
        default:
            PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("enable not allowed value")));
            break;
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_an_try_enable_control_t_init(phymod_an_try_enable_control_t* phymod_an_try_enable_control)
{        
    
    if(phymod_an_try_enable_control == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_an_try_enable_control NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_an_try_enable_control, 0, sizeof(phymod_an_try_enable_control_t));
    phymod_an_try_enable_control->an_mode = 0;
    phymod_an_try_enable_control->num_lane_adv = 0;
    phymod_an_try_enable_control->flags = 0;
    phymod_an_try_enable_control->enable = 0;
    phymod_an_try_enable_control->speed = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_an_status_t_validate(const phymod_phy_an_status_t* phymod_phy_an_status)
{        
    if(phymod_phy_an_status == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_an_status_t_init(phymod_phy_an_status_t* phymod_phy_an_status)
{        
    
    if(phymod_phy_an_status == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_phy_an_status NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_phy_an_status, 0, sizeof(phymod_phy_an_status_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_autoneg_try_enable(const phymod_phy_access_t* phy, const phymod_an_try_enable_control_t* an, phymod_phy_an_status_t* an_status)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_an_try_enable_control_t_validate(an)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an validation failed")));
    }

    if(an_status == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_status NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_phy_an_status_t_init(an_status)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_status initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_try_enable) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_try_enable(phy, an, an_status);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_debug_ether(const phymod_phy_access_t* phy)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_debug_ether) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_debug_ether(phy);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_reset_interface(const phymod_phy_access_t* phy)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_reset_interface) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_reset_interface(phy);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_short_chn_mode_enable_set(const phymod_phy_access_t* phy, uint32_t enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_short_chn_mode_enable_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_short_chn_mode_enable_set(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_short_chn_mode_enable_get(const phymod_phy_access_t* phy, uint32_t* enable, uint32_t* status)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(enable == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("enable NULL parameter")));
    }
    if(status == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("status NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_short_chn_mode_enable_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_short_chn_mode_enable_get(phy, enable, status);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_port_enable_set(const phymod_phy_access_t* phy, uint32_t enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_port_enable_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_port_enable_set(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_port_enable_get(const phymod_phy_access_t* phy, uint32_t* enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(enable == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("enable NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_port_enable_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_port_enable_get(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_eye_margin_mode_t_validate(phymod_eye_margin_mode_t phymod_eye_margin_mode)
{        
    if(phymod_eye_margin_mode >= phymod_eye_marign_Count) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_eye_margin_est_get(const phymod_phy_access_t* phy, phymod_eye_margin_mode_t eye_margin_mode, uint32_t* value)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_eye_margin_mode_t_validate(eye_margin_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("eye_margin_mode validation failed")));
    }

    if(value == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("value NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_eye_margin_est_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_eye_margin_est_get(phy, eye_margin_mode, value);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_multi_data_t_validate(const phymod_multi_data_t* phymod_multi_data)
{        
    if(phymod_multi_data == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_multi_data_t_init(phymod_multi_data_t* phymod_multi_data)
{        
    
    if(phymod_multi_data == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_multi_data NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_multi_data, 0, sizeof(phymod_multi_data_t));

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_multi_get(const phymod_phy_access_t* phy, phymod_multi_data_t* multi_data)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(multi_data == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("multi_data NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_multi_data_t_validate(multi_data)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("multi_data validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_multi_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_multi_get(phy, multi_data);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_tsce_pll_multiplier_t_validate(phymod_tsce_pll_multiplier_t phymod_tsce_pll_multiplier)
{        
    if(phymod_tsce_pll_multiplier >= phymod_TSCE_PLL_Count) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_tscf_pll_multiplier_t_validate(phymod_tscf_pll_multiplier_t phymod_tscf_pll_multiplier)
{        
    if(phymod_tscf_pll_multiplier >= phymod_TSCF_PLL_Count) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_tscbh_pll_multiplier_t_validate(phymod_tscbh_pll_multiplier_t phymod_tscbh_pll_multiplier)
{        
    if(phymod_tscbh_pll_multiplier >= phymod_TSCBH_PLL_Count) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_rescal_set(const phymod_phy_access_t* phy, uint32_t enable, uint32_t value)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_rescal_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_rescal_set(phy, enable, value);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_rescal_get(const phymod_phy_access_t* phy, uint32_t* value)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(value == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("value NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_rescal_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_rescal_get(phy, value);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_an_page_t_validate(const phymod_an_page_t* phymod_an_page)
{        
    if(phymod_an_page == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_an_page_t_init(phymod_an_page_t* phymod_an_page)
{        
    
    if(phymod_an_page == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_an_page NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_an_page, 0, sizeof(phymod_an_page_t));
    phymod_an_page->page_0 = 0;
    phymod_an_page->page_1 = 0;
    phymod_an_page->page_2 = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_sw_an_ctrl_status_t_validate(const phymod_sw_an_ctrl_status_t* phymod_sw_an_ctrl_status)
{        
    if(phymod_sw_an_ctrl_status == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_sw_an_ctrl_status_t_init(phymod_sw_an_ctrl_status_t* phymod_sw_an_ctrl_status)
{        
    
    if(phymod_sw_an_ctrl_status == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_sw_an_ctrl_status NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_sw_an_ctrl_status, 0, sizeof(phymod_sw_an_ctrl_status_t));
    phymod_sw_an_ctrl_status->seq_restart = 0;
    phymod_sw_an_ctrl_status->lp_page_rdy = 0;
    phymod_sw_an_ctrl_status->page_req = 0;
    phymod_sw_an_ctrl_status->an_completed = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_an_pages_t_validate(const phymod_an_pages_t* phymod_an_pages)
{        
    if(phymod_an_pages == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_an_page_t_validate(&phymod_an_pages->base_page)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("base_page validation failed")));
    }

    if(PHYMOD_E_OK != phymod_an_page_t_validate(&phymod_an_pages->msg_page)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("msg_page validation failed")));
    }

    if(PHYMOD_E_OK != phymod_an_page_t_validate(&phymod_an_pages->ufmt_page)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("ufmt_page validation failed")));
    }

    if(PHYMOD_E_OK != phymod_an_page_t_validate(&phymod_an_pages->null_page)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("null_page validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_an_pages_t_init(phymod_an_pages_t* phymod_an_pages)
{        
    
    if(phymod_an_pages == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_an_pages NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_an_pages, 0, sizeof(phymod_an_pages_t));
    if(PHYMOD_E_OK != phymod_an_page_t_init(&phymod_an_pages->base_page)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("base_page initialization failed")));
    }

    if(PHYMOD_E_OK != phymod_an_page_t_init(&phymod_an_pages->msg_page)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("msg_page initialization failed")));
    }

    if(PHYMOD_E_OK != phymod_an_page_t_init(&phymod_an_pages->ufmt_page)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("ufmt_page initialization failed")));
    }

    if(PHYMOD_E_OK != phymod_an_page_t_init(&phymod_an_pages->null_page)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("null_page initialization failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_sw_an_ctxt_t_validate(const phymod_sw_an_ctxt_t* phymod_sw_an_ctxt)
{        
    if(phymod_sw_an_ctxt == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_an_pages_t_validate(&phymod_sw_an_ctxt->tx_pages)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx_pages validation failed")));
    }

    if(PHYMOD_E_OK != phymod_an_pages_t_validate(&phymod_sw_an_ctxt->rx_pages)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx_pages validation failed")));
    }

    if(PHYMOD_E_OK != phymod_an_mode_type_t_validate(phymod_sw_an_ctxt->an_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_mode validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_sw_an_ctxt_t_init(phymod_sw_an_ctxt_t* phymod_sw_an_ctxt)
{        
    
    if(phymod_sw_an_ctxt == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_sw_an_ctxt NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_sw_an_ctxt, 0, sizeof(phymod_sw_an_ctxt_t));
    if(PHYMOD_E_OK != phymod_an_pages_t_init(&phymod_sw_an_ctxt->tx_pages)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx_pages initialization failed")));
    }

    if(PHYMOD_E_OK != phymod_an_pages_t_init(&phymod_sw_an_ctxt->rx_pages)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("rx_pages initialization failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_sw_an_control_status_get(const phymod_phy_access_t* phy, phymod_sw_an_ctrl_status_t* an_ctrl_status)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(an_ctrl_status == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_ctrl_status NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_sw_an_ctrl_status_t_init(an_ctrl_status)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_ctrl_status initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_sw_an_control_status_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_sw_an_control_status_get(phy, an_ctrl_status);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_sw_an_base_page_exchange_handler(const phymod_phy_access_t* phy, phymod_sw_an_ctxt_t* an_ctxt)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(an_ctxt == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_ctxt NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_sw_an_ctxt_t_validate(an_ctxt)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_ctxt validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_sw_an_base_page_exchange_handler) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_sw_an_base_page_exchange_handler(phy, an_ctxt);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_sw_an_lp_page_rdy_handler(const phymod_phy_access_t* phy, phymod_sw_an_ctxt_t* an_ctxt)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(an_ctxt == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_ctxt NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_sw_an_ctxt_t_validate(an_ctxt)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_ctxt validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_sw_an_lp_page_rdy_handler) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_sw_an_lp_page_rdy_handler(phy, an_ctxt);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_sw_an_advert_set(const phymod_phy_access_t* phy, const phymod_autoneg_ability_t* an_ability_set_type, phymod_sw_an_ctxt_t* an_ctxt)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_autoneg_ability_t_validate(an_ability_set_type)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_ability_set_type validation failed")));
    }

    if(an_ctxt == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_ctxt NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_sw_an_ctxt_t_validate(an_ctxt)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_ctxt validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_sw_an_advert_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_sw_an_advert_set(phy, an_ability_set_type, an_ctxt);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_sw_autoneg_enable(const phymod_phy_access_t* phy, int enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_sw_autoneg_enable) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_sw_autoneg_enable(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_fec_type_t_validate(phymod_fec_type_t phymod_fec_type)
{        
    if(phymod_fec_type >= phymod_fec_Count) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_dfe_mode_t_validate(phymod_dfe_mode_t phymod_dfe_mode)
{        
    if(phymod_dfe_mode >= phymod_dfe_Count) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_speed_config_t_validate(const phymod_phy_speed_config_t* phymod_phy_speed_config)
{        
    if(phymod_phy_speed_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_fec_type_t_validate(phymod_phy_speed_config->fec_type)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("fec_type validation failed")));
    }

    if(PHYMOD_E_OK != phymod_firmware_lane_config_t_validate(&phymod_phy_speed_config->pmd_lane_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("pmd_lane_config validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_speed_config_t_init(phymod_phy_speed_config_t* phymod_phy_speed_config)
{        
    
    if(phymod_phy_speed_config == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_phy_speed_config NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_phy_speed_config, 0, sizeof(phymod_phy_speed_config_t));
    phymod_phy_speed_config->data_rate = 0;
    phymod_phy_speed_config->fec_type = 0;
    phymod_phy_speed_config->linkTraining = 0;
    phymod_phy_speed_config->flags = 0;
    phymod_phy_speed_config->PAM4_channel_loss = 0;
    if(PHYMOD_E_OK != phymod_firmware_lane_config_t_init(&phymod_phy_speed_config->pmd_lane_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("pmd_lane_config initialization failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_pll_state_t_validate(const phymod_phy_pll_state_t* phymod_phy_pll_state)
{        
    if(phymod_phy_pll_state == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_pll_state_t_init(phymod_phy_pll_state_t* phymod_phy_pll_state)
{        
    
    if(phymod_phy_pll_state == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_phy_pll_state NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_phy_pll_state, 0, sizeof(phymod_phy_pll_state_t));
    phymod_phy_pll_state->pll0_lanes_bitmap = 0;
    phymod_phy_pll_state->pll1_lanes_bitmap = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_speed_config_set(const phymod_phy_access_t* phy, const phymod_phy_speed_config_t* speed_config, const phymod_phy_pll_state_t* old_pll_state, phymod_phy_pll_state_t* new_pll_state)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_speed_config_t_validate(speed_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("speed_config validation failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_pll_state_t_validate(old_pll_state)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("old_pll_state validation failed")));
    }

    if(new_pll_state == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("new_pll_state NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_phy_pll_state_t_init(new_pll_state)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("new_pll_state initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_speed_config_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_speed_config_set(phy, speed_config, old_pll_state, new_pll_state);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_speed_config_get(const phymod_phy_access_t* phy, phymod_phy_speed_config_t* speed_config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(speed_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("speed_config NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_phy_speed_config_t_init(speed_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("speed_config initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_speed_config_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_speed_config_get(phy, speed_config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_op_mode_get(const phymod_phy_access_t* phy, phymod_operation_mode_t* op_mode)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(op_mode == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("op_mode NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_op_mode_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_op_mode_get(phy, op_mode);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_dual_plls_t_validate(const phymod_dual_plls_t* phymod_dual_plls)
{        
    if(phymod_dual_plls == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_dual_plls_t_init(phymod_dual_plls_t* phymod_dual_plls)
{        
    
    if(phymod_dual_plls == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_dual_plls NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_dual_plls, 0, sizeof(phymod_dual_plls_t));
    phymod_dual_plls->pll0_div = 0;
    phymod_dual_plls->pll1_div = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_tx_taps_default_get(const phymod_phy_access_t* phy, phymod_phy_signalling_method_t mode, phymod_tx_t* tx)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_signalling_method_t_validate(mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("mode validation failed")));
    }

    if(tx == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_tx_t_init(tx)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("tx initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_tx_taps_default_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_tx_taps_default_get(phy, mode, tx);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_lane_config_default_get(const phymod_phy_access_t* phy, phymod_phy_signalling_method_t mode, phymod_firmware_lane_config_t* lane_config)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_signalling_method_t_validate(mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("mode validation failed")));
    }

    if(lane_config == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("lane_config NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_firmware_lane_config_t_init(lane_config)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("lane_config initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_lane_config_default_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_lane_config_default_get(phy, mode, lane_config);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_firmware_load_info_t_validate(const phymod_firmware_load_info_t* phymod_firmware_load_info)
{        
    if(phymod_firmware_load_info == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_firmware_load_info_t_init(phymod_firmware_load_info_t* phymod_firmware_load_info)
{        
    
    if(phymod_firmware_load_info == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_firmware_load_info NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_firmware_load_info, 0, sizeof(phymod_firmware_load_info_t));
    phymod_firmware_load_info->ucode_ptr = NULL;
    phymod_firmware_load_info->ucode_len = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_firmware_load_info_get(const phymod_phy_access_t* phy, phymod_firmware_load_info_t* info)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(info == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("info NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_firmware_load_info_t_init(info)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("info initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_firmware_load_info_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_firmware_load_info_get(phy, info);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_pause_type_t_validate(phymod_pause_type_t phymod_pause_type)
{        
    if(phymod_pause_type >= phymod_pause_Count) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_channel_type_t_validate(phymod_channel_type_t phymod_channel_type)
{        
    if(phymod_channel_type >= phymod_channel_Count) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Parameter is out of range")));
    }
        
    return PHYMOD_E_NONE;
    
}

int phymod_autoneg_advert_ability_t_validate(const phymod_autoneg_advert_ability_t* phymod_autoneg_advert_ability)
{        
    if(phymod_autoneg_advert_ability == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_fec_type_t_validate(phymod_autoneg_advert_ability->fec)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("fec validation failed")));
    }

    if(PHYMOD_E_OK != phymod_pause_type_t_validate(phymod_autoneg_advert_ability->pause)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("pause validation failed")));
    }

    if(PHYMOD_E_OK != phymod_firmware_media_type_t_validate(phymod_autoneg_advert_ability->medium)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("medium validation failed")));
    }

    if(PHYMOD_E_OK != phymod_an_mode_type_t_validate(phymod_autoneg_advert_ability->an_mode)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_mode validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_autoneg_advert_ability_t_init(phymod_autoneg_advert_ability_t* phymod_autoneg_advert_ability)
{        
    
    if(phymod_autoneg_advert_ability == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_autoneg_advert_ability NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_autoneg_advert_ability, 0, sizeof(phymod_autoneg_advert_ability_t));
    phymod_autoneg_advert_ability->speed = 0;
    phymod_autoneg_advert_ability->resolved_num_lanes = 0;
    phymod_autoneg_advert_ability->fec = 0;
    phymod_autoneg_advert_ability->pause = 0;
    phymod_autoneg_advert_ability->medium = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_autoneg_advert_abilities_t_validate(const phymod_autoneg_advert_abilities_t* phymod_autoneg_advert_abilities)
{        
    if(phymod_autoneg_advert_abilities == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("NULL parameter")));
    }

    if(PHYMOD_E_OK != phymod_autoneg_advert_ability_t_validate(phymod_autoneg_advert_abilities->autoneg_abilities)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("autoneg_abilities validation failed")));
    }


        
    return PHYMOD_E_NONE;
    
}

int phymod_autoneg_advert_abilities_t_init(phymod_autoneg_advert_abilities_t* phymod_autoneg_advert_abilities)
{        
    
    if(phymod_autoneg_advert_abilities == NULL){
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phymod_autoneg_advert_abilities NULL parameter")));
    }
    PHYMOD_MEMSET(phymod_autoneg_advert_abilities, 0, sizeof(phymod_autoneg_advert_abilities_t));
    phymod_autoneg_advert_abilities->num_abilities = 0;

        
    return PHYMOD_E_NONE;
    
}

int phymod_phy_autoneg_advert_ability_set(const phymod_phy_access_t* phy, const phymod_autoneg_advert_abilities_t* an_advert_abilities, const phymod_phy_pll_state_t* old_pll_adv_state, phymod_phy_pll_state_t* new_pll_adv_state)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(PHYMOD_E_OK != phymod_autoneg_advert_abilities_t_validate(an_advert_abilities)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_advert_abilities validation failed")));
    }

    if(PHYMOD_E_OK != phymod_phy_pll_state_t_validate(old_pll_adv_state)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("old_pll_adv_state validation failed")));
    }

    if(new_pll_adv_state == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("new_pll_adv_state NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_phy_pll_state_t_init(new_pll_adv_state)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("new_pll_adv_state initialization failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_advert_ability_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_advert_ability_set(phy, an_advert_abilities, old_pll_adv_state, new_pll_adv_state);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_autoneg_advert_ability_get(const phymod_phy_access_t* phy, phymod_autoneg_advert_abilities_t* an_advert_abilities)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(an_advert_abilities == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_advert_abilities NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_autoneg_advert_abilities_t_validate(an_advert_abilities)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_advert_abilities validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_advert_ability_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_advert_ability_get(phy, an_advert_abilities);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_autoneg_remote_advert_ability_get(const phymod_phy_access_t* phy, phymod_autoneg_advert_abilities_t* an_advert_abilities)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(an_advert_abilities == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_advert_abilities NULL parameter")));
    }
    if(PHYMOD_E_OK != phymod_autoneg_advert_abilities_t_validate(an_advert_abilities)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("an_advert_abilities validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_remote_advert_ability_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_autoneg_remote_advert_ability_get(phy, an_advert_abilities);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_bond_in_pwrdn_override(const phymod_phy_access_t* phy, uint32_t enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_bond_in_pwrdn_override) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_bond_in_pwrdn_override(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_tx_pam4_precoder_enable_set(const phymod_phy_access_t* phy, int enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_tx_pam4_precoder_enable_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_tx_pam4_precoder_enable_set(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_tx_pam4_precoder_enable_get(const phymod_phy_access_t* phy, int* enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(enable == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("enable NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_tx_pam4_precoder_enable_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_tx_pam4_precoder_enable_get(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_tx_phase_lock_set(const phymod_phy_access_t* phy, uint8_t enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_tx_phase_lock_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_tx_phase_lock_set(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_plls_reconfig(const phymod_phy_access_t* phy, uint32_t num_plls, const uint32_t* plls)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_plls_reconfig) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_plls_reconfig(phy, num_plls, plls);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        return PHYMOD_E_UNAVAIL;
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_linkdown_transmit_set(const phymod_phy_access_t* phy, uint32_t enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_linkdown_transmit_set) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_linkdown_transmit_set(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_UNAVAIL, (_PHYMOD_MSG("phymod_phy_linkdown_transmit_set isn't implemented for driver type")));
    }
        
    return PHYMOD_E_NONE;
    
}


int phymod_phy_linkdown_transmit_get(const phymod_phy_access_t* phy, uint32_t* enable)
{

    phymod_dispatch_type_t __type__;
    int __rv__;        
    
    if(PHYMOD_E_OK != phymod_phy_access_t_validate(phy)) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("phy validation failed")));
    }

    if(enable == NULL) {
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("enable NULL parameter")));
    }
    /* Dispatch */
    PHYMOD_DRIVER_TYPE_GET(phy,&__type__);
    if(__type__ >= phymodDispatchTypeCount) { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_PARAM, (_PHYMOD_MSG("Driver is out of range")));
    }

    if(NULL != __phymod__dispatch__[__type__]->f_phymod_phy_linkdown_transmit_get) {
        PHYMOD_LOCK_TAKE(phy);
        __rv__ = __phymod__dispatch__[__type__]->f_phymod_phy_linkdown_transmit_get(phy, enable);
        PHYMOD_LOCK_GIVE(phy);
        PHYMOD_IF_ERR_RETURN(__rv__);
    } else { 
        PHYMOD_RETURN_WITH_ERR(PHYMOD_E_UNAVAIL, (_PHYMOD_MSG("phymod_phy_linkdown_transmit_get isn't implemented for driver type")));
    }
        
    return PHYMOD_E_NONE;
    
}


