/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
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
 * Symbol table file for the BCMI_TSCE_XGXS.
 * This symbol table is used by the Broadcom debug shell.
 */

#include <phymod/chip/bcmi_tsce_xgxs_resetval.h>



/*******************************************************************************
 *
 * This function returns the register reset value. 
 */

uint32_t
bcmi_tsce_xgxs_resetval_get(int devad, uint32_t reg_addr)
{
    if (devad == 0) {
        switch (reg_addr) {
        case 0x0002:
            return 0x600d;
        case 0x0003:
            return 0x8770;
        case 0x9002:
            return 0x00aa;
        case 0x9003:
            return 0x00e4;
        case 0x9004:
            return 0x0083;
        case 0x900a:
            return 0xf800;
        case 0x900e:
            return 0x02d2;
        case 0x9031:
            return 0x0028;
        case 0x90b1:
            return 0x8000;
        case 0x90b4:
            return 0x001d;
        case 0x90b5:
            return 0xffff;
        case 0x9123:
            return 0x3fff;
        case 0x9130:
            return 0x7690;
        case 0x9131:
            return 0xc4f0;
        case 0x9132:
            return 0xe647;
        case 0x9140:
            return 0x65c5;
        case 0x9141:
            return 0x79a2;
        case 0x9142:
            return 0x3d9b;
        case 0x9220:
            return 0x0101;
        case 0x9221:
            return 0x6140;
        case 0x9222:
            return 0xee17;
        case 0x9230:
            return 0x4010;
        case 0x9231:
            return 0x0400;
        case 0x9232:
            return 0x0041;
        case 0x9233:
            return 0x8090;
        case 0x9234:
            return 0xa0b0;
        case 0x9235:
            return 0xc0d0;
        case 0x9236:
            return 0xe070;
        case 0x9237:
            return 0x0001;
        case 0x9238:
            return 0xf0f0;
        case 0x9239:
            return 0xf0f0;
        case 0x923a:
            return 0xf0f0;
        case 0x923b:
            return 0xf0f0;
        case 0x923c:
            return 0x0003;
        case 0x925a:
            return 0x0002;
        case 0x925b:
            return 0x006b;
        case 0x925d:
            return 0x3b5f;
        case 0x925e:
            return 0x006b;
        case 0x9262:
            return 0x00ff;
        case 0x9263:
            return 0x0002;
        case 0x9270:
            return 0xff00;
        case 0x9274:
            return 0x0400;
        case 0x9280:
            return 0xff00;
        case 0x9284:
            return 0x0400;
        case 0x9290:
            return 0xff00;
        case 0x9294:
            return 0x0400;
        case 0x92a0:
            return 0xff00;
        case 0x92a4:
            return 0x0400;
        case 0xa000:
            return 0x7ffe;
        case 0xa001:
            return 0x8000;
        case 0xa002:
            return 0x0070;
        case 0xa003:
            return 0x0064;
        case 0xa023:
            return 0x1400;
        case 0xa024:
            return 0x030f;
        case 0xa086:
            return 0x8000;
        case 0xc050:
            return 0x00ff;
        case 0xc054:
            return 0x8000;
        case 0xc070:
            return 0xff00;
        case 0xc074:
            return 0x0400;
        case 0xc111:
            return 0x0800;
        case 0xc112:
            return 0x01b4;
        case 0xc113:
            return 0x01c8;
        case 0xc132:
            return 0x4478;
        case 0xc133:
            return 0x7828;
        case 0xc134:
            return 0x2870;
        case 0xc162:
            return 0x4478;
        case 0xc163:
            return 0x7828;
        case 0xc185:
            return 0x02a0;
        case 0xc1ad:
            return 0x0001;
        case 0xc330:
            return 0x0002;
        case 0xc340:
            return 0x0011;
        default:
	    break;
        }
    } else if (devad == 1) {
        switch (reg_addr) {
        case 0xd001:
            return 0x0004;
        case 0xd002:
            return 0x0690;
        case 0xd003:
            return 0x00f0;
        case 0xd006:
            return 0x0100;
        case 0xd008:
            return 0x2000;
        case 0xd009:
            return 0x0020;
        case 0xd010:
            return 0x0008;
        case 0xd011:
            return 0x0200;
        case 0xd012:
            return 0x0087;
        case 0xd013:
            return 0x1c1e;
        case 0xd014:
            return 0x35ad;
        case 0xd015:
            return 0x35ad;
        case 0xd016:
            return 0x340d;
        case 0xd018:
            return 0x0011;
        case 0xd040:
            return 0x0020;
        case 0xd051:
            return 0x0004;
        case 0xd052:
            return 0x0096;
        case 0xd061:
            return 0x0004;
        case 0xd062:
            return 0x0002;
        case 0xd065:
            return 0x0001;
        case 0xd066:
            return 0x0588;
        case 0xd067:
            return 0x003c;
        case 0xd068:
            return 0x0083;
        case 0xd070:
            return 0x2000;
        case 0xd073:
            return 0x0100;
        case 0xd074:
            return 0x0004;
        case 0xd084:
            return 0x0303;
        case 0xd086:
            return 0x0001;
        case 0xd089:
            return 0x0007;
        case 0xd08e:
            return 0x0001;
        case 0xd090:
            return 0x0010;
        case 0xd092:
            return 0x2800;
        case 0xd099:
            return 0x8000;
        case 0xd0a0:
            return 0x0080;
        case 0xd0a2:
            return 0x000c;
        case 0xd0b1:
            return 0x8001;
        case 0xd0b2:
            return 0x0016;
        case 0xd0b4:
            return 0x0077;
        case 0xd0b5:
            return 0x7bc0;
        case 0xd0b6:
            return 0x45c0;
        case 0xd0ba:
            return 0x300a;
        case 0xd0c0:
            return 0x1109;
        case 0xd0c1:
            return 0xa008;
        case 0xd0c2:
            return 0x3f22;
        case 0xd0c8:
            return 0x0200;
        case 0xd0d0:
            return 0x0602;
        case 0xd0d1:
            return 0x000a;
        case 0xd0d2:
            return 0x0006;
        case 0xd0d8:
            return 0x0002;
        case 0xd0da:
            return 0x8000;
        case 0xd0e0:
            return 0xb000;
        case 0xd0e1:
            return 0x000a;
        case 0xd0e2:
            return 0x0002;
        case 0xd0e8:
            return 0x0002;
        case 0xd0f0:
            return 0x02da;
        case 0xd0f1:
            return 0x0001;
        case 0xd0f2:
            return 0x4000;
        case 0xd0f4:
            return 0x0271;
        case 0xd0f6:
            return 0x0001;
        case 0xd0f7:
            return 0x8304;
        case 0xd0f8:
            return 0x0007;
        case 0xd0fa:
            return 0x4038;
        case 0xd0fb:
            return 0x0820;
        case 0xd0fc:
            return 0x0403;
        case 0xd0fd:
            return 0x0302;
        case 0xd100:
            return 0xff00;
        case 0xd101:
            return 0xff00;
        case 0xd102:
            return 0xff00;
        case 0xd103:
            return 0xff00;
        case 0xd104:
            return 0xff00;
        case 0xd105:
            return 0xff00;
        case 0xd106:
            return 0xff00;
        case 0xd107:
            return 0xff00;
        case 0xd108:
            return 0xff00;
        case 0xd109:
            return 0xff00;
        case 0xd10a:
            return 0xff00;
        case 0xd10b:
            return 0xff00;
        case 0xd10c:
            return 0xff00;
        case 0xd10d:
            return 0xff00;
        case 0xd10e:
            return 0xff00;
        case 0xd110:
            return 0x0588;
        case 0xd111:
            return 0x003c;
        case 0xd112:
            return 0x8888;
        case 0xd113:
            return 0x0588;
        case 0xd114:
            return 0x003c;
        case 0xd115:
            return 0x0588;
        case 0xd116:
            return 0x003c;
        case 0xd118:
            return 0x0300;
        case 0xd119:
            return 0x0800;
        case 0xd120:
            return 0xc803;
        case 0xd121:
            return 0xc8ff;
        case 0xd122:
            return 0xff01;
        case 0xd124:
            return 0xa80d;
        case 0xd125:
            return 0x0027;
        case 0xd126:
            return 0x0007;
        case 0xd127:
            return 0x000a;
        case 0xd12a:
            return 0x0001;
        case 0xd130:
            return 0x07ff;
        case 0xd131:
            return 0x0070;
        case 0xd133:
            return 0x3828;
        case 0xd134:
            return 0x01f4;
        case 0xd135:
            return 0x00c8;
        case 0xd20a:
            return 0x080f;
        case 0xd20c:
            return 0x0002;
        case 0xffdc:
            return 0x001f;
        case 0xffdd:
            return 0x404d;
        default:
	    break;
        }
    }
    return 0;
}
