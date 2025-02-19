/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SECTION_TEXT = 258,            /* SECTION_TEXT  */
    SECTION_IVALS = 259,           /* SECTION_IVALS  */
    ASM_ARCH = 260,                /* ASM_ARCH  */
    ASM_START = 261,               /* ASM_START  */
    ASM_ASSERT = 262,              /* ASM_ASSERT  */
    SPR = 263,                     /* SPR  */
    GPR = 264,                     /* GPR  */
    OFFR = 265,                    /* OFFR  */
    LR = 266,                      /* LR  */
    COMMA = 267,                   /* COMMA  */
    SEMICOLON = 268,               /* SEMICOLON  */
    BRACK_OPEN = 269,              /* BRACK_OPEN  */
    BRACK_CLOSE = 270,             /* BRACK_CLOSE  */
    PAREN_OPEN = 271,              /* PAREN_OPEN  */
    PAREN_CLOSE = 272,             /* PAREN_CLOSE  */
    HEXNUM = 273,                  /* HEXNUM  */
    DECNUM = 274,                  /* DECNUM  */
    ARCH_NEWWORLD = 275,           /* ARCH_NEWWORLD  */
    ARCH_OLDWORLD = 276,           /* ARCH_OLDWORLD  */
    LABEL = 277,                   /* LABEL  */
    IDENT = 278,                   /* IDENT  */
    LABELREF = 279,                /* LABELREF  */
    EQUAL = 280,                   /* EQUAL  */
    NOT_EQUAL = 281,               /* NOT_EQUAL  */
    LOGICAL_OR = 282,              /* LOGICAL_OR  */
    LOGICAL_AND = 283,             /* LOGICAL_AND  */
    PLUS = 284,                    /* PLUS  */
    MINUS = 285,                   /* MINUS  */
    MULTIPLY = 286,                /* MULTIPLY  */
    DIVIDE = 287,                  /* DIVIDE  */
    BITW_OR = 288,                 /* BITW_OR  */
    BITW_AND = 289,                /* BITW_AND  */
    BITW_XOR = 290,                /* BITW_XOR  */
    BITW_NOT = 291,                /* BITW_NOT  */
    LEFTSHIFT = 292,               /* LEFTSHIFT  */
    RIGHTSHIFT = 293,              /* RIGHTSHIFT  */
    OP_MUL = 294,                  /* OP_MUL  */
    OP_ADD = 295,                  /* OP_ADD  */
    OP_ADDSC = 296,                /* OP_ADDSC  */
    OP_ADDC = 297,                 /* OP_ADDC  */
    OP_ADDSCC = 298,               /* OP_ADDSCC  */
    OP_XADD = 299,                 /* OP_XADD  */
    OP_XADDSC = 300,               /* OP_XADDSC  */
    OP_XADDC = 301,                /* OP_XADDC  */
    OP_XADDSCC = 302,              /* OP_XADDSCC  */
    OP_SUB = 303,                  /* OP_SUB  */
    OP_SUBSC = 304,                /* OP_SUBSC  */
    OP_SUBC = 305,                 /* OP_SUBC  */
    OP_SUBSCC = 306,               /* OP_SUBSCC  */
    OP_XSUB = 307,                 /* OP_XSUB  */
    OP_XSUBSC = 308,               /* OP_XSUBSC  */
    OP_XSUBC = 309,                /* OP_XSUBC  */
    OP_XSUBSCC = 310,              /* OP_XSUBSCC  */
    OP_SRA = 311,                  /* OP_SRA  */
    OP_OR = 312,                   /* OP_OR  */
    OP_AND = 313,                  /* OP_AND  */
    OP_XOR = 314,                  /* OP_XOR  */
    OP_SR = 315,                   /* OP_SR  */
    OP_SRX = 316,                  /* OP_SRX  */
    OP_SRXH = 317,                 /* OP_SRXH  */
    OP_SL = 318,                   /* OP_SL  */
    OP_RL = 319,                   /* OP_RL  */
    OP_RR = 320,                   /* OP_RR  */
    OP_NAND = 321,                 /* OP_NAND  */
    OP_ORX = 322,                  /* OP_ORX  */
    OP_ORXH = 323,                 /* OP_ORXH  */
    OP_MOV = 324,                  /* OP_MOV  */
    OP_JMP = 325,                  /* OP_JMP  */
    OP_JAND = 326,                 /* OP_JAND  */
    OP_JNAND = 327,                /* OP_JNAND  */
    OP_JS = 328,                   /* OP_JS  */
    OP_JNS = 329,                  /* OP_JNS  */
    OP_JE = 330,                   /* OP_JE  */
    OP_JNE = 331,                  /* OP_JNE  */
    OP_JLS = 332,                  /* OP_JLS  */
    OP_JGES = 333,                 /* OP_JGES  */
    OP_JGS = 334,                  /* OP_JGS  */
    OP_JLES = 335,                 /* OP_JLES  */
    OP_JL = 336,                   /* OP_JL  */
    OP_JGE = 337,                  /* OP_JGE  */
    OP_JG = 338,                   /* OP_JG  */
    OP_JLE = 339,                  /* OP_JLE  */
    OP_JZX = 340,                  /* OP_JZX  */
    OP_JZXH = 341,                 /* OP_JZXH  */
    OP_JNZX = 342,                 /* OP_JNZX  */
    OP_JNZXH = 343,                /* OP_JNZXH  */
    OP_JEXT = 344,                 /* OP_JEXT  */
    OP_JNEXT = 345,                /* OP_JNEXT  */
    OP_JDN = 346,                  /* OP_JDN  */
    OP_JDPZ = 347,                 /* OP_JDPZ  */
    OP_JDP = 348,                  /* OP_JDP  */
    OP_JDNZ = 349,                 /* OP_JDNZ  */
    OP_JBOH = 350,                 /* OP_JBOH  */
    OP_JNBOH = 351,                /* OP_JNBOH  */
    OP_JBOH2 = 352,                /* OP_JBOH2  */
    OP_JNBOH2 = 353,               /* OP_JNBOH2  */
    OP_XJE = 354,                  /* OP_XJE  */
    OP_XJNE = 355,                 /* OP_XJNE  */
    OP_XJLS = 356,                 /* OP_XJLS  */
    OP_XJGES = 357,                /* OP_XJGES  */
    OP_XJGS = 358,                 /* OP_XJGS  */
    OP_XJLES = 359,                /* OP_XJLES  */
    OP_XJDN = 360,                 /* OP_XJDN  */
    OP_XJDPZ = 361,                /* OP_XJDPZ  */
    OP_XJDP = 362,                 /* OP_XJDP  */
    OP_XJDNZ = 363,                /* OP_XJDNZ  */
    OP_XJL = 364,                  /* OP_XJL  */
    OP_XJGE = 365,                 /* OP_XJGE  */
    OP_XJG = 366,                  /* OP_XJG  */
    OP_XJLE = 367,                 /* OP_XJLE  */
    OP_JMAH = 368,                 /* OP_JMAH  */
    OP_JNMAH = 369,                /* OP_JNMAH  */
    OP_CALL = 370,                 /* OP_CALL  */
    OP_CALLS = 371,                /* OP_CALLS  */
    OP_RET = 372,                  /* OP_RET  */
    OP_RETS = 373,                 /* OP_RETS  */
    OP_RETS2 = 374,                /* OP_RETS2  */
    OP_TKIPH = 375,                /* OP_TKIPH  */
    OP_TKIPHS = 376,               /* OP_TKIPHS  */
    OP_TKIPL = 377,                /* OP_TKIPL  */
    OP_TKIPLS = 378,               /* OP_TKIPLS  */
    OP_NAP = 379,                  /* OP_NAP  */
    OP_NAP2 = 380,                 /* OP_NAP2  */
    OP_NAPV = 381,                 /* OP_NAPV  */
    RAW_CODE = 382,                /* RAW_CODE  */
    IVAL_MMIO16 = 383,             /* IVAL_MMIO16  */
    IVAL_MMIO32 = 384,             /* IVAL_MMIO32  */
    IVAL_PHY = 385,                /* IVAL_PHY  */
    IVAL_RADIO = 386,              /* IVAL_RADIO  */
    IVAL_SHM16 = 387,              /* IVAL_SHM16  */
    IVAL_SHM32 = 388,              /* IVAL_SHM32  */
    IVAL_TRAM = 389                /* IVAL_TRAM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_H_INCLUDED  */
