/*
   $Id: cint_c.lex.c,v 1.23 2013/05/10 22:54:28 dkelley Exp $
   Copyright: (c) 2018 Broadcom. All Rights Reserved. "Broadcom" refers to 
   Broadcom Limited and/or its subsidiaries.
   
   Broadcom Switch Software License
   
   This license governs the use of the accompanying Broadcom software. Your 
   use of the software indicates your acceptance of the terms and conditions 
   of this license. If you do not agree to the terms and conditions of this 
   license, do not use the software.
   1. Definitions
      "Licensor" means any person or entity that distributes its Work.
      "Software" means the original work of authorship made available under 
      this license.
      "Work" means the Software and any additions to or derivative works of 
      the Software that are made available under this license.
      The terms "reproduce," "reproduction," "derivative works," and 
      "distribution" have the meaning as provided under U.S. copyright law.
      Works, including the Software, are "made available" under this license 
      by including in or with the Work either (a) a copyright notice 
      referencing the applicability of this license to the Work, or (b) a copy 
      of this license.
   2. Grant of Copyright License
      Subject to the terms and conditions of this license, each Licensor 
      grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
      copyright license to reproduce, prepare derivative works of, publicly 
      display, publicly perform, sublicense and distribute its Work and any 
      resulting derivative works in any form.
   3. Grant of Patent License
      Subject to the terms and conditions of this license, each Licensor 
      grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
      patent license to make, have made, use, offer to sell, sell, import, and 
      otherwise transfer its Work, in whole or in part. This patent license 
      applies only to the patent claims licensable by Licensor that would be 
      infringed by Licensor's Work (or portion thereof) individually and 
      excluding any combinations with any other materials or technology.
      If you institute patent litigation against any Licensor (including a 
      cross-claim or counterclaim in a lawsuit) to enforce any patents that 
      you allege are infringed by any Work, then your patent license from such 
      Licensor to the Work shall terminate as of the date such litigation is 
      filed.
   4. Redistribution
      You may reproduce or distribute the Work only if (a) you do so under 
      this License, (b) you include a complete copy of this License with your 
      distribution, and (c) you retain without modification any copyright, 
      patent, trademark, or attribution notices that are present in the Work.
   5. Derivative Works
      You may specify that additional or different terms apply to the use, 
      reproduction, and distribution of your derivative works of the Work 
      ("Your Terms") only if (a) Your Terms provide that the limitations of 
      Section 7 apply to your derivative works, and (b) you identify the 
      specific derivative works that are subject to Your Terms. 
      Notwithstanding Your Terms, this license (including the redistribution 
      requirements in Section 4) will continue to apply to the Work itself.
   6. Trademarks
      This license does not grant any rights to use any Licensor's or its 
      affiliates' names, logos, or trademarks, except as necessary to 
      reproduce the notices described in this license.
   7. Limitations
      Platform. The Work and any derivative works thereof may only be used, or 
      intended for use, with a Broadcom switch integrated circuit.
      No Reverse Engineering. You will not use the Work to disassemble, 
      reverse engineer, decompile, or attempt to ascertain the underlying 
      technology of a Broadcom switch integrated circuit.
   8. Termination
      If you violate any term of this license, then your rights under this 
      license (including the license grants of Sections 2 and 3) will 
      terminate immediately.
   9. Disclaimer of Warranty
      THE WORK IS PROVIDED "AS IS" WITHOUT WARRANTIES OR CONDITIONS OF ANY 
      KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WARRANTIES OR CONDITIONS OF 
      MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE OR 
      NON-INFRINGEMENT. YOU BEAR THE RISK OF UNDERTAKING ANY ACTIVITIES UNDER 
      THIS LICENSE. SOME STATES' CONSUMER LAWS DO NOT ALLOW EXCLUSION OF AN 
      IMPLIED WARRANTY, SO THIS DISCLAIMER MAY NOT APPLY TO YOU.
   10. Limitation of Liability
      EXCEPT AS PROHIBITED BY APPLICABLE LAW, IN NO EVENT AND UNDER NO LEGAL 
      THEORY, WHETHER IN TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE 
      SHALL ANY LICENSOR BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY DIRECT, 
      INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF 
      OR RELATED TO THIS LICENSE, THE USE OR INABILITY TO USE THE WORK 
      (INCLUDING BUT NOT LIMITED TO LOSS OF GOODWILL, BUSINESS INTERRUPTION, 
      LOST PROFITS OR DATA, COMPUTER FAILURE OR MALFUNCTION, OR ANY OTHER 
      COMMERCIAL DAMAGES OR LOSSES), EVEN IF THE LICENSOR HAS BEEN ADVISED OF 
      THE POSSIBILITY OF SUCH DAMAGES.
   
   
*/

#line 2 "cint_c.lex.c"
#line 20 "cint_scanner.l"

#include "cint_config.h"
#include "cint_yy.h"
#include "cint_parser.h"




#line 12 "cint_c.lex.c"

#define  YY_INT_ALIGNED short int

/* A lexical scanner generated by flex */

#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 5
#define YY_FLEX_SUBMINOR_VERSION 31
#if YY_FLEX_SUBMINOR_VERSION > 0
#define FLEX_BETA
#endif

/* First, we deal with  platform-specific or compiler-specific issues. */

/* begin standard C headers. */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

/* end standard C headers. */

/* flex integer type definitions */

#ifndef FLEXINT_H
#define FLEXINT_H

/* C99 systems have <inttypes.h>. Non-C99 systems may or may not. */

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#include <inttypes.h>
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
#else
typedef signed char flex_int8_t;
typedef short int flex_int16_t;
typedef int flex_int32_t;
typedef unsigned char flex_uint8_t;
typedef unsigned short int flex_uint16_t;
typedef unsigned int flex_uint32_t;
#endif /* ! C99 */

/* Limits of integral types. */
#ifndef INT8_MIN
#define INT8_MIN               (-128)
#endif
#ifndef INT16_MIN
#define INT16_MIN              (-32767-1)
#endif
#ifndef INT32_MIN
#define INT32_MIN              (-2147483647-1)
#endif
#ifndef INT8_MAX
#define INT8_MAX               (127)
#endif
#ifndef INT16_MAX
#define INT16_MAX              (32767)
#endif
#ifndef INT32_MAX
#define INT32_MAX              (2147483647)
#endif
#ifndef UINT8_MAX
#define UINT8_MAX              (255U)
#endif
#ifndef UINT16_MAX
#define UINT16_MAX             (65535U)
#endif
#ifndef UINT32_MAX
#define UINT32_MAX             (4294967295U)
#endif

#endif /* ! FLEXINT_H */

#ifdef __cplusplus

/* The "const" storage-class-modifier is valid. */
#define YY_USE_CONST

#else	/* ! __cplusplus */

#if __STDC__

#define YY_USE_CONST

#endif	/* __STDC__ */
#endif	/* ! __cplusplus */

#ifdef YY_USE_CONST
#define yyconst const
#else
#define yyconst
#endif

/* Returned upon end-of-file. */
#define YY_NULL 0

/* Promotes a possibly negative, possibly signed char to an unsigned
 * integer for use as an array index.  If the signed char is negative,
 * we want to instead treat it as an 8-bit unsigned char, hence the
 * double cast.
 */
#define YY_SC_TO_UI(c) ((unsigned int) (unsigned char) c)

/* An opaque pointer. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

/* For convenience, these vars (plus the bison vars far below)
   are macros in the reentrant scanner. */
#define yyin yyg->yyin_r
#define yyout yyg->yyout_r
#define yyextra yyg->yyextra_r
#define yyleng yyg->yyleng_r
#define yytext yyg->yytext_r
#define yylineno (YY_CURRENT_BUFFER_LVALUE->yy_bs_lineno)
#define yycolumn (YY_CURRENT_BUFFER_LVALUE->yy_bs_column)
#define yy_flex_debug yyg->yy_flex_debug_r

int cint_c_lex_init (yyscan_t* scanner);
int cint_c_get_column  (yyscan_t yyscanner);
void cint_c_set_column (int  column_no , yyscan_t yyscanner);
void cpp_comment(void);
char *
cint_current_line(yyscan_t yyscanner, char *const lineBuffer, const int lineLen,
                int *column, int *tokLen, char **curFile, int *curLine);
#if CINT_CONFIG_INCLUDE_PARSER_READLINE == 1
void
__yy_input_readline(char* buf, int* result, int max_size, yyscan_t yyscanner);
#endif
void cint_c_scanner_start(FILE* handle, void* scanner);
int cint_c_scanner_finish(void *scanner);

/* Enter a start condition.  This macro really ought to take a parameter,
 * but we do it the disgusting crufty way forced on us by the ()-less
 * definition of BEGIN.
 */
#define BEGIN yyg->yy_start = 1 + 2 *

/* Translate the current start state into a value that can be later handed
 * to BEGIN to return to the state.  The YYSTATE alias is for lex
 * compatibility.
 */
#define YY_START ((yyg->yy_start - 1) / 2)
#define YYSTATE YY_START

/* Action number for EOF rule of a given start state. */
#define YY_STATE_EOF(state) (YY_END_OF_BUFFER + state + 1)

/* Special action meaning "start processing a new file". */
#define YY_NEW_FILE cint_c_restart(yyin ,yyscanner )

#define YY_END_OF_BUFFER_CHAR 0

/* Size of default input buffer. */
#ifndef YY_BUF_SIZE
#define YY_BUF_SIZE 16384
#endif

#ifndef YY_TYPEDEF_YY_BUFFER_STATE
#define YY_TYPEDEF_YY_BUFFER_STATE
typedef struct yy_buffer_state *YY_BUFFER_STATE;
#endif

#define EOB_ACT_CONTINUE_SCAN 0
#define EOB_ACT_END_OF_FILE 1
#define EOB_ACT_LAST_MATCH 2

    /* Note: We specifically omit the test for yy_rule_can_match_eol because it requires
     *       access to the local variable yy_act. Since yyless() is a macro, it would break
     *       existing scanners that call yyless() from OUTSIDE cint_c_lex.
     *       One obvious solution it to make yy_act a global. I tried that, and saw
     *       a 5% performance hit in a non-yylineno scanner, because yy_act is
     *       normally declared as a register variable-- so it is not worth it.
     */
    #define  YY_LESS_LINENO(n) \
            do { \
                int yyl;\
                for ( yyl = n; yyl < yyleng; ++yyl )\
                    if ( yytext[yyl] == '\n' )\
                        --yylineno;\
            }while(0)

/* Return all but the first "n" matched characters back to the input stream. */
#define yyless(n) \
	do \
		{ \
		/* Undo effects of setting up yytext. */ \
        int yyless_macro_arg = (n); \
        YY_LESS_LINENO(yyless_macro_arg);\
		*yy_cp = yyg->yy_hold_char; \
		YY_RESTORE_YY_MORE_OFFSET \
		yyg->yy_c_buf_p = yy_cp = yy_bp + yyless_macro_arg - YY_MORE_ADJ; \
		YY_DO_BEFORE_ACTION; /* set up yytext again */ \
		} \
	while ( 0 )

#define unput(c) yyunput( c, yyg->yytext_ptr , yyscanner )

/* The following is because we cannot portably get our hands on size_t
 * (without autoconf's help, which isn't available because we want
 * flex-generated scanners to compile on their own).
 */

#ifndef YY_TYPEDEF_YY_SIZE_T
#define YY_TYPEDEF_YY_SIZE_T
typedef unsigned int yy_size_t;
#endif

#ifndef YY_STRUCT_YY_BUFFER_STATE
#define YY_STRUCT_YY_BUFFER_STATE
struct yy_buffer_state
	{
	FILE *yy_input_file;

	char *yy_ch_buf;		/* input buffer */
	char *yy_buf_pos;		/* current position in input buffer */

	/* Size of input buffer in bytes, not including room for EOB
	 * characters.
	 */
	yy_size_t yy_buf_size;

	/* Number of characters read into yy_ch_buf, not including EOB
	 * characters.
	 */
	int yy_n_chars;

	/* Whether we "own" the buffer - i.e., we know we created it,
	 * and can realloc() it to grow it, and should free() it to
	 * delete it.
	 */
	int yy_is_our_buffer;

	/* Whether this is an "interactive" input source; if so, and
	 * if we're using stdio for input, then we want to use getc()
	 * instead of fread(), to make sure we stop fetching input after
	 * each newline.
	 */
	int yy_is_interactive;

	/* Whether we're considered to be at the beginning of a line.
	 * If so, '^' rules will be active on the next match, otherwise
	 * not.
	 */
	int yy_at_bol;

    int yy_bs_lineno; /**< The line count. */
    int yy_bs_column; /**< The column count. */

	/* Whether to try to fill the input buffer when we reach the
	 * end of it.
	 */
	int yy_fill_buffer;

	int yy_buffer_status;

#define YY_BUFFER_NEW 0
#define YY_BUFFER_NORMAL 1
	/* When an EOF's been seen but there's still some text to process
	 * then we mark the buffer as YY_EOF_PENDING, to indicate that we
	 * shouldn't try reading from the input source any more.  We might
	 * still have a bunch of tokens to match, though, because of
	 * possible backing-up.
	 *
	 * When we actually see the EOF, we change the status to "new"
	 * (via cint_c_restart()), so that the user can continue scanning by
	 * just pointing yyin at a new input file.
	 */
#define YY_BUFFER_EOF_PENDING 2

	};
#endif /* !YY_STRUCT_YY_BUFFER_STATE */

/* We provide macros for accessing buffer states in case in the
 * future we want to put the buffer states in a more general
 * "scanner state".
 *
 * Returns the top of the stack, or NULL.
 */
#define YY_CURRENT_BUFFER ( yyg->yy_buffer_stack \
                          ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] \
                          : NULL)

/* Same as previous macro, but useful when we know that the buffer stack is not
 * NULL or when we need an lvalue. For internal use only.
 */
#define YY_CURRENT_BUFFER_LVALUE yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]

void cint_c_restart (FILE *input_file ,yyscan_t yyscanner );
void cint_c__switch_to_buffer (YY_BUFFER_STATE new_buffer ,yyscan_t yyscanner );
YY_BUFFER_STATE cint_c__create_buffer (FILE *file,int size ,yyscan_t yyscanner );
void cint_c__delete_buffer (YY_BUFFER_STATE b ,yyscan_t yyscanner );
void cint_c__flush_buffer (YY_BUFFER_STATE b ,yyscan_t yyscanner );
void cint_c_push_buffer_state (YY_BUFFER_STATE new_buffer ,yyscan_t yyscanner );
void cint_c_pop_buffer_state (yyscan_t yyscanner );

static void cint_c_ensure_buffer_stack (yyscan_t yyscanner );
static void cint_c__load_buffer_state (yyscan_t yyscanner );
static void cint_c__init_buffer (YY_BUFFER_STATE b,FILE *file ,yyscan_t yyscanner );

#define YY_FLUSH_BUFFER cint_c__flush_buffer(YY_CURRENT_BUFFER ,yyscanner)

YY_BUFFER_STATE cint_c__scan_buffer (char *base,yy_size_t size ,yyscan_t yyscanner );
YY_BUFFER_STATE cint_c__scan_string (yyconst char *yy_str ,yyscan_t yyscanner );
YY_BUFFER_STATE cint_c__scan_bytes (yyconst char *bytes,int len ,yyscan_t yyscanner );

void *cint_c_alloc (yy_size_t ,yyscan_t yyscanner );
void *cint_c_realloc (void *,yy_size_t ,yyscan_t yyscanner );
void cint_c_free (void * ,yyscan_t yyscanner );

#define yy_new_buffer cint_c__create_buffer

#define yy_set_interactive(is_interactive) \
	{ \
	if ( ! YY_CURRENT_BUFFER ){ \
        cint_c_ensure_buffer_stack (yyscanner); \
		YY_CURRENT_BUFFER_LVALUE =    \
            cint_c__create_buffer(yyin,YY_BUF_SIZE ,yyscanner); \
	} \
	YY_CURRENT_BUFFER_LVALUE->yy_is_interactive = is_interactive; \
	}

#define yy_set_bol(at_bol) \
	{ \
	if ( ! YY_CURRENT_BUFFER ){\
        cint_c_ensure_buffer_stack (yyscanner); \
		YY_CURRENT_BUFFER_LVALUE =    \
            cint_c__create_buffer(yyin,YY_BUF_SIZE ,yyscanner); \
	} \
	YY_CURRENT_BUFFER_LVALUE->yy_at_bol = at_bol; \
	}

#define YY_AT_BOL() (YY_CURRENT_BUFFER_LVALUE->yy_at_bol)

/* Begin user sect3 */

typedef unsigned char YY_CHAR;

typedef int yy_state_type;

#define yytext_ptr yytext_r

static yy_state_type yy_get_previous_state (yyscan_t yyscanner );
static yy_state_type yy_try_NUL_trans (yy_state_type current_state  ,yyscan_t yyscanner);
static int yy_get_next_buffer (yyscan_t yyscanner );

/* Done after the current pattern has been matched and before the
 * corresponding action - sets up yytext.
 */
#define YY_DO_BEFORE_ACTION \
	yyg->yytext_ptr = yy_bp; \
	yyleng = (size_t) (yy_cp - yy_bp); \
	yyg->yy_hold_char = *yy_cp; \
	*yy_cp = '\0'; \
	yyg->yy_c_buf_p = yy_cp;

#define YY_NUM_RULES 103
#define YY_END_OF_BUFFER 104
/* This struct is not used in this scanner,
   but its presence is necessary. */
struct yy_trans_info
	{
	flex_int32_t yy_verify;
	flex_int32_t yy_nxt;
	};
static yyconst flex_int16_t yy_accept[279] =
    {   0,
        0,    0,    0,    0,    0,    0,  104,  102,  100,  101,
       88,  102,  102,   94,   87,  102,   82,   83,   92,   91,
       79,   90,   86,   93,   48,   48,   80,   76,   95,   81,
       96,   99,   45,   45,   84,   85,   97,   45,   45,   45,
       45,   45,   45,   45,   45,   45,   45,   45,   45,   45,
       45,   45,   45,   77,   98,   78,   89,    3,    2,  103,
        5,    8,    9,    9,  100,  101,   75,    0,   53,    0,
        0,   61,   78,   70,   62,    0,    0,   59,   67,   57,
       68,   58,   69,    0,   51,    4,    0,   60,   52,   47,
        0,   48,    0,   48,   85,   77,   84,   66,   72,   74,

       73,   65,   45,    0,    0,   63,   45,   45,   45,   45,
       45,   45,   45,   18,   45,   45,   45,   45,   45,   45,
       26,   45,   45,   45,   45,   45,   45,   45,   45,   45,
       45,   45,   45,   64,   71,    3,    2,    5,    6,    7,
        0,   49,   54,    0,   51,    0,   10,   51,    0,   52,
       47,    0,   50,   46,   56,   55,   45,   45,   45,   45,
       45,   45,   45,   45,   45,   45,   45,   45,   24,   45,
       27,   45,   45,   45,   45,   45,   45,   45,   45,   45,
       45,   45,   45,   45,   45,   45,   45,    0,    0,   51,
        0,   51,    0,   52,   50,   46,   11,   45,   13,   14,

       44,   45,   45,   45,   45,   20,   21,   45,   45,   25,
       28,   45,   45,   45,   45,   45,   45,   45,   45,   45,
       45,   45,   45,   40,   45,   45,    0,    0,   51,   12,
       15,   45,   45,   45,   45,   23,   43,   45,   45,   31,
       45,   45,   45,   45,   45,   45,   38,   45,   45,   42,
        0,   45,   45,   19,   22,   45,   30,   32,   33,   34,
       35,   36,   45,   45,   45,    0,   45,   17,   45,   37,
       45,   45,    1,   16,   29,   39,   41,    0
    } ;

static yyconst flex_int32_t yy_ec[256] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    2,    3,
        4,    4,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    2,    5,    6,    7,    1,    8,    9,   10,   11,
       12,   13,   14,   15,   16,   17,   18,   19,   20,   20,
       20,   20,   20,   20,   20,   20,   20,   21,   22,   23,
       24,   25,   26,    1,   27,   27,   27,   27,   28,   29,
       30,   30,   30,   30,   30,   31,   30,   30,   30,   30,
       30,   30,   30,   30,   32,   30,   30,   33,   30,   30,
       34,   35,   36,   37,   30,    1,   38,   39,   40,   41,

       42,   43,   44,   45,   46,   30,   47,   48,   49,   50,
       51,   52,   30,   53,   54,   55,   56,   57,   58,   59,
       60,   61,   62,   63,   64,   65,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,

        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1
    } ;

static yyconst flex_int32_t yy_meta[66] =
    {   0,
        1,    2,    3,    1,    1,    1,    1,    1,    1,    4,
        1,    1,    5,    1,    1,    1,    1,    5,    6,    6,
        1,    1,    1,    1,    1,    1,    6,    6,    6,    7,
        7,    7,    7,    1,    1,    1,    1,    6,    6,    6,
        6,    6,    6,    7,    7,    7,    7,    7,    7,    7,
        7,    7,    7,    7,    7,    7,    7,    7,    7,    7,
        7,    1,    1,    1,    1
    } ;

static yyconst flex_int16_t yy_base[288] =
    {   0,
        0,    0,   64,   66,   67,   68,  447,  448,   70,  443,
      421,   67,  398,   51,   68,  408,  448,  448,  418,   64,
      448,   66,   76,   76,   86,   93,  416,  448,   99,  416,
       59,  448,    0,   91,  448,  448,  415,  382,  384,   92,
       57,   81,   85,  385,   61,  384,  381,  391,  101,  372,
      381,  379,  384,  448,   63,  448,  448,    0,  426,  448,
        0,  448,  409,  413,  146,  422,  448,   92,  448,  421,
      373,  448,  448,  448,  448,  122,  106,  448,  448,  448,
      448,  448,  448,  405,  132,  448,  418,  448,  148,  153,
      173,  151,    0,  183,  448,  448,  448,  396,  448,  448,

      448,  395,    0,  109,  383,  448,  362,  374,  361,  376,
      363,  362,  368,  354,  355,  352,  352,  355,  352,  349,
        0,  348,  352,  355,  109,  349,  110,  159,  353,  346,
      112,  140,  351,  448,  448,    0,  394,    0,  448,  448,
      355,  448,  448,  202,  448,  391,  448,  204,  222,  448,
      195,  185,  225,  218,  448,  448,  342,  354,  349,  337,
      334,  165,  350,  348,  344,  336,  342,  345,    0,  331,
        0,  337,  330,  333,  322,  324,  326,  333,  319,  317,
      317,  329,  319,  323,  327,  329,  318,  317,  209,  238,
      245,  448,  243,  251,  448,  244,    0,  317,    0,    0,

        0,  299,  306,  289,  296,    0,    0,  284,  256,    0,
        0,  255,  255,  255,  251,  263,  253,  257,  262,  261,
      257,  247,  252,    0,  236,  248,  233,  258,  264,    0,
        0,  238,  239,  243,  229,    0,    0,  217,  210,    0,
      214,  210,  208,  185,  192,  192,    0,  180,  171,    0,
      172,  154,  153,    0,    0,  164,    0,    0,    0,    0,
        0,    0,  155,  152,  130,  127,  123,    0,  109,    0,
      114,   97,  448,    0,    0,    0,    0,  448,  312,  319,
      326,  333,  335,  342,  349,  356,   73
    } ;

static yyconst flex_int16_t yy_def[288] =
    {   0,
      278,    1,  279,  279,  280,  280,  278,  278,  278,  278,
      278,  281,  278,  278,  278,  282,  278,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  283,  283,  278,  278,  278,  283,  283,  283,
      283,  283,  283,  283,  283,  283,  283,  283,  283,  283,
      283,  283,  283,  278,  278,  278,  278,  284,  278,  278,
      285,  278,  278,  278,  278,  278,  278,  281,  278,  281,
      278,  278,  278,  278,  278,  282,  282,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  286,  278,  278,  278,
      278,  278,  287,  278,  278,  278,  278,  278,  278,  278,

      278,  278,  283,  281,  282,  278,  283,  283,  283,  283,
      283,  283,  283,  283,  283,  283,  283,  283,  283,  283,
      283,  283,  283,  283,  283,  283,  283,  283,  283,  283,
      283,  283,  283,  278,  278,  284,  278,  285,  278,  278,
      278,  278,  278,  278,  278,  286,  278,  278,  278,  278,
      278,  278,  278,  287,  278,  278,  283,  283,  283,  283,
      283,  283,  283,  283,  283,  283,  283,  283,  283,  283,
      283,  283,  283,  283,  283,  283,  283,  283,  283,  283,
      283,  283,  283,  283,  283,  283,  283,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  283,  283,  283,  283,

      283,  283,  283,  283,  283,  283,  283,  283,  283,  283,
      283,  283,  283,  283,  283,  283,  283,  283,  283,  283,
      283,  283,  283,  283,  283,  283,  278,  278,  278,  283,
      283,  283,  283,  283,  283,  283,  283,  283,  283,  283,
      283,  283,  283,  283,  283,  283,  283,  283,  283,  283,
      278,  283,  283,  283,  283,  283,  283,  283,  283,  283,
      283,  283,  283,  283,  283,  278,  283,  283,  283,  283,
      283,  283,  278,  283,  283,  283,  283,    0,  278,  278,
      278,  278,  278,  278,  278,  278,  278
    } ;

static yyconst flex_int16_t yy_nxt[514] =
    {   0,
        8,    9,   10,    9,   11,   12,   13,   14,   15,   16,
       17,   18,   19,   20,   21,   22,   23,   24,   25,   26,
       27,   28,   29,   30,   31,   32,   33,   33,   33,   33,
       34,   33,   33,   35,    8,   36,   37,   38,   39,   40,
       41,   42,   43,   44,   33,   45,   33,   46,   33,   33,
       33,   47,   48,   49,   50,   51,   52,   53,   33,   33,
       33,   54,   55,   56,   57,   59,   60,   59,   60,   62,
       62,   65,   69,   65,   72,   73,   74,   79,  154,   63,
       63,   81,  101,  102,   64,   64,  134,   80,   86,   82,
       83,   75,   84,   87,   85,   85,  104,   69,  113,   88,

      105,   70,   89,  121,   90,   90,   96,  114,  278,   89,
      122,   94,   94,   91,   69,   76,   92,   92,   93,   97,
       91,   98,   99,   92,   92,  135,   70,   91,  115,  109,
      116,  142,  118,   92,   91,  119,  110,  111,  277,  117,
       92,   92,  112,   70,   93,  126,  127,   65,   92,   65,
       85,   85,  174,  177,  276,  128,   77,  183,  129,  144,
      145,  275,  145,  175,  274,  184,  148,  148,  273,   89,
      178,   90,   90,  144,  145,  149,  150,  272,  150,  145,
       91,   92,   92,  151,  151,  185,  152,  186,  152,  149,
      150,  153,  153,  271,   91,  150,  179,  270,   92,   89,

      151,   94,   94,  153,  153,  269,   92,  268,  151,  267,
       91,  180,  266,   92,   92,  189,  265,  189,  202,  203,
      190,  190,  148,  148,   91,  151,  151,  190,  190,  264,
       92,  191,  192,  263,  192,  193,  262,  193,   92,  261,
      194,  194,  151,  153,  153,  191,  192,  260,  196,  196,
      151,  192,  259,  195,  258,  195,  190,  190,  228,  257,
      228,  194,  194,  229,  229,  196,  145,  195,  145,  194,
      194,  256,  195,  196,  196,  196,  229,  229,  255,  150,
      145,  150,  229,  229,  254,  145,  253,  252,  251,  250,
      249,  196,  192,  150,  192,  248,  247,  246,  150,  196,

      245,  244,  243,  242,  241,  240,  192,  239,  238,  237,
      236,  192,   58,   58,   58,   58,   58,   58,   58,   61,
       61,   61,   61,   61,   61,   61,   68,   68,   68,   68,
       68,   68,   68,   76,   76,   76,  235,   76,   76,   76,
      103,  103,  136,  234,  233,  136,  136,  136,  136,  138,
      138,  232,  138,  231,  138,  138,  146,  146,  146,  146,
      146,  146,  146,  230,  227,  226,  225,  224,  223,  222,
      221,  220,  219,  218,  217,  216,  215,  214,  213,  212,
      211,  210,  209,  208,  207,  206,  205,  204,  201,  200,
      199,  198,  197,  147,  188,  137,  187,  182,  181,  176,

      173,  172,  171,  170,  169,  168,  167,  166,  165,  164,
      163,  162,  161,  160,  159,  158,  157,   77,  156,  155,
      147,  143,  141,  278,   66,  140,  139,  137,  133,  132,
      131,  130,  125,  124,  123,  120,  108,  107,  106,  100,
       95,   78,   77,   71,   67,   66,  278,    7,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,

      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278
    } ;

static yyconst flex_int16_t yy_chk[514] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    3,    3,    4,    4,    5,
        6,    9,   12,    9,   14,   14,   15,   20,  287,    5,
        6,   22,   31,   31,    5,    6,   55,   20,   24,   22,
       22,   15,   23,   24,   23,   23,   34,   68,   41,   24,

       34,   12,   25,   45,   25,   25,   29,   41,   77,   26,
       45,   26,   26,   25,  104,   77,   25,   25,   25,   29,
       26,   29,   29,   26,   26,   55,   68,   25,   42,   40,
       42,   76,   43,   25,   26,   43,   40,   40,  272,   42,
       26,   25,   40,  104,   25,   49,   49,   65,   26,   65,
       85,   85,  125,  127,  271,   49,   76,  131,   49,   85,
       85,  269,   85,  125,  267,  131,   89,   89,  266,   90,
      127,   90,   90,   85,   85,   89,   89,  265,   89,   85,
       90,   92,   92,   90,   90,  132,   91,  132,   91,   89,
       89,   91,   91,  264,   90,   89,  128,  263,   92,   94,

       90,   94,   94,  152,  152,  256,   92,  253,   90,  252,
       94,  128,  251,   94,   94,  144,  249,  144,  162,  162,
      144,  144,  148,  148,   94,  151,  151,  189,  189,  248,
       94,  148,  148,  246,  148,  149,  245,  149,   94,  244,
      149,  149,  151,  153,  153,  148,  148,  243,  154,  154,
      151,  148,  242,  153,  241,  153,  190,  190,  191,  239,
      191,  193,  193,  191,  191,  154,  190,  153,  190,  194,
      194,  238,  153,  154,  196,  196,  228,  228,  235,  194,
      190,  194,  229,  229,  234,  190,  233,  232,  227,  226,
      225,  196,  229,  194,  229,  223,  222,  221,  194,  196,

      220,  219,  218,  217,  216,  215,  229,  214,  213,  212,
      209,  229,  279,  279,  279,  279,  279,  279,  279,  280,
      280,  280,  280,  280,  280,  280,  281,  281,  281,  281,
      281,  281,  281,  282,  282,  282,  208,  282,  282,  282,
      283,  283,  284,  205,  204,  284,  284,  284,  284,  285,
      285,  203,  285,  202,  285,  285,  286,  286,  286,  286,
      286,  286,  286,  198,  188,  187,  186,  185,  184,  183,
      182,  181,  180,  179,  178,  177,  176,  175,  174,  173,
      172,  170,  168,  167,  166,  165,  164,  163,  161,  160,
      159,  158,  157,  146,  141,  137,  133,  130,  129,  126,

      124,  123,  122,  120,  119,  118,  117,  116,  115,  114,
      113,  112,  111,  110,  109,  108,  107,  105,  102,   98,
       87,   84,   71,   70,   66,   64,   63,   59,   53,   52,
       51,   50,   48,   47,   46,   44,   39,   38,   37,   30,
       27,   19,   16,   13,   11,   10,    7,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,

      278,  278,  278,  278,  278,  278,  278,  278,  278,  278,
      278,  278,  278
    } ;

/* Table of booleans, true if rule could match eol. */
static yyconst flex_int32_t yy_rule_can_match_eol[104] =
    {   0,
0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0,     };

/* The intent behind this definition is that it'll catch
 * any uses of REJECT which flex missed.
 */
#define REJECT reject_used_but_not_detected
#define yymore() yymore_used_but_not_detected
#define YY_MORE_ADJ 0
#define YY_RESTORE_YY_MORE_OFFSET
#line 1 "cint_scanner.l"
/*
 * $Id: cint_c.lex.c,v 1.23 2013/05/10 22:54:28 dkelley Exp $
 * $Copyright: (c) 2009 Broadcom Corp.
 * All Rights Reserved.$
 *
 * File:        cint_scanner.l
 * Purpose:     CINT Flex input file
 */

#line 28 "cint_scanner.l"

#include "cint_config.h"

#ifdef FILENAME_MAX
#define __INCLUDE_MAX_FILENAME FILENAME_MAX
#else
#define __INCLUDE_MAX_FILENAME 128
#endif

#ifndef CINT_MAX_INCLUDE_DEPTH
#define CINT_MAX_INCLUDE_DEPTH 64
#endif

struct cint_extra_type_s {
    char currentFileName[__INCLUDE_MAX_FILENAME+1];
    char *includedFromFile;
    int includedFromLine;
};

#define YY_EXTRA_TYPE	struct cint_extra_type_s *

#define YY_NO_INPUT

#if CINT_CONFIG_INCLUDE_PARSER == 1

#include <stdio.h>
#include "cint_ast.h"
#include "cint_c.tab.h"
#include "cint_interpreter.h"
#include "cint_porting.h"
#include <string.h>

int check_type(yyscan_t scanner);

int cint_scanner_prompt = 1;
int cint_scanner_echo = 0;

#define NOPROMPT() cint_scanner_prompt=0

struct yyguts_t;
void __yy_input(char* buf, int* result, int max_size, yyscan_t scanner);

#define YY_INPUT(buf, result, max_size) __yy_input((buf), &(result), (max_size), yyscanner)

/* Rentrant Scanner */
/* Exclusive condition while processing an include directive */

#line 719 "cint_c.lex.c"

#define INITIAL 0
#define incl 1
#define comment 2

#ifndef YY_EXTRA_TYPE
#define YY_EXTRA_TYPE void *
#endif

/* Holds the entire state of the reentrant scanner. */
struct yyguts_t
    {

    /* User-defined. Not touched by flex. */
    YY_EXTRA_TYPE yyextra_r;

    /* The rest are the same as the globals declared in the non-reentrant scanner. */
    FILE *yyin_r, *yyout_r;
    size_t yy_buffer_stack_top; /**< index of top of stack. */
    size_t yy_buffer_stack_max; /**< capacity of stack. */
    YY_BUFFER_STATE * yy_buffer_stack; /**< Stack as an array. */
    char yy_hold_char;
    int yy_n_chars;
    int yyleng_r;
    char *yy_c_buf_p;
    int yy_init;
    int yy_start;
    int yy_did_buffer_switch_on_eof;
    int yy_start_stack_ptr;
    int yy_start_stack_depth;
    int *yy_start_stack;
    yy_state_type yy_last_accepting_state;
    char* yy_last_accepting_cpos;

    int yylineno_r;
    int yy_flex_debug_r;

    char *yytext_r;
    int yy_more_flag;
    int yy_more_len;

    YYSTYPE * yylval_r;

    YYLTYPE * yylloc_r;

    }; /* end struct yyguts_t */

    /* This must go here because YYSTYPE and YYLTYPE are included
     * from bison output in section 1.*/
    #    define yylval yyg->yylval_r

    #    define yylloc yyg->yylloc_r

/* Accessor methods to globals.
   These are made visible to non-reentrant scanners for convenience. */

int cint_c_lex_destroy (yyscan_t yyscanner );

int cint_c_get_debug (yyscan_t yyscanner );

void cint_c_set_debug (int debug_flag ,yyscan_t yyscanner );

YY_EXTRA_TYPE cint_c_get_extra (yyscan_t yyscanner );

void cint_c_set_extra (YY_EXTRA_TYPE user_defined ,yyscan_t yyscanner );

FILE *cint_c_get_in (yyscan_t yyscanner );

void cint_c_set_in  (FILE * in_str ,yyscan_t yyscanner );

FILE *cint_c_get_out (yyscan_t yyscanner );

void cint_c_set_out  (FILE * out_str ,yyscan_t yyscanner );

int cint_c_get_leng (yyscan_t yyscanner );

char *cint_c_get_text (yyscan_t yyscanner );

int cint_c_get_lineno (yyscan_t yyscanner );

void cint_c_set_lineno (int line_number ,yyscan_t yyscanner );

YYSTYPE * cint_c_get_lval (yyscan_t yyscanner );

void cint_c_set_lval (YYSTYPE * yylval_param ,yyscan_t yyscanner );

       YYLTYPE *cint_c_get_lloc (yyscan_t yyscanner );

        void cint_c_set_lloc (YYLTYPE * yylloc_param ,yyscan_t yyscanner );

/* Macros after this point can all be overridden by user definitions in
 * section 1.
 */

#ifndef YY_SKIP_YYWRAP
#ifdef __cplusplus
extern "C" int cint_c_wrap (yyscan_t yyscanner );
#else
extern int cint_c_wrap (yyscan_t yyscanner );
#endif
#endif

#ifndef yytext_ptr
static void yy_flex_strncpy (char *,yyconst char *,int ,yyscan_t yyscanner);
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen (yyconst char * ,yyscan_t yyscanner);
#endif

#ifndef YY_NO_INPUT

#ifdef __cplusplus
static int yyinput (yyscan_t yyscanner );
#else
static int input (yyscan_t yyscanner );
#endif

#endif

/* Amount of stuff to slurp up with each read. */
#ifndef YY_READ_BUF_SIZE
#define YY_READ_BUF_SIZE 8192
#endif

/* Copy whatever the last rule matched to the standard output. */
#ifndef ECHO
/* This used to be an fputs(), but since the string might contain NUL's,
 * we now use fwrite().
 */
#define ECHO (void) fwrite( yytext, yyleng, 1, yyout )
#endif

/* Gets input and stuffs it into "buf".  number of characters read, or YY_NULL,
 * is returned in "result".
 */
#ifndef YY_INPUT
#define YY_INPUT(buf,result,max_size) \
	if ( YY_CURRENT_BUFFER_LVALUE->yy_is_interactive ) \
		{ \
		int c = '*'; \
		size_t n; \
		for ( n = 0; n < max_size && \
			     (c = getc( yyin )) != EOF && c != '\n'; ++n ) \
			buf[n] = (char) c; \
		if ( c == '\n' ) \
			buf[n++] = (char) c; \
		if ( c == EOF && ferror( yyin ) ) \
			YY_FATAL_ERROR( "input in flex scanner failed" ); \
		result = n; \
		} \
	else \
		{ \
		errno=0; \
		while ( (result = fread(buf, 1, max_size, yyin))==0 && ferror(yyin)) \
			{ \
			if( errno != EINTR) \
				{ \
				YY_FATAL_ERROR( "input in flex scanner failed" ); \
				break; \
				} \
			errno=0; \
			clearerr(yyin); \
			} \
		}\
\

#endif

/* No semi-colon after return; correct usage is to write "yyterminate();" -
 * we don't want an extra ';' after the "return" because that will cause
 * some compilers to complain about unreachable statements.
 */
#ifndef yyterminate
#define yyterminate() return YY_NULL
#endif

/* Number of entries by which start-condition stack grows. */
#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

/* end tables serialization structures and prototypes */

/* Default declaration of generated scanner - a define so the user can
 * easily add parameters.
 */
#ifndef YY_DECL
#define YY_DECL_IS_OURS 1

extern int cint_c_lex (YYSTYPE * yylval_param,YYLTYPE * yylloc_param ,yyscan_t yyscanner);

#define YY_DECL int cint_c_lex (YYSTYPE * yylval_param, YYLTYPE * yylloc_param , yyscan_t yyscanner)
#endif /* !YY_DECL */

/* Code executed at the beginning of each rule, after yytext and yyleng
 * have been set up.
 */
#ifndef YY_USER_ACTION
#define YY_USER_ACTION
#endif

/* Code executed at the end of each rule. */
#ifndef YY_BREAK
#define YY_BREAK break;
#endif

#define YY_RULE_SETUP \
	YY_USER_ACTION

/*
 * BRCM: Check buffer stack
 */
#ifndef YY_CHECK_BUFFER_STACK
#define YY_CHECK_BUFFER_STACK if (!yyg->yy_buffer_stack) YY_FATAL_ERROR("buffer error")
#endif

/** The main scanner function which does all the work.
 */
YY_DECL
{
	register yy_state_type yy_current_state;
	register char *yy_cp, *yy_bp;
	register int yy_act;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

#line 90 "cint_scanner.l"

	int commentNesting = 0;

#line 948 "cint_c.lex.c"

    yylval = yylval_param;

    yylloc = yylloc_param;

	if ( yyg->yy_init )
		{
		yyg->yy_init = 0;

#ifdef YY_USER_INIT
		YY_USER_INIT;
#endif
		YY_CHECK_BUFFER_STACK;

		if ( ! yyg->yy_start )
			yyg->yy_start = 1;	/* first start state */

		if ( ! yyin )
			yyin = stdin;

		if ( ! yyout )
			yyout = stdout;

		if ( ! YY_CURRENT_BUFFER ) {
			cint_c_ensure_buffer_stack (yyscanner);
			YY_CURRENT_BUFFER_LVALUE =
				cint_c__create_buffer(yyin,YY_BUF_SIZE ,yyscanner);
		}

		cint_c__load_buffer_state(yyscanner );
		}

	while ( 1 )		/* loops until end-of-file is reached */
		{
		yy_cp = yyg->yy_c_buf_p;

		/* Support of yytext. */
		*yy_cp = yyg->yy_hold_char;

		/* yy_bp points to the position in yy_ch_buf of the start of
		 * the current run.
		 */
		yy_bp = yy_cp;

		yy_current_state = yyg->yy_start;
yy_match:
		do
			{
			register YY_CHAR yy_c = yy_ec[YY_SC_TO_UI(*yy_cp)];
			if ( yy_accept[yy_current_state] )
				{
				yyg->yy_last_accepting_state = yy_current_state;
				yyg->yy_last_accepting_cpos = yy_cp;
				}
			while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
				{
				yy_current_state = (int) yy_def[yy_current_state];
				if ( yy_current_state >= 279 )
					yy_c = yy_meta[(unsigned int) yy_c];
				}
			yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
			++yy_cp;
			}
		while ( yy_base[yy_current_state] != 448 );

yy_find_action:
		yy_act = yy_accept[yy_current_state];
		if ( yy_act == 0 )
			{ /* have to back up */
			yy_cp = yyg->yy_last_accepting_cpos;
			yy_current_state = yyg->yy_last_accepting_state;
			yy_act = yy_accept[yy_current_state];
			}

		YY_DO_BEFORE_ACTION;

		if ( yy_act != YY_END_OF_BUFFER && yy_rule_can_match_eol[yy_act] )
			{
			int yyl;
			for ( yyl = 0; yyl < yyleng; ++yyl )
				if ( yytext[yyl] == '\n' )

    do{ yylineno++;
        yycolumn=0;
    }while(0)
;
			}

do_action:	/* This label is used only to access EOF actions. */

		switch ( yy_act )
	{ /* beginning of action switch */
			case 0: /* must back up */
			/* undo the effects of YY_DO_BEFORE_ACTION */
			*yy_cp = yyg->yy_hold_char;
			yy_cp = yyg->yy_last_accepting_cpos;
			yy_current_state = yyg->yy_last_accepting_state;
			goto yy_find_action;

case 1:
YY_RULE_SETUP
#line 93 "cint_scanner.l"
BEGIN(incl);
	YY_BREAK
case 2:
YY_RULE_SETUP
#line 95 "cint_scanner.l"
/* Eat whitespace between include and filename */
	YY_BREAK
case 3:
YY_RULE_SETUP
#line 96 "cint_scanner.l"
{
    /* yytext is now the include filename */

#if CINT_CONFIG_INCLUDE_XINCLUDE == 0

    CINT_PRINTF
      ("Cannot include '%s': #include support is not available in this configuration\n",
       yytext);
    BEGIN(INITIAL);

#else

    FILE *cyyin = yyin; /* Save current input file. */
    int len;
    char* fpath = NULL;
    char fname[__INCLUDE_MAX_FILENAME];

    fname[sizeof(fname) - 1] = 0;

    /* Allow quotes and angle brackets in include path */
    if (yytext[0] == '\"' || yytext[0] == '<') {
        CINT_STRNCPY(fname, yytext + 1, sizeof(fname) - 1);
    } else {
        CINT_STRNCPY(fname, yytext, sizeof(fname) - 1);
    }
    len = CINT_STRLEN(fname);
    if (fname[len - 1] == '\"' || fname[len - 1] == '>') {
        fname[len - 1] = 0;
    }
    /*
     * The scanner will allow us to push new files onto the stack until
     * we run out of memory. In reality, we'll probably reach the process
     * limit for maximum opened files first. In either case this way more
     * open files than makes sense. It's more likely that we're run into
     * some sort of recursive include condition. That being the case, we'll
     * check against an abitrary maximum include depth here.
     */
    if ((CINT_MAX_INCLUDE_DEPTH - 1) > yyg->yy_buffer_stack_top) {
        if (cint_interpreter_include_get(fname, &fpath) == CINT_E_NONE) {
            if (fpath) {
                yyin = CINT_FOPEN(fpath, "r");
            } else {
                yyin = CINT_FOPEN(fname, "r");
            }
            (void)cint_cparser_include(1);
        } else {
            yyin = 0;
        }

        if (yyin == 0) {
            CINT_PRINTF("Cannot open include file '%s'\n", fpath ? fpath : fname);
            yyin = cyyin;
        } else {
            struct cint_extra_type_s *extra = cint_c_get_extra(yyscanner);

            if (extra) {
                struct cint_extra_type_s *lastInclude = &extra[yyg->yy_buffer_stack_top];
                struct cint_extra_type_s *newInclude = &extra[yyg->yy_buffer_stack_top + 1];
                CINT_STRNCPY(newInclude->currentFileName, fname,
                             __INCLUDE_MAX_FILENAME);
                newInclude->includedFromFile = lastInclude->currentFileName;
                newInclude->includedFromLine = cint_c_get_lineno(yyscanner);
            }
            cint_c_push_buffer_state(cint_c__create_buffer(yyin,YY_BUF_SIZE,yyscanner),yyscanner);
            cint_c_set_lineno(1, yyscanner);
            YY_CURRENT_BUFFER->yy_is_interactive = 0;
        }

        if (fpath) {
            CINT_FREE(fpath);
        }
    } else {
        CINT_PRINTF("Exceeded maximum include file depth of %d at include file '%s'\n",
                    CINT_MAX_INCLUDE_DEPTH, fname);
    }

    /* All success and error condition should reset to INITIAL state */
    BEGIN(INITIAL);

#endif /* CINT_CONFIG_INCLUDE_XINCLUDE */

}
	YY_BREAK
case 4:
YY_RULE_SETUP
#line 180 "cint_scanner.l"
{ commentNesting = 0; BEGIN(comment); }
	YY_BREAK
case 5:
YY_RULE_SETUP
#line 181 "cint_scanner.l"
{ /* Swallow stuff inside comments */ }
	YY_BREAK
case 6:
YY_RULE_SETUP
#line 182 "cint_scanner.l"
{ if (commentNesting-- == 0) { BEGIN(INITIAL); } }
	YY_BREAK
case 7:
YY_RULE_SETUP
#line 183 "cint_scanner.l"
{ commentNesting++; }
	YY_BREAK
case 8:
/* rule 8 can match eol */
YY_RULE_SETUP
#line 184 "cint_scanner.l"
{ /* Swallow newlines */ }
	YY_BREAK
case 9:
YY_RULE_SETUP
#line 185 "cint_scanner.l"
{ /* Swallow lone "*" and "/" */ }
	YY_BREAK
case YY_STATE_EOF(comment):
#line 186 "cint_scanner.l"
{ CINT_PRINTF("EOF encountered while processing comment.\n"); yyterminate(); }
	YY_BREAK
case YY_STATE_EOF(INITIAL):
case YY_STATE_EOF(incl):
#line 188 "cint_scanner.l"
{
    if (yyg->yy_buffer_stack_top) {
        if (yyin) {
#if CINT_CONFIG_FILE_IO == 1
            CINT_FCLOSE(yyin);
#endif
            (void)cint_cparser_include(-1);
            yyin = 0;
        }
        cint_c_pop_buffer_state(yyscanner);
    } else {
        yyterminate();
    }
}
	YY_BREAK
case 10:
*yy_cp = yyg->yy_hold_char; /* undo effects of setting up yytext */
yyg->yy_c_buf_p = yy_cp -= 1;
YY_DO_BEFORE_ACTION; /* set up yytext again */
YY_RULE_SETUP
#line 203 "cint_scanner.l"
{ /* Swallow C++ style comments */ }
	YY_BREAK
case 11:
YY_RULE_SETUP
#line 205 "cint_scanner.l"
{ NOPROMPT(); return(AUTO);     }
	YY_BREAK
case 12:
YY_RULE_SETUP
#line 206 "cint_scanner.l"
{ NOPROMPT(); return(BREAK);    }
	YY_BREAK
case 13:
YY_RULE_SETUP
#line 207 "cint_scanner.l"
{ NOPROMPT(); return(CASE);     }
	YY_BREAK
case 14:
YY_RULE_SETUP
#line 208 "cint_scanner.l"
{ NOPROMPT(); return(CHAR);     }
	YY_BREAK
case 15:
YY_RULE_SETUP
#line 209 "cint_scanner.l"
{ NOPROMPT(); return(CONST);    }
	YY_BREAK
case 16:
YY_RULE_SETUP
#line 210 "cint_scanner.l"
{ NOPROMPT(); return(CONTINUE); }
	YY_BREAK
case 17:
YY_RULE_SETUP
#line 211 "cint_scanner.l"
{ NOPROMPT(); return(DEFAULT);  }
	YY_BREAK
case 18:
YY_RULE_SETUP
#line 212 "cint_scanner.l"
{ NOPROMPT(); return(DO);       }
	YY_BREAK
case 19:
YY_RULE_SETUP
#line 213 "cint_scanner.l"
{ NOPROMPT(); return(DOUBLE);   }
	YY_BREAK
case 20:
YY_RULE_SETUP
#line 214 "cint_scanner.l"
{ NOPROMPT(); return(ELSE);     }
	YY_BREAK
case 21:
YY_RULE_SETUP
#line 215 "cint_scanner.l"
{ NOPROMPT(); return(ENUM);     }
	YY_BREAK
case 22:
YY_RULE_SETUP
#line 216 "cint_scanner.l"
{ NOPROMPT(); return(EXTERN);   }
	YY_BREAK
case 23:
YY_RULE_SETUP
#line 217 "cint_scanner.l"
{ NOPROMPT(); return(FLOAT);    }
	YY_BREAK
case 24:
YY_RULE_SETUP
#line 218 "cint_scanner.l"
{ NOPROMPT(); return(FOR);      }
	YY_BREAK
case 25:
YY_RULE_SETUP
#line 219 "cint_scanner.l"
{ NOPROMPT(); return(GOTO);     }
	YY_BREAK
case 26:
YY_RULE_SETUP
#line 220 "cint_scanner.l"
{ NOPROMPT(); return(IF);       }
	YY_BREAK
case 27:
YY_RULE_SETUP
#line 221 "cint_scanner.l"
{ NOPROMPT(); return(INT);      }
	YY_BREAK
case 28:
YY_RULE_SETUP
#line 222 "cint_scanner.l"
{ NOPROMPT(); return(LONG);     }
	YY_BREAK
case 29:
YY_RULE_SETUP
#line 223 "cint_scanner.l"
{ NOPROMPT(); return(REGISTER); }
	YY_BREAK
case 30:
YY_RULE_SETUP
#line 224 "cint_scanner.l"
{ NOPROMPT(); return(RETURN);   }
	YY_BREAK
case 31:
YY_RULE_SETUP
#line 225 "cint_scanner.l"
{ NOPROMPT(); return(SHORT);    }
	YY_BREAK
case 32:
YY_RULE_SETUP
#line 226 "cint_scanner.l"
{ NOPROMPT(); return(SIGNED);   }
	YY_BREAK
case 33:
YY_RULE_SETUP
#line 227 "cint_scanner.l"
{ NOPROMPT(); return(SIZEOF);   }
	YY_BREAK
case 34:
YY_RULE_SETUP
#line 228 "cint_scanner.l"
{ NOPROMPT(); return(STATIC);   }
	YY_BREAK
case 35:
YY_RULE_SETUP
#line 229 "cint_scanner.l"
{ NOPROMPT(); return(STRUCT);   }
	YY_BREAK
case 36:
YY_RULE_SETUP
#line 230 "cint_scanner.l"
{ NOPROMPT(); return(SWITCH);   }
	YY_BREAK
case 37:
YY_RULE_SETUP
#line 231 "cint_scanner.l"
{ NOPROMPT(); return(TYPEDEF);  }
	YY_BREAK
case 38:
YY_RULE_SETUP
#line 232 "cint_scanner.l"
{ NOPROMPT(); return(UNION);    }
	YY_BREAK
case 39:
YY_RULE_SETUP
#line 233 "cint_scanner.l"
{ NOPROMPT(); return(UNSIGNED); }
	YY_BREAK
case 40:
YY_RULE_SETUP
#line 234 "cint_scanner.l"
{ NOPROMPT(); return(T_VOID);   }
	YY_BREAK
case 41:
YY_RULE_SETUP
#line 235 "cint_scanner.l"
{ NOPROMPT(); return(VOLATILE); }
	YY_BREAK
case 42:
YY_RULE_SETUP
#line 236 "cint_scanner.l"
{ NOPROMPT(); return(WHILE);    }
	YY_BREAK
case 43:
YY_RULE_SETUP
#line 237 "cint_scanner.l"
{ NOPROMPT(); return(PRINT);    }
	YY_BREAK
case 44:
YY_RULE_SETUP
#line 238 "cint_scanner.l"
{ NOPROMPT(); return(CINT);     }
	YY_BREAK
case 45:
YY_RULE_SETUP
#line 240 "cint_scanner.l"
{ NOPROMPT(); return(check_type(yyscanner)); }
	YY_BREAK
case 46:
YY_RULE_SETUP
#line 242 "cint_scanner.l"
{ *yylval = cint_ast_constant(yytext, cintAstConstHex);
                          NOPROMPT(); return(CONSTANT); }
	YY_BREAK
case 47:
YY_RULE_SETUP
#line 244 "cint_scanner.l"
{ *yylval = cint_ast_constant(yytext, cintAstConstOctal);
                          NOPROMPT(); return(CONSTANT); }
	YY_BREAK
case 48:
YY_RULE_SETUP
#line 246 "cint_scanner.l"
{ *yylval = cint_ast_constant(yytext, cintAstConstDecimal);
                          NOPROMPT(); return(CONSTANT); }
	YY_BREAK
case 49:
/* rule 49 can match eol */
YY_RULE_SETUP
#line 248 "cint_scanner.l"
{ *yylval = cint_ast_constant(yytext, cintAstConstChar);
                          NOPROMPT(); return(CONSTANT); }
	YY_BREAK
case 50:
YY_RULE_SETUP
#line 251 "cint_scanner.l"
{ *yylval = cint_ast_constant(yytext, cintAstConstFloat);
                          NOPROMPT(); return(CONSTANT); }
	YY_BREAK
case 51:
YY_RULE_SETUP
#line 253 "cint_scanner.l"
{ *yylval = cint_ast_constant(yytext, cintAstConstFloat);
                          NOPROMPT(); return(CONSTANT); }
	YY_BREAK
case 52:
YY_RULE_SETUP
#line 255 "cint_scanner.l"
{ *yylval = cint_ast_constant(yytext, cintAstConstFloat);
                          NOPROMPT(); return(CONSTANT); }
	YY_BREAK
case 53:
/* rule 53 can match eol */
YY_RULE_SETUP
#line 258 "cint_scanner.l"
{ *yylval = cint_ast_string(yytext); NOPROMPT(); return(STRING_LITERAL); }
	YY_BREAK
case 54:
YY_RULE_SETUP
#line 260 "cint_scanner.l"
{ NOPROMPT(); return(ELLIPSIS);     }
	YY_BREAK
case 55:
YY_RULE_SETUP
#line 261 "cint_scanner.l"
{ NOPROMPT(); return(RIGHT_ASSIGN); }
	YY_BREAK
case 56:
YY_RULE_SETUP
#line 262 "cint_scanner.l"
{ NOPROMPT(); return(LEFT_ASSIGN);  }
	YY_BREAK
case 57:
YY_RULE_SETUP
#line 263 "cint_scanner.l"
{ NOPROMPT(); return(ADD_ASSIGN);   }
	YY_BREAK
case 58:
YY_RULE_SETUP
#line 264 "cint_scanner.l"
{ NOPROMPT(); return(SUB_ASSIGN);   }
	YY_BREAK
case 59:
YY_RULE_SETUP
#line 265 "cint_scanner.l"
{ NOPROMPT(); return(MUL_ASSIGN);   }
	YY_BREAK
case 60:
YY_RULE_SETUP
#line 266 "cint_scanner.l"
{ NOPROMPT(); return(DIV_ASSIGN);   }
	YY_BREAK
case 61:
YY_RULE_SETUP
#line 267 "cint_scanner.l"
{ NOPROMPT(); return(MOD_ASSIGN);   }
	YY_BREAK
case 62:
YY_RULE_SETUP
#line 268 "cint_scanner.l"
{ NOPROMPT(); return(AND_ASSIGN);   }
	YY_BREAK
case 63:
YY_RULE_SETUP
#line 269 "cint_scanner.l"
{ NOPROMPT(); return(XOR_ASSIGN);   }
	YY_BREAK
case 64:
YY_RULE_SETUP
#line 270 "cint_scanner.l"
{ NOPROMPT(); return(OR_ASSIGN);    }
	YY_BREAK
case 65:
YY_RULE_SETUP
#line 271 "cint_scanner.l"
{ NOPROMPT(); return(RIGHT_OP);     }
	YY_BREAK
case 66:
YY_RULE_SETUP
#line 272 "cint_scanner.l"
{ NOPROMPT(); return(LEFT_OP);      }
	YY_BREAK
case 67:
YY_RULE_SETUP
#line 273 "cint_scanner.l"
{ NOPROMPT(); return(INC_OP);       }
	YY_BREAK
case 68:
YY_RULE_SETUP
#line 274 "cint_scanner.l"
{ NOPROMPT(); return(DEC_OP);       }
	YY_BREAK
case 69:
YY_RULE_SETUP
#line 275 "cint_scanner.l"
{ NOPROMPT(); return(PTR_OP);       }
	YY_BREAK
case 70:
YY_RULE_SETUP
#line 276 "cint_scanner.l"
{ NOPROMPT(); return(AND_OP);       }
	YY_BREAK
case 71:
YY_RULE_SETUP
#line 277 "cint_scanner.l"
{ NOPROMPT(); return(OR_OP);        }
	YY_BREAK
case 72:
YY_RULE_SETUP
#line 278 "cint_scanner.l"
{ NOPROMPT(); return(LE_OP);        }
	YY_BREAK
case 73:
YY_RULE_SETUP
#line 279 "cint_scanner.l"
{ NOPROMPT(); return(GE_OP);        }
	YY_BREAK
case 74:
YY_RULE_SETUP
#line 280 "cint_scanner.l"
{ NOPROMPT(); return(EQ_OP);        }
	YY_BREAK
case 75:
YY_RULE_SETUP
#line 281 "cint_scanner.l"
{ NOPROMPT(); return(NE_OP);        }
	YY_BREAK
case 76:
YY_RULE_SETUP
#line 282 "cint_scanner.l"
{ NOPROMPT(); return(';');          }
	YY_BREAK
case 77:
YY_RULE_SETUP
#line 283 "cint_scanner.l"
{ NOPROMPT(); return('{');          }
	YY_BREAK
case 78:
YY_RULE_SETUP
#line 284 "cint_scanner.l"
{ NOPROMPT(); return('}');          }
	YY_BREAK
case 79:
YY_RULE_SETUP
#line 285 "cint_scanner.l"
{ NOPROMPT(); return(',');          }
	YY_BREAK
case 80:
YY_RULE_SETUP
#line 286 "cint_scanner.l"
{ NOPROMPT(); return(':');          }
	YY_BREAK
case 81:
YY_RULE_SETUP
#line 287 "cint_scanner.l"
{ NOPROMPT(); return('=');          }
	YY_BREAK
case 82:
YY_RULE_SETUP
#line 288 "cint_scanner.l"
{ NOPROMPT(); return('(');          }
	YY_BREAK
case 83:
YY_RULE_SETUP
#line 289 "cint_scanner.l"
{ NOPROMPT(); return(')');          }
	YY_BREAK
case 84:
YY_RULE_SETUP
#line 290 "cint_scanner.l"
{ NOPROMPT(); return('[');          }
	YY_BREAK
case 85:
YY_RULE_SETUP
#line 291 "cint_scanner.l"
{ NOPROMPT(); return(']');          }
	YY_BREAK
case 86:
YY_RULE_SETUP
#line 292 "cint_scanner.l"
{ NOPROMPT(); return('.');          }
	YY_BREAK
case 87:
YY_RULE_SETUP
#line 293 "cint_scanner.l"
{ NOPROMPT(); return('&');          }
	YY_BREAK
case 88:
YY_RULE_SETUP
#line 294 "cint_scanner.l"
{ NOPROMPT(); return('!');          }
	YY_BREAK
case 89:
YY_RULE_SETUP
#line 295 "cint_scanner.l"
{ NOPROMPT(); return('~');          }
	YY_BREAK
case 90:
YY_RULE_SETUP
#line 296 "cint_scanner.l"
{ NOPROMPT(); return('-');          }
	YY_BREAK
case 91:
YY_RULE_SETUP
#line 297 "cint_scanner.l"
{ NOPROMPT(); return('+');          }
	YY_BREAK
case 92:
YY_RULE_SETUP
#line 298 "cint_scanner.l"
{ NOPROMPT(); return('*');          }
	YY_BREAK
case 93:
YY_RULE_SETUP
#line 299 "cint_scanner.l"
{ NOPROMPT(); return('/');          }
	YY_BREAK
case 94:
YY_RULE_SETUP
#line 300 "cint_scanner.l"
{ NOPROMPT(); return('%');          }
	YY_BREAK
case 95:
YY_RULE_SETUP
#line 301 "cint_scanner.l"
{ NOPROMPT(); return('<');          }
	YY_BREAK
case 96:
YY_RULE_SETUP
#line 302 "cint_scanner.l"
{ NOPROMPT(); return('>');          }
	YY_BREAK
case 97:
YY_RULE_SETUP
#line 303 "cint_scanner.l"
{ NOPROMPT(); return('^');          }
	YY_BREAK
case 98:
YY_RULE_SETUP
#line 304 "cint_scanner.l"
{ NOPROMPT(); return('|');          }
	YY_BREAK
case 99:
YY_RULE_SETUP
#line 305 "cint_scanner.l"
{ NOPROMPT(); return('?');          }
	YY_BREAK
case 100:
YY_RULE_SETUP
#line 307 "cint_scanner.l"
{ /* Ignore white space */ }
	YY_BREAK
case 101:
/* rule 101 can match eol */
YY_RULE_SETUP
#line 308 "cint_scanner.l"
{ /* Swallow newlines, scanner will count them */ }
	YY_BREAK
case 102:
YY_RULE_SETUP
#line 309 "cint_scanner.l"
{ /* Swallow unknown characters [DEFAULT RULE] */ }
	YY_BREAK
case 103:
YY_RULE_SETUP
#line 311 "cint_scanner.l"
ECHO;
	YY_BREAK
#line 1679 "cint_c.lex.c"

	case YY_END_OF_BUFFER:
		{
		/* Amount of text matched not including the EOB char. */
		int yy_amount_of_matched_text = (int) (yy_cp - yyg->yytext_ptr) - 1;

		/* Undo the effects of YY_DO_BEFORE_ACTION. */
		*yy_cp = yyg->yy_hold_char;
		YY_RESTORE_YY_MORE_OFFSET
		YY_CHECK_BUFFER_STACK;

		if ( YY_CURRENT_BUFFER_LVALUE->yy_buffer_status == YY_BUFFER_NEW )
			{
			/* We're scanning a new file or input source.  It's
			 * possible that this happened because the user
			 * just pointed yyin at a new source and called
			 * cint_c_lex().  If so, then we have to assure
			 * consistency between YY_CURRENT_BUFFER and our
			 * globals.  Here is the right place to do so, because
			 * this is the first action (other than possibly a
			 * back-up) that will match for the new input source.
			 */
			yyg->yy_n_chars = YY_CURRENT_BUFFER_LVALUE->yy_n_chars;
			YY_CURRENT_BUFFER_LVALUE->yy_input_file = yyin;
			YY_CURRENT_BUFFER_LVALUE->yy_buffer_status = YY_BUFFER_NORMAL;
			}

		/* Note that here we test for yy_c_buf_p "<=" to the position
		 * of the first EOB in the buffer, since yy_c_buf_p will
		 * already have been incremented past the NUL character
		 * (since all states make transitions on EOB to the
		 * end-of-buffer state).  Contrast this with the test
		 * in input().
		 */
		if ( yyg->yy_c_buf_p <= &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[yyg->yy_n_chars] )
			{ /* This was really a NUL. */
			yy_state_type yy_next_state;

			yyg->yy_c_buf_p = yyg->yytext_ptr + yy_amount_of_matched_text;

			yy_current_state = yy_get_previous_state( yyscanner );

			/* Okay, we're now positioned to make the NUL
			 * transition.  We couldn't have
			 * yy_get_previous_state() go ahead and do it
			 * for us because it doesn't know how to deal
			 * with the possibility of jamming (and we don't
			 * want to build jamming into it because then it
			 * will run more slowly).
			 */

			yy_next_state = yy_try_NUL_trans( yy_current_state , yyscanner);

			yy_bp = yyg->yytext_ptr + YY_MORE_ADJ;

			if ( yy_next_state )
				{
				/* Consume the NUL. */
				yy_cp = ++yyg->yy_c_buf_p;
				yy_current_state = yy_next_state;
				goto yy_match;
				}

			else
				{
				yy_cp = yyg->yy_c_buf_p;
				goto yy_find_action;
				}
			}

		else switch ( yy_get_next_buffer( yyscanner ) )
			{
			case EOB_ACT_END_OF_FILE:
				{
				yyg->yy_did_buffer_switch_on_eof = 0;

				if ( cint_c_wrap(yyscanner ) )
					{
					/* Note: because we've taken care in
					 * yy_get_next_buffer() to have set up
					 * yytext, we can now set up
					 * yy_c_buf_p so that if some total
					 * hoser (like flex itself) wants to
					 * call the scanner after we return the
					 * YY_NULL, it'll still work - another
					 * YY_NULL will get returned.
					 */
					yyg->yy_c_buf_p = yyg->yytext_ptr + YY_MORE_ADJ;

					yy_act = YY_STATE_EOF(YY_START);
					goto do_action;
					}

				else
					{
					if ( ! yyg->yy_did_buffer_switch_on_eof )
						YY_NEW_FILE;
					}
				break;
				}

			case EOB_ACT_CONTINUE_SCAN:
				yyg->yy_c_buf_p =
					yyg->yytext_ptr + yy_amount_of_matched_text;

				yy_current_state = yy_get_previous_state( yyscanner );

				yy_cp = yyg->yy_c_buf_p;
				yy_bp = yyg->yytext_ptr + YY_MORE_ADJ;
				goto yy_match;

			case EOB_ACT_LAST_MATCH:
				yyg->yy_c_buf_p =
				&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[yyg->yy_n_chars];

				yy_current_state = yy_get_previous_state( yyscanner );

				yy_cp = yyg->yy_c_buf_p;
				yy_bp = yyg->yytext_ptr + YY_MORE_ADJ;
				goto yy_find_action;
			}
		break;
		}

	default:
		YY_FATAL_ERROR(
			"fatal flex scanner internal error--no action found" );
	} /* end of action switch */
		} /* end of scanning one token */
} /* end of cint_c_lex */

/* yy_get_next_buffer - try to read in a new buffer
 *
 * Returns a code representing an action:
 *	EOB_ACT_LAST_MATCH -
 *	EOB_ACT_CONTINUE_SCAN - continue scanning from current position
 *	EOB_ACT_END_OF_FILE - end of file
 */
static int yy_get_next_buffer (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
	register char *dest = YY_CURRENT_BUFFER_LVALUE->yy_ch_buf;
	register char *source = yyg->yytext_ptr;
	register int number_to_move, i;
	int ret_val;

	if ( yyg->yy_c_buf_p > &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[yyg->yy_n_chars + 1] )
		YY_FATAL_ERROR(
		"fatal flex scanner internal error--end of buffer missed" );

	if ( YY_CURRENT_BUFFER_LVALUE->yy_fill_buffer == 0 )
		{ /* Don't try to fill the buffer, so this is an EOF. */
		if ( yyg->yy_c_buf_p - yyg->yytext_ptr - YY_MORE_ADJ == 1 )
			{
			/* We matched a single character, the EOB, so
			 * treat this as a final EOF.
			 */
			return EOB_ACT_END_OF_FILE;
			}

		else
			{
			/* We matched some text prior to the EOB, first
			 * process it.
			 */
			return EOB_ACT_LAST_MATCH;
			}
		}

	/* Try to read more data. */

	/* First move last chars to start of buffer. */
	number_to_move = (int) (yyg->yy_c_buf_p - yyg->yytext_ptr) - 1;

	for ( i = 0; i < number_to_move; ++i )
		*(dest++) = *(source++);

	if ( YY_CURRENT_BUFFER_LVALUE->yy_buffer_status == YY_BUFFER_EOF_PENDING )
		/* don't do the read, it's not guaranteed to return an EOF,
		 * just force an EOF
		 */
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = yyg->yy_n_chars = 0;

	else
		{
			/* coverity[check_after_deref] */
			size_t num_to_read =
			YY_CURRENT_BUFFER_LVALUE->yy_buf_size - number_to_move - 1;

		while ( num_to_read <= 0 )
			{ /* Not enough room in the buffer - grow it. */

			/* just a shorter name for the current buffer */
			/* coverity[check_after_deref] */
			YY_BUFFER_STATE b = YY_CURRENT_BUFFER;

			int yy_c_buf_p_offset =
				(int) (yyg->yy_c_buf_p - b->yy_ch_buf);

			if ( b->yy_is_our_buffer )
				{
				int new_size = b->yy_buf_size * 2;

				if ( new_size <= 0 )
					b->yy_buf_size += b->yy_buf_size / 8;
				else
					b->yy_buf_size *= 2;

				b->yy_ch_buf = (char *)
					/* Include room in for 2 EOB chars. */
					cint_c_realloc((void *) b->yy_ch_buf,b->yy_buf_size + 2 ,yyscanner );
				}
			else
				/* Can't grow it, we don't own it. */
				b->yy_ch_buf = 0;

			if ( ! b->yy_ch_buf )
				YY_FATAL_ERROR(
				"fatal error - scanner input buffer overflow" );

			yyg->yy_c_buf_p = &b->yy_ch_buf[yy_c_buf_p_offset];

			num_to_read = YY_CURRENT_BUFFER_LVALUE->yy_buf_size -
						number_to_move - 1;

			}

		if ( num_to_read > YY_READ_BUF_SIZE )
			num_to_read = YY_READ_BUF_SIZE;

		/* Read in more data. */
		YY_INPUT( (&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[number_to_move]),
			yyg->yy_n_chars, num_to_read );

		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = yyg->yy_n_chars;
		}

	if ( yyg->yy_n_chars == 0 )
		{
		if ( number_to_move == YY_MORE_ADJ )
			{
			ret_val = EOB_ACT_END_OF_FILE;
			cint_c_restart(yyin  ,yyscanner);
			}

		else
			{
			ret_val = EOB_ACT_LAST_MATCH;
			YY_CURRENT_BUFFER_LVALUE->yy_buffer_status =
				YY_BUFFER_EOF_PENDING;
			}
		}

	else
		ret_val = EOB_ACT_CONTINUE_SCAN;

	yyg->yy_n_chars += number_to_move;
	YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[yyg->yy_n_chars] = YY_END_OF_BUFFER_CHAR;
	YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[yyg->yy_n_chars + 1] = YY_END_OF_BUFFER_CHAR;

	yyg->yytext_ptr = &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[0];

	return ret_val;
}

/* yy_get_previous_state - get the state just before the EOB char was reached */

    static yy_state_type yy_get_previous_state (yyscan_t yyscanner)
{
	register yy_state_type yy_current_state;
	register char *yy_cp;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

	yy_current_state = yyg->yy_start;

	for ( yy_cp = yyg->yytext_ptr + YY_MORE_ADJ; yy_cp < yyg->yy_c_buf_p; ++yy_cp )
		{
		register YY_CHAR yy_c = (*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : 1);
		if ( yy_accept[yy_current_state] )
			{
			yyg->yy_last_accepting_state = yy_current_state;
			yyg->yy_last_accepting_cpos = yy_cp;
			}
		while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
			{
			yy_current_state = (int) yy_def[yy_current_state];
			if ( yy_current_state >= 279 )
				yy_c = yy_meta[(unsigned int) yy_c];
			}
		yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
		}

	return yy_current_state;
}

/* yy_try_NUL_trans - try to make a transition on the NUL character
 *
 * synopsis
 *	next_state = yy_try_NUL_trans( current_state );
 */
    static yy_state_type yy_try_NUL_trans  (yy_state_type yy_current_state , yyscan_t yyscanner)
{
	register int yy_is_jam;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
	register char *yy_cp = yyg->yy_c_buf_p;

	register YY_CHAR yy_c = 1;
	if ( yy_accept[yy_current_state] )
		{
		yyg->yy_last_accepting_state = yy_current_state;
		yyg->yy_last_accepting_cpos = yy_cp;
		}
	while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
		{
		yy_current_state = (int) yy_def[yy_current_state];
		if ( yy_current_state >= 279 )
			yy_c = yy_meta[(unsigned int) yy_c];
		}
	yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
	yy_is_jam = (yy_current_state == 278);

	return yy_is_jam ? 0 : yy_current_state;
}

#ifndef YY_NO_INPUT
#ifdef __cplusplus
    static int yyinput (yyscan_t yyscanner)
#else
    static int input  (yyscan_t yyscanner)
#endif

{
	int c;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

	*yyg->yy_c_buf_p = yyg->yy_hold_char;

	if ( *yyg->yy_c_buf_p == YY_END_OF_BUFFER_CHAR )
		{
		/* yy_c_buf_p now points to the character we want to return.
		 * If this occurs *before* the EOB characters, then it's a
		 * valid NUL; if not, then we've hit the end of the buffer.
		 */
		if ( yyg->yy_c_buf_p < &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[yyg->yy_n_chars] )
			/* This was really a NUL. */
			*yyg->yy_c_buf_p = '\0';

		else
			{ /* need more input */
			int offset = yyg->yy_c_buf_p - yyg->yytext_ptr;
			++yyg->yy_c_buf_p;

			switch ( yy_get_next_buffer( yyscanner ) )
				{
				case EOB_ACT_LAST_MATCH:
					/* This happens because yy_g_n_b()
					 * sees that we've accumulated a
					 * token and flags that we need to
					 * try matching the token before
					 * proceeding.  But for input(),
					 * there's no matching to consider.
					 * So convert the EOB_ACT_LAST_MATCH
					 * to EOB_ACT_END_OF_FILE.
					 */

					/* Reset buffer status. */
					cint_c_restart(yyin ,yyscanner);

					/*FALLTHROUGH*/

				case EOB_ACT_END_OF_FILE:
					{
					if ( cint_c_wrap(yyscanner ) )
						return EOF;

					if ( ! yyg->yy_did_buffer_switch_on_eof )
						YY_NEW_FILE;
#ifdef __cplusplus
					return yyinput(yyscanner);
#else
					return input(yyscanner);
#endif
					}

				case EOB_ACT_CONTINUE_SCAN:
					yyg->yy_c_buf_p = yyg->yytext_ptr + offset;
					break;
				}
			}
		}

	c = *(unsigned char *) yyg->yy_c_buf_p;	/* cast for 8-bit char's */
	*yyg->yy_c_buf_p = '\0';	/* preserve yytext */
	yyg->yy_hold_char = *++yyg->yy_c_buf_p;

	if ( c == '\n' )

    do{ yylineno++;
        yycolumn=0;
    }while(0)
;

	return c;
}
#endif	/* ifndef YY_NO_INPUT */

/** Immediately switch to a different input stream.
 * @param input_file A readable stream.
 * @param yyscanner The scanner object.
 * @note This function does not reset the start condition to @c INITIAL .
 */
    void cint_c_restart  (FILE * input_file , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

	if ( ! YY_CURRENT_BUFFER ){
        /* coverity[var_deref_op] */
        cint_c_ensure_buffer_stack (yyscanner);
        YY_CHECK_BUFFER_STACK;
		YY_CURRENT_BUFFER_LVALUE =
            cint_c__create_buffer(yyin,YY_BUF_SIZE ,yyscanner);
	}

	cint_c__init_buffer(YY_CURRENT_BUFFER,input_file ,yyscanner);
	cint_c__load_buffer_state(yyscanner );
}

/** Switch to a different input buffer.
 * @param new_buffer The new input buffer.
 * @param yyscanner The scanner object.
 */
    void cint_c__switch_to_buffer  (YY_BUFFER_STATE  new_buffer , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

	
	cint_c_ensure_buffer_stack (yyscanner);
	if ( YY_CURRENT_BUFFER == new_buffer )
		return;

	if ( YY_CURRENT_BUFFER )
		{
		/* Flush out information for old buffer. */
		*yyg->yy_c_buf_p = yyg->yy_hold_char;
		YY_CURRENT_BUFFER_LVALUE->yy_buf_pos = yyg->yy_c_buf_p;
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = yyg->yy_n_chars;
		}

        YY_CHECK_BUFFER_STACK;
	YY_CURRENT_BUFFER_LVALUE = new_buffer;
	cint_c__load_buffer_state(yyscanner );

	/* We don't actually know whether we did this switch during
	 * EOF (cint_c_wrap()) processing, but the only time this flag
	 * is looked at is after cint_c_wrap() is called, so it's safe
	 * to go ahead and always set it.
	 */
	yyg->yy_did_buffer_switch_on_eof = 1;
}

static void cint_c__load_buffer_state  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
	yyg->yy_n_chars = YY_CURRENT_BUFFER_LVALUE->yy_n_chars;
	yyg->yytext_ptr = yyg->yy_c_buf_p = YY_CURRENT_BUFFER_LVALUE->yy_buf_pos;
	yyin = YY_CURRENT_BUFFER_LVALUE->yy_input_file;
	yyg->yy_hold_char = *yyg->yy_c_buf_p;
}

/** Allocate and initialize an input buffer state.
 * @param file A readable stream.
 * @param size The character buffer size in bytes. When in doubt, use @c YY_BUF_SIZE.
 * @param yyscanner The scanner object.
 * @return the allocated buffer state.
 */
    YY_BUFFER_STATE cint_c__create_buffer  (FILE * file, int  size , yyscan_t yyscanner)
{
	YY_BUFFER_STATE b;

	b = (YY_BUFFER_STATE) cint_c_alloc(sizeof( struct yy_buffer_state ) ,yyscanner );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in cint_c__create_buffer()" );

	b->yy_buf_size = size;

	/* yy_ch_buf has to be 2 characters longer than the size given because
	 * we need to put in 2 end-of-buffer characters.
	 */
	b->yy_ch_buf = (char *) cint_c_alloc(b->yy_buf_size + 2 ,yyscanner );
	if ( ! b->yy_ch_buf )
		YY_FATAL_ERROR( "out of dynamic memory in cint_c__create_buffer()" );

	b->yy_is_our_buffer = 1;

	cint_c__init_buffer(b,file ,yyscanner);

	return b;
}

/** Destroy the buffer.
 * @param b a buffer created with cint_c__create_buffer()
 * @param yyscanner The scanner object.
 */
    void cint_c__delete_buffer (YY_BUFFER_STATE  b , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

	if ( ! b )
		return;

	if ( b == YY_CURRENT_BUFFER ) /* Not sure if we should pop here. */
		YY_CURRENT_BUFFER_LVALUE = (YY_BUFFER_STATE) 0;

	if ( b->yy_is_our_buffer )
		cint_c_free((void *) b->yy_ch_buf ,yyscanner );

	cint_c_free((void *) b ,yyscanner );
}

/* Initializes or reinitializes a buffer.
 * This function is sometimes called more than once on the same buffer,
 * such as during a cint_c_restart() or at EOF.
 */
    static void cint_c__init_buffer  (YY_BUFFER_STATE  b, FILE * file , yyscan_t yyscanner)

{
	int oerrno = errno;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

	cint_c__flush_buffer(b ,yyscanner);

	b->yy_input_file = file;
	b->yy_fill_buffer = 1;

    /* If b is the current buffer, then cint_c__init_buffer was _probably_
     * called from cint_c_restart() or through yy_get_next_buffer.
     * In that case, we don't want to reset the lineno or column.
     */
    if (b != YY_CURRENT_BUFFER){
        b->yy_bs_lineno = 1;
        b->yy_bs_column = 0;
    }

	b->yy_is_interactive = 1;

	errno = oerrno;
}

/** Discard all buffered characters. On the next scan, YY_INPUT will be called.
 * @param b the buffer state to be flushed, usually @c YY_CURRENT_BUFFER.
 * @param yyscanner The scanner object.
 */
    void cint_c__flush_buffer (YY_BUFFER_STATE  b , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
	if ( ! b )
		return;

	b->yy_n_chars = 0;

	/* We always need two end-of-buffer characters.  The first causes
	 * a transition to the end-of-buffer state.  The second causes
	 * a jam in that state.
	 */
	b->yy_ch_buf[0] = YY_END_OF_BUFFER_CHAR;
	b->yy_ch_buf[1] = YY_END_OF_BUFFER_CHAR;

	b->yy_buf_pos = &b->yy_ch_buf[0];

	b->yy_at_bol = 1;
	b->yy_buffer_status = YY_BUFFER_NEW;

	if ( b == YY_CURRENT_BUFFER )
		cint_c__load_buffer_state(yyscanner );
}

/** Pushes the new state onto the stack. The new state becomes
 *  the current state. This function will allocate the stack
 *  if necessary.
 *  @param new_buffer The new state.
 *  @param yyscanner The scanner object.
 */
void cint_c_push_buffer_state (YY_BUFFER_STATE new_buffer , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
	if (new_buffer == NULL)
		return;

	cint_c_ensure_buffer_stack(yyscanner);

	/* This block is copied from cint_c__switch_to_buffer. */
	if ( YY_CURRENT_BUFFER )
		{
		/* Flush out information for old buffer. */
		*yyg->yy_c_buf_p = yyg->yy_hold_char;
		YY_CURRENT_BUFFER_LVALUE->yy_buf_pos = yyg->yy_c_buf_p;
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = yyg->yy_n_chars;
		}

	/* Only push if top exists. Otherwise, replace top. */
	if (YY_CURRENT_BUFFER)
		yyg->yy_buffer_stack_top++;
        YY_CHECK_BUFFER_STACK;
	YY_CURRENT_BUFFER_LVALUE = new_buffer;

	/* copied from cint_c__switch_to_buffer. */
	cint_c__load_buffer_state(yyscanner );
	yyg->yy_did_buffer_switch_on_eof = 1;
}

/** Removes and deletes the top of the stack, if present.
 *  The next element becomes the new top.
 *  @param yyscanner The scanner object.
 */
void cint_c_pop_buffer_state (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
	if (!YY_CURRENT_BUFFER)
		return;

	cint_c__delete_buffer(YY_CURRENT_BUFFER ,yyscanner);
	YY_CURRENT_BUFFER_LVALUE = NULL;
	if (yyg->yy_buffer_stack_top > 0)
		--yyg->yy_buffer_stack_top;

	/* coverity[check_after_deref] */
	if (YY_CURRENT_BUFFER) {
		cint_c__load_buffer_state(yyscanner );
		yyg->yy_did_buffer_switch_on_eof = 1;
	}
}

/* Allocates the stack if it does not exist.
 *  Guarantees space for at least one push.
 */
static void cint_c_ensure_buffer_stack (yyscan_t yyscanner)
{
	int num_to_alloc;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

	if (!yyg->yy_buffer_stack) {

		/* First allocation is just for 2 elements, since we don't know if this
		 * scanner will even need a stack. We use 2 instead of 1 to avoid an
		 * immediate realloc on the next call.
         */
		num_to_alloc = 1;
		yyg->yy_buffer_stack = (struct yy_buffer_state**)cint_c_realloc
                    (NULL, num_to_alloc * sizeof(struct yy_buffer_state*)
								, yyscanner);

		cint_cparser_memset(yyg->yy_buffer_stack, 0, num_to_alloc * sizeof(struct yy_buffer_state*));

		yyg->yy_buffer_stack_max = num_to_alloc;
		yyg->yy_buffer_stack_top = 0;
		return;
	}

	if (yyg->yy_buffer_stack_top >= (yyg->yy_buffer_stack_max) - 1){

		/* Increase the buffer to prepare for a possible push. */
		int grow_size = 8 /* arbitrary grow size */;

		num_to_alloc = yyg->yy_buffer_stack_max + grow_size;
		yyg->yy_buffer_stack = (struct yy_buffer_state**)cint_c_realloc
								(yyg->yy_buffer_stack,
								num_to_alloc * sizeof(struct yy_buffer_state*)
								, yyscanner);

		/* zero only the new slots.*/
		cint_cparser_memset(yyg->yy_buffer_stack + yyg->yy_buffer_stack_max, 0, grow_size * sizeof(struct yy_buffer_state*));
		yyg->yy_buffer_stack_max = num_to_alloc;
	}
}

/** Setup the input buffer state to scan directly from a user-specified character buffer.
 * @param base the character buffer
 * @param size the size in bytes of the character buffer
 * @param yyscanner The scanner object.
 * @return the newly allocated buffer state object.
 */
YY_BUFFER_STATE cint_c__scan_buffer  (char * base, yy_size_t  size , yyscan_t yyscanner)
{
	YY_BUFFER_STATE b;

	if ( size < 2 ||
	     base[size-2] != YY_END_OF_BUFFER_CHAR ||
	     base[size-1] != YY_END_OF_BUFFER_CHAR )
		/* They forgot to leave room for the EOB's. */
		return 0;

	b = (YY_BUFFER_STATE) cint_c_alloc(sizeof( struct yy_buffer_state ) ,yyscanner );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in cint_c__scan_buffer()" );

	b->yy_buf_size = size - 2;	/* "- 2" to take care of EOB's */
	b->yy_buf_pos = b->yy_ch_buf = base;
	b->yy_is_our_buffer = 0;
	b->yy_input_file = 0;
	b->yy_n_chars = b->yy_buf_size;
	b->yy_is_interactive = 0;
	b->yy_at_bol = 1;
	b->yy_fill_buffer = 0;
	b->yy_buffer_status = YY_BUFFER_NEW;

	cint_c__switch_to_buffer(b ,yyscanner );

	return b;
}

/** Setup the input buffer state to scan the given bytes. The next call to cint_c_lex() will
 * scan from a @e copy of @a bytes.
 * @param bytes the byte buffer to scan
 * @param len the number of bytes in the buffer pointed to by @a bytes.
 * @param yyscanner The scanner object.
 * @return the newly allocated buffer state object.
 */
YY_BUFFER_STATE cint_c__scan_bytes  (yyconst char * bytes, int  len , yyscan_t yyscanner)
{
	YY_BUFFER_STATE b;
	char *buf;
	yy_size_t n;
	int i;

	/* Get memory for full buffer, including space for trailing EOB's. */
	n = len + 2;
	buf = (char *) cint_c_alloc(n ,yyscanner );
	if ( ! buf )
		YY_FATAL_ERROR( "out of dynamic memory in cint_c__scan_bytes()" );

	for ( i = 0; i < len; ++i )
		buf[i] = bytes[i];

	buf[len] = buf[len+1] = YY_END_OF_BUFFER_CHAR;

	b = cint_c__scan_buffer(buf,n ,yyscanner);
	if ( ! b )
		YY_FATAL_ERROR( "bad buffer in cint_c__scan_bytes()" );

	/* It's okay to grow etc. this buffer, and we should throw it
	 * away when we're done.
	 */
	b->yy_is_our_buffer = 1;

	return b;
}

/* Redefine yyless() so it works in section 3 code. */

#undef yyless
#define yyless(n) \
	do \
		{ \
		/* Undo effects of setting up yytext. */ \
        int yyless_macro_arg = (n); \
        YY_LESS_LINENO(yyless_macro_arg);\
		yytext[yyleng] = yyg->yy_hold_char; \
		yyg->yy_c_buf_p = yytext + yyless_macro_arg; \
		yyg->yy_hold_char = *yyg->yy_c_buf_p; \
		*yyg->yy_c_buf_p = '\0'; \
		yyleng = yyless_macro_arg; \
		} \
	while ( 0 )

/* Accessor  methods (get/set functions) to struct members. */

/** Get the user-defined data for this scanner.
 * @param yyscanner The scanner object.
 */
YY_EXTRA_TYPE cint_c_get_extra  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyextra;
}

/** Get the current line number.
 * @param yyscanner The scanner object.
 */
int cint_c_get_lineno  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

        if (! YY_CURRENT_BUFFER)
            return 0;

    return yylineno;
}

/** Get the current column number.
 * @param yyscanner The scanner object.
 */
int cint_c_get_column  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

        if (! YY_CURRENT_BUFFER)
            return 0;

    return yycolumn;
}

/** Get the input stream.
 * @param yyscanner The scanner object.
 */
FILE *cint_c_get_in  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyin;
}

/** Get the output stream.
 * @param yyscanner The scanner object.
 */
FILE *cint_c_get_out  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyout;
}

/** Get the length of the current token.
 * @param yyscanner The scanner object.
 */
int cint_c_get_leng  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyleng;
}

/** Get the current token.
 * @param yyscanner The scanner object.
 */

char *cint_c_get_text  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yytext;
}

/** Set the user-defined data. This data is never touched by the scanner.
 * @param user_defined The data to be associated with this scanner.
 * @param yyscanner The scanner object.
 */
void cint_c_set_extra (YY_EXTRA_TYPE  user_defined , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yyextra = user_defined ;
}

/** Set the current line number.
 * @param line_number
 * @param yyscanner The scanner object.
 */
void cint_c_set_lineno (int  line_number , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

        /* lineno is only valid if an input buffer exists. */
        /* coverity[var_deref_op] */
        if (! YY_CURRENT_BUFFER )
           YY_FATAL_ERROR( "cint_c_set_lineno called with no buffer" );

    yylineno = line_number;
}

/** Set the current column.
 * @param line_number
 * @param yyscanner The scanner object.
 */
void cint_c_set_column (int  column_no , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

        /* column is only valid if an input buffer exists. */
        if (! YY_CURRENT_BUFFER )
           YY_FATAL_ERROR( "cint_c_set_column called with no buffer" );

    yycolumn = column_no;
}

/** Set the input stream. This does not discard the current
 * input buffer.
 * @param in_str A readable stream.
 * @param yyscanner The scanner object.
 * @see cint_c__switch_to_buffer
 */
void cint_c_set_in (FILE *  in_str , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yyin = in_str ;
}

void cint_c_set_out (FILE *  out_str , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yyout = out_str ;
}

int cint_c_get_debug  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yy_flex_debug;
}

void cint_c_set_debug (int  bdebug , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yy_flex_debug = bdebug ;
}

/* Accessor methods for yylval and yylloc */

YYSTYPE * cint_c_get_lval  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yylval;
}

void cint_c_set_lval (YYSTYPE *  yylval_param , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yylval = yylval_param;
}

YYLTYPE *cint_c_get_lloc  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yylloc;
}

void cint_c_set_lloc (YYLTYPE *  yylloc_param , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yylloc = yylloc_param;
}

static int yy_init_globals (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    /* Initialization is the same as for the non-reentrant scanner.
       This function is called once per scanner lifetime. */

    yyg->yy_buffer_stack = 0;
    yyg->yy_buffer_stack_top = 0;
    yyg->yy_buffer_stack_max = 0;
    yyg->yy_c_buf_p = (char *) 0;
    yyg->yy_init = 1;
    yyg->yy_start = 0;
    yyg->yy_start_stack_ptr = 0;
    yyg->yy_start_stack_depth = 0;
    yyg->yy_start_stack = (int *) 0;

/* Defined in main.c */
#ifdef YY_STDINIT
    yyin = stdin;
    yyout = stdout;
#else
    yyin = (FILE *) 0;
    yyout = (FILE *) 0;
#endif

    /* For future reference: Set errno on error, since we are called by
     * cint_c_lex_init()
     */
    return 0;
}

/* User-visible API */

/* cint_c_lex_init is special because it creates the scanner itself, so it is
 * the ONLY reentrant function that doesn't take the scanner as the last argument.
 * That's why we explicitly handle the declaration, instead of using our macros.
 */

int cint_c_lex_init(yyscan_t* ptr_yy_globals)

{
    if (ptr_yy_globals == NULL){
        errno = EINVAL;
        return 1;
    }

    *ptr_yy_globals = (yyscan_t) cint_c_alloc ( sizeof( struct yyguts_t ), NULL );

    if (*ptr_yy_globals == NULL){
        errno = ENOMEM;
        return 1;
    }

    cint_cparser_memset(*ptr_yy_globals,0,sizeof(struct yyguts_t));

    return yy_init_globals ( *ptr_yy_globals );
}

/* cint_c_lex_destroy is for both reentrant and non-reentrant scanners. */
int cint_c_lex_destroy  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

    /* Pop the buffer stack, destroying each element. */
	while(YY_CURRENT_BUFFER){
		cint_c__delete_buffer(YY_CURRENT_BUFFER ,yyscanner );
		YY_CURRENT_BUFFER_LVALUE = NULL;
		cint_c_pop_buffer_state(yyscanner);
	}

	/* Destroy the stack itself. */
	cint_c_free(yyg->yy_buffer_stack ,yyscanner);
	yyg->yy_buffer_stack = NULL;

    /* Destroy the start condition stack. */
        cint_c_free(yyg->yy_start_stack ,yyscanner );
        yyg->yy_start_stack = NULL;

    /* Destroy the main struct (reentrant only). */
    cint_c_free ( yyscanner , yyscanner );
    return 0;
}

/*
 * Internal utility routines.
 */

#ifndef yytext_ptr
static void yy_flex_strncpy (char* s1, yyconst char * s2, int n , yyscan_t yyscanner)
{
	register int i;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
	for ( i = 0; i < n; ++i )
		s1[i] = s2[i];
}
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen (yyconst char * s , yyscan_t yyscanner)
{
	register int n;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
	for ( n = 0; s[n]; ++n )
		;

	return n;
}
#endif

#define YYTABLES_NAME "yytables"

#undef YY_NEW_FILE
#undef YY_FLUSH_BUFFER
#undef yy_set_bol
#undef yy_new_buffer
#undef yy_set_interactive
#undef yytext_ptr
#undef YY_DO_BEFORE_ACTION

#ifdef YY_DECL_IS_OURS
#undef YY_DECL_IS_OURS
#undef YY_DECL
#endif
#line 311 "cint_scanner.l"



#include "cint_error.h"

int cint_c_wrap(yyscan_t yyscanner)
{
    cint_errno = CINT_E_EXIT;
    return(1);
}

void cpp_comment(void)
{

}

/* cint_current_line()
 *
 * Get current input line from the scanner. Used to construct error messages
 * issued from the parser.
 *
 * Inputs:
 * yyscanner: Pointer to scanner control block.
 * lineBuffer: Character buffer to receive current scan line.
 * lineLen: Size of character buffer.
 * column: Pointer to integer that will receive starting column of current
 *         token in scan line.
 * tokLen: Pointer to integer that will receive length of current token.
 *
 * If current scan line doesn't fit into lineBuffer, trailing characters
 * are truncated. If current token is beyond the truncated buffer, column
 * and tokLen are set to zero.
 */
char *
cint_current_line(yyscan_t yyscanner, char *const lineBuffer, const int lineLen,
                int *column, int *tokLen, char **curFile, int *curLine)
{
    struct yyguts_t *yyg = (struct yyguts_t *) yyscanner;
    struct cint_extra_type_s *extraInfo = cint_c_get_extra(yyscanner);
    const char *buffStart = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]->yy_ch_buf;
    const char *buffEnd = &buffStart[yyg->yy_n_chars];
    const char *copyEnd = &lineBuffer[lineLen - 1];     /* Leave room for terminator */
    char *copy = lineBuffer;
    char *strPtr;
    int tokenLen;

    *column = 0;
    *tokLen = 0;
    tokenLen = 0;

    if (*(yyg->yytext_r)) {
        /* Back up to start of current line */
        for (strPtr = yyg->yytext_r; (strPtr >= buffStart) && (*strPtr != '\n');
             strPtr--);
        strPtr++;
        /* Copy current line. */
        for (; (strPtr < buffEnd) && (copy < copyEnd) && (*strPtr != '\n'); strPtr++) {
            if (*strPtr) {
                *copy++ = *strPtr;
                if (strPtr < yyg->yytext_r) {
                    /* Count columns before current token. */
                    if (*strPtr == '\t') {
                        /* Deal with tabs */
                        *column = ((*column + 8) / 8) * 8;
                    } else {
                        *column += 1;
                    }
                } else {
                    /* else count token characters */
                    tokenLen++;
                }
            } else {
                /*
                 * Scanner puts a null terminator at end of current token in
                 * current line.  The saved character is held in "yy_hold_char".
                 */
                *tokLen = tokenLen;
                if (yyg->yy_hold_char == '\n') {
                    /* Held character is the EOL character */
                    break;
                }
                *copy++ = yyg->yy_hold_char;
            }
        }
    }
    *copy = 0;  /* Null terminate */

    if (cint_cparser_interactive()) {
        *curLine = 0;
        *curFile = NULL;
    } else {
        *curLine = cint_c_get_lineno(yyscanner);
        *curFile =
          (extraInfo && extraInfo[yyg->yy_buffer_stack_top].currentFileName[0]) ?
          extraInfo[yyg->yy_buffer_stack_top].currentFileName : NULL;
    }
    return lineBuffer;
}

int check_type(yyscan_t scanner)
{
    int rv;
    struct yyguts_t* yyg = (struct yyguts_t*)scanner;

    char* _yytext = cint_c_get_text(scanner);

    if(cint_interpreter_is_type(_yytext)) {
        rv = TYPE_NAME;
        *yylval = cint_ast_type(_yytext);
    }
    else if(cint_interpreter_is_iterator(_yytext, yylval)) {
        rv = ITERATOR;
    }
    else if(cint_interpreter_is_macro(_yytext, yylval)) {
        rv = MACRO;

    }
    else {
        rv = IDENTIFIER;
        *yylval = cint_ast_identifier(_yytext);
    }
    return rv;
}


/*******************************************************************************
 *
 * YY_INPUT Functions
 */

#if CINT_CONFIG_INCLUDE_PARSER_READLINE == 1

/* YY_INPUT behavior using READLINE */
void
__yy_input_readline(char* buf, int* result, int max_size, yyscan_t yyscanner)
{
    struct yyguts_t* yyg = (struct yyguts_t*) yyscanner;
    int rv;

    rv = cint_cparser_input_readline(yyin, buf, result, max_size,
                                     cint_scanner_prompt);
    if (rv < 0) {
            YY_FATAL_ERROR( "input in flex scanner failed" );
        }
}

#define CINT_YY_INPUT __yy_input_readline

#else

/* The default YY_INPUT behavior  */
void
__yy_input_default(char* buf, int* result, int max_size, yyscan_t yyscanner)
{
    struct yyguts_t* yyg = (struct yyguts_t*) yyscanner;
    int rv;

    rv = cint_cparser_input_default(yyin, buf, result, max_size,
                                    cint_scanner_prompt);
    if (rv < 0) {
        YY_FATAL_ERROR( "input in flex scanner failed" );
    }
}

/* The default YY_INPUT behavior with optional character echo */
void
__yy_input_default_echo(char* buf, int* result, int max_size, yyscan_t yyscanner)
{
    struct yyguts_t* yyg = (struct yyguts_t*) yyscanner;
    int rv;

    rv = cint_cparser_input_default_echo(yyin, buf, result, max_size,
                                         cint_scanner_prompt,
                                         cint_scanner_echo);
    if (rv < 0) {
        YY_FATAL_ERROR( "input in flex scanner failed" );
    }
}

#define CINT_YY_INPUT __yy_input_default

#endif /* CINT_CONFIG_INCLUDE_PARSER_READLINE */

/*
 * This is the YY_INPUT function called by the scanner.
 */

void
__yy_input(char* buf, int* result, int max_size, yyscan_t scanner)
{
    CINT_YY_INPUT(buf, result, max_size, scanner);
}


void
cint_c_scanner_start(FILE* handle, void* scanner)
{
    struct cint_extra_type_s *extraInfo;

    if (handle == 0) {
        /* Defaults to standard in */
        handle = stdin;
    }
    cint_c_restart(handle, scanner);
    extraInfo = cint_c_get_extra(scanner);
    if (extraInfo == 0) {
        extraInfo =
          cint_c_alloc(sizeof(struct cint_extra_type_s) * CINT_MAX_INCLUDE_DEPTH,
                       scanner);
        extraInfo->currentFileName[0] = 0;
        extraInfo->includedFromFile = NULL;
        extraInfo->includedFromLine = -1;
        cint_c_set_extra(extraInfo, scanner);
    }
}

int
cint_c_scanner_finish(void *scanner)
{
    struct cint_extra_type_s *extraInfo = cint_c_get_extra(scanner);

    if (extraInfo) {
        cint_c_free(extraInfo, scanner);
    }
    return cint_c_lex_destroy(scanner);
}

#else /* CINT_CONFIG_INCLUDE_PARSER */
int cint_lexer_c_not_empty;
#endif


