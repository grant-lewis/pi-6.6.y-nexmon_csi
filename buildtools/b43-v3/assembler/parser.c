/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"


/*
 *   Copyright (C) 2006-2010  Michael Buesch <m@bues.ch>
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License version 2
 *   as published by the Free Software Foundation.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 */

#include "main.h"
#include "initvals.h"
#include "util.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

extern char *yytext;
extern void yyerror(char *);
extern int yyparse(void);
extern int yylex(void);

static struct operand * store_oper_sanity(struct operand *oper);
static void assembler_assertion_failed(void);

/* The current .section */
extern int section;
/* Pointer to the current initvals section data structure. */
extern struct initvals_sect *cur_initvals_sect;


#line 110 "parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SECTION_TEXT = 3,               /* SECTION_TEXT  */
  YYSYMBOL_SECTION_IVALS = 4,              /* SECTION_IVALS  */
  YYSYMBOL_ASM_ARCH = 5,                   /* ASM_ARCH  */
  YYSYMBOL_ASM_START = 6,                  /* ASM_START  */
  YYSYMBOL_ASM_ASSERT = 7,                 /* ASM_ASSERT  */
  YYSYMBOL_SPR = 8,                        /* SPR  */
  YYSYMBOL_GPR = 9,                        /* GPR  */
  YYSYMBOL_OFFR = 10,                      /* OFFR  */
  YYSYMBOL_LR = 11,                        /* LR  */
  YYSYMBOL_COMMA = 12,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 13,                 /* SEMICOLON  */
  YYSYMBOL_BRACK_OPEN = 14,                /* BRACK_OPEN  */
  YYSYMBOL_BRACK_CLOSE = 15,               /* BRACK_CLOSE  */
  YYSYMBOL_PAREN_OPEN = 16,                /* PAREN_OPEN  */
  YYSYMBOL_PAREN_CLOSE = 17,               /* PAREN_CLOSE  */
  YYSYMBOL_HEXNUM = 18,                    /* HEXNUM  */
  YYSYMBOL_DECNUM = 19,                    /* DECNUM  */
  YYSYMBOL_ARCH_NEWWORLD = 20,             /* ARCH_NEWWORLD  */
  YYSYMBOL_ARCH_OLDWORLD = 21,             /* ARCH_OLDWORLD  */
  YYSYMBOL_LABEL = 22,                     /* LABEL  */
  YYSYMBOL_IDENT = 23,                     /* IDENT  */
  YYSYMBOL_LABELREF = 24,                  /* LABELREF  */
  YYSYMBOL_EQUAL = 25,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 26,                 /* NOT_EQUAL  */
  YYSYMBOL_LOGICAL_OR = 27,                /* LOGICAL_OR  */
  YYSYMBOL_LOGICAL_AND = 28,               /* LOGICAL_AND  */
  YYSYMBOL_PLUS = 29,                      /* PLUS  */
  YYSYMBOL_MINUS = 30,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 31,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 32,                    /* DIVIDE  */
  YYSYMBOL_BITW_OR = 33,                   /* BITW_OR  */
  YYSYMBOL_BITW_AND = 34,                  /* BITW_AND  */
  YYSYMBOL_BITW_XOR = 35,                  /* BITW_XOR  */
  YYSYMBOL_BITW_NOT = 36,                  /* BITW_NOT  */
  YYSYMBOL_LEFTSHIFT = 37,                 /* LEFTSHIFT  */
  YYSYMBOL_RIGHTSHIFT = 38,                /* RIGHTSHIFT  */
  YYSYMBOL_OP_MUL = 39,                    /* OP_MUL  */
  YYSYMBOL_OP_ADD = 40,                    /* OP_ADD  */
  YYSYMBOL_OP_ADDSC = 41,                  /* OP_ADDSC  */
  YYSYMBOL_OP_ADDC = 42,                   /* OP_ADDC  */
  YYSYMBOL_OP_ADDSCC = 43,                 /* OP_ADDSCC  */
  YYSYMBOL_OP_XADD = 44,                   /* OP_XADD  */
  YYSYMBOL_OP_XADDSC = 45,                 /* OP_XADDSC  */
  YYSYMBOL_OP_XADDC = 46,                  /* OP_XADDC  */
  YYSYMBOL_OP_XADDSCC = 47,                /* OP_XADDSCC  */
  YYSYMBOL_OP_SUB = 48,                    /* OP_SUB  */
  YYSYMBOL_OP_SUBSC = 49,                  /* OP_SUBSC  */
  YYSYMBOL_OP_SUBC = 50,                   /* OP_SUBC  */
  YYSYMBOL_OP_SUBSCC = 51,                 /* OP_SUBSCC  */
  YYSYMBOL_OP_XSUB = 52,                   /* OP_XSUB  */
  YYSYMBOL_OP_XSUBSC = 53,                 /* OP_XSUBSC  */
  YYSYMBOL_OP_XSUBC = 54,                  /* OP_XSUBC  */
  YYSYMBOL_OP_XSUBSCC = 55,                /* OP_XSUBSCC  */
  YYSYMBOL_OP_SRA = 56,                    /* OP_SRA  */
  YYSYMBOL_OP_OR = 57,                     /* OP_OR  */
  YYSYMBOL_OP_AND = 58,                    /* OP_AND  */
  YYSYMBOL_OP_XOR = 59,                    /* OP_XOR  */
  YYSYMBOL_OP_SR = 60,                     /* OP_SR  */
  YYSYMBOL_OP_SRX = 61,                    /* OP_SRX  */
  YYSYMBOL_OP_SRXH = 62,                   /* OP_SRXH  */
  YYSYMBOL_OP_SL = 63,                     /* OP_SL  */
  YYSYMBOL_OP_RL = 64,                     /* OP_RL  */
  YYSYMBOL_OP_RR = 65,                     /* OP_RR  */
  YYSYMBOL_OP_NAND = 66,                   /* OP_NAND  */
  YYSYMBOL_OP_ORX = 67,                    /* OP_ORX  */
  YYSYMBOL_OP_ORXH = 68,                   /* OP_ORXH  */
  YYSYMBOL_OP_MOV = 69,                    /* OP_MOV  */
  YYSYMBOL_OP_JMP = 70,                    /* OP_JMP  */
  YYSYMBOL_OP_JAND = 71,                   /* OP_JAND  */
  YYSYMBOL_OP_JNAND = 72,                  /* OP_JNAND  */
  YYSYMBOL_OP_JS = 73,                     /* OP_JS  */
  YYSYMBOL_OP_JNS = 74,                    /* OP_JNS  */
  YYSYMBOL_OP_JE = 75,                     /* OP_JE  */
  YYSYMBOL_OP_JNE = 76,                    /* OP_JNE  */
  YYSYMBOL_OP_JLS = 77,                    /* OP_JLS  */
  YYSYMBOL_OP_JGES = 78,                   /* OP_JGES  */
  YYSYMBOL_OP_JGS = 79,                    /* OP_JGS  */
  YYSYMBOL_OP_JLES = 80,                   /* OP_JLES  */
  YYSYMBOL_OP_JL = 81,                     /* OP_JL  */
  YYSYMBOL_OP_JGE = 82,                    /* OP_JGE  */
  YYSYMBOL_OP_JG = 83,                     /* OP_JG  */
  YYSYMBOL_OP_JLE = 84,                    /* OP_JLE  */
  YYSYMBOL_OP_JZX = 85,                    /* OP_JZX  */
  YYSYMBOL_OP_JZXH = 86,                   /* OP_JZXH  */
  YYSYMBOL_OP_JNZX = 87,                   /* OP_JNZX  */
  YYSYMBOL_OP_JNZXH = 88,                  /* OP_JNZXH  */
  YYSYMBOL_OP_JEXT = 89,                   /* OP_JEXT  */
  YYSYMBOL_OP_JNEXT = 90,                  /* OP_JNEXT  */
  YYSYMBOL_OP_JDN = 91,                    /* OP_JDN  */
  YYSYMBOL_OP_JDPZ = 92,                   /* OP_JDPZ  */
  YYSYMBOL_OP_JDP = 93,                    /* OP_JDP  */
  YYSYMBOL_OP_JDNZ = 94,                   /* OP_JDNZ  */
  YYSYMBOL_OP_JBOH = 95,                   /* OP_JBOH  */
  YYSYMBOL_OP_JNBOH = 96,                  /* OP_JNBOH  */
  YYSYMBOL_OP_JBOH2 = 97,                  /* OP_JBOH2  */
  YYSYMBOL_OP_JNBOH2 = 98,                 /* OP_JNBOH2  */
  YYSYMBOL_OP_XJE = 99,                    /* OP_XJE  */
  YYSYMBOL_OP_XJNE = 100,                  /* OP_XJNE  */
  YYSYMBOL_OP_XJLS = 101,                  /* OP_XJLS  */
  YYSYMBOL_OP_XJGES = 102,                 /* OP_XJGES  */
  YYSYMBOL_OP_XJGS = 103,                  /* OP_XJGS  */
  YYSYMBOL_OP_XJLES = 104,                 /* OP_XJLES  */
  YYSYMBOL_OP_XJDN = 105,                  /* OP_XJDN  */
  YYSYMBOL_OP_XJDPZ = 106,                 /* OP_XJDPZ  */
  YYSYMBOL_OP_XJDP = 107,                  /* OP_XJDP  */
  YYSYMBOL_OP_XJDNZ = 108,                 /* OP_XJDNZ  */
  YYSYMBOL_OP_XJL = 109,                   /* OP_XJL  */
  YYSYMBOL_OP_XJGE = 110,                  /* OP_XJGE  */
  YYSYMBOL_OP_XJG = 111,                   /* OP_XJG  */
  YYSYMBOL_OP_XJLE = 112,                  /* OP_XJLE  */
  YYSYMBOL_OP_JMAH = 113,                  /* OP_JMAH  */
  YYSYMBOL_OP_JNMAH = 114,                 /* OP_JNMAH  */
  YYSYMBOL_OP_CALL = 115,                  /* OP_CALL  */
  YYSYMBOL_OP_CALLS = 116,                 /* OP_CALLS  */
  YYSYMBOL_OP_RET = 117,                   /* OP_RET  */
  YYSYMBOL_OP_RETS = 118,                  /* OP_RETS  */
  YYSYMBOL_OP_RETS2 = 119,                 /* OP_RETS2  */
  YYSYMBOL_OP_TKIPH = 120,                 /* OP_TKIPH  */
  YYSYMBOL_OP_TKIPHS = 121,                /* OP_TKIPHS  */
  YYSYMBOL_OP_TKIPL = 122,                 /* OP_TKIPL  */
  YYSYMBOL_OP_TKIPLS = 123,                /* OP_TKIPLS  */
  YYSYMBOL_OP_NAP = 124,                   /* OP_NAP  */
  YYSYMBOL_OP_NAP2 = 125,                  /* OP_NAP2  */
  YYSYMBOL_OP_NAPV = 126,                  /* OP_NAPV  */
  YYSYMBOL_RAW_CODE = 127,                 /* RAW_CODE  */
  YYSYMBOL_IVAL_MMIO16 = 128,              /* IVAL_MMIO16  */
  YYSYMBOL_IVAL_MMIO32 = 129,              /* IVAL_MMIO32  */
  YYSYMBOL_IVAL_PHY = 130,                 /* IVAL_PHY  */
  YYSYMBOL_IVAL_RADIO = 131,               /* IVAL_RADIO  */
  YYSYMBOL_IVAL_SHM16 = 132,               /* IVAL_SHM16  */
  YYSYMBOL_IVAL_SHM32 = 133,               /* IVAL_SHM32  */
  YYSYMBOL_IVAL_TRAM = 134,                /* IVAL_TRAM  */
  YYSYMBOL_YYACCEPT = 135,                 /* $accept  */
  YYSYMBOL_line = 136,                     /* line  */
  YYSYMBOL_line_terminator = 137,          /* line_terminator  */
  YYSYMBOL_section_switch = 138,           /* section_switch  */
  YYSYMBOL_ivals_write = 139,              /* ivals_write  */
  YYSYMBOL_statement = 140,                /* statement  */
  YYSYMBOL_asmdir = 141,                   /* asmdir  */
  YYSYMBOL_asm_assert = 142,               /* asm_assert  */
  YYSYMBOL_assertion = 143,                /* assertion  */
  YYSYMBOL_assert_expr = 144,              /* assert_expr  */
  YYSYMBOL_label = 145,                    /* label  */
  YYSYMBOL_insn_mul = 146,                 /* insn_mul  */
  YYSYMBOL_insn_add = 147,                 /* insn_add  */
  YYSYMBOL_insn_addsc = 148,               /* insn_addsc  */
  YYSYMBOL_insn_addc = 149,                /* insn_addc  */
  YYSYMBOL_insn_addscc = 150,              /* insn_addscc  */
  YYSYMBOL_insn_xadd = 151,                /* insn_xadd  */
  YYSYMBOL_insn_xaddsc = 152,              /* insn_xaddsc  */
  YYSYMBOL_insn_xaddc = 153,               /* insn_xaddc  */
  YYSYMBOL_insn_xaddscc = 154,             /* insn_xaddscc  */
  YYSYMBOL_insn_sub = 155,                 /* insn_sub  */
  YYSYMBOL_insn_subsc = 156,               /* insn_subsc  */
  YYSYMBOL_insn_subc = 157,                /* insn_subc  */
  YYSYMBOL_insn_subscc = 158,              /* insn_subscc  */
  YYSYMBOL_insn_xsub = 159,                /* insn_xsub  */
  YYSYMBOL_insn_xsubsc = 160,              /* insn_xsubsc  */
  YYSYMBOL_insn_xsubc = 161,               /* insn_xsubc  */
  YYSYMBOL_insn_xsubscc = 162,             /* insn_xsubscc  */
  YYSYMBOL_insn_sra = 163,                 /* insn_sra  */
  YYSYMBOL_insn_or = 164,                  /* insn_or  */
  YYSYMBOL_insn_and = 165,                 /* insn_and  */
  YYSYMBOL_insn_xor = 166,                 /* insn_xor  */
  YYSYMBOL_insn_sr = 167,                  /* insn_sr  */
  YYSYMBOL_insn_srx = 168,                 /* insn_srx  */
  YYSYMBOL_insn_srxh = 169,                /* insn_srxh  */
  YYSYMBOL_insn_sl = 170,                  /* insn_sl  */
  YYSYMBOL_insn_rl = 171,                  /* insn_rl  */
  YYSYMBOL_insn_rr = 172,                  /* insn_rr  */
  YYSYMBOL_insn_nand = 173,                /* insn_nand  */
  YYSYMBOL_insn_orx = 174,                 /* insn_orx  */
  YYSYMBOL_insn_orxh = 175,                /* insn_orxh  */
  YYSYMBOL_insn_mov = 176,                 /* insn_mov  */
  YYSYMBOL_insn_jmp = 177,                 /* insn_jmp  */
  YYSYMBOL_insn_jand = 178,                /* insn_jand  */
  YYSYMBOL_insn_jnand = 179,               /* insn_jnand  */
  YYSYMBOL_insn_js = 180,                  /* insn_js  */
  YYSYMBOL_insn_jns = 181,                 /* insn_jns  */
  YYSYMBOL_insn_je = 182,                  /* insn_je  */
  YYSYMBOL_insn_jne = 183,                 /* insn_jne  */
  YYSYMBOL_insn_jls = 184,                 /* insn_jls  */
  YYSYMBOL_insn_jges = 185,                /* insn_jges  */
  YYSYMBOL_insn_jgs = 186,                 /* insn_jgs  */
  YYSYMBOL_insn_jles = 187,                /* insn_jles  */
  YYSYMBOL_insn_jl = 188,                  /* insn_jl  */
  YYSYMBOL_insn_jge = 189,                 /* insn_jge  */
  YYSYMBOL_insn_jg = 190,                  /* insn_jg  */
  YYSYMBOL_insn_jle = 191,                 /* insn_jle  */
  YYSYMBOL_insn_jzx = 192,                 /* insn_jzx  */
  YYSYMBOL_insn_jzxh = 193,                /* insn_jzxh  */
  YYSYMBOL_insn_jnzx = 194,                /* insn_jnzx  */
  YYSYMBOL_insn_jnzxh = 195,               /* insn_jnzxh  */
  YYSYMBOL_insn_jdn = 196,                 /* insn_jdn  */
  YYSYMBOL_insn_jdpz = 197,                /* insn_jdpz  */
  YYSYMBOL_insn_jdp = 198,                 /* insn_jdp  */
  YYSYMBOL_insn_jdnz = 199,                /* insn_jdnz  */
  YYSYMBOL_insn_jboh = 200,                /* insn_jboh  */
  YYSYMBOL_insn_jnboh = 201,               /* insn_jnboh  */
  YYSYMBOL_insn_jboh2 = 202,               /* insn_jboh2  */
  YYSYMBOL_insn_jnboh2 = 203,              /* insn_jnboh2  */
  YYSYMBOL_insn_jmah = 204,                /* insn_jmah  */
  YYSYMBOL_insn_jnmah = 205,               /* insn_jnmah  */
  YYSYMBOL_insn_xje = 206,                 /* insn_xje  */
  YYSYMBOL_insn_xjne = 207,                /* insn_xjne  */
  YYSYMBOL_insn_xjls = 208,                /* insn_xjls  */
  YYSYMBOL_insn_xjges = 209,               /* insn_xjges  */
  YYSYMBOL_insn_xjgs = 210,                /* insn_xjgs  */
  YYSYMBOL_insn_xjles = 211,               /* insn_xjles  */
  YYSYMBOL_insn_xjdn = 212,                /* insn_xjdn  */
  YYSYMBOL_insn_xjdpz = 213,               /* insn_xjdpz  */
  YYSYMBOL_insn_xjdp = 214,                /* insn_xjdp  */
  YYSYMBOL_insn_xjdnz = 215,               /* insn_xjdnz  */
  YYSYMBOL_insn_xjl = 216,                 /* insn_xjl  */
  YYSYMBOL_insn_xjge = 217,                /* insn_xjge  */
  YYSYMBOL_insn_xjg = 218,                 /* insn_xjg  */
  YYSYMBOL_insn_xjle = 219,                /* insn_xjle  */
  YYSYMBOL_insn_jext = 220,                /* insn_jext  */
  YYSYMBOL_insn_jnext = 221,               /* insn_jnext  */
  YYSYMBOL_linkreg = 222,                  /* linkreg  */
  YYSYMBOL_insn_call = 223,                /* insn_call  */
  YYSYMBOL_insn_calls = 224,               /* insn_calls  */
  YYSYMBOL_insn_ret = 225,                 /* insn_ret  */
  YYSYMBOL_insn_rets = 226,                /* insn_rets  */
  YYSYMBOL_insn_rets2 = 227,               /* insn_rets2  */
  YYSYMBOL_insn_tkiph = 228,               /* insn_tkiph  */
  YYSYMBOL_insn_tkiphs = 229,              /* insn_tkiphs  */
  YYSYMBOL_insn_tkipl = 230,               /* insn_tkipl  */
  YYSYMBOL_insn_tkipls = 231,              /* insn_tkipls  */
  YYSYMBOL_insn_nap = 232,                 /* insn_nap  */
  YYSYMBOL_insn_nap2 = 233,                /* insn_nap2  */
  YYSYMBOL_insn_napv = 234,                /* insn_napv  */
  YYSYMBOL_insn_raw = 235,                 /* insn_raw  */
  YYSYMBOL_raw_code = 236,                 /* raw_code  */
  YYSYMBOL_extended_operlist = 237,        /* extended_operlist  */
  YYSYMBOL_external_jump_operands = 238,   /* external_jump_operands  */
  YYSYMBOL_operlist_2 = 239,               /* operlist_2  */
  YYSYMBOL_operlist_3 = 240,               /* operlist_3  */
  YYSYMBOL_operlist_2_jump_human = 241,    /* operlist_2_jump_human  */
  YYSYMBOL_operlist_2_human = 242,         /* operlist_2_human  */
  YYSYMBOL_operand_shift_operand_mask = 243, /* operand_shift_operand_mask  */
  YYSYMBOL_operand_shift_mask2 = 244,      /* operand_shift_mask2  */
  YYSYMBOL_operlist_3_human = 245,         /* operlist_3_human  */
  YYSYMBOL_operand_shift_mask = 246,       /* operand_shift_mask  */
  YYSYMBOL_operand_wwo_shift = 247,        /* operand_wwo_shift  */
  YYSYMBOL_operandh = 248,                 /* operandh  */
  YYSYMBOL_operand = 249,                  /* operand  */
  YYSYMBOL_reg = 250,                      /* reg  */
  YYSYMBOL_mem = 251,                      /* mem  */
  YYSYMBOL_imm = 252,                      /* imm  */
  YYSYMBOL_imm_value = 253,                /* imm_value  */
  YYSYMBOL_imm_oper = 254,                 /* imm_oper  */
  YYSYMBOL_hexnum = 255,                   /* hexnum  */
  YYSYMBOL_decnum = 256,                   /* decnum  */
  YYSYMBOL_hexnum_decnum = 257,            /* hexnum_decnum  */
  YYSYMBOL_labelref = 258,                 /* labelref  */
  YYSYMBOL_regnr = 259,                    /* regnr  */
  YYSYMBOL_identifier = 260                /* identifier  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   764

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  135
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  266
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  477

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   389


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    57,    66,    68,    79,    80,    83,    86,
     108,   115,   122,   129,   136,   144,   152,   161,   172,   179,
     186,   193,   200,   207,   214,   221,   228,   235,   242,   249,
     256,   263,   270,   277,   284,   291,   298,   305,   312,   319,
     326,   333,   340,   347,   354,   361,   368,   375,   382,   389,
     396,   403,   410,   417,   424,   431,   438,   445,   452,   459,
     466,   473,   480,   487,   494,   501,   508,   515,   522,   529,
     536,   543,   550,   557,   564,   571,   578,   585,   592,   599,
     606,   613,   620,   627,   634,   641,   648,   655,   662,   669,
     676,   683,   690,   697,   704,   711,   718,   725,   732,   739,
     746,   753,   760,   767,   774,   781,   788,   795,   805,   811,
     820,   825,   833,   836,   842,   850,   856,   864,   875,   884,
     893,   902,   911,   920,   929,   938,   947,   956,   965,   974,
     983,   992,  1001,  1010,  1019,  1027,  1035,  1043,  1051,  1059,
    1067,  1075,  1083,  1091,  1099,  1107,  1115,  1123,  1131,  1139,
    1149,  1157,  1165,  1173,  1181,  1189,  1197,  1205,  1213,  1221,
    1229,  1237,  1245,  1253,  1261,  1269,  1277,  1285,  1293,  1301,
    1309,  1317,  1325,  1333,  1341,  1349,  1357,  1365,  1373,  1381,
    1389,  1397,  1405,  1413,  1421,  1429,  1437,  1445,  1453,  1461,
    1469,  1477,  1485,  1493,  1501,  1506,  1524,  1542,  1563,  1584,
    1610,  1626,  1642,  1658,  1674,  1695,  1716,  1738,  1747,  1753,
    1770,  1781,  1789,  1798,  1805,  1823,  1826,  1838,  1853,  1865,
    1868,  1878,  1881,  1893,  1910,  1947,  1957,  1962,  1971,  1977,
    1987,  1993,  2001,  2007,  2013,  2019,  2025,  2030,  2036,  2043,
    2051,  2059,  2070,  2077,  2080,  2118,  2121,  2159,  2164,  2170,
    2173,  2176,  2179,  2182,  2185,  2188,  2191,  2194,  2199,  2210,
    2215,  2218,  2223,  2232,  2241,  2252,  2257
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "SECTION_TEXT",
  "SECTION_IVALS", "ASM_ARCH", "ASM_START", "ASM_ASSERT", "SPR", "GPR",
  "OFFR", "LR", "COMMA", "SEMICOLON", "BRACK_OPEN", "BRACK_CLOSE",
  "PAREN_OPEN", "PAREN_CLOSE", "HEXNUM", "DECNUM", "ARCH_NEWWORLD",
  "ARCH_OLDWORLD", "LABEL", "IDENT", "LABELREF", "EQUAL", "NOT_EQUAL",
  "LOGICAL_OR", "LOGICAL_AND", "PLUS", "MINUS", "MULTIPLY", "DIVIDE",
  "BITW_OR", "BITW_AND", "BITW_XOR", "BITW_NOT", "LEFTSHIFT", "RIGHTSHIFT",
  "OP_MUL", "OP_ADD", "OP_ADDSC", "OP_ADDC", "OP_ADDSCC", "OP_XADD",
  "OP_XADDSC", "OP_XADDC", "OP_XADDSCC", "OP_SUB", "OP_SUBSC", "OP_SUBC",
  "OP_SUBSCC", "OP_XSUB", "OP_XSUBSC", "OP_XSUBC", "OP_XSUBSCC", "OP_SRA",
  "OP_OR", "OP_AND", "OP_XOR", "OP_SR", "OP_SRX", "OP_SRXH", "OP_SL",
  "OP_RL", "OP_RR", "OP_NAND", "OP_ORX", "OP_ORXH", "OP_MOV", "OP_JMP",
  "OP_JAND", "OP_JNAND", "OP_JS", "OP_JNS", "OP_JE", "OP_JNE", "OP_JLS",
  "OP_JGES", "OP_JGS", "OP_JLES", "OP_JL", "OP_JGE", "OP_JG", "OP_JLE",
  "OP_JZX", "OP_JZXH", "OP_JNZX", "OP_JNZXH", "OP_JEXT", "OP_JNEXT",
  "OP_JDN", "OP_JDPZ", "OP_JDP", "OP_JDNZ", "OP_JBOH", "OP_JNBOH",
  "OP_JBOH2", "OP_JNBOH2", "OP_XJE", "OP_XJNE", "OP_XJLS", "OP_XJGES",
  "OP_XJGS", "OP_XJLES", "OP_XJDN", "OP_XJDPZ", "OP_XJDP", "OP_XJDNZ",
  "OP_XJL", "OP_XJGE", "OP_XJG", "OP_XJLE", "OP_JMAH", "OP_JNMAH",
  "OP_CALL", "OP_CALLS", "OP_RET", "OP_RETS", "OP_RETS2", "OP_TKIPH",
  "OP_TKIPHS", "OP_TKIPL", "OP_TKIPLS", "OP_NAP", "OP_NAP2", "OP_NAPV",
  "RAW_CODE", "IVAL_MMIO16", "IVAL_MMIO32", "IVAL_PHY", "IVAL_RADIO",
  "IVAL_SHM16", "IVAL_SHM32", "IVAL_TRAM", "$accept", "line",
  "line_terminator", "section_switch", "ivals_write", "statement",
  "asmdir", "asm_assert", "assertion", "assert_expr", "label", "insn_mul",
  "insn_add", "insn_addsc", "insn_addc", "insn_addscc", "insn_xadd",
  "insn_xaddsc", "insn_xaddc", "insn_xaddscc", "insn_sub", "insn_subsc",
  "insn_subc", "insn_subscc", "insn_xsub", "insn_xsubsc", "insn_xsubc",
  "insn_xsubscc", "insn_sra", "insn_or", "insn_and", "insn_xor", "insn_sr",
  "insn_srx", "insn_srxh", "insn_sl", "insn_rl", "insn_rr", "insn_nand",
  "insn_orx", "insn_orxh", "insn_mov", "insn_jmp", "insn_jand",
  "insn_jnand", "insn_js", "insn_jns", "insn_je", "insn_jne", "insn_jls",
  "insn_jges", "insn_jgs", "insn_jles", "insn_jl", "insn_jge", "insn_jg",
  "insn_jle", "insn_jzx", "insn_jzxh", "insn_jnzx", "insn_jnzxh",
  "insn_jdn", "insn_jdpz", "insn_jdp", "insn_jdnz", "insn_jboh",
  "insn_jnboh", "insn_jboh2", "insn_jnboh2", "insn_jmah", "insn_jnmah",
  "insn_xje", "insn_xjne", "insn_xjls", "insn_xjges", "insn_xjgs",
  "insn_xjles", "insn_xjdn", "insn_xjdpz", "insn_xjdp", "insn_xjdnz",
  "insn_xjl", "insn_xjge", "insn_xjg", "insn_xjle", "insn_jext",
  "insn_jnext", "linkreg", "insn_call", "insn_calls", "insn_ret",
  "insn_rets", "insn_rets2", "insn_tkiph", "insn_tkiphs", "insn_tkipl",
  "insn_tkipls", "insn_nap", "insn_nap2", "insn_napv", "insn_raw",
  "raw_code", "extended_operlist", "external_jump_operands", "operlist_2",
  "operlist_3", "operlist_2_jump_human", "operlist_2_human",
  "operand_shift_operand_mask", "operand_shift_mask2", "operlist_3_human",
  "operand_shift_mask", "operand_wwo_shift", "operandh", "operand", "reg",
  "mem", "imm", "imm_value", "imm_oper", "hexnum", "decnum",
  "hexnum_decnum", "labelref", "regnr", "identifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-215)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,     1,   630,  -215,  -215,  -215,  -215,     3,    26,    -6,
       7,  -215,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    57,    51,    32,    32,    32,    32,
      57,    76,    32,    -6,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    57,   124,
      57,   124,    57,    57,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    14,    -6,
      14,  -215,  -215,    32,    32,    32,    32,  -215,  -215,    26,
    -215,    57,    57,    57,    57,    57,    57,    57,     1,     1,
       1,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,    32,    -6,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,    81,  -215,  -215,    11,    11,    57,    57,    57,
    -215,  -215,  -215,    31,  -215,  -215,  -215,  -215,   171,  -215,
      48,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,    35,   137,  -215,    41,    29,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,   137,  -215,    54,    40,
    -215,  -215,  -215,    67,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
     156,  -215,    69,    55,  -215,  -215,  -215,  -215,    79,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,    11,    84,  -215,    86,  -215,  -215,
    -215,  -215,  -215,    90,    97,    99,   101,   110,   118,   123,
    -215,  -215,  -215,  -215,    20,    81,    44,   119,    82,  -215,
    -215,  -215,    42,   120,  -215,    32,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,    57,  -215,  -215,    57,   103,
      32,    57,   102,    76,    57,    32,   137,   -17,    32,    57,
      -6,  -215,    -6,    14,    57,    57,    57,    57,    57,    57,
      57,  -215,    -4,     7,     7,  -215,    57,    57,   138,  -215,
     171,   140,  -215,   142,    57,  -215,  -215,    57,   145,  -215,
    -215,   112,    57,    57,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,   146,   149,  -215,   133,   150,  -215,  -215,
      11,    57,    32,    32,   151,   152,    32,    57,   154,   159,
      57,    57,  -215,  -215,   147,  -215,  -215,   165,   144,  -215,
    -215,   162,   153,   155,  -215,  -215,  -215,    32,    57,   148,
      57,    57,   168,  -215,   137,  -215,  -215,    32,   166,   167,
    -215,   157,   160,    57,    57,  -215,  -215
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       6,     6,     0,     2,     7,     1,     8,     0,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   198,   199,     0,     0,     0,     0,   204,   205,     0,
     208,     0,     0,     0,     0,     0,     0,     0,     6,     6,
       6,    17,   110,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    85,    86,    87,    88,
      89,    90,    91,    92,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,     0,     0,   258,   259,   260,   261,   108,
     266,   109,     0,   111,   238,     0,     0,     0,     0,     0,
     248,   234,   118,     0,   232,   233,   235,   242,   243,   236,
     262,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,     0,     0,   141,     0,     0,   230,   231,
     221,   142,   143,   144,   145,   146,     0,   147,     0,   226,
     228,   225,   148,     0,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
       0,   165,     0,     0,   215,   166,   167,   192,     0,   193,
     168,   169,   170,   171,   172,   173,   174,   175,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   176,   177,     0,     0,   196,     0,   200,   201,
     202,   203,   206,     0,     0,     0,     0,     0,     0,     0,
       4,     5,     3,   207,     0,     0,     0,     0,     0,   265,
     237,   239,     0,     0,   247,     0,   249,   250,   251,   252,
     253,   254,   255,   256,   257,     0,   264,   263,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   194,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,     0,     0,     0,   112,     0,     0,     0,   240,
     245,     0,   244,     0,     0,   214,   222,     0,     0,   227,
     211,     0,     0,     0,   213,   216,   210,   195,   197,    10,
      11,    12,    13,     0,     0,    16,     0,     0,   115,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,   246,   212,     0,     0,   229,
     224,     0,     0,     0,    14,    15,   241,     0,     0,     0,
       0,     0,     0,   223,     0,   220,   217,     0,     0,     0,
     209,     0,     0,     0,     0,   218,   219
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,     6,  -215,  -215,  -215,  -215,   183,    -1,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,   -89,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,   184,   -25,   125,    25,   465,   129,  -215,  -215,  -215,
    -215,  -180,  -215,   -27,    10,   -30,   -23,   -35,    22,  -205,
    -215,  -215,     2,   -40,  -214,    -5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,   108,   109,   110,   111,   220,   346,   347,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   325,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   221,   252,   297,   272,   222,   291,   255,   292,   256,
     267,   268,   269,   270,   223,   224,   225,   226,   227,   365,
     207,   208,   228,   229,   350,   230
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     260,   327,   351,   274,   211,   258,   271,     4,   257,   213,
     209,   258,   259,   400,     1,   265,   412,   210,   259,   204,
     413,   396,   397,   212,   294,   324,   294,   298,   298,   258,
     349,   258,   293,   289,   293,   295,   259,   391,   259,    10,
     214,   215,   216,   355,   205,   206,   217,   368,   218,   326,
     205,   206,   273,   370,   398,   210,   253,   399,    10,   214,
     215,   216,   253,   371,    10,   217,   373,   254,   219,   205,
     206,   393,   394,   218,   374,   205,   206,   366,   367,   375,
     253,   378,   253,    10,   214,   215,   216,   219,    10,   379,
     217,   380,   266,   219,   205,   206,   382,   345,   383,   205,
     206,   332,   384,   273,   273,   273,   273,   396,   397,   385,
     381,   386,   219,   387,   340,   341,   342,   219,   328,   329,
     330,   331,   388,   333,   334,   335,   336,   337,   338,   339,
     389,    10,   214,   215,   216,   390,   395,   400,   217,   407,
     290,   404,   205,   206,    10,   214,   215,   216,   430,   437,
     442,   217,   432,   218,   433,   205,   206,   436,   440,   100,
     219,   441,   456,    10,   214,   215,   216,   443,   448,   449,
     217,   452,   376,   219,   205,   206,   453,   457,   458,   459,
     467,   464,   352,   471,   472,   112,   203,   460,   299,   461,
     296,   473,   219,   408,   474,   431,     0,     0,     0,   344,
     356,   357,   358,   359,   360,   361,   362,     0,   363,   364,
       0,     0,     0,     0,     0,     0,   444,     0,     0,     0,
       0,     0,     0,     0,   258,     0,     0,   369,     0,     0,
       0,   259,     0,     0,   348,     0,   258,     0,     0,   372,
     353,   354,     0,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     258,     0,     0,   377,     0,     0,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,   353,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   353,     0,
       0,     0,     0,     0,   418,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   353,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   406,     0,   271,   409,
     416,     0,   417,   258,   415,     0,   258,     0,     0,   411,
     259,     0,     0,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   401,     0,   392,     0,   434,
       0,     0,   435,     0,     0,     0,     0,   438,   439,     0,
     405,     0,     0,     0,     0,   410,     0,   402,   414,     0,
     403,     0,   426,   427,     0,     0,     0,     0,   353,     0,
       0,     0,   451,     0,     0,     0,   419,   420,   421,   422,
     423,   424,   425,     0,     0,     0,     0,     0,   428,   429,
       0,     0,     0,   463,     0,   465,   466,     0,     0,   469,
       0,     0,     0,     0,   258,     0,     0,   468,   475,   476,
       0,   259,   446,   447,     0,     0,   450,     0,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0,     0,
       0,     0,   454,   455,     0,     0,     0,   462,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   470,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,     0,
       0,   261,   262,   263,   264,     0,     0,     0,     0,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,     0,     0,     0,     0,     0,     0,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     0,     0,     6,     7,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107
};

static const yytype_int16 yycheck[] =
{
      35,    90,   216,    43,     9,    35,    41,     1,    35,    10,
       8,    41,    35,    17,    13,    40,    33,    23,    41,    16,
      37,    25,    26,    16,    59,    11,    61,    62,    63,    59,
      19,    61,    59,    58,    61,    60,    59,    17,    61,     7,
       8,     9,    10,    12,    18,    19,    14,    12,    16,    89,
      18,    19,    42,    12,    12,    23,    34,    15,     7,     8,
       9,    10,    40,    34,     7,    14,    12,    16,    36,    18,
      19,    27,    28,    16,    34,    18,    19,    29,    30,    12,
      58,    12,    60,     7,     8,     9,    10,    36,     7,    34,
      14,    12,    16,    36,    18,    19,    12,    16,    12,    18,
      19,    99,    12,    93,    94,    95,    96,    25,    26,    12,
     324,    12,    36,    12,   108,   109,   110,    36,    93,    94,
      95,    96,    12,   101,   102,   103,   104,   105,   106,   107,
      12,     7,     8,     9,    10,    12,    17,    17,    14,    37,
      16,    38,    18,    19,     7,     8,     9,    10,    10,    37,
      17,    14,    12,    16,    12,    18,    19,    12,    12,   127,
      36,    12,    15,     7,     8,     9,    10,    17,    17,    17,
      14,    17,    16,    36,    18,    19,    17,    12,    34,    17,
      12,    33,   217,    17,    17,     2,     2,    34,    63,    34,
      61,    34,    36,   373,    34,   400,    -1,    -1,    -1,   204,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,   430,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   254,    -1,    -1,   254,    -1,    -1,
      -1,   254,    -1,    -1,   212,    -1,   266,    -1,    -1,   266,
     218,   219,    -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     290,    -1,    -1,   290,    -1,    -1,    -1,   290,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   383,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   290,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,   373,   374,
     380,    -1,   382,   373,   379,    -1,   376,    -1,    -1,   376,
     373,    -1,    -1,   376,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   355,    -1,   345,    -1,   404,
      -1,    -1,   407,    -1,    -1,    -1,    -1,   412,   413,    -1,
     370,    -1,    -1,    -1,    -1,   375,    -1,   365,   378,    -1,
     368,    -1,   393,   394,    -1,    -1,    -1,    -1,   376,    -1,
      -1,    -1,   437,    -1,    -1,    -1,   384,   385,   386,   387,
     388,   389,   390,    -1,    -1,    -1,    -1,    -1,   396,   397,
      -1,    -1,    -1,   458,    -1,   460,   461,    -1,    -1,   464,
      -1,    -1,    -1,    -1,   464,    -1,    -1,   464,   473,   474,
      -1,   464,   432,   433,    -1,    -1,   436,    -1,    -1,    -1,
      -1,    -1,    -1,   431,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   440,   441,    -1,    -1,    -1,   457,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   467,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    13,   136,   137,   137,     0,     3,     4,     5,     6,
       7,    22,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   138,   139,
     140,   141,   142,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,    16,    18,    19,   255,   256,   257,
      23,   260,    16,   143,     8,     9,    10,    14,    16,    36,
     142,   236,   240,   249,   250,   251,   252,   253,   257,   258,
     260,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   237,   253,    16,   242,   244,   248,   250,   251,
     252,   240,   240,   240,   240,   237,    16,   245,   246,   247,
     248,   252,   239,   249,   258,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   237,
      16,   241,   243,   248,   252,   237,   241,   238,   252,   238,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,    11,   222,   258,   222,   239,   239,
     239,   239,   257,   253,   253,   253,   253,   253,   253,   253,
     137,   137,   137,   240,   260,    16,   143,   144,   253,    19,
     259,   259,   252,   253,   253,    12,    29,    30,    31,    32,
      33,    34,    35,    37,    38,   254,    29,    30,    12,   248,
      12,    34,   248,    12,    34,    12,    16,   248,    12,    34,
      12,   259,    12,    12,    12,    12,    12,    12,    12,    12,
      12,    17,   253,    27,    28,    17,    25,    26,    12,    15,
      17,   249,   253,   253,    38,   249,   252,    37,   246,   252,
     249,   248,    33,    37,   249,   252,   258,   258,   222,   253,
     253,   253,   253,   253,   253,   253,   143,   143,   253,   253,
      10,   254,    12,    12,   252,   252,    12,    37,   252,   252,
      12,    12,    17,    17,   259,   253,   249,   249,    17,    17,
     249,   252,    17,    17,   253,   253,    15,    12,    34,    17,
      34,    34,   249,   252,    33,   252,   252,    12,   248,   252,
     249,    17,    17,    34,    34,   252,   252
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   135,   136,   136,   136,   136,   137,   137,   138,   138,
     139,   139,   139,   139,   139,   139,   139,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   141,   141,
     141,   142,   143,   143,   143,   144,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   243,   243,   243,   243,
     243,   244,   244,   244,   245,   246,   246,   246,   247,   247,
     248,   248,   249,   249,   249,   249,   249,   250,   250,   250,
     251,   251,   252,   253,   253,   253,   253,   253,   253,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   255,   256,
     257,   257,   258,   258,   258,   259,   260
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     3,     3,     0,     2,     1,     4,
       4,     4,     4,     4,     6,     6,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     3,     5,     5,     3,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     4,     2,     4,     1,     1,
       2,     2,     2,     2,     1,     1,     2,     2,     1,     9,
       3,     3,     5,     3,     3,     1,     3,     7,    11,    11,
       7,     1,     3,     7,     5,     1,     1,     3,     1,     5,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       3,     6,     1,     1,     3,     3,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* line: line_terminator  */
#line 54 "parser.y"
                          {
		/* empty */
	  }
#line 1799 "parser.c"
    break;

  case 3: /* line: line statement line_terminator  */
#line 57 "parser.y"
                                         {
		struct statement *s = yyvsp[-1];
		if (s) {
			if (section != SECTION_TEXT)
				yyerror("Microcode text instruction in non .text section");
			memcpy(&s->info, &cur_lineinfo, sizeof(struct lineinfo));
			list_add_tail(&s->list, &infile.sl);
		}
	  }
#line 1813 "parser.c"
    break;

  case 4: /* line: line section_switch line_terminator  */
#line 66 "parser.y"
                                              {
	  }
#line 1820 "parser.c"
    break;

  case 5: /* line: line ivals_write line_terminator  */
#line 68 "parser.y"
                                           {
		struct initval_op *io = yyvsp[-1];
		if (section != SECTION_IVALS)
			yyerror("InitVals write in non .initvals section");
		memcpy(&io->info, &cur_lineinfo, sizeof(struct lineinfo));
		INIT_LIST_HEAD(&io->list);
		list_add_tail(&io->list, &cur_initvals_sect->ops);
	  }
#line 1833 "parser.c"
    break;

  case 8: /* section_switch: SECTION_TEXT  */
#line 83 "parser.y"
                               {
			section = SECTION_TEXT;
		  }
#line 1841 "parser.c"
    break;

  case 9: /* section_switch: SECTION_IVALS PAREN_OPEN identifier PAREN_CLOSE  */
#line 86 "parser.y"
                                                                  {
			const char *sectname = yyvsp[-1];
			struct initvals_sect *s;
			cur_initvals_sect = NULL;
			/* Search if there already is a section by that name. */
			list_for_each_entry(s, &infile.ivals, list) {
				if (strcmp(sectname, s->name) == 0)
					cur_initvals_sect = s;
			}
			if (!cur_initvals_sect) {
				/* Not found, create a new one. */
				s = xmalloc(sizeof(struct initvals_sect));
				s->name = sectname;
				INIT_LIST_HEAD(&s->ops);
				INIT_LIST_HEAD(&s->list);
				list_add_tail(&s->list, &infile.ivals);
				cur_initvals_sect = s;
			}
			section = SECTION_IVALS;
		  }
#line 1866 "parser.c"
    break;

  case 10: /* ivals_write: IVAL_MMIO16 imm_value COMMA imm_value  */
#line 108 "parser.y"
                                                        {
			struct initval_op *iop = xmalloc(sizeof(struct initval_op));
			iop->type = IVAL_W_MMIO16;
			iop->args[0] = (unsigned int)(unsigned long)yyvsp[-2];
			iop->args[1] = (unsigned int)(unsigned long)yyvsp[0];
			yyval = iop;
		  }
#line 1878 "parser.c"
    break;

  case 11: /* ivals_write: IVAL_MMIO32 imm_value COMMA imm_value  */
#line 115 "parser.y"
                                                        {
			struct initval_op *iop = xmalloc(sizeof(struct initval_op));
			iop->type = IVAL_W_MMIO32;
			iop->args[0] = (unsigned int)(unsigned long)yyvsp[-2];
			iop->args[1] = (unsigned int)(unsigned long)yyvsp[0];
			yyval = iop;
		  }
#line 1890 "parser.c"
    break;

  case 12: /* ivals_write: IVAL_PHY imm_value COMMA imm_value  */
#line 122 "parser.y"
                                                     {
			struct initval_op *iop = xmalloc(sizeof(struct initval_op));
			iop->type = IVAL_W_PHY;
			iop->args[0] = (unsigned int)(unsigned long)yyvsp[-2];
			iop->args[1] = (unsigned int)(unsigned long)yyvsp[0];
			yyval = iop;
		  }
#line 1902 "parser.c"
    break;

  case 13: /* ivals_write: IVAL_RADIO imm_value COMMA imm_value  */
#line 129 "parser.y"
                                                       {
			struct initval_op *iop = xmalloc(sizeof(struct initval_op));
			iop->type = IVAL_W_RADIO;
			iop->args[0] = (unsigned int)(unsigned long)yyvsp[-2];
			iop->args[1] = (unsigned int)(unsigned long)yyvsp[0];
			yyval = iop;
		  }
#line 1914 "parser.c"
    break;

  case 14: /* ivals_write: IVAL_SHM16 imm_value COMMA imm_value COMMA imm_value  */
#line 136 "parser.y"
                                                                       {
			struct initval_op *iop = xmalloc(sizeof(struct initval_op));
			iop->type = IVAL_W_SHM16;
			iop->args[0] = (unsigned int)(unsigned long)yyvsp[-4];
			iop->args[1] = (unsigned int)(unsigned long)yyvsp[-2];
			iop->args[2] = (unsigned int)(unsigned long)yyvsp[0];
			yyval = iop;
		  }
#line 1927 "parser.c"
    break;

  case 15: /* ivals_write: IVAL_SHM32 imm_value COMMA imm_value COMMA imm_value  */
#line 144 "parser.y"
                                                                       {
			struct initval_op *iop = xmalloc(sizeof(struct initval_op));
			iop->type = IVAL_W_SHM32;
			iop->args[0] = (unsigned int)(unsigned long)yyvsp[-4];
			iop->args[1] = (unsigned int)(unsigned long)yyvsp[-2];
			iop->args[2] = (unsigned int)(unsigned long)yyvsp[0];
			yyval = iop;
		  }
#line 1940 "parser.c"
    break;

  case 16: /* ivals_write: IVAL_TRAM imm_value COMMA imm_value  */
#line 152 "parser.y"
                                                      {
			struct initval_op *iop = xmalloc(sizeof(struct initval_op));
			iop->type = IVAL_W_TRAM;
			iop->args[0] = (unsigned int)(unsigned long)yyvsp[-2];
			iop->args[1] = (unsigned int)(unsigned long)yyvsp[0];
			yyval = iop;
		  }
#line 1952 "parser.c"
    break;

  case 17: /* statement: asmdir  */
#line 161 "parser.y"
                         {
			struct asmdir *ad = yyvsp[0];
			if (ad) {
				struct statement *s = xmalloc(sizeof(struct statement));
				INIT_LIST_HEAD(&s->list);
				s->type = STMT_ASMDIR;
				s->u.asmdir = yyvsp[0];
				yyval = s;
			} else
				yyval = NULL;
		  }
#line 1968 "parser.c"
    break;

  case 18: /* statement: label  */
#line 172 "parser.y"
                        {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_LABEL;
			s->u.label = yyvsp[0];
			yyval = s;
		  }
#line 1980 "parser.c"
    break;

  case 19: /* statement: insn_mul  */
#line 179 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 1992 "parser.c"
    break;

  case 20: /* statement: insn_add  */
#line 186 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2004 "parser.c"
    break;

  case 21: /* statement: insn_addsc  */
#line 193 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2016 "parser.c"
    break;

  case 22: /* statement: insn_addc  */
#line 200 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2028 "parser.c"
    break;

  case 23: /* statement: insn_addscc  */
#line 207 "parser.y"
                              {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2040 "parser.c"
    break;

  case 24: /* statement: insn_xadd  */
#line 214 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2052 "parser.c"
    break;

  case 25: /* statement: insn_xaddsc  */
#line 221 "parser.y"
                              {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2064 "parser.c"
    break;

  case 26: /* statement: insn_xaddc  */
#line 228 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2076 "parser.c"
    break;

  case 27: /* statement: insn_xaddscc  */
#line 235 "parser.y"
                               {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2088 "parser.c"
    break;

  case 28: /* statement: insn_sub  */
#line 242 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2100 "parser.c"
    break;

  case 29: /* statement: insn_subsc  */
#line 249 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2112 "parser.c"
    break;

  case 30: /* statement: insn_subc  */
#line 256 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2124 "parser.c"
    break;

  case 31: /* statement: insn_subscc  */
#line 263 "parser.y"
                              {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2136 "parser.c"
    break;

  case 32: /* statement: insn_xsub  */
#line 270 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2148 "parser.c"
    break;

  case 33: /* statement: insn_xsubsc  */
#line 277 "parser.y"
                              {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2160 "parser.c"
    break;

  case 34: /* statement: insn_xsubc  */
#line 284 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2172 "parser.c"
    break;

  case 35: /* statement: insn_xsubscc  */
#line 291 "parser.y"
                               {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2184 "parser.c"
    break;

  case 36: /* statement: insn_sra  */
#line 298 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2196 "parser.c"
    break;

  case 37: /* statement: insn_or  */
#line 305 "parser.y"
                          {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2208 "parser.c"
    break;

  case 38: /* statement: insn_and  */
#line 312 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2220 "parser.c"
    break;

  case 39: /* statement: insn_xor  */
#line 319 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2232 "parser.c"
    break;

  case 40: /* statement: insn_sr  */
#line 326 "parser.y"
                          {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2244 "parser.c"
    break;

  case 41: /* statement: insn_srx  */
#line 333 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2256 "parser.c"
    break;

  case 42: /* statement: insn_srxh  */
#line 340 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2268 "parser.c"
    break;

  case 43: /* statement: insn_sl  */
#line 347 "parser.y"
                          {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2280 "parser.c"
    break;

  case 44: /* statement: insn_rl  */
#line 354 "parser.y"
                          {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2292 "parser.c"
    break;

  case 45: /* statement: insn_rr  */
#line 361 "parser.y"
                          {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2304 "parser.c"
    break;

  case 46: /* statement: insn_nand  */
#line 368 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2316 "parser.c"
    break;

  case 47: /* statement: insn_orx  */
#line 375 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2328 "parser.c"
    break;

  case 48: /* statement: insn_orxh  */
#line 382 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		}
#line 2340 "parser.c"
    break;

  case 49: /* statement: insn_mov  */
#line 389 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2352 "parser.c"
    break;

  case 50: /* statement: insn_jmp  */
#line 396 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2364 "parser.c"
    break;

  case 51: /* statement: insn_jand  */
#line 403 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2376 "parser.c"
    break;

  case 52: /* statement: insn_jnand  */
#line 410 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2388 "parser.c"
    break;

  case 53: /* statement: insn_js  */
#line 417 "parser.y"
                          {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2400 "parser.c"
    break;

  case 54: /* statement: insn_jns  */
#line 424 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2412 "parser.c"
    break;

  case 55: /* statement: insn_je  */
#line 431 "parser.y"
                          {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2424 "parser.c"
    break;

  case 56: /* statement: insn_jne  */
#line 438 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2436 "parser.c"
    break;

  case 57: /* statement: insn_jls  */
#line 445 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2448 "parser.c"
    break;

  case 58: /* statement: insn_jges  */
#line 452 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2460 "parser.c"
    break;

  case 59: /* statement: insn_jgs  */
#line 459 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2472 "parser.c"
    break;

  case 60: /* statement: insn_jles  */
#line 466 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2484 "parser.c"
    break;

  case 61: /* statement: insn_jdn  */
#line 473 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2496 "parser.c"
    break;

  case 62: /* statement: insn_jdpz  */
#line 480 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2508 "parser.c"
    break;

  case 63: /* statement: insn_jdp  */
#line 487 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2520 "parser.c"
    break;

  case 64: /* statement: insn_jdnz  */
#line 494 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2532 "parser.c"
    break;

  case 65: /* statement: insn_jboh  */
#line 501 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2544 "parser.c"
    break;

  case 66: /* statement: insn_jnboh  */
#line 508 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2556 "parser.c"
    break;

  case 67: /* statement: insn_jboh2  */
#line 515 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2568 "parser.c"
    break;

  case 68: /* statement: insn_jnboh2  */
#line 522 "parser.y"
                              {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2580 "parser.c"
    break;

  case 69: /* statement: insn_jmah  */
#line 529 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2592 "parser.c"
    break;

  case 70: /* statement: insn_jnmah  */
#line 536 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2604 "parser.c"
    break;

  case 71: /* statement: insn_xje  */
#line 543 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2616 "parser.c"
    break;

  case 72: /* statement: insn_xjne  */
#line 550 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2628 "parser.c"
    break;

  case 73: /* statement: insn_xjls  */
#line 557 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2640 "parser.c"
    break;

  case 74: /* statement: insn_xjges  */
#line 564 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2652 "parser.c"
    break;

  case 75: /* statement: insn_xjgs  */
#line 571 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2664 "parser.c"
    break;

  case 76: /* statement: insn_xjles  */
#line 578 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2676 "parser.c"
    break;

  case 77: /* statement: insn_xjdn  */
#line 585 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2688 "parser.c"
    break;

  case 78: /* statement: insn_xjdpz  */
#line 592 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2700 "parser.c"
    break;

  case 79: /* statement: insn_xjdp  */
#line 599 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2712 "parser.c"
    break;

  case 80: /* statement: insn_xjdnz  */
#line 606 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2724 "parser.c"
    break;

  case 81: /* statement: insn_xjl  */
#line 613 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2736 "parser.c"
    break;

  case 82: /* statement: insn_xjge  */
#line 620 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2748 "parser.c"
    break;

  case 83: /* statement: insn_xjg  */
#line 627 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2760 "parser.c"
    break;

  case 84: /* statement: insn_xjle  */
#line 634 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2772 "parser.c"
    break;

  case 85: /* statement: insn_jl  */
#line 641 "parser.y"
                          {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2784 "parser.c"
    break;

  case 86: /* statement: insn_jge  */
#line 648 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2796 "parser.c"
    break;

  case 87: /* statement: insn_jg  */
#line 655 "parser.y"
                          {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2808 "parser.c"
    break;

  case 88: /* statement: insn_jle  */
#line 662 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2820 "parser.c"
    break;

  case 89: /* statement: insn_jzx  */
#line 669 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2832 "parser.c"
    break;

  case 90: /* statement: insn_jzxh  */
#line 676 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2844 "parser.c"
    break;

  case 91: /* statement: insn_jnzx  */
#line 683 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2856 "parser.c"
    break;

  case 92: /* statement: insn_jnzxh  */
#line 690 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2868 "parser.c"
    break;

  case 93: /* statement: insn_jext  */
#line 697 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2880 "parser.c"
    break;

  case 94: /* statement: insn_jnext  */
#line 704 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2892 "parser.c"
    break;

  case 95: /* statement: insn_call  */
#line 711 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2904 "parser.c"
    break;

  case 96: /* statement: insn_calls  */
#line 718 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2916 "parser.c"
    break;

  case 97: /* statement: insn_ret  */
#line 725 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2928 "parser.c"
    break;

  case 98: /* statement: insn_rets  */
#line 732 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2940 "parser.c"
    break;

  case 99: /* statement: insn_rets2  */
#line 739 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2952 "parser.c"
    break;

  case 100: /* statement: insn_tkiph  */
#line 746 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2964 "parser.c"
    break;

  case 101: /* statement: insn_tkiphs  */
#line 753 "parser.y"
                              {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2976 "parser.c"
    break;

  case 102: /* statement: insn_tkipl  */
#line 760 "parser.y"
                             {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 2988 "parser.c"
    break;

  case 103: /* statement: insn_tkipls  */
#line 767 "parser.y"
                              {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 3000 "parser.c"
    break;

  case 104: /* statement: insn_nap  */
#line 774 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 3012 "parser.c"
    break;

  case 105: /* statement: insn_nap2  */
#line 781 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 3024 "parser.c"
    break;

  case 106: /* statement: insn_napv  */
#line 788 "parser.y"
                            {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 3036 "parser.c"
    break;

  case 107: /* statement: insn_raw  */
#line 795 "parser.y"
                           {
			struct statement *s = xmalloc(sizeof(struct statement));
			INIT_LIST_HEAD(&s->list);
			s->type = STMT_INSN;
			s->u.insn = yyvsp[0];
			yyval = s;
		  }
#line 3048 "parser.c"
    break;

  case 108: /* asmdir: ASM_ARCH hexnum_decnum  */
#line 805 "parser.y"
                                         {
			struct asmdir *ad = xmalloc(sizeof(struct asmdir));
			ad->type = ADIR_ARCH;
			ad->u.arch = (unsigned int)(unsigned long)yyvsp[0];
			yyval = ad;
		  }
#line 3059 "parser.c"
    break;

  case 109: /* asmdir: ASM_START identifier  */
#line 811 "parser.y"
                                       {
			struct asmdir *ad = xmalloc(sizeof(struct asmdir));
			struct label *label = xmalloc(sizeof(struct label));
			label->name = yyvsp[0];
			label->direction = LABELREF_ABSOLUTE;
			ad->type = ADIR_START;
			ad->u.start = label;
			yyval = ad;
		  }
#line 3073 "parser.c"
    break;

  case 110: /* asmdir: asm_assert  */
#line 820 "parser.y"
                             {
			yyval = NULL;
		  }
#line 3081 "parser.c"
    break;

  case 111: /* asm_assert: ASM_ASSERT assertion  */
#line 825 "parser.y"
                                       {
			unsigned int ok = (unsigned int)(unsigned long)yyvsp[0];
			if (!ok)
				assembler_assertion_failed();
			yyval = NULL;
		  }
#line 3092 "parser.c"
    break;

  case 112: /* assertion: PAREN_OPEN assert_expr PAREN_CLOSE  */
#line 833 "parser.y"
                                                     {
			yyval = yyvsp[-1];
		  }
#line 3100 "parser.c"
    break;

  case 113: /* assertion: PAREN_OPEN assertion LOGICAL_OR assertion PAREN_CLOSE  */
#line 836 "parser.y"
                                                                        {
			unsigned int a = (unsigned int)(unsigned long)yyvsp[-3];
			unsigned int b = (unsigned int)(unsigned long)yyvsp[-1];
			unsigned int result = (a || b);
			yyval = (void *)(unsigned long)result;
		  }
#line 3111 "parser.c"
    break;

  case 114: /* assertion: PAREN_OPEN assertion LOGICAL_AND assertion PAREN_CLOSE  */
#line 842 "parser.y"
                                                                         {
			unsigned int a = (unsigned int)(unsigned long)yyvsp[-3];
			unsigned int b = (unsigned int)(unsigned long)yyvsp[-1];
			unsigned int result = (a && b);
			yyval = (void *)(unsigned long)result;
		  }
#line 3122 "parser.c"
    break;

  case 115: /* assert_expr: imm_value EQUAL imm_value  */
#line 850 "parser.y"
                                            {
			unsigned int a = (unsigned int)(unsigned long)yyvsp[-2];
			unsigned int b = (unsigned int)(unsigned long)yyvsp[0];
			unsigned int result = (a == b);
			yyval = (void *)(unsigned long)result;
		  }
#line 3133 "parser.c"
    break;

  case 116: /* assert_expr: imm_value NOT_EQUAL imm_value  */
#line 856 "parser.y"
                                                {
			unsigned int a = (unsigned int)(unsigned long)yyvsp[-2];
			unsigned int b = (unsigned int)(unsigned long)yyvsp[0];
			unsigned int result = (a != b);
			yyval = (void *)(unsigned long)result;
		  }
#line 3144 "parser.c"
    break;

  case 117: /* label: LABEL  */
#line 864 "parser.y"
                        {
			struct label *label = xmalloc(sizeof(struct label));
			char *l;
			l = xstrdup(yytext);
			l[strlen(l) - 1] = '\0';
			label->name = l;
			yyval = label;
		  }
#line 3157 "parser.c"
    break;

  case 118: /* insn_mul: OP_MUL operlist_3  */
#line 875 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_MUL;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3168 "parser.c"
    break;

  case 119: /* insn_add: OP_ADD operlist_3  */
#line 884 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_ADD;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3179 "parser.c"
    break;

  case 120: /* insn_addsc: OP_ADDSC operlist_3  */
#line 893 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_ADDSC;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3190 "parser.c"
    break;

  case 121: /* insn_addc: OP_ADDC operlist_3  */
#line 902 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_ADDC;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3201 "parser.c"
    break;

  case 122: /* insn_addscc: OP_ADDSCC operlist_3  */
#line 911 "parser.y"
                                       {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_ADDSCC;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3212 "parser.c"
    break;

  case 123: /* insn_xadd: OP_XADD operlist_3  */
#line 920 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XADD;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3223 "parser.c"
    break;

  case 124: /* insn_xaddsc: OP_XADDSC operlist_3  */
#line 929 "parser.y"
                                       {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XADDSC;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3234 "parser.c"
    break;

  case 125: /* insn_xaddc: OP_XADDC operlist_3  */
#line 938 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XADDC;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3245 "parser.c"
    break;

  case 126: /* insn_xaddscc: OP_XADDSCC operlist_3  */
#line 947 "parser.y"
                                        {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XADDSCC;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3256 "parser.c"
    break;

  case 127: /* insn_sub: OP_SUB operlist_3  */
#line 956 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_SUB;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3267 "parser.c"
    break;

  case 128: /* insn_subsc: OP_SUBSC operlist_3  */
#line 965 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_SUBSC;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3278 "parser.c"
    break;

  case 129: /* insn_subc: OP_SUBC operlist_3  */
#line 974 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_SUBC;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3289 "parser.c"
    break;

  case 130: /* insn_subscc: OP_SUBSCC operlist_3  */
#line 983 "parser.y"
                                       {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_SUBSCC;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3300 "parser.c"
    break;

  case 131: /* insn_xsub: OP_XSUB operlist_3  */
#line 992 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XSUB;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3311 "parser.c"
    break;

  case 132: /* insn_xsubsc: OP_XSUBSC operlist_3  */
#line 1001 "parser.y"
                                       {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XSUBSC;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3322 "parser.c"
    break;

  case 133: /* insn_xsubc: OP_XSUBC operlist_3  */
#line 1010 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XSUBC;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3333 "parser.c"
    break;

  case 134: /* insn_xsubscc: OP_XSUBSCC operlist_3  */
#line 1019 "parser.y"
                                        {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XSUBSCC;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3344 "parser.c"
    break;

  case 135: /* insn_sra: OP_SRA operlist_3  */
#line 1027 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_SRA;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3355 "parser.c"
    break;

  case 136: /* insn_or: OP_OR operlist_3  */
#line 1035 "parser.y"
                                   {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_OR;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3366 "parser.c"
    break;

  case 137: /* insn_and: OP_AND operlist_3  */
#line 1043 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_AND;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3377 "parser.c"
    break;

  case 138: /* insn_xor: OP_XOR operlist_3  */
#line 1051 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XOR;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3388 "parser.c"
    break;

  case 139: /* insn_sr: OP_SR operlist_3  */
#line 1059 "parser.y"
                                   {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_SR;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3399 "parser.c"
    break;

  case 140: /* insn_srx: OP_SRX extended_operlist  */
#line 1067 "parser.y"
                                           {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_SRX;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3410 "parser.c"
    break;

  case 141: /* insn_srxh: OP_SRXH operlist_2_human  */
#line 1075 "parser.y"
                                           {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_SRXH;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3421 "parser.c"
    break;

  case 142: /* insn_sl: OP_SL operlist_3  */
#line 1083 "parser.y"
                                   {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_SL;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3432 "parser.c"
    break;

  case 143: /* insn_rl: OP_RL operlist_3  */
#line 1091 "parser.y"
                                   {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_RL;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3443 "parser.c"
    break;

  case 144: /* insn_rr: OP_RR operlist_3  */
#line 1099 "parser.y"
                                   {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_RR;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3454 "parser.c"
    break;

  case 145: /* insn_nand: OP_NAND operlist_3  */
#line 1107 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_NAND;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3465 "parser.c"
    break;

  case 146: /* insn_orx: OP_ORX extended_operlist  */
#line 1115 "parser.y"
                                           {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_ORX;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3476 "parser.c"
    break;

  case 147: /* insn_orxh: OP_ORXH operlist_3_human  */
#line 1123 "parser.y"
                                           {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_ORXH;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3487 "parser.c"
    break;

  case 148: /* insn_mov: OP_MOV operlist_2  */
#line 1131 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_MOV;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3498 "parser.c"
    break;

  case 149: /* insn_jmp: OP_JMP labelref  */
#line 1139 "parser.y"
                                  {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			ol->oper[0] = yyvsp[0];
			insn->op = OP_JMP;
			insn->operands = ol;
			yyval = insn;
		  }
#line 3511 "parser.c"
    break;

  case 150: /* insn_jand: OP_JAND operlist_3  */
#line 1149 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JAND;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3522 "parser.c"
    break;

  case 151: /* insn_jnand: OP_JNAND operlist_3  */
#line 1157 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JNAND;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3533 "parser.c"
    break;

  case 152: /* insn_js: OP_JS operlist_3  */
#line 1165 "parser.y"
                                   {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JS;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3544 "parser.c"
    break;

  case 153: /* insn_jns: OP_JNS operlist_3  */
#line 1173 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JNS;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3555 "parser.c"
    break;

  case 154: /* insn_je: OP_JE operlist_3  */
#line 1181 "parser.y"
                                   {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JE;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3566 "parser.c"
    break;

  case 155: /* insn_jne: OP_JNE operlist_3  */
#line 1189 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JNE;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3577 "parser.c"
    break;

  case 156: /* insn_jls: OP_JLS operlist_3  */
#line 1197 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JLS;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3588 "parser.c"
    break;

  case 157: /* insn_jges: OP_JGES operlist_3  */
#line 1205 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JGES;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3599 "parser.c"
    break;

  case 158: /* insn_jgs: OP_JGS operlist_3  */
#line 1213 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JGS;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3610 "parser.c"
    break;

  case 159: /* insn_jles: OP_JLES operlist_3  */
#line 1221 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JLES;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3621 "parser.c"
    break;

  case 160: /* insn_jl: OP_JL operlist_3  */
#line 1229 "parser.y"
                                   {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JL;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3632 "parser.c"
    break;

  case 161: /* insn_jge: OP_JGE operlist_3  */
#line 1237 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JGE;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3643 "parser.c"
    break;

  case 162: /* insn_jg: OP_JG operlist_3  */
#line 1245 "parser.y"
                                   {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JG;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3654 "parser.c"
    break;

  case 163: /* insn_jle: OP_JLE operlist_3  */
#line 1253 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JLE;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3665 "parser.c"
    break;

  case 164: /* insn_jzx: OP_JZX extended_operlist  */
#line 1261 "parser.y"
                                           {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JZX;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3676 "parser.c"
    break;

  case 165: /* insn_jzxh: OP_JZXH operlist_2_jump_human  */
#line 1269 "parser.y"
                                                {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JZXH;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3687 "parser.c"
    break;

  case 166: /* insn_jnzx: OP_JNZX extended_operlist  */
#line 1277 "parser.y"
                                            {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JNZX;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3698 "parser.c"
    break;

  case 167: /* insn_jnzxh: OP_JNZXH operlist_2_jump_human  */
#line 1285 "parser.y"
                                                 {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JNZXH;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3709 "parser.c"
    break;

  case 168: /* insn_jdn: OP_JDN operlist_3  */
#line 1293 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JDN;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3720 "parser.c"
    break;

  case 169: /* insn_jdpz: OP_JDPZ operlist_3  */
#line 1301 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JDPZ;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3731 "parser.c"
    break;

  case 170: /* insn_jdp: OP_JDP operlist_3  */
#line 1309 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JDP;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3742 "parser.c"
    break;

  case 171: /* insn_jdnz: OP_JDNZ operlist_3  */
#line 1317 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JDNZ;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3753 "parser.c"
    break;

  case 172: /* insn_jboh: OP_JBOH operlist_3  */
#line 1325 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JBOH;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3764 "parser.c"
    break;

  case 173: /* insn_jnboh: OP_JNBOH operlist_3  */
#line 1333 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JNBOH;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3775 "parser.c"
    break;

  case 174: /* insn_jboh2: OP_JBOH2 operlist_3  */
#line 1341 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JBOH2;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3786 "parser.c"
    break;

  case 175: /* insn_jnboh2: OP_JNBOH2 operlist_3  */
#line 1349 "parser.y"
                                       {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JNBOH2;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3797 "parser.c"
    break;

  case 176: /* insn_jmah: OP_JMAH operlist_3  */
#line 1357 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JMAH;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3808 "parser.c"
    break;

  case 177: /* insn_jnmah: OP_JNMAH operlist_3  */
#line 1365 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JNMAH;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3819 "parser.c"
    break;

  case 178: /* insn_xje: OP_XJE operlist_3  */
#line 1373 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XJE;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3830 "parser.c"
    break;

  case 179: /* insn_xjne: OP_XJNE operlist_3  */
#line 1381 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XJNE;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3841 "parser.c"
    break;

  case 180: /* insn_xjls: OP_XJLS operlist_3  */
#line 1389 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XJLS;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3852 "parser.c"
    break;

  case 181: /* insn_xjges: OP_XJGES operlist_3  */
#line 1397 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XJGES;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3863 "parser.c"
    break;

  case 182: /* insn_xjgs: OP_XJGS operlist_3  */
#line 1405 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XJGS;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3874 "parser.c"
    break;

  case 183: /* insn_xjles: OP_XJLES operlist_3  */
#line 1413 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XJLES;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3885 "parser.c"
    break;

  case 184: /* insn_xjdn: OP_XJDN operlist_3  */
#line 1421 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XJDN;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3896 "parser.c"
    break;

  case 185: /* insn_xjdpz: OP_XJDPZ operlist_3  */
#line 1429 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XJDPZ;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3907 "parser.c"
    break;

  case 186: /* insn_xjdp: OP_XJDP operlist_3  */
#line 1437 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XJDP;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3918 "parser.c"
    break;

  case 187: /* insn_xjdnz: OP_XJDNZ operlist_3  */
#line 1445 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XJDNZ;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3929 "parser.c"
    break;

  case 188: /* insn_xjl: OP_XJL operlist_3  */
#line 1453 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XJL;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3940 "parser.c"
    break;

  case 189: /* insn_xjge: OP_XJGE operlist_3  */
#line 1461 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XJGE;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3951 "parser.c"
    break;

  case 190: /* insn_xjg: OP_XJG operlist_3  */
#line 1469 "parser.y"
                                    {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XJG;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3962 "parser.c"
    break;

  case 191: /* insn_xjle: OP_XJLE operlist_3  */
#line 1477 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_XJLE;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3973 "parser.c"
    break;

  case 192: /* insn_jext: OP_JEXT external_jump_operands  */
#line 1485 "parser.y"
                                                 {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JEXT;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3984 "parser.c"
    break;

  case 193: /* insn_jnext: OP_JNEXT external_jump_operands  */
#line 1493 "parser.y"
                                                  {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = OP_JNEXT;
			insn->operands = yyvsp[0];
			yyval = insn;
		  }
#line 3995 "parser.c"
    break;

  case 194: /* linkreg: LR regnr  */
#line 1501 "parser.y"
                           {
			yyval = yyvsp[0];
		  }
#line 4003 "parser.c"
    break;

  case 195: /* insn_call: OP_CALL linkreg COMMA labelref  */
#line 1506 "parser.y"
                                                 {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			struct operand *oper_lr = xmalloc(sizeof(struct operand));
			struct operand *oper_zero = xmalloc(sizeof(struct operand));
			oper_zero->type = OPER_RAW;
			oper_zero->u.raw = 0;
			oper_lr->type = OPER_RAW;
			oper_lr->u.raw = (unsigned long)yyvsp[-2];
			ol->oper[0] = oper_lr;
			ol->oper[1] = oper_zero;
			ol->oper[2] = yyvsp[0];
			insn->op = OP_CALL;
			insn->operands = ol;
			yyval = insn;
		  }
#line 4024 "parser.c"
    break;

  case 196: /* insn_calls: OP_CALLS labelref  */
#line 1524 "parser.y"
                                     {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			struct operand *oper_r0 = xmalloc(sizeof(struct operand));
			struct registr *r0 = xmalloc(sizeof(struct registr));
			r0->type = GPR;
			r0->nr = 0;
			oper_r0->type = OPER_REG;
			oper_r0->u.reg = r0;
			ol->oper[0] = oper_r0;
			ol->oper[1] = oper_r0;
			ol->oper[2] = yyvsp[0];
			insn->op = OP_CALLS;
			insn->operands = ol;
			yyval = insn;
		  }
#line 4045 "parser.c"
    break;

  case 197: /* insn_ret: OP_RET linkreg COMMA linkreg  */
#line 1542 "parser.y"
                                               {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			struct operand *oper_lr0 = xmalloc(sizeof(struct operand));
			struct operand *oper_lr1 = xmalloc(sizeof(struct operand));
			struct operand *oper_zero = xmalloc(sizeof(struct operand));
			oper_zero->type = OPER_RAW;
			oper_zero->u.raw = 0;
			oper_lr0->type = OPER_RAW;
			oper_lr0->u.raw = (unsigned long)yyvsp[-2];
			oper_lr1->type = OPER_RAW;
			oper_lr1->u.raw = (unsigned long)yyvsp[0];
			ol->oper[0] = oper_lr0;
			ol->oper[1] = oper_zero;
			ol->oper[2] = oper_lr1;
			insn->op = OP_RET;
			insn->operands = ol;
			yyval = insn;
		  }
#line 4069 "parser.c"
    break;

  case 198: /* insn_rets: OP_RETS  */
#line 1563 "parser.y"
                          {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			struct operand *oper_r0 = xmalloc(sizeof(struct operand));
			struct operand *oper_zero = xmalloc(sizeof(struct operand));
			struct registr *r0 = xmalloc(sizeof(struct registr));
			oper_zero->type = OPER_RAW;
			oper_zero->u.raw = 0;
			r0->type = GPR;
			r0->nr = 0;
			oper_r0->type = OPER_REG;
			oper_r0->u.reg = r0;
			ol->oper[0] = oper_r0;
			ol->oper[1] = oper_r0;
			ol->oper[2] = oper_zero;
			insn->op = OP_RETS;
			insn->operands = ol;
			yyval = insn;
		  }
#line 4093 "parser.c"
    break;

  case 199: /* insn_rets2: OP_RETS2  */
#line 1584 "parser.y"
                           {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			struct operand *oper_r0 = xmalloc(sizeof(struct operand));
			struct operand *oper_r1 = xmalloc(sizeof(struct operand));
			struct operand *oper_zero = xmalloc(sizeof(struct operand));
			struct registr *r0 = xmalloc(sizeof(struct registr));
			struct registr *r2 = xmalloc(sizeof(struct registr));
			oper_zero->type = OPER_RAW;
			oper_zero->u.raw = 0;
			r0->type = GPR;
			r0->nr = 0;
			r2->type = GPR;
			r2->nr = 2;
			oper_r0->type = OPER_REG;
			oper_r0->u.reg = r2;
			oper_r1->type = OPER_REG;
			oper_r1->u.reg = r0;
			ol->oper[0] = oper_r0;
			ol->oper[1] = oper_r1;
			ol->oper[2] = oper_zero;
			insn->op = OP_RETS2;
			insn->operands = ol;
			yyval = insn;
		  }
#line 4123 "parser.c"
    break;

  case 200: /* insn_tkiph: OP_TKIPH operlist_2  */
#line 1610 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			struct operlist *ol = yyvsp[0];
			struct operand *flags = xmalloc(sizeof(struct operand));
			struct immediate *imm = xmalloc(sizeof(struct immediate));
			imm->imm = 0x1;
			flags->type = OPER_IMM;
			flags->u.imm = imm;
			ol->oper[2] = ol->oper[1];
			ol->oper[1] = flags;
			insn->op = OP_TKIPH;
			insn->operands = ol;
			yyval = insn;
		  }
#line 4142 "parser.c"
    break;

  case 201: /* insn_tkiphs: OP_TKIPHS operlist_2  */
#line 1626 "parser.y"
                                       {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			struct operlist *ol = yyvsp[0];
			struct operand *flags = xmalloc(sizeof(struct operand));
			struct immediate *imm = xmalloc(sizeof(struct immediate));
			imm->imm = 0x1 | 0x2;
			flags->type = OPER_IMM;
			flags->u.imm = imm;
			ol->oper[2] = ol->oper[1];
			ol->oper[1] = flags;
			insn->op = OP_TKIPH;
			insn->operands = ol;
			yyval = insn;
		  }
#line 4161 "parser.c"
    break;

  case 202: /* insn_tkipl: OP_TKIPL operlist_2  */
#line 1642 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			struct operlist *ol = yyvsp[0];
			struct operand *flags = xmalloc(sizeof(struct operand));
			struct immediate *imm = xmalloc(sizeof(struct immediate));
			imm->imm = 0x0;
			flags->type = OPER_IMM;
			flags->u.imm = imm;
			ol->oper[2] = ol->oper[1];
			ol->oper[1] = flags;
			insn->op = OP_TKIPH;
			insn->operands = ol;
			yyval = insn;
		  }
#line 4180 "parser.c"
    break;

  case 203: /* insn_tkipls: OP_TKIPLS operlist_2  */
#line 1658 "parser.y"
                                       {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			struct operlist *ol = yyvsp[0];
			struct operand *flags = xmalloc(sizeof(struct operand));
			struct immediate *imm = xmalloc(sizeof(struct immediate));
			imm->imm = 0x0 | 0x2;
			flags->type = OPER_IMM;
			flags->u.imm = imm;
			ol->oper[2] = ol->oper[1];
			ol->oper[1] = flags;
			insn->op = OP_TKIPH;
			insn->operands = ol;
			yyval = insn;
		  }
#line 4199 "parser.c"
    break;

  case 204: /* insn_nap: OP_NAP  */
#line 1674 "parser.y"
                         {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			struct operand *regop = xmalloc(sizeof(struct operand));
			struct operand *zeroop = xmalloc(sizeof(struct operand));
			struct registr *r0 = xmalloc(sizeof(struct registr));
			r0->type = GPR;
			r0->nr = 0;
			regop->type = OPER_REG;
			regop->u.reg = r0;
			zeroop->type = OPER_RAW;
			zeroop->u.raw = 0x000;
			ol->oper[0] = regop;
			ol->oper[1] = regop;
			ol->oper[2] = zeroop;
			insn->op = OP_NAP;
			insn->operands = ol;
			yyval = insn;
		  }
#line 4223 "parser.c"
    break;

  case 205: /* insn_nap2: OP_NAP2  */
#line 1695 "parser.y"
                          {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			struct operand *regop = xmalloc(sizeof(struct operand));
			struct operand *zeroop = xmalloc(sizeof(struct operand));
			struct registr *r0 = xmalloc(sizeof(struct registr));
			r0->type = GPR;
			r0->nr = 0;
			regop->type = OPER_REG;
			regop->u.reg = r0;
			zeroop->type = OPER_RAW;
			zeroop->u.raw = 0x000;
			ol->oper[0] = regop;
			ol->oper[1] = regop;
			ol->oper[2] = zeroop;
			insn->op = OP_NAP2;
			insn->operands = ol;
			yyval = insn;
		  }
#line 4247 "parser.c"
    break;

  case 206: /* insn_napv: OP_NAPV hexnum_decnum  */
#line 1716 "parser.y"
                                        {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			struct operand *nzeroop = xmalloc(sizeof(struct operand));
			struct operand *zeroop = xmalloc(sizeof(struct operand));
			zeroop->type = OPER_RAW;
			zeroop->u.raw = 0x0;
			nzeroop->type = OPER_RAW;
			nzeroop->u.raw = (unsigned long)yyvsp[0];
			ol->oper[0] = nzeroop;
			ol->oper[1] = zeroop;
			ol->oper[2] = zeroop;
			insn->op = OP_NAPV;
			insn->operands = ol;
			yyval = insn;
                        // struct operand *oper = xmalloc(sizeof(struct operand));
                        // oper->type = OPER_MEM;
                        // oper->u.mem = $1;
                        // $$ = oper;
		  }
#line 4272 "parser.c"
    break;

  case 207: /* insn_raw: raw_code operlist_3  */
#line 1738 "parser.y"
                                      {
			struct instruction *insn = xmalloc(sizeof(struct instruction));
			insn->op = RAW_CODE;
			insn->operands = yyvsp[0];
			insn->opcode = (unsigned long)yyvsp[-1];
			yyval = insn;
		  }
#line 4284 "parser.c"
    break;

  case 208: /* raw_code: RAW_CODE  */
#line 1747 "parser.y"
                           {
			yytext++; /* skip @ */
			yyval = (void *)(unsigned long)strtoul(yytext, NULL, 16);
		  }
#line 4293 "parser.c"
    break;

  case 209: /* extended_operlist: imm_value COMMA imm_value COMMA operand COMMA operand COMMA operand  */
#line 1753 "parser.y"
                                                                                        {
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			struct operand *mask_oper = xmalloc(sizeof(struct operand));
			struct operand *shift_oper = xmalloc(sizeof(struct operand));
			mask_oper->type = OPER_RAW;
			mask_oper->u.raw = (unsigned long)yyvsp[-8];
			shift_oper->type = OPER_RAW;
			shift_oper->u.raw = (unsigned long)yyvsp[-6];
			ol->oper[0] = mask_oper;
			ol->oper[1] = shift_oper;
			ol->oper[2] = yyvsp[-4];
			ol->oper[3] = yyvsp[-2];
			ol->oper[4] = store_oper_sanity(yyvsp[0]);
			yyval = ol;
		  }
#line 4313 "parser.c"
    break;

  case 210: /* external_jump_operands: imm COMMA labelref  */
#line 1770 "parser.y"
                                            {
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			struct operand *cond = xmalloc(sizeof(struct operand));
			cond->type = OPER_IMM;
			cond->u.imm = yyvsp[-2];
			ol->oper[0] = cond;
			ol->oper[1] = yyvsp[0];
			yyval = ol;
		  }
#line 4327 "parser.c"
    break;

  case 211: /* operlist_2: operand COMMA operand  */
#line 1781 "parser.y"
                                        {
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			ol->oper[0] = yyvsp[-2];
			ol->oper[1] = store_oper_sanity(yyvsp[0]);
			yyval = ol;
		  }
#line 4338 "parser.c"
    break;

  case 212: /* operlist_3: operand COMMA operand COMMA operand  */
#line 1789 "parser.y"
                                                      {
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			ol->oper[0] = yyvsp[-4];
			ol->oper[1] = yyvsp[-2];
			ol->oper[2] = store_oper_sanity(yyvsp[0]);
			yyval = ol;
		  }
#line 4350 "parser.c"
    break;

  case 213: /* operlist_2_jump_human: operand_shift_operand_mask COMMA operand  */
#line 1798 "parser.y"
                                                                   {
			struct operlist *ol = yyvsp[-2];
			ol->oper[3] = store_oper_sanity(yyvsp[0]);
			yyval = ol;
		  }
#line 4360 "parser.c"
    break;

  case 214: /* operlist_2_human: operand_shift_mask2 COMMA operand  */
#line 1805 "parser.y"
                                                            {
			struct operlist *ol = yyvsp[-2];
			ol->oper[3] = store_oper_sanity(yyvsp[0]);
			yyval = ol;
		  }
#line 4370 "parser.c"
    break;

  case 215: /* operand_shift_operand_mask: imm  */
#line 1823 "parser.y"
                                      {
			yyerror("Human expression not yet implemented");
		  }
#line 4378 "parser.c"
    break;

  case 216: /* operand_shift_operand_mask: operandh BITW_AND imm  */
#line 1826 "parser.y"
                                        {
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			ol->oper[0] = yyvsp[-2];
			ol->oper[1] = xmalloc(sizeof(struct operand));
			ol->oper[1]->type = OPER_IMM;
			ol->oper[1]->u.imm = xmalloc(sizeof(struct immediate));
			ol->oper[1]->u.imm->imm = 0;
			ol->oper[2] = xmalloc(sizeof(struct operand));
			ol->oper[2]->type = OPER_IMM;
			ol->oper[2]->u.imm = yyvsp[0];
			yyval = ol;
		  }
#line 4395 "parser.c"
    break;

  case 217: /* operand_shift_operand_mask: PAREN_OPEN operandh LEFTSHIFT imm PAREN_CLOSE BITW_AND imm  */
#line 1838 "parser.y"
                                                                             {
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			struct immediate *imm = yyvsp[-3];
			if(imm->imm != 16)
				yyerror("Only 16 bit shift allowed here");
			ol->oper[0] = xmalloc(sizeof(struct operand));
			ol->oper[0]->type = OPER_IMM;
			ol->oper[0]->u.imm = xmalloc(sizeof(struct immediate));
			ol->oper[0]->u.imm->imm = 0;
			ol->oper[1] = yyvsp[-5];
			ol->oper[2] = xmalloc(sizeof(struct operand));
			ol->oper[2]->type = OPER_IMM;
			ol->oper[2]->u.imm = yyvsp[0];
			yyval = ol;
		  }
#line 4415 "parser.c"
    break;

  case 218: /* operand_shift_operand_mask: PAREN_OPEN PAREN_OPEN operandh LEFTSHIFT imm PAREN_CLOSE BITW_OR operandh PAREN_CLOSE BITW_AND imm  */
#line 1853 "parser.y"
                                                                                                                     {
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			struct immediate *imm = yyvsp[-6];
			if(imm->imm != 16)
				yyerror("Only 16 bit shift allowed here");
			ol->oper[0] = yyvsp[-3];
			ol->oper[1] = yyvsp[-8];
			ol->oper[2] = xmalloc(sizeof(struct operand));
			ol->oper[2]->type = OPER_IMM;
			ol->oper[2]->u.imm = yyvsp[0];
			yyval = ol;
		  }
#line 4432 "parser.c"
    break;

  case 219: /* operand_shift_operand_mask: PAREN_OPEN PAREN_OPEN operandh LEFTSHIFT imm PAREN_CLOSE BITW_OR imm PAREN_CLOSE BITW_AND imm  */
#line 1865 "parser.y"
                                                                                                                {
			yyerror("Human expression not yet implemented");
		  }
#line 4440 "parser.c"
    break;

  case 220: /* operand_shift_operand_mask: PAREN_OPEN operandh BITW_OR imm PAREN_CLOSE BITW_AND imm  */
#line 1868 "parser.y"
                                                                           {
			yyerror("Human expression not yet implemented");
		  }
#line 4448 "parser.c"
    break;

  case 221: /* operand_shift_mask2: imm  */
#line 1878 "parser.y"
                              {
			yyerror("Human expression not yet implemented");
		  }
#line 4456 "parser.c"
    break;

  case 222: /* operand_shift_mask2: operandh BITW_AND imm  */
#line 1881 "parser.y"
                                        {
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			ol->oper[0] = yyvsp[-2];
			ol->oper[1] = xmalloc(sizeof(struct operand));
			ol->oper[1]->type = OPER_IMM;
			ol->oper[1]->u.imm = xmalloc(sizeof(struct immediate));
			ol->oper[1]->u.imm->imm = 0;
			ol->oper[2] = xmalloc(sizeof(struct operand));
			ol->oper[2]->type = OPER_IMM;
			ol->oper[2]->u.imm = yyvsp[0];
			yyval = ol;
		  }
#line 4473 "parser.c"
    break;

  case 223: /* operand_shift_mask2: PAREN_OPEN operandh RIGHTSHIFT imm PAREN_CLOSE BITW_AND imm  */
#line 1893 "parser.y"
                                                                              {
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			struct immediate *shift_imm = yyvsp[-3];
			ol->oper[0] = yyvsp[-5];
			ol->oper[1] = xmalloc(sizeof(struct operand));
			ol->oper[1]->type = OPER_IMM;
			ol->oper[1]->u.imm = xmalloc(sizeof(struct immediate));
			ol->oper[1]->u.imm->imm = 0;
			ol->oper[2] = xmalloc(sizeof(struct operand));
			ol->oper[2]->type = OPER_IMM;
			ol->oper[2]->u.imm = yyvsp[0];
			ol->oper[2]->u.imm->imm <<= shift_imm->imm;
			free(shift_imm);
			yyval = ol;
		  }
#line 4493 "parser.c"
    break;

  case 224: /* operlist_3_human: operand_shift_mask COMMA operand_shift_mask COMMA operand  */
#line 1910 "parser.y"
                                                                                    {
			struct operlist *ol = xmalloc(sizeof(struct operlist));
			struct operand_shift_mask *xxx = yyvsp[-4];
			struct operand *shift_xxx = xmalloc(sizeof(struct operand));
			struct operand *mask_xxx = xmalloc(sizeof(struct operand));
			struct operand_shift_mask *yyy = yyvsp[-2];
			struct operand *shift_yyy = xmalloc(sizeof(struct operand));
			struct operand *mask_yyy = xmalloc(sizeof(struct operand));
			shift_xxx->type = OPER_RAW;
			shift_xxx->u.raw = (unsigned long) xxx->shift;
			mask_xxx->type = OPER_RAW;
			mask_xxx->u.raw = (unsigned long) xxx->mask;

			shift_yyy->type = OPER_RAW;
			shift_yyy->u.raw = (unsigned long) yyy->shift;
			mask_yyy->type = OPER_RAW;
			mask_yyy->u.raw = (unsigned long) yyy->mask;

			ol->oper[0] = xxx->op;
			ol->oper[1] = shift_xxx; 
			ol->oper[2] = mask_xxx;
			ol->oper[3] = yyy->op;
			ol->oper[4] = shift_yyy;
			ol->oper[5] = mask_yyy;
			ol->oper[6] = store_oper_sanity(yyvsp[0]);
			free(xxx);
			free(yyy);
			yyval = ol;
		  }
#line 4527 "parser.c"
    break;

  case 225: /* operand_shift_mask: imm  */
#line 1947 "parser.y"
                              {
			struct operand_shift_mask *oper = xmalloc(sizeof(struct operand_shift_mask));
			struct operand *oper_imm = xmalloc(sizeof(struct operand));
			oper_imm->type = OPER_IMM;
			oper_imm->u.imm = yyvsp[0];
			oper->op = oper_imm;
			oper->mask = 0xFFFF;
			oper->shift = 0;
			yyval = oper;
		  }
#line 4542 "parser.c"
    break;

  case 226: /* operand_shift_mask: operand_wwo_shift  */
#line 1957 "parser.y"
                                    {
			struct operand_shift_mask *oper = yyvsp[0];
			oper->mask = 0xFFFF;
			yyval = oper;
		  }
#line 4552 "parser.c"
    break;

  case 227: /* operand_shift_mask: operand_wwo_shift BITW_AND imm  */
#line 1962 "parser.y"
                                                 {
			struct operand_shift_mask *oper = yyvsp[-2];
			struct immediate *mask_imm = yyvsp[0];
			oper->mask = mask_imm->imm;
			free(mask_imm);
			yyval = oper;
		  }
#line 4564 "parser.c"
    break;

  case 228: /* operand_wwo_shift: operandh  */
#line 1971 "parser.y"
                                   {
			struct operand_shift_mask *oper = xmalloc(sizeof(struct operand_shift_mask));
			oper->op = yyvsp[0];
			oper->shift = 0;
			yyval = oper;
		  }
#line 4575 "parser.c"
    break;

  case 229: /* operand_wwo_shift: PAREN_OPEN operandh LEFTSHIFT imm PAREN_CLOSE  */
#line 1977 "parser.y"
                                                                {
			struct operand_shift_mask *oper = xmalloc(sizeof(struct operand_shift_mask));
			struct immediate *shift_imm = yyvsp[-1];
			oper->op = yyvsp[-3];
			oper->shift = shift_imm->imm;
			free(shift_imm);
			yyval = oper;
		  }
#line 4588 "parser.c"
    break;

  case 230: /* operandh: reg  */
#line 1987 "parser.y"
                      {
			struct operand *oper = xmalloc(sizeof(struct operand));
			oper->type = OPER_REG;
			oper->u.reg = yyvsp[0];
			yyval = oper;
		  }
#line 4599 "parser.c"
    break;

  case 231: /* operandh: mem  */
#line 1993 "parser.y"
                      {
			struct operand *oper = xmalloc(sizeof(struct operand));
			oper->type = OPER_MEM;
			oper->u.mem = yyvsp[0];
			yyval = oper;
		  }
#line 4610 "parser.c"
    break;

  case 232: /* operand: reg  */
#line 2001 "parser.y"
                      {
			struct operand *oper = xmalloc(sizeof(struct operand));
			oper->type = OPER_REG;
			oper->u.reg = yyvsp[0];
			yyval = oper;
		  }
#line 4621 "parser.c"
    break;

  case 233: /* operand: mem  */
#line 2007 "parser.y"
                      {
			struct operand *oper = xmalloc(sizeof(struct operand));
			oper->type = OPER_MEM;
			oper->u.mem = yyvsp[0];
			yyval = oper;
		  }
#line 4632 "parser.c"
    break;

  case 234: /* operand: raw_code  */
#line 2013 "parser.y"
                           {
			struct operand *oper = xmalloc(sizeof(struct operand));
			oper->type = OPER_RAW;
			oper->u.raw = (unsigned long)yyvsp[0];
			yyval = oper;
		  }
#line 4643 "parser.c"
    break;

  case 235: /* operand: imm  */
#line 2019 "parser.y"
                      {
			struct operand *oper = xmalloc(sizeof(struct operand));
			oper->type = OPER_IMM;
			oper->u.imm = yyvsp[0];
			yyval = oper;
		  }
#line 4654 "parser.c"
    break;

  case 236: /* operand: labelref  */
#line 2025 "parser.y"
                           {
			yyval = yyvsp[0];
		  }
#line 4662 "parser.c"
    break;

  case 237: /* reg: GPR regnr  */
#line 2030 "parser.y"
                            {
			struct registr *reg = xmalloc(sizeof(struct registr));
			reg->type = GPR;
			reg->nr = (unsigned long)yyvsp[0];
			yyval = reg;
		  }
#line 4673 "parser.c"
    break;

  case 238: /* reg: SPR  */
#line 2036 "parser.y"
                      {
			struct registr *reg = xmalloc(sizeof(struct registr));
			reg->type = SPR;
			yytext += 3; /* skip "spr" */
			reg->nr = strtoul(yytext, NULL, 16);
			yyval = reg;
		  }
#line 4685 "parser.c"
    break;

  case 239: /* reg: OFFR regnr  */
#line 2043 "parser.y"
                             {
			struct registr *reg = xmalloc(sizeof(struct registr));
			reg->type = OFFR;
			reg->nr = (unsigned long)yyvsp[0];
			yyval = reg;
		  }
#line 4696 "parser.c"
    break;

  case 240: /* mem: BRACK_OPEN imm BRACK_CLOSE  */
#line 2051 "parser.y"
                                             {
			struct memory *mem = xmalloc(sizeof(struct memory));
			struct immediate *offset_imm = yyvsp[-1];
			mem->type = MEM_DIRECT;
			mem->offset = offset_imm->imm;
			free(offset_imm);
			yyval = mem;
		  }
#line 4709 "parser.c"
    break;

  case 241: /* mem: BRACK_OPEN imm COMMA OFFR regnr BRACK_CLOSE  */
#line 2059 "parser.y"
                                                              {
			struct memory *mem = xmalloc(sizeof(struct memory));
			struct immediate *offset_imm = yyvsp[-4];
			mem->type = MEM_INDIRECT;
			mem->offset = offset_imm->imm;
			free(offset_imm);
			mem->offr_nr = (unsigned long)yyvsp[-1];
			yyval = mem;
		  }
#line 4723 "parser.c"
    break;

  case 242: /* imm: imm_value  */
#line 2070 "parser.y"
                            {
			struct immediate *imm = xmalloc(sizeof(struct immediate));
			imm->imm = (unsigned long)yyvsp[0];
			yyval = imm;
		  }
#line 4733 "parser.c"
    break;

  case 243: /* imm_value: hexnum_decnum  */
#line 2077 "parser.y"
                                {
			yyval = yyvsp[0];
		  }
#line 4741 "parser.c"
    break;

  case 244: /* imm_value: hexnum_decnum imm_oper imm_value  */
#line 2080 "parser.y"
                                                   {
			unsigned long a = (unsigned long)yyvsp[-2];
			unsigned long b = (unsigned long)yyvsp[0];
			unsigned long operation = (unsigned long)yyvsp[-1];
			unsigned long res = 31337;
			switch (operation) {
			case PLUS:
				res = a + b;
				break;
			case MINUS:
				res = a - b;
				break;
			case MULTIPLY:
				res = a * b;
				break;
			case DIVIDE:
				res = a / b;
				break;
			case BITW_OR:
				res = a | b;
				break;
			case BITW_AND:
				res = a & b;
				break;
			case BITW_XOR:
				res = a ^ b;
				break;
			case LEFTSHIFT:
				res = a << b;
				break;
			case RIGHTSHIFT:
				res = a >> b;
				break;
			default:
				yyerror("Internal parser BUG. imm oper unknown");
			}
			yyval = (void *)res;
		  }
#line 4784 "parser.c"
    break;

  case 245: /* imm_value: PAREN_OPEN imm_value PAREN_CLOSE  */
#line 2118 "parser.y"
                                                   {
			yyval = yyvsp[-1];
		  }
#line 4792 "parser.c"
    break;

  case 246: /* imm_value: PAREN_OPEN imm_value PAREN_CLOSE imm_oper imm_value  */
#line 2121 "parser.y"
                                                                      {
			unsigned long a = (unsigned long)yyvsp[-3];
			unsigned long b = (unsigned long)yyvsp[0];
			unsigned long operation = (unsigned long)yyvsp[-1];
			unsigned long res = 31337;
			switch (operation) {
			case PLUS:
				res = a + b;
				break;
			case MINUS:
				res = a - b;
				break;
			case MULTIPLY:
				res = a * b;
				break;
			case DIVIDE:
				res = a / b;
				break;
			case BITW_OR:
				res = a | b;
				break;
			case BITW_AND:
				res = a & b;
				break;
			case BITW_XOR:
				res = a ^ b;
				break;
			case LEFTSHIFT:
				res = a << b;
				break;
			case RIGHTSHIFT:
				res = a >> b;
				break;
			default:
				yyerror("Internal parser BUG. complex_imm oper unknown");
			}
			yyval = (void *)res;
		  }
#line 4835 "parser.c"
    break;

  case 247: /* imm_value: BITW_NOT imm_value  */
#line 2159 "parser.y"
                                     {
			unsigned long n = (unsigned long)yyvsp[0];
			n = ~n;
			yyval = (void *)n;
		  }
#line 4845 "parser.c"
    break;

  case 248: /* imm_value: asm_assert  */
#line 2164 "parser.y"
                             {
			// Inline assertion. Always return zero
			yyval = (void *)(unsigned long)(unsigned int)0;
		  }
#line 4854 "parser.c"
    break;

  case 249: /* imm_oper: PLUS  */
#line 2170 "parser.y"
                {
			yyval = (void *)(unsigned long)PLUS;
		  }
#line 4862 "parser.c"
    break;

  case 250: /* imm_oper: MINUS  */
#line 2173 "parser.y"
                        {
			yyval = (void *)(unsigned long)MINUS;
		  }
#line 4870 "parser.c"
    break;

  case 251: /* imm_oper: MULTIPLY  */
#line 2176 "parser.y"
                           {
			yyval = (void *)(unsigned long)MULTIPLY;
		  }
#line 4878 "parser.c"
    break;

  case 252: /* imm_oper: DIVIDE  */
#line 2179 "parser.y"
                         {
			yyval = (void *)(unsigned long)DIVIDE;
		  }
#line 4886 "parser.c"
    break;

  case 253: /* imm_oper: BITW_OR  */
#line 2182 "parser.y"
                          {
			yyval = (void *)(unsigned long)BITW_OR;
		  }
#line 4894 "parser.c"
    break;

  case 254: /* imm_oper: BITW_AND  */
#line 2185 "parser.y"
                           {
			yyval = (void *)(unsigned long)BITW_AND;
		  }
#line 4902 "parser.c"
    break;

  case 255: /* imm_oper: BITW_XOR  */
#line 2188 "parser.y"
                           {
			yyval = (void *)(unsigned long)BITW_XOR;
		  }
#line 4910 "parser.c"
    break;

  case 256: /* imm_oper: LEFTSHIFT  */
#line 2191 "parser.y"
                            {
			yyval = (void *)(unsigned long)LEFTSHIFT;
		  }
#line 4918 "parser.c"
    break;

  case 257: /* imm_oper: RIGHTSHIFT  */
#line 2194 "parser.y"
                             {
			yyval = (void *)(unsigned long)RIGHTSHIFT;
		  }
#line 4926 "parser.c"
    break;

  case 258: /* hexnum: HEXNUM  */
#line 2199 "parser.y"
                         {
			while (yytext[0] != 'x') {
				if (yytext[0] == '\0')
					yyerror("Internal HEXNUM parser error");
				yytext++;
			}
			yytext++;
			yyval = (void *)(unsigned long)strtoul(yytext, NULL, 16);
		  }
#line 4940 "parser.c"
    break;

  case 259: /* decnum: DECNUM  */
#line 2210 "parser.y"
                         {
			yyval = (void *)(unsigned long)strtol(yytext, NULL, 10);
		  }
#line 4948 "parser.c"
    break;

  case 260: /* hexnum_decnum: hexnum  */
#line 2215 "parser.y"
                         {
			yyval = yyvsp[0];
		  }
#line 4956 "parser.c"
    break;

  case 261: /* hexnum_decnum: decnum  */
#line 2218 "parser.y"
                         {
			yyval = yyvsp[0];
		  }
#line 4964 "parser.c"
    break;

  case 262: /* labelref: identifier  */
#line 2223 "parser.y"
                             {
			struct operand *oper = xmalloc(sizeof(struct operand));
			struct label *label = xmalloc(sizeof(struct label));
			label->name = yyvsp[0];
			label->direction = LABELREF_ABSOLUTE;
			oper->type = OPER_LABEL;
			oper->u.label = label;
			yyval = oper;
		  }
#line 4978 "parser.c"
    break;

  case 263: /* labelref: identifier MINUS  */
#line 2232 "parser.y"
                                   {
			struct operand *oper = xmalloc(sizeof(struct operand));
			struct label *label = xmalloc(sizeof(struct label));
			label->name = yyvsp[-1];
			label->direction = LABELREF_RELATIVE_BACK;
			oper->type = OPER_LABEL;
			oper->u.label = label;
			yyval = oper;
		  }
#line 4992 "parser.c"
    break;

  case 264: /* labelref: identifier PLUS  */
#line 2241 "parser.y"
                                  {
			struct operand *oper = xmalloc(sizeof(struct operand));
			struct label *label = xmalloc(sizeof(struct label));
			label->name = yyvsp[-1];
			label->direction = LABELREF_RELATIVE_FORWARD;
			oper->type = OPER_LABEL;
			oper->u.label = label;
			yyval = oper;
		  }
#line 5006 "parser.c"
    break;

  case 265: /* regnr: DECNUM  */
#line 2252 "parser.y"
                         {
			yyval = (void *)(unsigned long)strtoul(yytext, NULL, 10);
		  }
#line 5014 "parser.c"
    break;

  case 266: /* identifier: IDENT  */
#line 2257 "parser.y"
                        {
			yyval = xstrdup(yytext);
		  }
#line 5022 "parser.c"
    break;


#line 5026 "parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 2262 "parser.y"


int section = SECTION_TEXT; /* default to .text section */
struct initvals_sect *cur_initvals_sect;

void yyerror(char *str)
{
	unsigned int i;

	fprintf(stderr,
		"Parser ERROR (file \"%s\", line %u, col %u):\n",
		cur_lineinfo.file,
		cur_lineinfo.lineno,
		cur_lineinfo.column);
	fprintf(stderr, "%s\n", cur_lineinfo.linecopy);
	for (i = 0; i < cur_lineinfo.column - 1; i++)
		fprintf(stderr, " ");
	fprintf(stderr, "^\n");
	fprintf(stderr, "%s\n", str);
	exit(1);
}

static struct operand * store_oper_sanity(struct operand *oper)
{
	if (oper->type == OPER_IMM &&
	    oper->u.imm->imm != 0) {
		yyerror("Only 0x000 Immediate is allowed for "
			"Output operands");
	}
	return oper;
}

static void assembler_assertion_failed(void)
{
	yyerror("Assembler %assert failed");
}
