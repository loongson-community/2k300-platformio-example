/*	$OpenBSD: regnum.h,v 1.3 1999/01/27 04:46:06 imp Exp $	*/

/*
 * Copyright (c) 1988 University of Utah.
 * Copyright (c) 1992, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * the Systems Programming Group of the University of Utah Computer
 * Science Department and Ralph Campbell.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	from: Utah Hdr: reg.h 1.1 90/07/09
 *	@(#)reg.h	8.2 (Berkeley) 1/11/94
 */

#ifndef _LOONGARCH_REGNUM_H_
#define _LOONGARCH_REGNUM_H_

#define STAND_ARG_SIZE		16
#define STAND_FRAME_SIZE	24
#define STAND_RA_OFFSET		20  

/*
 * Location of the saved registers relative to ZERO.
 * Usage is p->p_regs[XX].
 */
#define ZERO   0
#define RA     1
#define GP     2
#define SP     3
#define A0     4
#define A1     5
#define A2     6
#define A3     7
#define A4     8
#define A5     9
#define A6     10
#define A7     11
#define T0     12
#define T1     13
#define T2     14
#define T3     15
#define T4     16
#define T5     17
#define T6     18
#define T7     19
#define T8     20
#define TP     21
#define FP     22
#define S0     23
#define S1     24
#define S2     25
#define S3     26
#define S4     27
#define S5     28
#define S6     29
#define S7     30
#define S8     31

#define BASE_NUM 32
#define LA_CSR_CRMD  0
#define LA_CSR_PRMD  1
#define LA_CSR_ECTL  4
#define LA_CSR_ESTAT 5
#define LA_CSR_EPC   6
#define LA_CSR_BADV  7
#define LA_CSR_BADI  8


#define	NUMSAVEREGS 38		/* Number of registers saved in trap */

#define FPBASE	(NUMSAVEREGS)
#define F0	(FPBASE+0)
#define F1	(FPBASE+1)
#define F2	(FPBASE+2)
#define F3	(FPBASE+3)
#define F4	(FPBASE+4)
#define F5	(FPBASE+5)
#define F6	(FPBASE+6)
#define F7	(FPBASE+7)
#define F8	(FPBASE+8)
#define F9	(FPBASE+9)
#define F10	(FPBASE+10)
#define F11	(FPBASE+11)
#define F12	(FPBASE+12)
#define F13	(FPBASE+13)
#define F14	(FPBASE+14)
#define F15	(FPBASE+15)
#define F16	(FPBASE+16)
#define F17	(FPBASE+17)
#define F18	(FPBASE+18)
#define F19	(FPBASE+19)
#define F20	(FPBASE+20)
#define F21	(FPBASE+21)
#define F22	(FPBASE+22)
#define F23	(FPBASE+23)
#define F24	(FPBASE+24)
#define F25	(FPBASE+25)
#define F26	(FPBASE+26)
#define F27	(FPBASE+27)
#define F28	(FPBASE+28)
#define F29	(FPBASE+29)
#define F30	(FPBASE+30)
#define F31	(FPBASE+31)
#define	FSR	(FPBASE+32)
#define NUMFPREGS 33

#endif /* !_LOONGARCH_REGNUM_H_ */
