/*! \file rm_tcam_prio_only.h
 *
 * Utils, defines internal to RM-TCAM-PRIO-ONLY TCAM
 * This file contains utils, defines which are internal to
 * TCAM resource manager(i.e. these are not visible outside RM-TCAM)
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

#ifndef RM_TCAM_PRIO_ONLY_H
#define RM_TCAM_PRIO_ONLY_H

/*******************************************************************************
 * Typedefs
 */
/*! Meta data of pri_key(priority and TCAM entry key) based TCAM entries. */
typedef struct bcmptm_rm_tcam_prio_only_entry_info_s {

    /*! TCAM entry priority set by the application layer. */
    int entry_pri;

    /*! Offset to TCAM entry information which has same hash as this TCAM
     *\n entry information.
     */
    uint32_t offset;

    /*! TCAM entry type information */
    uint8_t entry_type;

} bcmptm_rm_tcam_prio_only_entry_info_t;

typedef struct bcmptm_rm_tcam_prio_only_sw_state_s {
    /*! Memory offset to TCAM entry operational information of type
     * bcmptm_rm_tcam_prio_entry_info_t. */
    uint32_t entry_info_offset;

    /*! Depth of hash table which is used to lookup TCAM entry information. */
    uint32_t entry_hash_size;

    /*! Memory required for the whole RM TCAM module(i.e. memory required
     *\n for all TCAMs) will be caliculated during driver initialization time.
     *\n Following offset actually holds the memory offset from the start of
     *\n memory address to a tcam information of a given TCAM. */

    /*! Memory offset to TCAM entry hash information(Array of 16bit integers). */
    uint32_t entry_hash_offset;

} bcmptm_rm_tcam_prio_only_sw_state_t;

/*! TCAM configuration and operational information. */
typedef struct bcmptm_rm_tcam_prio_only_info_s {

    /*! TCAM Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.. */
    bcmltd_sid_t ltid;

    /*! TCAM Flags  of type BCMPTM_RM_TCAM_XXX */
    uint32_t flags;

    /*! Total number of TCAM entries */
    uint16_t num_entries;

    /*! Number of free TCAM entries. */
    uint16_t free_entries;

    /*! Number of max physical entries to be kept free for
     * automocity.
     */
    uint16_t unused_entries;

    /*! Memory offset to SW state(bcmptm_rm_tcam_prio_only_sw_state_t)
     * of pri_key based LTID.
     */
    uint32_t sw_state_offset;

    /*! Memory offset to TCAM info for the next pipe */
    uint32_t next_pipe_tcam_info_offset;

} bcmptm_rm_tcam_prio_only_info_t;

/*******************************************************************************
 * Function declarations (prototypes)
 */
/*!
 * \brief Calculate the total memory required for SW state of
   \n all TCAM LTIDs together.
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] user_data User Data
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 * \retval SHR_E_INTERNAL initialization issues
 */
extern int
bcmptm_rm_tcam_prio_only_calc_mem_required(int unit, bcmltd_sid_t ltid,
                                       bcmptm_rm_tcam_lt_info_t *ltid_info,
                                       void *user_data);

/*!
 * \brief Update the SW metadata required for all LTIDs in
 * \n memory created in pass one.
 * \param [in] unit Logical device id
 * \param [in] warm TRUE => warmboot, FALSE => coldboot
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] start_ptr Starting position in metadata.
 * \param [in] offset Final offset for the data.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 * \retval SHR_E_INTERNAL initialization issues
 */
extern int
bcmptm_rm_tcam_prio_only_init_metadata(int unit, bool warm, bcmltd_sid_t ltid,
                                       bcmptm_rm_tcam_lt_info_t *ltid_info,
                                       void *start_ptr, uint32_t *offset);

/*!
 * \brief Insert the new TCAM entry info or Update the existing TCAM entry in
 * \n priority based TCAMs.
 *
 * \param [in] unit Logical device id
 * \param [in] flags Control to alter default behavior
               (see BCMPTM_REQ_FLAGS_XXX)
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] pt_dyn_info Dynamic address information for physical table.
 *             Refer bcmptm_rm_tcam_internal.h for more details
 * \param [in] req_info Information passed with TCAM table request
 * \param [out] rsp_info Information returned for tcam table request
 * \param [out] rsp_ltid Logical table from which entry is read
 * \param [out] rsp_flags Flags used in serving the TCAM table request
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 * \retval SHR_E_FULL No Resources
 * \retval SHR_E_EXISTS Requested entry_id already exist
 */
extern int
bcmptm_rm_tcam_prio_only_entry_insert(int unit,
                                     uint32_t req_flags,
                                     bcmltd_sid_t ltid,
                                     bcmptm_rm_tcam_lt_info_t *ltid_info,
                                     bcmbd_pt_dyn_info_t *pt_dyn_info,
                                     bcmptm_rm_tcam_req_t *req_info,
                                     bcmptm_rm_tcam_rsp_t *rsp_info,
                                     bcmltd_sid_t *rsp_ltid,
                                     uint32_t *rsp_flags);

/*!
 * \brief Delete the existing TCAM entry in priority based TCAMs.
 *
 * \param [in] unit Logical device id
 * \param [in] flags Control to alter default behavior
               (see BCMPTM_REQ_FLAGS_XXX)
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] pt_dyn_info Dynamic address information for physical table.
 *             Refer bcmptm_rm_tcam_internal.h for more details

 * \param [in] req_info Information passed with TCAM table request
 * \param [out] rsp_info Information returned for tcam table request
 * \param [out] rsp_ltid Logical table from which entry is read
 * \param [out] rsp_flags Flags used in serving the TCAM table request
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 * \retval SHR_E_NOT_FOUND Request entry_id not found
 */
extern int
bcmptm_rm_tcam_prio_only_entry_delete(int unit,
                                     uint32_t req_flags,
                                     bcmltd_sid_t ltid,
                                     bcmptm_rm_tcam_lt_info_t *ltid_info,
                                     bcmbd_pt_dyn_info_t *pt_dyn_info,
                                     bcmptm_rm_tcam_req_t *req_info,
                                     bcmptm_rm_tcam_rsp_t *rsp_info,
                                     bcmltd_sid_t *rsp_ltid,
                                     uint32_t *rsp_flags);
/*!
 * \brief Read TCAM entry key words(key + mask) and data words for
 * \n the given TCAM entry ID for the priority based TCAMs.
 * \n By default data is read from PTCache for cacheable PTs..
 *
 * \param [in] unit Logical device id
 * \param [in] flags Control to alter default behavior
               (see BCMPTM_REQ_FLAGS_XXX)
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] pt_dyn_info Dynamic address information for physical table.
 *             Refer bcmptm_rm_tcam_internal.h for more details

 * \param [in] req_info Information passed with TCAM table request
 * \param [out] rsp_info Information returned for tcam table request
 * \param [out] rsp_ltid Logical table from which entry is read
 * \param [out] rsp_flags Flags used in serving the TCAM table request
 * \param [out] index TCAM index of the entry_id in req_info if entry_id exists
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 * \retval SHR_E_NOT_FOUND Request entry_id not found
 */
extern int
bcmptm_rm_tcam_prio_only_entry_lookup(int unit,
                                     uint32_t req_flags,
                                     bcmltd_sid_t ltid,
                                     bcmptm_rm_tcam_lt_info_t *ltid_info,
                                     bcmbd_pt_dyn_info_t *pt_dyn_info,
                                     bcmptm_rm_tcam_req_t *req_info,
                                     bcmptm_rm_tcam_rsp_t *rsp_info,
                                     bcmltd_sid_t *rsp_ltid,
                                     uint32_t *rsp_flags,
                                     uint32_t *index);
/*!
 * \brief Fetch the address to TCAM entry information of the given LTID.
 * \n This address points to address of zeroth TCAM index entry information.
 * \n To get the address to TCAM entry information of any specific TCAM index,
 * \n increment this pointer by those many TCAM indexes as memory created to
 * \n hold TCAM entry information of all TCAM indexes is consecutive.
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [out] entry_info double pointer to hold pointer to
 * \n           start address of TCAM entry information of an LTID.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 */
extern int
bcmptm_rm_tcam_prio_only_entry_info_get(int unit, bcmltd_sid_t ltid,
                                        bcmptm_rm_tcam_lt_info_t *ltid_info,
                                        int pipe_id,
                                        bcmptm_rm_tcam_prio_only_entry_info_t **entry_info);


/*!
 * \brief Move the TCAM entry from one index to the other in priority based TCAMs.
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] from_idx TCAM index from which entry has to be moved.
 * \param [in] to_idx TCAM index to which entry has to be moved.
 * \param [in] entry_attrs Attributes of entry.
 * \param [in] pt_dyn_info Dynamic address information for physical table.
 *             Refer bcmptm_rm_tcam_internal.h for more details
 *
 * \retval SHR_E_NONE Success
 */

extern int
bcmptm_rm_tcam_prio_only_entry_move(int unit,
                                   bcmltd_sid_t ltid,
                                   bcmptm_rm_tcam_lt_info_t *ltid_info,
                                   uint8_t partition,
                                   uint32_t prefix,
                                   uint32_t from_idx,
                                   uint32_t to_idx,
                                   void *attrs,
                                   bcmbd_pt_dyn_info_t *pt_dyn_info);

/*!
 * \brief Write the entry words to a particulat TCAM index.
 * \n Updates both HW and SW state
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] flags Control to alter default behavior
               (see BCMPTM_REQ_FLAGS_XXX)
 * \param [in] hw_only To indicate that the change is needed only in HW state.
 * \param [in] index TCAM index at which entry has to be written
 * \param [in] pt_dyn_info Dynamic address information for physical table.
 *             Refer bcmptm_rm_tcam_internal.h for more details
 * \param [in] req_info Information passed with TCAM table request
 * \param [out] rsp_ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid. to which entry has written
 * \param [out] rsp_flags Flags used in serving the TCAM table request
 *
 * \retval SHR_E_NONE Success
 */
extern int
bcmptm_rm_tcam_prio_only_entry_write(int unit, bcmltd_sid_t ltid,
                                    bcmptm_rm_tcam_lt_info_t *ltid_info,
                                    uint32_t req_flags,
                                    uint8_t hw_only, int index,
                                    bcmbd_pt_dyn_info_t *pt_dyn_info,
                                    bcmptm_rm_tcam_req_t *req_info,
                                    bcmltd_sid_t *rsp_ltid, uint32_t *rsp_flags,
                                    bcmdrd_sid_t *rsp_entry_sid);
/*!
 * \brief Read the entry words from a particular TCAM index.
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] flags Control to alter default behavior
               (see BCMPTM_REQ_FLAGS_XXX)
 * \param [in] index TCAM index at which entry has to be written
 * \param [in] pt_dyn_info Dynamic address information for physical table.
 *             Refer bcmptm_rm_tcam_internal.h for more details
 * \param [in] req_info Information passed with TCAM table request
 * \param [out] rsp_info Information returned for tcam table request
 * \param [out] rsp_ltid Logical table from which entry is read
 * \param [out] rsp_flags Flags used in serving the TCAM table request
 *
 * \retval SHR_E_NONE Success
 */
extern int
bcmptm_rm_tcam_prio_only_entry_read(int unit, bcmltd_sid_t ltid,
                                   bcmptm_rm_tcam_lt_info_t *ltid_info,
                                   uint32_t req_flags, int index,
                                   bcmbd_pt_dyn_info_t *pt_dyn_info,
                                   bcmptm_rm_tcam_req_t *req_info,
                                   bcmptm_rm_tcam_rsp_t *rsp_info,
                                   bcmltd_sid_t *rsp_ltid,
                                   uint32_t *rsp_flags);

/*!
 * \brief Clear(writing all zeros) the TCAM entry at a given index.
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] flags Control to alter default behavior
               (see BCMPTM_REQ_FLAGS_XXX)
 * \param [in] entry_update_flags To indicate that the change is needed
 *             only in HW or SW state.
 * \param [in] index TCAM index at which entry has to be written
 * \param [in] pt_dyn_info Dynamic address information for physical table.
 *             Refer bcmptm_rm_tcam_internal.h for more details
 * \param [in] req_info Information passed with TCAM table request
 * \param [out] rsp_ltid Logical table from which entry is read
 * \param [out] rsp_flags Flags used in serving the TCAM table request
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 */
extern int
bcmptm_rm_tcam_prio_only_entry_clear(int unit,
                                    bcmltd_sid_t ltid,
                                    bcmptm_rm_tcam_lt_info_t *ltid_info,
                                    uint32_t req_flags,
                                    uint8_t entry_update_flags,
                                    uint32_t index,
                                    bcmbd_pt_dyn_info_t *pt_dyn_info,
                                    bcmptm_rm_tcam_req_t *req_info,
                                    bcmltd_sid_t *rsp_ltid, uint32_t *rsp_flags,
                                    bcmdrd_sid_t *rsp_entry_sid);

/*!
 * \brief Find the index for the new TCAM entry info
 * \n priority based TCAMs.
 *
 * \param [in] unit Logical device id
 * \param [in] flags Control to alter default behavior
               (see BCMPTM_REQ_FLAGS_XXX)
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] prio_change To identify if its a priority change
               of existing entry
 * \param [in] pt_dyn_info Dynamic address information for physical table.
 *             Refer bcmptm_rm_tcam_internal.h for more details
 * \param [in] req_info Information passed with TCAM table request
 * \param [out] rsp_info Information returned for tcam table request
 * \param [out] rsp_ltid Logical table from which entry is read
 * \param [out] rsp_flags Flags used in serving the TCAM table request
 * \param [out] target_index Index where the TCAM insert is calculated.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 * \retval SHR_E_FULL No Resources
 */
extern int
bcmptm_rm_tcam_prio_only_entry_index_allocate(int unit,
                                 uint32_t flags,
                                 bcmltd_sid_t ltid,
                                 bcmptm_rm_tcam_lt_info_t *ltid_info,
                                 uint8_t prio_change,
                                 bcmbd_pt_dyn_info_t *pt_dyn_info,
                                 bcmptm_rm_tcam_req_t *req_info,
                                 bcmptm_rm_tcam_rsp_t *rsp_info,
                                 bcmltd_sid_t *rsp_ltid,
                                 uint32_t *rsp_flags,
                                 uint32_t *target_index);

/*!
 * \brief Calculate the hash value for the entry key and data
 *  and the given Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid..
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] entry_key_words Entry Key
 * \param [in] entry_data_words Entry Data
 * \param [out] hash_value Calculated hash.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 */

extern int
bcmptm_rm_tcam_prio_only_entry_hash_value_get(int unit, bcmltd_sid_t ltid,
                                             bcmptm_rm_tcam_lt_info_t *ltid_info,
                                             uint32_t **entry_key_words,
                                             uint32_t **entry_data_words,
                                             uint32_t *hash_val);

/*!
 * \brief Fetch the address to TCAM entry hash of the given Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid..
 * \n This address points to the address of hash zero. To get the address to
 * \n any other valid hash, increment this start pointer by hash times as memory
 * \n created to hold the hash information of all valid hash values is consecutive.
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [out] entry_hash Double pointer to hold pointer to start address
 * \n           of TCAM hash information of an LTID.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 */
extern int
bcmptm_rm_tcam_prio_only_entry_hash_get(int unit,
                                       bcmltd_sid_t ltid,
                                       bcmptm_rm_tcam_lt_info_t *ltid_info,
                                       int pipe_id,
                                       uint32_t **entry_hash);
/*!
 * \brief To update the max entries to be left free for a tcam to
       satisfy atomocity.
 * \param [in] ltid_info LRD information for the ltid..
 * \n This address points to the address of hash zero. To get the address to
 * \n any other valid hash, increment this start pointer by hash times as memory
 * \n created to hold the hash information of all valid hash values is consecutive.
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 */
extern int
bcmptm_rm_tcam_prio_only_update_unused_entries(int unit,
                                       bcmltd_sid_t ltid,
                                       bcmptm_rm_tcam_lt_info_t *ltid_info,
                                       uint32_t max_phy_entries_per_mode);
/*!
 * \brief Move the range of TCAM entries from one index to the other
 *    in priority based TCAMs.
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] from_idx TCAM index from which entry has to be moved.
 * \param [in] to_idx TCAM index to which entry has to be moved.
 * \param [in] entry_type of entry
 * \param [in] entry_attrs Attributes of entry.
 * \param [in] pt_dyn_info Dynamic address information for physical table.
 *             Refer bcmptm_rm_tcam_internal.h for more details
 *
 * \retval SHR_E_NONE Success
 */

extern int
bcmptm_rm_tcam_prio_only_entry_move_range(int unit,
                                bcmltd_sid_t ltid,
                                bcmptm_rm_tcam_lt_info_t *ltid_info,
                                uint8_t partition,
                                uint32_t idx_start,
                                uint32_t idx_end,
                                uint8_t entry_type,
                                void *attrs,
                                bcmbd_pt_dyn_info_t *pt_dyn_info);
/*!
 * \brief Compress entries in order to free entries for 2x,3x and 4x type
 * \n entries.
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] pt_dyn_info Dynamic address information for physical table.
 *             Refer bcmptm_rm_tcam_internal.h for more details
 * \param [in] entry_attrs Attributes of entry.
 *
 * \retval SHR_E_NONE Success
 */
extern int
bcmptm_rm_tcam_prio_only_compress(int unit,
                        bcmltd_sid_t ltid,
                        bcmptm_rm_tcam_lt_info_t *ltid_info,
                        bcmbd_pt_dyn_info_t *pt_dyn_info,
                        void *attrs);
/*!
 * \brief Fetch the address to tcam information of a given LTID.
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] pipe_id Pipe Number
 * \param [out] tcam_info memory address to tcam information.
 *
 * \retval SHR_E_NONE Success
 */
extern int
bcmptm_rm_tcam_prio_only_tcam_info_get(int unit, bcmltd_sid_t ltid,
                                       bcmptm_rm_tcam_lt_info_t *ltid_info,
                                       int pipe_id,
                                       bcmptm_rm_tcam_prio_only_info_t **tcam_info);

/*!
 * \brief Fetch the address to tcam SW state of a given prio only LTID.
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] pipe_id Pipe Number
 * \param [out] sw_state memory address to tcam SW information state.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 */
extern int
bcmptm_rm_tcam_prio_only_sw_state_get(int unit, bcmltd_sid_t ltid,
                                      bcmptm_rm_tcam_lt_info_t *ltid_info,
                                      int pipe_id,
                                      bcmptm_rm_tcam_prio_only_sw_state_t **sw_state);
/*!
 * \brief Compare's key in request info and index provided in traverse snapshot
 *        of a given prio only LTID.
 *
 * \param [in] unit Logical device id
 * \param [in] ltid Logical Table enum that is accessing the table.
 * \param [in] ltid_info LRD information for the ltid.
 * \param [in] index Index in snapshot
 * \param [in] req_info Information passed with TCAM table request
 * \param [in] key_db Address to KEY database in snapshot.
 * \param [in] key_size Key size in words for the LT.
 *
 * \retval SHR_E_NONE Success
 * \retval SHR_E_PARAM Invalid parameters
 */
extern int
bcmptm_rm_tcam_traverse_prio_only_entry_compare(int unit,
                                                bcmltd_sid_t ltid,
                                                bcmptm_rm_tcam_lt_info_t *ltid_info,
                                                uint32_t index,
                                                bcmptm_rm_tcam_req_t *req_info,
                                                uint32_t *key_db,
                                                uint16_t key_size);

#endif /* RM_TCAM_PRIO_ONLY_H */
