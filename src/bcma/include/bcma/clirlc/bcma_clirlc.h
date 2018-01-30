/*! \file bcma_clirlc.h
 *
 * Readline completion support for CLI commands.
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

#ifndef BCMA_CLIRLC_H
#define BCMA_CLIRLC_H

#include <sal/sal_types.h>

#include <bcma/cli/bcma_cli.h>
#include <bcma/cli/bcma_cli_token.h>

#include <bcma/editline/bcma_readline.h>

/*!
 * Structure returned from \ref bcma_clirlc_func_t to customize
 * the completion support in a CLI command.
 */
typedef struct bcma_clirlc_s {

    /*!
     * Complete entry function to return the matched string one at a time and
     * end by returning a NULL pointer.
     */
    rl_compentry_func_t *entry_func;

    /*!
     * Customized character append to the single match string.
     * Default is a space.
     */
    int append_char;

} bcma_clirlc_t;

/*!
 * \brief Auto-complete function for CLI command.
 *
 * \param [in] cli CLI object.
 * \param [in] ctoks CLI argument tokens.
 * \param [in] text A character string to be completed.
 * \param [in] start Start index of \c text in \c rl_line_buffer.
 * \param [in] end End index of \c text in \c rl_line_buffer.
 * \param [out] complete Customized variables for completion support.
 *
 * \return BCMA_CLI_CMD_xxx return values.
 */
typedef int (*bcma_clirlc_func_t)(bcma_cli_t *cli, bcma_cli_tokens_t *ctoks,
                                  const char *text, int start, int end,
                                  bcma_clirlc_t *complete);

/*!
 * \brief CLI command completion structure.
 *
 * This structure is used to define the CLI commands that support
 * auto-complete feature.
 */
typedef struct bcma_clirlc_cmd_s {

    /*! Command name */
    const char *name;

    /*! Command complete function */
    bcma_clirlc_func_t func;

    /*! CLI complete list link (internal) */
    struct bcma_clirlc_cmd_s *next;

} bcma_clirlc_cmd_t;

/*!
 * \brief Initialization for CLI readline completion.
 *
 * \return 0 if no errors, otherwise -1.
 */
extern int
bcma_clirlc_init(void);

/*!
 * \brief Add command completion structure to completion command table.
 *
 * If NULL is passed as \c compcmd, the completion command table is cleared.
 *
 * \param [in] compcmd CLI command completion structure.
 *
 * \return Always 0.
 */
extern int
bcma_clirlc_add_cmd(bcma_clirlc_cmd_t *compcmd);

/*!
 * \brief Display message in CLI command completion function.
 *
 * \param [in] msg Message to be displayed.
 */
extern void
bcma_clirlc_info_show(const char *msg);

#endif /* BCMA_CLIRLC_H */
