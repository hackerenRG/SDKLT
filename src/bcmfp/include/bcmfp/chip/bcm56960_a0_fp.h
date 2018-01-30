/*! \file bcm56960_a0_fp.h
 *
 * Tomahawk(56960_A0) specific functions assigned to common function pointers.
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

#ifndef BCM56960_A0_FP_H
#define BCM56960_A0_FP_H

extern int
bcmfp_bcm56960_a0_fn_ptrs_init(int unit,
                               bcmfp_stage_id_t stage_id);
extern int
bcmfp_bcm56960_a0_ext_codes_init(int unit,
                                 bcmfp_group_t *fg,
                                 uint8_t part,
                                 bcmdrd_sid_t kgp_sid,
                                 uint32_t *kgp_entry);
extern int
bcmfp_bcm56960_a0_ingress_ext_cfg_db_init(int unit,
                                          bcmfp_stage_t *stage);

extern int
bcmfp_bcm56960_a0_ingress_action_cfg_db_init(int unit,
                                             bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_ingress_action_cfg_conflict_check(int unit,
                                                    bcmfp_action_t action1,
                                                    bcmfp_action_t action);
extern int
bcmfp_bcm56960_a0_vlan_action_cfg_conflict_check(int unit,
                                                 bcmfp_action_t action1,
                                                 bcmfp_action_t action);
extern int
bcmfp_bcm56960_a0_egress_action_cfg_conflict_check(int unit,
                                                   bcmfp_action_t action1,
                                                   bcmfp_action_t action);
extern int
bcmfp_bcm56960_a0_ingress_qual_cfg_db_init(int unit,
                                           bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_ingress_presel_qual_cfg_db_init(int unit,
                                                  bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_ingress_presel_action_cfg_db_init(int unit,
                                                    bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_ingress_stage_init(int unit,
                                     bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_ingress_qual_enum_set(int unit,
                                        bcmfp_qual_t qual,
                                        int value,
                                        uint32_t *data,
                                        uint32_t *mask);
extern int
bcmfp_bcm56960_a0_ingress_qual_enum_get(int unit,
                                        bcmfp_qual_t qual,
                                        uint32_t data,
                                        uint32_t mask,
                                        int *value);
extern int
bcmfp_bcm56960_a0_em_src_class_mode_set(int unit,
                                        uint32_t trans_id,
                                        bcmltd_sid_t sid,
                                        int pipe_id,
                                        uint32_t mode);
extern int
bcmfp_bcm56960_a0_ingress_src_class_mode_set(int unit,
                                     uint32_t trans_id,
                                     bcmltd_sid_t sid,
                                     int pipe_id,
                                     uint32_t mode);
extern int
bcmfp_bcm56960_a0_vlan_qual_enum_set(int unit,
                                     bcmfp_qual_t qual,
                                     int value,
                                     uint32_t *data,
                                     uint32_t *mask);
extern int
bcmfp_bcm56960_a0_vlan_qual_enum_get(int unit,
                                     bcmfp_qual_t qual,
                                     uint32_t data,
                                     uint32_t mask,
                                     int *value);
extern int
bcmfp_bcm56960_a0_egress_qual_enum_set(int unit,
                                       bcmfp_qual_t qual,
                                       int value,
                                       uint32_t *data,
                                       uint32_t *mask);
extern int
bcmfp_bcm56960_a0_egress_qual_enum_get(int unit,
                                       bcmfp_qual_t qual,
                                       uint32_t data,
                                       uint32_t mask,
                                       int *value);
extern int
bcmfp_bcm56960_a0_common_qual_ip_type_set(int unit,
                                          int type,
                                          uint32_t *data,
                                          uint32_t *mask);
extern int
bcmfp_bcm56960_a0_common_qual_ip_type_get(int unit,
                                          uint32_t data,
                                          uint32_t mask,
                                          int *type);
extern int
bcmfp_bcm56960_a0_common_qual_l2format_set(int unit,
                                           int type,
                                           uint32_t *data,
                                           uint32_t *mask);
extern int
bcmfp_bcm56960_a0_common_qual_l2format_get(int unit,
                                           uint32_t data,
                                           uint32_t mask,
                                           int *type);
extern int
bcmfp_bcm56960_a0_common_qual_innertpid_set(int unit,
                                            int tpid,
                                            uint32_t *data,
                                            uint32_t *mask);
extern int
bcmfp_bcm56960_a0_common_qual_innertpid_get(int unit,
                                            uint32_t data,
                                            uint32_t mask,
                                            int *tpid);
extern int
bcmfp_bcm56960_a0_common_qual_outertpid_set(int unit,
                                            int tpid,
                                            uint32_t *data,
                                            uint32_t *mask);
extern int
bcmfp_bcm56960_a0_common_qual_outertpid_get(int unit,
                                            uint32_t data,
                                            uint32_t mask,
                                            int *tpid);
extern int
bcmfp_bcm56960_a0_common_qual_ipfrag_set(int unit,
                                         int frag_info,
                                         uint32_t *data,
                                         uint32_t *mask);
extern int
bcmfp_bcm56960_a0_common_qual_ipfrag_get(int unit,
                                         uint32_t data,
                                         uint32_t mask,
                                         int *frag_info);
extern int
bcmfp_bcm56960_a0_common_qual_color_set(int unit,
                                        int frag_info,
                                        uint32_t *data,
                                        uint32_t *mask);
extern int
bcmfp_bcm56960_a0_common_qual_color_get(int unit,
                                        uint32_t data,
                                        uint32_t mask,
                                        int *frag_info);
extern int
bcmfp_bcm56960_a0_common_qual_forwardingtype_set(int unit,
                                                 int frag_info,
                                                 uint32_t *data,
                                                 uint32_t *mask);
extern int
bcmfp_bcm56960_a0_common_qual_forwardingtype_get(int unit,
                                                 uint32_t data,
                                                 uint32_t mask,
                                                 int *frag_info);
extern int
bcmfp_bcm56960_a0_ingress_group_install(int unit, uint32_t trans_id,
                                        bcmfp_group_t *fg);
extern int
bcmfp_bcm56960_a0_ingress_group_uninstall(int unit, uint32_t trans_id,
                                          bcmfp_group_id_t group_id);
extern int
bcmfp_bcm56960_a0_ingress_udf_qual_id_get(int unit,
                                          uint8_t udf_chunk_id,
                                          bcmfp_qual_t *qual_id);
extern int
bcmfp_bcm56960_a0_vlan_action_cfg_db_init(int unit,
                                          bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_vlan_qual_cfg_db_init(int unit,
                                        bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_vlan_stage_init(int unit,
                                  bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_vlan_udf_qual_id_get(int unit,
                                       uint8_t udf_chunk_id,
                                       bcmfp_qual_t *qual_id);
extern int
bcmfp_bcm56960_a0_egress_qual_cfg_db_init(int unit,
                                          bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_egress_action_cfg_db_init(int unit,
                                          bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_egress_stage_init(int unit,
                                    bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_egress_group_selcode_key_get(int unit,
                                               bcmfp_group_t *fg);
extern int
bcmfp_bcm56960_a0_egress_entry_key_match_type_set(int unit,
                               bcmfp_stage_t *stage,
                               bcmfp_group_id_t group_id,
                               bcmfp_group_slice_mode_t slice_mode,
                               bcmfp_group_type_t  port_pkt_type,
                               uint32_t **ekw);
extern int
bcmfp_bcm56960_a0_em_ext_cfg_db_init(int unit,
                                          bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_exactmatch_stage_init(int unit,
                               bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_em_presel_qual_cfg_db_init(int unit,
                               bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_em_presel_action_cfg_db_init(int unit,
                               bcmfp_stage_t *stage);
extern int
bcmfp_bcm56960_a0_em_group_install(int unit, uint32_t trans_id,
                               bcmfp_group_t *fg);
extern int
bcmfp_bcm56960_a0_em_group_uninstall(int unit, uint32_t trans_id,
                               bcmfp_group_id_t group_id);
extern int
bcmfp_bcm56960_a0_em_action_profile_install(int unit,
                                uint32_t trans_id,
                                bcmfp_group_t *fg);
extern int
bcmfp_bcm56960_a0_em_action_profile_uninstall(int unit,
                                uint32_t trans_id,
                                bcmfp_group_id_t group_id);
extern int
bcmfp_bcm56960_a0_entry_qos_profile_install(int unit,
                                uint32_t trans_id,
                                uint32_t stage_id,
                                bcmltd_sid_t ltid,
                                int pipe_id,
                                uint32_t flag,
                                bcmfp_group_id_t group_id,
                                uint32_t *prof_1_data,
                                uint32_t *prof_2_data,
                                int *qos_prof_idx);
extern int
bcmfp_bcm56960_a0_entry_qos_profile_uninstall(int unit,
                                uint32_t trans_id,
                                bcmfp_group_id_t group_id,
                                int qos_prof_idx);
extern int
bcmfp_bcm56960_a0_entry_qos_profile_id_get(int unit,
                                uint32_t trans_id,
                                bcmfp_group_id_t group_id,
                                uint32_t **edw,
                                int *qos_prof_idx);
extern int
bcmfp_bcm56960_a0_custom_entry_set(int unit,
                               uint32_t trans_id,
                               bcmfp_group_id_t group_id,
                               bool only_ekw,
                               int qos_prof_idx,
                               int em_class_id,
                               uint32_t **ekw,
                               uint32_t **edw);
extern int
bcmfp_bcm56960_a0_default_policy_install(int unit,
                               uint32_t trans_id,
                               bcmfp_group_t *fg,
                               int qos_prof_idx,
                               int em_class_id,
                               uint32_t **edw);
extern int
bcmfp_bcm56960_a0_default_policy_uninstall(int unit,
                                           uint32_t trans_id,
                                           bcmfp_group_id_t group_id,
                                           int default_policy_idx);

#endif /* BCM56960_A0_FP_H */
