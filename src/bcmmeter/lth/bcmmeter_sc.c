/*! \file bcmmeter_sc.c
 *
 * This file defines Storm Control Meter
 * custom handler functions.
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

#include <shr/shr_debug.h>
#include <bsl/bsl.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmlrd/bcmlrd_types.h>
#include <bcmlrd/bcmlrd_table.h>
#include <bcmdrd/bcmdrd_pt.h>
#include <bcmdrd/bcmdrd_dev.h>
#include <bcmmeter/bcmmeter_sysm.h>

#include <bcmmeter/bcmmeter_sc.h>

#define BSL_LOG_MODULE          BSL_LS_BCMMETER_SC

#define BCMDRD_DEVLIST_ENTRY(_nm,_vn,_dv,_rv,_md,_pi,_bd,_bc,_fn,_cn,_pf,_pd,_r0,_r1) \
    { _bc##_meter_sc_attach },
static struct {
    bcmmeter_drv_attach_f attach;
} dev_sc_attach[] = {
    { 0 }, /* dummy entry for type "none" */
#include <bcmdrd/bcmdrd_devlist.h>
    { 0 } /* end-of-list */
};

#define BCMDRD_DEVLIST_ENTRY(_nm,_vn,_dv,_rv,_md,_pi,_bd,_bc,_fn,_cn,_pf,_pd,_r0,_r1) \
    { _bc##_meter_sc_detach },
static struct {
    bcmmeter_drv_detach_f detach;
} dev_sc_detach[] = {
    { 0 }, /* dummy entry for type "none" */
#include <bcmdrd/bcmdrd_devlist.h>
    { 0 } /* end-of-list */
};

/*******************************************************************************
 * Local definitions
 */

/*! Storm control Meter chip attributes. */
bcmmeter_sc_chip_attributes_t
*bcmmeter_sc_chip_attr[BCMDRD_CONFIG_MAX_UNITS];
/*! Storm control Meter state. */
bcmmeter_sc_sw_state_t
bcmmeter_sc_sw_state[BCMDRD_CONFIG_MAX_UNITS];

/*******************************************************************************
 * Private functions
 */

/*!
 * \brief Initialize storm control meter entry.
 *
 * Initialize meter entry with default values from map file.
 *
 * \param [in] unit Unit number.
 * \param [out] out Pointer to output param structure.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_PARAM Invalid meter parameter.
 */
static int
bcmmeter_sc_init_params (int unit,
                         bcmmeter_sc_entry_t *out)
{
    bcmlrd_fid_t *fid_list = NULL;
    bcmlrd_field_def_t field_def;
    bcmlrd_sid_t    sid;
    size_t num_fid = 0, count = 0;
    uint32_t i = 0;
    uint32_t table_sz = 0;

    SHR_FUNC_ENTER(unit);

    sid = METER_STORM_CONTROLt;
    SHR_IF_ERR_EXIT
        (bcmlrd_field_count_get(unit, sid, &num_fid));

    table_sz = (num_fid * sizeof(bcmlrd_fid_t));
    SHR_ALLOC(fid_list, table_sz, "Field list");
    SHR_NULL_CHECK(fid_list, SHR_E_MEMORY);

    SHR_IF_ERR_EXIT
        (bcmlrd_field_list_get(unit, sid, num_fid, fid_list, &count));

    for (i = 0; i < count; i++) {
        sal_memset(&field_def, 0, sizeof(field_def));
        SHR_IF_ERR_EXIT
            (bcmlrd_table_field_def_get(unit, sid, fid_list[i], &field_def));
        switch (fid_list[i]) {
        case METER_STORM_CONTROLt_METER_RATE_KBPSf:
            out->meter_rate_kbps = BCMMETER_SC_FIELD_DEF(field_def.dtag);
            break;
        case METER_STORM_CONTROLt_BURST_SIZE_KBITSf:
            out->burst_size_kbits = BCMMETER_SC_FIELD_DEF(field_def.dtag);
            break;
        case METER_STORM_CONTROLt_METER_RATE_PPSf:
            out->meter_rate_pps = BCMMETER_SC_FIELD_DEF(field_def.dtag);
            break;
        case METER_STORM_CONTROLt_BURST_SIZE_PKTSf:
            out->burst_size_pkts = BCMMETER_SC_FIELD_DEF(field_def.dtag);
            break;
        default:
            break;
        }
    }
exit:
    SHR_FREE(fid_list);
    SHR_FUNC_EXIT();
}

/*!
 * \brief Get storm control meter config parameters.
 *
 * Parse user input, retrieve Meter LT params and validate
 * the values.
 *
 * \param [in] unit Unit number.
 * \param [in] field_count Number of fields.
 * \param [in] byte_mode Byte mode or packet mode.
 * \param [in] flist Pointer to input LT field list.
 * \param [out] out Pointer to output param structure.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_PARAM Invalid meter parameter.
 */
static int
bcmmeter_sc_parse_validate_params (int unit,
                                   int field_count,
                                   uint32_t byte_mode,
                                   bcmltd_field_t **flist,
                                   bcmmeter_sc_entry_t *out)
{
    int             i = 0;
    uint32_t        fid = 0;
    uint64_t        fval = 0;
    bool            config_err = false;
    bcmlrd_sid_t    sid;
    bcmlrd_field_def_t field_def;

    SHR_FUNC_ENTER(unit);

    sid = METER_STORM_CONTROLt;

    for (i = 0; i < field_count; i++) {
        if (flist[i] == NULL) {
            SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
        }

        fid = flist[i]->id;
        fval = flist[i]->data;

        sal_memset(&field_def, 0, sizeof(field_def));
        SHR_IF_ERR_EXIT
            (bcmlrd_table_field_def_get(unit, sid, fid, &field_def));

        switch (fid) {
        case METER_STORM_CONTROLt_PORT_IDf:
            out->port_id = fval;
            break;
        case METER_STORM_CONTROLt_METER_STORM_CONTROL_IDf:
            out->meter_id = fval;
            break;
        case METER_STORM_CONTROLt_METER_RATE_KBPSf:
            if (byte_mode == BCMMETER_SC_PACKET_MODE) {
                config_err = true;
            }
            if (fval < BCMMETER_SC_FIELD_MIN(field_def.dtag) ||
                fval > BCMMETER_SC_FIELD_MAX(field_def.dtag)) {
                SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
            }
            out->meter_rate_kbps = fval;
            break;
        case METER_STORM_CONTROLt_BURST_SIZE_KBITSf:
            if (byte_mode == BCMMETER_SC_PACKET_MODE) {
                config_err = true;
            }
            if (fval < BCMMETER_SC_FIELD_MIN(field_def.dtag) ||
                fval > BCMMETER_SC_FIELD_MAX(field_def.dtag)) {
                SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
            }
            out->burst_size_kbits = fval;
            break;
        case METER_STORM_CONTROLt_METER_RATE_PPSf:
            if (byte_mode == BCMMETER_SC_BYTE_MODE) {
                config_err = true;
            }
            if (fval < BCMMETER_SC_FIELD_MIN(field_def.dtag) ||
                fval > BCMMETER_SC_FIELD_MAX(field_def.dtag)) {
                SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
            }
            out->meter_rate_pps = fval;
            break;
        case METER_STORM_CONTROLt_BURST_SIZE_PKTSf:
            if (byte_mode == BCMMETER_SC_BYTE_MODE) {
                config_err = true;
            }
            if (fval < BCMMETER_SC_FIELD_MIN(field_def.dtag) ||
                fval > BCMMETER_SC_FIELD_MAX(field_def.dtag)) {
                SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
            }
            out->burst_size_pkts = fval;
            break;
        case METER_STORM_CONTROLt_METER_RATE_KBPS_OPERf:
        case METER_STORM_CONTROLt_BURST_SIZE_KBITS_OPERf:
        case METER_STORM_CONTROLt_METER_RATE_PPS_OPERf:
        case METER_STORM_CONTROLt_BURST_SIZE_PKTS_OPERf:
            SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
            break;

        default:
            break;
        }
    }

    /*
     * If there is no configuration error ie. (mode = byte and meter rate in kbps or
     * mode = packet and meter rate in pps), clear the unused fields that were
     * initialized to default.
     * If configuration error is present ie (mode = packet and meter rate in kbps or
     * mode = byte and meter rate in pps), then retain the defult values of the
     * unspecified fields.
     */
    if (!config_err) {
        if (byte_mode == BCMMETER_SC_BYTE_MODE) {
            out->meter_rate_pps = 0;
            out->burst_size_pkts = 0;
        } else {
            out->meter_rate_kbps = 0;
            out->burst_size_kbits = 0;
        }
    }

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Lookup and populate storm control meter parameters.
 *
 * Read H/w tables and return Meter LT params.
 *
 * \param [in] unit Unit number.
 * \param [in] in Meter structure pointer.
 * \param [out] foutlist Pointer to output param structure.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_PARAM Invalid meter parameter.
 */
static int
bcmmeter_sc_populate_params (int unit,
                             bcmmeter_sc_entry_t *in,
                             bcmltd_field_t *foutlist)
{
    size_t      num_fid = 0, count = 0;
    uint32_t    i = 0, fid = 0;
    uint32_t    table_sz = 0;
    bcmlrd_fid_t   *fid_list = NULL;

    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (bcmlrd_field_count_get(unit, METER_STORM_CONTROLt, &num_fid));

    table_sz = (num_fid * sizeof(bcmlrd_fid_t));
    SHR_ALLOC(fid_list, table_sz, "Field list");
    SHR_NULL_CHECK(fid_list, SHR_E_MEMORY);
    sal_memset(fid_list, 0, table_sz);

    SHR_IF_ERR_EXIT
        (bcmlrd_field_list_get(unit,
                               METER_STORM_CONTROLt,
                               num_fid,
                               fid_list,
                               &count));

    for (i = 0; i < count; i++) {
        fid = fid_list[i];
        foutlist[i].id = fid;
        switch (i) {
        case METER_STORM_CONTROLt_PORT_IDf:
            foutlist[i].data = in->port_id;
            break;
        case METER_STORM_CONTROLt_METER_STORM_CONTROL_IDf:
            foutlist[i].data = in->meter_id;
            break;
        case METER_STORM_CONTROLt_METER_RATE_KBPSf:
            foutlist[i].data = in->meter_rate_kbps;
            break;
        case METER_STORM_CONTROLt_BURST_SIZE_KBITSf:
            foutlist[i].data = in->burst_size_kbits;
            break;
        case METER_STORM_CONTROLt_BURST_SIZE_KBITS_OPERf:
            foutlist[i].data = in->burst_size_kbits_oper;
            break;
        case METER_STORM_CONTROLt_METER_RATE_KBPS_OPERf:
            foutlist[i].data = in->meter_rate_kbps_oper;
            break;
        case METER_STORM_CONTROLt_METER_RATE_PPSf:
            foutlist[i].data = in->meter_rate_pps;
            break;
        case METER_STORM_CONTROLt_BURST_SIZE_PKTSf:
            foutlist[i].data = in->burst_size_pkts;
            break;
        case METER_STORM_CONTROLt_BURST_SIZE_PKTS_OPERf:
            foutlist[i].data = in->burst_size_pkts_oper;
            break;
        case METER_STORM_CONTROLt_METER_RATE_PPS_OPERf:
            foutlist[i].data = in->meter_rate_pps_oper;
            break;
        default:
            SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
            break;
        }
    }
exit:
    SHR_FREE(fid_list);
    SHR_FUNC_EXIT();
}

/*!
 * \brief Get meter field value.
 *
 * Parse user input and get the field corresponding to
 * a particular fid.
 *
 * \param [in] unit Unit number.
 * \param [in] field_count Number of fields.
 * \param [in] flist Pointer to input LT field list.
 * \param [in] fid Lt field id
 * \param [out] rval Pointer to return field value
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_PARAM Invalid meter parameter.
 */
static int
bcmmeter_sc_field_value_get (int unit,
                             int field_count,
                             bcmltd_field_t **flist,
                             uint32_t fid,
                             uint32_t *rval)
{
    int i;

    SHR_FUNC_ENTER(unit);

    for (i = 0; i < field_count; i++) {
        if (flist[i] == NULL) {
            SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
        }
        if (flist[i]->id == fid) {
            *rval = flist[i]->data;
            break;
        }
    }
    if (i == field_count) {
        SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
    }
exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Get Meter operating mode.
 *
 * Read the hardware register and get the meter mode
 * of this port.
 *
 * \param [in] unit         Unit number.
 * \param [in] trans_id     LT transaction ID.
 * \param [in] port_id      Port number.
 * \param [out] byte_mode   Byte mode to be returned.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_FAIL Hardware read fails.
 */
static int
bcmmeter_sc_config_bytemode_get (int unit,
                                 uint32_t trans_id,
                                 uint32_t port_id,
                                 uint32_t *byte_mode)
{
    SHR_FUNC_ENTER(unit);

    if (BCMMETER_SC_FN_PTRS(unit).bytemode_get != NULL) {
        SHR_IF_ERR_EXIT
            (BCMMETER_SC_FN_PTRS(unit).bytemode_get(unit,
                                                    trans_id,
                                                    port_id,
                                                    byte_mode));
    } else {
        SHR_RETURN_VAL_EXIT(SHR_E_UNAVAIL);
    }

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Insert the storm control meter.
 *
 * Insert storm control meter entry into h/w table.
 *
 * \param [in] unit         Unit number.
 * \param [in] trans_id     LT transaction ID.
 * \param [in] sc_entry     Storm control meter config.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_PARAM Invalid meter parameter.
 */
static int
bcmmeter_sc_entry_insert (int unit,
                          uint32_t trans_id,
                          bcmmeter_sc_entry_t *sc_entry)
{
    SHR_FUNC_ENTER(unit);

    if (BCMMETER_SC_FN_PTRS(unit).ins != NULL) {
        SHR_IF_ERR_EXIT
            (BCMMETER_SC_FN_PTRS(unit).ins(unit,
                                           trans_id,
                                           sc_entry));
    } else {
        SHR_RETURN_VAL_EXIT(SHR_E_UNAVAIL);
    }
exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Lookup storm control meter.
 *
 * Read storm control meter entry from h/w and return
 * the data.
 *
 * \param [in] unit         Unit number.
 * \param [in] trans_id     LT transaction ID.
 * \param [in] port_id      Port number.
 * \param [in] meter_idx    Meter offset.
 * \param [out] ptr         Storm control meter pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_PARAM Invalid meter parameter.
 */
static int
bcmmeter_sc_entry_lookup (int unit,
                          uint32_t trans_id,
                          uint32_t port_id,
                          uint32_t meter_idx,
                          bcmmeter_sc_entry_t **ptr)
{
    SHR_FUNC_ENTER(unit);

    if (BCMMETER_SC_FN_PTRS(unit).lkp != NULL) {
        SHR_IF_ERR_EXIT
            (BCMMETER_SC_FN_PTRS(unit).lkp(unit,
                                           trans_id,
                                           port_id,
                                           meter_idx,
                                           ptr));
    } else {
        SHR_RETURN_VAL_EXIT(SHR_E_UNAVAIL);
    }
exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Delete storm control meter.
 *
 * Delete storm control meter entry from h/w table.
 *
 * \param [in] unit         Unit number.
 * \param [in] trans_id     LT transaction ID.
 * \param [in] sc_entry     Storm control meter config.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_PARAM Invalid meter parameter.
 */
static int
bcmmeter_sc_entry_delete (int unit,
                          uint32_t trans_id,
                         bcmmeter_sc_entry_t *sc_entry)
{
    SHR_FUNC_ENTER(unit);

    if (BCMMETER_SC_FN_PTRS(unit).del != NULL) {
        SHR_IF_ERR_EXIT
            (BCMMETER_SC_FN_PTRS(unit).del(unit,
                                           trans_id,
                                           sc_entry));
    } else {
        SHR_RETURN_VAL_EXIT(SHR_E_UNAVAIL);
    }
exit:
    SHR_FUNC_EXIT();
}

/*******************************************************************************
 * Public functions
 */

/*!
 * \brief SC Meter validation.
 *
 * Validate Storm Control Meter config parameters.
 *
 * \param [in]  unit          Unit Number.
 * \param [in]  opcode        LT opcode.
 * \param [in]  in            Input field values.
 * \param [in]  arg           Transform arguments.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
int
bcmmeter_sc_validate (int unit,
                      bcmlt_opcode_t opcode,
                      const bcmltd_fields_t *in,
                      const bcmltd_generic_arg_t *arg)
{
    int         field_count;
    uint32_t    port_id = 0, meter_idx = 0;
    uint32_t    fid = 0;
    bcmltd_field_t **flist = NULL;

    SHR_FUNC_ENTER(unit);
    COMPILER_REFERENCE(opcode);
    COMPILER_REFERENCE(in);
    COMPILER_REFERENCE(arg);

    SHR_NULL_CHECK(in, SHR_E_PARAM);
    SHR_NULL_CHECK(in->field, SHR_E_PARAM);

    field_count = in->count;
    flist = in->field;

    if (field_count == 0 || flist == NULL) {
        SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
    }

    fid = METER_STORM_CONTROLt_PORT_IDf;
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_field_value_get(unit,
                                     field_count,
                                     flist,
                                     fid,
                                     &port_id));

    fid = METER_STORM_CONTROLt_METER_STORM_CONTROL_IDf;
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_field_value_get(unit,
                                     field_count,
                                     flist,
                                     fid,
                                     &meter_idx));

    if (port_id >= BCMMETER_SC_MAX_PORTS(unit) ||
        meter_idx >= BCMMETER_SC_NUM_METERS_PER_PORT(unit)) {
        SHR_RETURN_VAL_EXIT(SHR_E_BADID);
    }

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief SC Meter insert.
 *
 * Insert a Storm Control Meter in the harwdare.
 *
 * \param [in]  unit          Unit Number.
 * \param [in]  trans_id      LT transaction ID.
 * \param [in]  in            Input field values.
 * \param [in]  arg           Transform arguments.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
int
bcmmeter_sc_insert (int unit,
                    uint32_t trans_id,
                    const bcmltd_fields_t *in,
                    const bcmltd_generic_arg_t *arg)
{
    int             field_count;
    uint32_t        port_id = 0, meter_idx = 0;
    uint32_t        fid = 0, byte_mode = 0;
    bcmltd_field_t  **flist = NULL;
    bcmmeter_sc_entry_t sc_entry;
    bcmmeter_sc_entry_t *ptr;

    SHR_FUNC_ENTER(unit);
    COMPILER_REFERENCE(trans_id);
    COMPILER_REFERENCE(arg);

    SHR_NULL_CHECK(in, SHR_E_PARAM);
    SHR_NULL_CHECK(in->field, SHR_E_PARAM);

    field_count = in->count;
    flist = in->field;

    if (field_count == 0 || flist == NULL) {
        SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
    }

    fid = METER_STORM_CONTROLt_PORT_IDf;
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_field_value_get(unit,
                                     field_count,
                                     flist,
                                     fid,
                                     &port_id));

    fid = METER_STORM_CONTROLt_METER_STORM_CONTROL_IDf;
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_field_value_get(unit,
                                     field_count,
                                     flist,
                                     fid,
                                     &meter_idx));

    /*
     * If meter is already in use, return ERROR
     */
    if (BCMMETER_SC_INDEX_USED_GET(unit, port_id, meter_idx)) {
        SHR_RETURN_VAL_EXIT(SHR_E_EXISTS);
    }

    /*
     * Initialize params
     */
    sal_memset(&sc_entry, 0, sizeof(sc_entry));
    SHR_IF_ERR_EXIT(bcmmeter_sc_init_params(unit, &sc_entry));

    /*
     * Get meter operating mode.
     */
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_config_bytemode_get(unit, trans_id, port_id, &byte_mode));

    /*
     * Parse and validate params
     */
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_parse_validate_params(unit,
                                           field_count,
                                           byte_mode,
                                           flist,
                                           &sc_entry));
    /*
     * Retrieve the pointer to this meter entry from the database.
     */
    ptr = BCMMETER_SC_METER_ENTRY(unit, port_id, meter_idx);
    if (ptr == NULL) {
        SHR_RETURN_VAL_EXIT(SHR_E_FAIL);
    }

    /*
     * Insert the entry into H/W table
     */
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_entry_insert(unit, trans_id, &sc_entry));

    /*
     * Mark the meter idx as used
     */
    sal_memcpy(ptr, &sc_entry, sizeof(bcmmeter_sc_entry_t));
    BCMMETER_SC_INDEX_USED_SET(unit, port_id, meter_idx);

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief SC Meter lookup.
 *
 * Lookup Storm Control Meter.
 *
 * \param [in]  unit          Unit Number.
 * \param [in]  trans_id      LT transaction ID.
 * \param [in]  in            Input field values.
 * \param [out] out           Output field values.
 * \param [in]  arg           Transform arguments.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
int
bcmmeter_sc_lookup (int unit,
                    uint32_t trans_id,
                    const bcmltd_fields_t *in,
                    bcmltd_fields_t *out,
                    const bcmltd_generic_arg_t *arg)
{
    int             field_count;
    uint32_t        port_id = 0, meter_idx = 0;
    uint32_t        fid = 0;
    bcmltd_field_t  **flist = NULL;
    bcmltd_field_t  *foutlist = NULL;
    bcmmeter_sc_entry_t *sc_entry = NULL;

    SHR_FUNC_ENTER(unit);
    COMPILER_REFERENCE(trans_id);
    COMPILER_REFERENCE(arg);

    SHR_NULL_CHECK(in, SHR_E_PARAM);
    SHR_NULL_CHECK(in->field, SHR_E_PARAM);

    field_count = in->count;
    flist = in->field;

    if (flist == NULL) {
        SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
    }

    fid = METER_STORM_CONTROLt_PORT_IDf;
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_field_value_get(unit,
                                     field_count,
                                     flist,
                                     fid,
                                     &port_id));

    fid = METER_STORM_CONTROLt_METER_STORM_CONTROL_IDf;
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_field_value_get(unit,
                                     field_count,
                                     flist,
                                     fid,
                                     &meter_idx));

    if (!BCMMETER_SC_INDEX_USED_GET(unit, port_id, meter_idx)) {
        SHR_RETURN_VAL_EXIT(SHR_E_NOT_FOUND);
    }

    /*
     * read hw parameters and retrieve operational values.
     */
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_entry_lookup(unit,
                                  trans_id,
                                  port_id,
                                  meter_idx,
                                  &sc_entry));

    field_count = out->count;
    foutlist = out->field[0];

    SHR_IF_ERR_EXIT
        (bcmmeter_sc_populate_params(unit,
                                     sc_entry,
                                     foutlist));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief SC Meter delete.
 *
 * Delete Storm Control Meter.
 *
 * \param [in]  unit          Unit Number.
 * \param [in]  trans_id      LT transaction ID.
 * \param [in]  in            Input field values.
 * \param [in]  arg           Transform arguments.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
int
bcmmeter_sc_delete (int unit,
                    uint32_t trans_id,
                    const bcmltd_fields_t *in,
                    const bcmltd_generic_arg_t *arg)
{
    int             field_count;
    uint32_t        port_id = 0, meter_idx = 0;
    uint32_t        fid = 0;
    bcmltd_field_t  **flist = NULL;
    bcmmeter_sc_entry_t *sc_entry = NULL;

    SHR_FUNC_ENTER(unit);
    COMPILER_REFERENCE(trans_id);
    COMPILER_REFERENCE(arg);

    SHR_NULL_CHECK(in, SHR_E_PARAM);
    SHR_NULL_CHECK(in->field, SHR_E_PARAM);

    field_count = in->count;
    flist = in->field;

    if ((field_count == 0) || (flist == NULL)) {
        SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
    }

    fid = METER_STORM_CONTROLt_PORT_IDf;
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_field_value_get(unit,
                                     field_count,
                                     flist,
                                     fid,
                                     &port_id));

    fid = METER_STORM_CONTROLt_METER_STORM_CONTROL_IDf;
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_field_value_get(unit,
                                     field_count,
                                     flist,
                                     fid,
                                     &meter_idx));

    if (!BCMMETER_SC_INDEX_USED_GET(unit, port_id, meter_idx)) {
        SHR_RETURN_VAL_EXIT(SHR_E_NOT_FOUND);
    }

    /*
     * Retrieve the pointer to this meter entry from the database.
     */
    sc_entry = BCMMETER_SC_METER_ENTRY(unit, port_id, meter_idx);
    if (sc_entry == NULL) {
        SHR_RETURN_VAL_EXIT(SHR_E_FAIL);
    }

    SHR_IF_ERR_EXIT
        (bcmmeter_sc_entry_delete(unit, trans_id, sc_entry));

    BCMMETER_SC_INDEX_USED_CLR(unit, port_id, meter_idx);
    sal_memset(sc_entry, 0, sizeof(bcmmeter_sc_entry_t));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief SC Meter update.
 *
 * Update an already configured Storm Control meter.
 *
 * \param [in]  unit          Unit Number.
 * \param [in]  trans_id      LT transaction ID.
 * \param [in]  in            Input field values.
 * \param [in]  arg           Transform arguments.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
int
bcmmeter_sc_update (int unit,
                    uint32_t trans_id,
                    const bcmltd_fields_t *in,
                    const bcmltd_generic_arg_t *arg)
{
    int                 field_count;
    uint32_t            port_id = 0, meter_idx = 0;
    uint32_t            fid, byte_mode = 0;
    bcmltd_field_t      **flist = NULL;
    bcmmeter_sc_entry_t *ptr = NULL;
    bcmmeter_sc_entry_t new_entry;

    SHR_FUNC_ENTER(unit);
    COMPILER_REFERENCE(trans_id);
    COMPILER_REFERENCE(arg);

    SHR_NULL_CHECK(in, SHR_E_PARAM);
    SHR_NULL_CHECK(in->field, SHR_E_PARAM);

    field_count = in->count;
    flist = in->field;

    if (field_count == 0 || flist == NULL) {
        SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
    }

    fid = METER_STORM_CONTROLt_PORT_IDf;
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_field_value_get(unit,
                                     field_count,
                                     flist,
                                     fid,
                                     &port_id));

    fid = METER_STORM_CONTROLt_METER_STORM_CONTROL_IDf;
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_field_value_get(unit,
                                     field_count,
                                     flist,
                                     fid,
                                     &meter_idx));

    if (!BCMMETER_SC_INDEX_USED_GET(unit, port_id, meter_idx)) {
        SHR_RETURN_VAL_EXIT(SHR_E_NOT_FOUND);
    }

    /*
     * Retrieve the pointer to this meter entry from the database.
     */
    ptr = BCMMETER_SC_METER_ENTRY(unit, port_id, meter_idx);
    if (ptr == NULL) {
        SHR_RETURN_VAL_EXIT(SHR_E_FAIL);
    }

    sal_memcpy(&new_entry, ptr, sizeof(new_entry));

    /*
     * Get meter operating mode.
     */
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_config_bytemode_get(unit, trans_id, port_id, &byte_mode));
    /*
     * Parse and validate params
     */
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_parse_validate_params(unit,
                                           field_count,
                                           byte_mode,
                                           flist,
                                           &new_entry));

    /*
     * If no change in config, return.
     */
    if (!sal_memcmp(&new_entry, ptr, sizeof(new_entry))) {
        SHR_RETURN_VAL_EXIT(SHR_E_NONE);
    }

    SHR_IF_ERR_EXIT
        (bcmmeter_sc_entry_insert(unit, trans_id, &new_entry));

    sal_memcpy(ptr, &new_entry, sizeof(bcmmeter_sc_entry_t));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Initialize device driver.
 *
 * Initialize device features and install base driver functions.
 *
 * \param [in] unit Unit number.
 */
int
bcmmeter_sc_attach (int unit)
{
    bcmdrd_dev_type_t dev_type;

    SHR_FUNC_ENTER(unit);

    dev_type = bcmdrd_dev_type(unit);
    if (dev_type == BCMDRD_DEV_T_NONE) {
        SHR_IF_ERR_EXIT(SHR_E_UNIT);
    }

    /* Perform device-specific software setup */
    SHR_IF_ERR_EXIT
        (dev_sc_attach[dev_type].attach(unit));

  exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Clean up device driver.
 *
 * Release any resources allocated during attach.
 *
 * \param [in] unit Unit number.
 */
int
bcmmeter_sc_detach (int unit)
{
    bcmdrd_dev_type_t dev_type;

    SHR_FUNC_ENTER(unit);

    dev_type = bcmdrd_dev_type(unit);
    if (dev_type == BCMDRD_DEV_T_NONE) {
        SHR_IF_ERR_EXIT(SHR_E_UNIT);
    }

    /* Perform device-specific software tear-down */
    SHR_IF_ERR_EXIT
        (dev_sc_detach[dev_type].detach(unit));

  exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief SC Meter init.
 *
 * Initialize Storm Control Meter related data structures
 * for this unit.
 *
 * \param [in]  unit          Unit Number.
 * \param [in]  cold          Cold/Warm boot.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
int
bcmmeter_sc_init (int unit,
                  bool cold)
{
    bcmmeter_sc_chip_attributes_t *drv = NULL;

    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (bcmmeter_sc_drv_get(unit, &drv));

    if (drv == NULL) {
        SHR_RETURN_VAL_EXIT(SHR_E_NONE);
    }

    if (BCMMETER_SC_FN_PTRS(unit).init != NULL) {
        SHR_IF_ERR_EXIT
            (BCMMETER_SC_FN_PTRS(unit).init(unit,
                                            cold));
    } else {
        SHR_RETURN_VAL_EXIT(SHR_E_UNAVAIL);
    }
exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief SC Meter cleanup.
 *
 * Cleanup Storm Control Meter related data structures
 * allocated for this unit.
 *
 * \param [in]  unit          Unit Number.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
int
bcmmeter_sc_cleanup (int unit)
{
    bcmmeter_sc_chip_attributes_t   *drv = NULL;

    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (bcmmeter_sc_drv_get(unit, &drv));

    if (drv == NULL) {
        SHR_RETURN_VAL_EXIT(SHR_E_NONE);
    }

    if (BCMMETER_SC_FN_PTRS(unit).cleanup != NULL) {
        SHR_IF_ERR_EXIT
            (BCMMETER_SC_FN_PTRS(unit).cleanup(unit));
    } else {
        SHR_RETURN_VAL_EXIT(SHR_E_UNAVAIL);
    }
exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Storm control meter traverse get first.
 *
 * Get the first Storm control meter LT entry.
 *
 * \param [in]  unit          Unit Number.
 * \param [in]  trans_id      LT transaction ID.
 * \param [out] out           Output field values.
 * \param [in]  arg           Component arguments.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
int
bcmmeter_sc_first (int unit,
                   uint32_t trans_id,
                   bcmltd_fields_t *out,
                   const bcmltd_generic_arg_t *arg)
{
    uint32_t        port_id = 0, meter_idx = 0;
    uint32_t        port_min = 0, meter_min = 0;
    bool            found = false;
    bcmltd_field_t      *foutlist = NULL;
    bcmlrd_field_def_t  field_def;
    bcmmeter_sc_entry_t *sc_entry = NULL;

    SHR_FUNC_ENTER(unit);
    COMPILER_REFERENCE(trans_id);
    COMPILER_REFERENCE(arg);

    sal_memset(&field_def, 0, sizeof(field_def));
    SHR_IF_ERR_EXIT
        (bcmlrd_table_field_def_get(
                unit,
                METER_STORM_CONTROLt,
                METER_STORM_CONTROLt_PORT_IDf,
                &field_def));
    port_min = BCMMETER_SC_FIELD_MIN(field_def.dtag);

    sal_memset(&field_def, 0, sizeof(field_def));
    SHR_IF_ERR_EXIT
        (bcmlrd_table_field_def_get(
                unit,
                METER_STORM_CONTROLt,
                METER_STORM_CONTROLt_METER_STORM_CONTROL_IDf,
                &field_def));
    meter_min = BCMMETER_SC_FIELD_MIN(field_def.dtag);

    for (port_id = port_min; port_id < BCMMETER_SC_MAX_PORTS(unit); port_id++) {
        for (meter_idx = meter_min;
             meter_idx < BCMMETER_SC_NUM_METERS_PER_PORT(unit);
             meter_idx++) {
            if (BCMMETER_SC_INDEX_USED_GET(unit, port_id, meter_idx)) {
                found = true;
                break;
            }
        }
        if (found == true) {
            break;
        }
    }

    if (!found) {
        SHR_RETURN_VAL_EXIT(SHR_E_NOT_FOUND);
    }

    /*
     * read hw parameters and retrieve operational values.
     */
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_entry_lookup(unit,
                                  trans_id,
                                  port_id,
                                  meter_idx,
                                  &sc_entry));

    foutlist = out->field[0];

    SHR_IF_ERR_EXIT
        (bcmmeter_sc_populate_params(unit,
                                     sc_entry,
                                     foutlist));

exit:
    SHR_FUNC_EXIT();

}

/*!
 * \brief Storm control meter traverse get next.
 *
 * Get the next Storm control meter LT entry.
 *
 * \param [in]  unit          Unit Number.
 * \param [in]  trans_id      LT transaction ID.
 * \param [in]  in            Input field values.
 * \param [out] out           Output field values.
 * \param [in]  arg           Component arguments.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
int
bcmmeter_sc_next (int unit,
                  uint32_t trans_id,
                  const bcmltd_fields_t *in,
                  bcmltd_fields_t *out,
                  const bcmltd_generic_arg_t *arg)
{
    int             field_count, i, j;
    uint32_t        port_id = 0, meter_id = 0;
    uint32_t        fid = 0;
    bool            found = false;
    bcmltd_field_t  **flist = NULL;
    bcmltd_field_t  *foutlist = NULL;
    bcmmeter_sc_entry_t *sc_entry = NULL;

    SHR_FUNC_ENTER(unit);
    COMPILER_REFERENCE(trans_id);
    COMPILER_REFERENCE(arg);

    SHR_NULL_CHECK(in, SHR_E_PARAM);
    SHR_NULL_CHECK(in->field, SHR_E_PARAM);

    field_count = in->count;
    flist = in->field;

    if (flist == NULL) {
        SHR_RETURN_VAL_EXIT(SHR_E_PARAM);
    }

    fid = METER_STORM_CONTROLt_PORT_IDf;
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_field_value_get(unit,
                                     field_count,
                                     flist,
                                     fid,
                                     &port_id));

    fid = METER_STORM_CONTROLt_METER_STORM_CONTROL_IDf;
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_field_value_get(unit,
                                     field_count,
                                     flist,
                                     fid,
                                     &meter_id));

    meter_id = (meter_id + 1);
    if (meter_id == BCMMETER_SC_NUM_METERS_PER_PORT(unit)) {
        meter_id = 0;
        port_id = (port_id + 1);
    }

    if (port_id >= BCMMETER_SC_MAX_PORTS(unit)) {
        SHR_RETURN_VAL_EXIT(SHR_E_NOT_FOUND);
    }

    for (i = port_id; i < BCMMETER_SC_MAX_PORTS(unit); i++) {
        for (j = meter_id;
             j < BCMMETER_SC_NUM_METERS_PER_PORT(unit);
             j++) {
            if (BCMMETER_SC_INDEX_USED_GET(unit, i, j)) {
                found = true;
                port_id = i;
                meter_id = j;
                break;
            }
        }
        if (found == true) {
            break;
        }
        meter_id = 0;
    }

    if (!found) {
        SHR_RETURN_VAL_EXIT(SHR_E_NOT_FOUND);
    }

    /*
     * read hw parameters and retrieve operational values.
     */
    SHR_IF_ERR_EXIT
        (bcmmeter_sc_entry_lookup(unit,
                                  trans_id,
                                  port_id,
                                  meter_id,
                                  &sc_entry));

    field_count = out->count;
    foutlist = out->field[0];

    SHR_IF_ERR_EXIT
        (bcmmeter_sc_populate_params(unit,
                                     sc_entry,
                                     foutlist));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Storm control meter transaction commit
 *
 * Discard the backup state as the current
 * transaction is getting committed.
 *
 * \param [in]  unit          Unit Number.
 * \param [in]  trans_id      LT transaction ID.
 * \param [in]  arg           Transform arguments.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
int
bcmmeter_sc_commit (int unit,
                    uint32_t trans_id,
                    const bcmltd_generic_arg_t *arg)
{
    uint32_t                table_size;
    bcmmeter_sc_entry_t     *bkp_ptr = NULL;
    bcmmeter_sc_entry_t     *active_ptr = NULL;

    SHR_FUNC_ENTER(unit);

    bkp_ptr = BCMMETER_SC_BKP_STATE(unit);
    active_ptr = BCMMETER_SC_ACTIVE_STATE(unit);
    if ((bkp_ptr == NULL) || (active_ptr == NULL)) {
        SHR_RETURN_VAL_EXIT(SHR_E_FAIL);
    }

    table_size = (BCMMETER_SC_NUM_METERS(unit) * sizeof(bcmmeter_sc_entry_t));

    /* Copy active sw state to backup sw state. */
    sal_memcpy(bkp_ptr, active_ptr, table_size);

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Storm control meter transaction abort
 *
 * Rollback the Meter entry from the backup state
 * as the current transaction is getting aborted.
 *
 * \param [in]  unit          Unit Number.
 * \param [in]  trans_id      LT transaction ID.
 * \param [in]  arg           Transform arguments.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
int
bcmmeter_sc_abort (int unit,
                   uint32_t trans_id,
                   const bcmltd_generic_arg_t *arg)
{
    uint32_t                table_size;
    bcmmeter_sc_entry_t     *bkp_ptr = NULL;
    bcmmeter_sc_entry_t     *active_ptr = NULL;

    SHR_FUNC_ENTER(unit);

    bkp_ptr = BCMMETER_SC_BKP_STATE(unit);
    active_ptr = BCMMETER_SC_ACTIVE_STATE(unit);
    if ((bkp_ptr == NULL) || (active_ptr == NULL)) {
        SHR_RETURN_VAL_EXIT(SHR_E_FAIL);
    }

    table_size = (BCMMETER_SC_NUM_METERS(unit) * sizeof(bcmmeter_sc_entry_t));

    /* Copy backup sw state to active sw state. */
    sal_memcpy(active_ptr, bkp_ptr, table_size);

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Set pointer to storm control meter driver device structure.
 *
 * \param [in] unit Unit number.
 * \param [in] attr Chip driver structure.
 *
 * \return SHR_E_NONE
 */
int
bcmmeter_sc_drv_set (int unit,
                     bcmmeter_sc_chip_attributes_t *attr)
{
    bcmmeter_sc_chip_attr[unit] = attr;

    return SHR_E_NONE;
}

/*!
 * \brief Get pointer to storm control meter driver device structure.
 *
 * \param [in] unit Unit number.
 * \param [out] attr Chip driver structure.
 *
 * \return Pointer to device structure, or NULL if not found.
 */
int
bcmmeter_sc_drv_get (int unit,
                     bcmmeter_sc_chip_attributes_t **attr)
{
    *attr = bcmmeter_sc_chip_attr[unit];

    return SHR_E_NONE;
}
