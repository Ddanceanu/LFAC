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

#ifndef YY_YY_LIMBAJ1_TAB_H_INCLUDED
# define YY_YY_LIMBAJ1_TAB_H_INCLUDED
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
    ID = 258,                      /* ID  */
    INT = 259,                     /* INT  */
    FLOAT = 260,                   /* FLOAT  */
    STR = 261,                     /* STR  */
    STRING = 262,                  /* STRING  */
    CHARACTER = 263,               /* CHARACTER  */
    VAL = 264,                     /* VAL  */
    CHAR = 265,                    /* CHAR  */
    MAIN = 266,                    /* MAIN  */
    FLOAT_VAL = 267,               /* FLOAT_VAL  */
    BOOL_VAL = 268,                /* BOOL_VAL  */
    BOOL = 269,                    /* BOOL  */
    CONST = 270,                   /* CONST  */
    VOID = 271,                    /* VOID  */
    RETURN = 272,                  /* RETURN  */
    START = 273,                   /* START  */
    END = 274,                     /* END  */
    EVAL = 275,                    /* EVAL  */
    TYPEOF = 276,                  /* TYPEOF  */
    IF = 277,                      /* IF  */
    ELSE = 278,                    /* ELSE  */
    FOR = 279,                     /* FOR  */
    WHILE = 280,                   /* WHILE  */
    FUNCTION = 281,                /* FUNCTION  */
    CLASS = 282,                   /* CLASS  */
    ASSIGN = 283,                  /* ASSIGN  */
    LT = 284,                      /* LT  */
    GT = 285,                      /* GT  */
    LE = 286,                      /* LE  */
    GE = 287,                      /* GE  */
    EQ = 288,                      /* EQ  */
    NE = 289,                      /* NE  */
    ADD = 290,                     /* ADD  */
    SUB = 291,                     /* SUB  */
    MUL = 292,                     /* MUL  */
    DIV = 293,                     /* DIV  */
    AND = 294,                     /* AND  */
    OR = 295,                      /* OR  */
    INC = 296,                     /* INC  */
    DEC = 297                      /* DEC  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 109 "limbaj1.y"

    int intval;       // pentru tokenii care returnează valori întregi
    float floatval;   // pentru tokenii care returnează valori reale
    char* strval;     // pentru tokenii care returnează șiruri de caractere
    char charval;

#line 113 "limbaj1.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_LIMBAJ1_TAB_H_INCLUDED  */
