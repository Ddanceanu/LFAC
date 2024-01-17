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
#line 1 "limbaj1.y"

#include <iostream>
#include <vector>
#include <iomanip>
#include <cstring>
#include <fstream>
#include "symbol_table.cpp"

using namespace std;

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
void yyerror(const char* s);
extern int yylex();

int count=0;
int valid = 1;

char nume[40];
char tip[40];
char val[40];
char locatie[40];
void adaugare(char c)
{
    if(c=='V')
    {
        symbol_table[count].nume=strdup(nume);
        symbol_table[count].info=strdup("Variabila");
        symbol_table[count].tip=strdup(tip);
        symbol_table[count].valoare=strdup(val);
        symbol_table[count].locatie=strdup(locatie);
        count++;
    }
    else if(c=='F')
    {
        symbol_table[count].nume=strdup(nume);
        symbol_table[count].info=strdup("Functie");
        symbol_table[count].tip=strdup(tip);
        symbol_table[count].valoare=strdup("-");
        symbol_table[count].locatie=strdup(locatie);
        count++;
    }
}

// struct arrayInfo {
//         char type[15];
//         int size;
//         char name[20];
//         vector <int> values;
//     } arraytype;

// void adaugare_sir(char* name, int size)
// {
//     arrayInfo array;
//     strcpy(array.name,name);
//     strcpy(array.type,"int");
//     array.size=size;
//     array.values.resize(size);
//     arraytype.push_back(array);
// }

// int getArrayElement(char* name, int index)
// {
//     for(auto& array : arraytype)
//         if (strcmp(array.name, name) == 0)
//             return array.values[index];
//     return -1;
// }

// void setArrayElement(char* name, int index, int value)
// {
//     for (auto& array: arraytype)
//         if (strcmp(array.name, name) == 0)
//             array.values[index] = value;
//             return;
// }


char* TypeOf(char* arg)
{
    int OK = 0;
    for(int i=0;i<count;i++)
    {
        if(strcmp(symbol_table[i].nume,arg)==0)
        {
            // printf("%s\n",symbol_table[i].tip);
            // OK = 1;
            return symbol_table[i].tip;
        }
    }
    //if(OK == 0)printf("%s was not declared\n", arg);
    return nullptr;
}

void Eval(char* arg)
{
    for(int i=0;i<count;i++)
    {
        if(strcmp(symbol_table[i].nume,arg)==0)
        {
        }
    }
}


#line 178 "limbaj1.tab.c"

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

#include "limbaj1.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_STR = 6,                        /* STR  */
  YYSYMBOL_STRING = 7,                     /* STRING  */
  YYSYMBOL_CHARACTER = 8,                  /* CHARACTER  */
  YYSYMBOL_VAL = 9,                        /* VAL  */
  YYSYMBOL_CHAR = 10,                      /* CHAR  */
  YYSYMBOL_MAIN = 11,                      /* MAIN  */
  YYSYMBOL_FLOAT_VAL = 12,                 /* FLOAT_VAL  */
  YYSYMBOL_BOOL_VAL = 13,                  /* BOOL_VAL  */
  YYSYMBOL_BOOL = 14,                      /* BOOL  */
  YYSYMBOL_CONST = 15,                     /* CONST  */
  YYSYMBOL_VOID = 16,                      /* VOID  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_START = 18,                     /* START  */
  YYSYMBOL_END = 19,                       /* END  */
  YYSYMBOL_EVAL = 20,                      /* EVAL  */
  YYSYMBOL_TYPEOF = 21,                    /* TYPEOF  */
  YYSYMBOL_IF = 22,                        /* IF  */
  YYSYMBOL_ELSE = 23,                      /* ELSE  */
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_FUNCTION = 26,                  /* FUNCTION  */
  YYSYMBOL_CLASS = 27,                     /* CLASS  */
  YYSYMBOL_ASSIGN = 28,                    /* ASSIGN  */
  YYSYMBOL_LT = 29,                        /* LT  */
  YYSYMBOL_GT = 30,                        /* GT  */
  YYSYMBOL_LE = 31,                        /* LE  */
  YYSYMBOL_GE = 32,                        /* GE  */
  YYSYMBOL_EQ = 33,                        /* EQ  */
  YYSYMBOL_NE = 34,                        /* NE  */
  YYSYMBOL_ADD = 35,                       /* ADD  */
  YYSYMBOL_SUB = 36,                       /* SUB  */
  YYSYMBOL_MUL = 37,                       /* MUL  */
  YYSYMBOL_DIV = 38,                       /* DIV  */
  YYSYMBOL_AND = 39,                       /* AND  */
  YYSYMBOL_OR = 40,                        /* OR  */
  YYSYMBOL_INC = 41,                       /* INC  */
  YYSYMBOL_DEC = 42,                       /* DEC  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* '{'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
  YYSYMBOL_47_ = 47,                       /* ';'  */
  YYSYMBOL_48_ = 48,                       /* '['  */
  YYSYMBOL_49_ = 49,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_program = 51,                   /* program  */
  YYSYMBOL_main = 52,                      /* main  */
  YYSYMBOL_cfv = 53,                       /* cfv  */
  YYSYMBOL_var_glob = 54,                  /* var_glob  */
  YYSYMBOL_type = 55,                      /* type  */
  YYSYMBOL_array = 56,                     /* array  */
  YYSYMBOL_bloc_instr = 57,                /* bloc_instr  */
  YYSYMBOL_58_1 = 58,                      /* $@1  */
  YYSYMBOL_59_2 = 59,                      /* $@2  */
  YYSYMBOL_if = 60,                        /* if  */
  YYSYMBOL_while = 61,                     /* while  */
  YYSYMBOL_for = 62,                       /* for  */
  YYSYMBOL_arg1 = 63,                      /* arg1  */
  YYSYMBOL_arg2 = 64,                      /* arg2  */
  YYSYMBOL_arg3 = 65,                      /* arg3  */
  YYSYMBOL_conditie = 66,                  /* conditie  */
  YYSYMBOL_value = 67,                     /* value  */
  YYSYMBOL_comparatie = 68,                /* comparatie  */
  YYSYMBOL_expr = 69,                      /* expr  */
  YYSYMBOL_afirmatie = 70                  /* afirmatie  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   146

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  137

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      43,    44,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    47,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   133,   133,   136,   139,   143,   146,   147,   148,   149,
     152,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   175,   176,   176,   179,   180,   183,   185,   187,
     194,   197,   199,   200,   201,   202,   205,   208,   209,   210,
     214,   215,   216,   217,   218,   219,   222,   223,   253,   283,
     314,   346,   354,   359,   364,   372,   377,   382,   388,   394,
     395,   396,   397
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INT", "FLOAT",
  "STR", "STRING", "CHARACTER", "VAL", "CHAR", "MAIN", "FLOAT_VAL",
  "BOOL_VAL", "BOOL", "CONST", "VOID", "RETURN", "START", "END", "EVAL",
  "TYPEOF", "IF", "ELSE", "FOR", "WHILE", "FUNCTION", "CLASS", "ASSIGN",
  "LT", "GT", "LE", "GE", "EQ", "NE", "ADD", "SUB", "MUL", "DIV", "AND",
  "OR", "INC", "DEC", "'('", "')'", "'{'", "'}'", "';'", "'['", "']'",
  "$accept", "program", "main", "cfv", "var_glob", "type", "array",
  "bloc_instr", "$@1", "$@2", "if", "while", "for", "arg1", "arg2", "arg3",
  "conditie", "value", "comparatie", "expr", "afirmatie", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-59)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-21)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      18,   -59,   -59,     9,    25,    18,   -15,    31,   -59,   -59,
     -59,   -59,    68,   -59,     8,    -5,    34,     1,   -59,   -59,
     -59,   -59,    42,     6,    27,    83,    85,    86,    47,    48,
      49,    50,    51,    92,    94,    97,   -59,    55,     6,     6,
       6,   -59,    56,    34,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,    34,    74,    76,    77,   103,   104,    34,    14,
      34,   -59,   -59,   -24,   -59,   -59,   -59,   -59,     6,   -59,
      28,    28,   101,   102,    96,    67,    69,    70,    41,    84,
     112,    71,    72,    34,   108,   -59,    34,    34,    34,    34,
     -59,   -59,   -59,    73,    75,    78,    34,    34,    91,    34,
      79,   -59,    80,    16,    16,   -59,   -59,    81,    82,     6,
     -59,   -59,    34,    87,   -59,     6,   -59,     6,     6,    89,
     -59,    -2,    90,   -59,   -59,    98,    36,    88,   -59,    93,
      95,     6,     6,    99,   100,   -59,   -59
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     6,     7,     0,     0,     0,     0,     0,     8,     9,
       1,     2,     0,     4,     0,     0,     0,     0,    39,    37,
      38,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,     0,    11,    12,
      13,    62,     0,     0,    40,    41,    42,    43,    44,    45,
      32,    33,     0,    56,    55,    58,     0,     0,     0,     0,
       0,    34,    35,    54,     3,    15,    16,    17,    14,    46,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
      53,    52,    57,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,    47,    48,    49,    50,    23,    21,     0,
      36,    30,     0,     0,    31,     0,    10,     0,     0,     0,
      29,     0,     0,    24,    22,    25,     0,     0,    27,     0,
       0,     0,     0,     0,     0,    26,    28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -59,   -59,   -59,   -59,   -59,     3,   -59,   -33,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,     4,   -58,   -16,    52,   -37,
     -59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,    11,     5,     6,    35,    36,    37,   118,   117,
      38,    39,    40,    81,   113,    41,    77,    69,    52,    70,
      42
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,   126,    82,     7,    83,    65,    66,    67,    12,    24,
       1,     2,    25,     8,     9,    71,    26,    79,     1,     2,
      27,     3,     1,     2,    84,    10,    28,    29,    30,     3,
      31,    32,    13,     3,    14,    85,    16,    18,    17,    33,
      34,   114,    78,    19,    78,    22,    20,    33,    34,   103,
     104,   105,   106,    88,    89,    43,    44,    45,    46,    47,
      48,    49,    80,    86,    87,    88,    89,   101,    50,    51,
      44,    45,    46,    47,    48,    49,   119,    50,    51,    15,
     110,   111,   122,    78,   123,   124,    53,    23,    54,    55,
      56,    57,    58,    59,    60,    61,   120,    62,   133,   134,
      63,    64,    72,    68,    73,    74,    75,    76,    90,    92,
      91,    93,    97,    94,    95,    98,   100,   102,    99,   112,
     107,   129,   108,   109,   115,   127,     0,   -20,   -19,   116,
      96,     0,   130,     0,   121,   125,   128,     0,   131,     0,
     132,     0,     0,     0,     0,   135,   136
};

static const yytype_int16 yycheck[] =
{
      16,     3,    60,     0,    28,    38,    39,    40,     5,     3,
       4,     5,     6,     4,     5,    52,    10,     3,     4,     5,
      14,    15,     4,     5,    48,     0,    20,    21,    22,    15,
      24,    25,    47,    15,     3,    68,    28,     3,    43,    41,
      42,    99,    58,     9,    60,    44,    12,    41,    42,    86,
      87,    88,    89,    37,    38,    28,    29,    30,    31,    32,
      33,    34,    59,    35,    36,    37,    38,    83,    41,    42,
      29,    30,    31,    32,    33,    34,   109,    41,    42,    11,
      96,    97,   115,    99,   117,   118,     3,    45,     3,     3,
      43,    43,    43,    43,    43,     3,   112,     3,   131,   132,
       3,    46,    28,    47,    28,    28,     3,     3,     7,    13,
       8,    44,    28,    44,    44,     3,    44,     9,    47,    28,
      47,    23,    47,    45,    45,   121,    -1,    46,    46,    49,
      78,    -1,    44,    -1,    47,    46,    46,    -1,    45,    -1,
      45,    -1,    -1,    -1,    -1,    46,    46
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,    15,    51,    53,    54,    55,     4,     5,
       0,    52,    55,    47,     3,    11,    28,    43,     3,     9,
      12,    67,    44,    45,     3,     6,    10,    14,    20,    21,
      22,    24,    25,    41,    42,    55,    56,    57,    60,    61,
      62,    65,    70,    28,    29,    30,    31,    32,    33,    34,
      41,    42,    68,     3,     3,     3,    43,    43,    43,    43,
      43,     3,     3,     3,    46,    57,    57,    57,    47,    67,
      69,    69,    28,    28,    28,     3,     3,    66,    67,     3,
      55,    63,    66,    28,    48,    57,    35,    36,    37,    38,
       7,     8,    13,    44,    44,    44,    68,    28,     3,    47,
      44,    67,     9,    69,    69,    69,    69,    47,    47,    45,
      67,    67,    28,    64,    66,    45,    49,    59,    58,    57,
      67,    47,    57,    57,    57,    46,     3,    65,    46,    23,
      44,    45,    45,    57,    57,    46,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    53,    54,    55,    55,    55,    55,
      56,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    58,    57,    59,    57,    60,    60,    61,    62,    63,
      63,    64,    65,    65,    65,    65,    66,    67,    67,    67,
      68,    68,    68,    68,    68,    68,    69,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     7,     2,     4,     1,     1,     2,     2,
       5,     1,     1,     1,     2,     2,     2,     2,     3,     5,
       5,     0,     7,     0,     7,     7,    11,     7,    11,     4,
       3,     1,     2,     2,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     4,     4,     4,     2,     2,     2,     4,     2,     1,
       3,     3,     1
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
  case 2: /* program: cfv main  */
#line 133 "limbaj1.y"
                  {if(valid == 1)printf("Programul este corect din punct de vedere sintactic!\n");}
#line 1321 "limbaj1.tab.c"
    break;

  case 3: /* main: type MAIN '(' ')' '{' bloc_instr '}'  */
#line 136 "limbaj1.y"
                                           {strcpy(locatie,"Global"); strcpy(nume,"main");adaugare('F');}
#line 1327 "limbaj1.tab.c"
    break;

  case 5: /* var_glob: type ID ASSIGN value  */
#line 143 "limbaj1.y"
                               {strcpy(val,yytext);strcpy(locatie,"Global"); strcpy(nume,(yyvsp[-2].strval));adaugare('V');}
#line 1333 "limbaj1.tab.c"
    break;

  case 6: /* type: INT  */
#line 146 "limbaj1.y"
          { strcpy(tip,"INT");}
#line 1339 "limbaj1.tab.c"
    break;

  case 7: /* type: FLOAT  */
#line 147 "limbaj1.y"
            { strcpy(tip,"FLOAT");}
#line 1345 "limbaj1.tab.c"
    break;

  case 8: /* type: CONST INT  */
#line 148 "limbaj1.y"
                { strcpy(tip,"CONST INT");}
#line 1351 "limbaj1.tab.c"
    break;

  case 9: /* type: CONST FLOAT  */
#line 149 "limbaj1.y"
                  { strcpy(tip,"CONST INT");}
#line 1357 "limbaj1.tab.c"
    break;

  case 10: /* array: type ID '[' VAL ']'  */
#line 152 "limbaj1.y"
                           {
            //  if (declarare_multipla($2, count) == true)printf("Declarare multipla\n"); 
            //  else 
            //     {
                    // arraytype.size=atoi(yytext);
                    strcpy(nume,yytext-4);
                    // adaugare_sir(nume, arraytype.size);
                    strcpy(locatie,"Local"); 
                    strcpy(val,"[...]");
                    adaugare('V');
            //     }
            }
#line 1374 "limbaj1.tab.c"
    break;

  case 19: /* bloc_instr: TYPEOF '(' ID ')' ';'  */
#line 173 "limbaj1.y"
                                  { TypeOf((yyvsp[-2].strval));}
#line 1380 "limbaj1.tab.c"
    break;

  case 20: /* bloc_instr: EVAL '(' ID ')' ';'  */
#line 174 "limbaj1.y"
                                { Eval((yyvsp[-2].strval));}
#line 1386 "limbaj1.tab.c"
    break;

  case 21: /* $@1: %empty  */
#line 175 "limbaj1.y"
                                  { TypeOf((yyvsp[-2].strval));}
#line 1392 "limbaj1.tab.c"
    break;

  case 23: /* $@2: %empty  */
#line 176 "limbaj1.y"
                                { Eval((yyvsp[-2].strval));}
#line 1398 "limbaj1.tab.c"
    break;

  case 29: /* arg1: type ID ASSIGN value  */
#line 188 "limbaj1.y"
    {   if (declarare_multipla((yyvsp[-2].strval), count) == true)printf("Declarare multipla\n"); 
        else 
        {
            strcpy(nume,yytext);strcpy(locatie,"Local"); adaugare('V');
        }
        }
#line 1409 "limbaj1.tab.c"
    break;

  case 37: /* value: VAL  */
#line 208 "limbaj1.y"
           {strcpy(val,yytext);}
#line 1415 "limbaj1.tab.c"
    break;

  case 38: /* value: FLOAT_VAL  */
#line 209 "limbaj1.y"
                 {strcpy(val,yytext);}
#line 1421 "limbaj1.tab.c"
    break;

  case 39: /* value: ID  */
#line 210 "limbaj1.y"
          {strcpy(val, yytext); }
#line 1427 "limbaj1.tab.c"
    break;

  case 47: /* expr: expr ADD expr  */
#line 224 "limbaj1.y"
    { 
    char* a = get_value((yyvsp[-2].strval), count);
    char* b = get_value((yyvsp[0].strval), count);
    char* a_type;
    char* b_type;
    a_type = TypeOf((yyvsp[-2].strval));
    b_type = TypeOf((yyvsp[0].strval));
    if ((strcmp(a_type, "CONST INT") == 0) || strcmp(b_type, "CONST INT") == 0)
        {
            printf("Este interzisa folosirea operatiilor cu constante.\n");
            valid = 0;
    }
    if ((strcmp(a_type, b_type) == 0))
        {
            int val_a = atoi(a);
            int val_b = atoi(b);
            int sum = val_a + val_b;
            char temp[40]; 
            sprintf(temp, "%d", sum);
            strcpy(val, temp);
            if(valid == 1)value_returned((yyvsp[-2].strval), count, val);
            // cout << "p: " << a << " " << a << endl;
            // cout << "\ntest: " << val << "\n";
        }
    else {
        printf("Adunarea intre doua tipuri diferite nu este permisa!\n");
        valid = 0;
        }
    }
#line 1461 "limbaj1.tab.c"
    break;

  case 48: /* expr: expr SUB expr  */
#line 254 "limbaj1.y"
    { 
    char* a = get_value((yyvsp[-2].strval), count);
    char* b = get_value((yyvsp[0].strval), count);
    char* a_type;
    char* b_type;
    a_type = TypeOf((yyvsp[-2].strval));
    b_type = TypeOf((yyvsp[0].strval));
    if ((strcmp(a_type, "CONST INT") == 0) || strcmp(b_type, "CONST INT") == 0)
    {
            printf("Este interzisa folosirea operatiilor cu constante.\n");
            valid = 0;
    }
    if (strcmp(a_type, b_type) == 0)
        {
            int val_a = atoi(a);
            int val_b = atoi(b);
            int sum = val_a - val_b;
            char temp[40]; 
            sprintf(temp, "%d", sum);
            strcpy(val, temp);
            if(valid == 1)value_returned((yyvsp[-2].strval), count, val);
            // cout << "p: " << a << " " << a << endl;
            // cout << "\ntest: " << val << "\n";
        }
    else {
        printf("Scaderea intre doua tipuri diferite nu este permisa!\n");
        valid = 0;
        }
    }
#line 1495 "limbaj1.tab.c"
    break;

  case 49: /* expr: expr MUL expr  */
#line 284 "limbaj1.y"
    { 
    char* a = get_value((yyvsp[-2].strval), count);
    char* b = get_value((yyvsp[0].strval), count);
    char* a_type;
    char* b_type;
    a_type = TypeOf((yyvsp[-2].strval));
    b_type = TypeOf((yyvsp[0].strval));
    //printf("%s\n", a_type);
    if ((strcmp(a_type, "CONST INT") == 0) || strcmp(b_type, "CONST INT") == 0)
        {
            printf("Este interzisa folosirea operatiilor cu constante.");
            valid = 0;
        }
    if (strcmp(a_type, b_type) == 0)
        {
            int val_a = atoi(a);
            int val_b = atoi(b);
            int sum = val_a * val_b;
            char temp[40]; 
            sprintf(temp, "%d", sum);
            strcpy(val, temp);
            if(valid == 1)value_returned((yyvsp[-2].strval), count, val);
            // cout << "p: " << a << " " << a << endl;
            // cout << "\ntest: " << val << "\n";
        }
    else {
        printf("Inmultirea intre doua tipuri diferite nu este permisa!\n");
        valid = 0;
        }
    }
#line 1530 "limbaj1.tab.c"
    break;

  case 50: /* expr: expr DIV expr  */
#line 315 "limbaj1.y"
    { 
    char* a = get_value((yyvsp[-2].strval), count);
    char* b = get_value((yyvsp[0].strval), count);
    char* a_type;
    char* b_type;
    a_type = TypeOf((yyvsp[-2].strval));
    b_type = TypeOf((yyvsp[0].strval));
    if ((strcmp(a_type, "CONST INT") == 0) || strcmp(b_type, "CONST INT") == 0)
    {
            printf("Este interzisa folosirea operatiilor cu constante.\n");
            valid = 0;
    }
    if (strcmp(a_type, b_type) == 0)
        {
            int val_a = atoi(a);
            int val_b = atoi(b);
            int sum = val_a / val_b;
            char temp[40]; 
            sprintf(temp, "%d", sum);
            strcpy(val, temp);
            if(valid == 1)value_returned((yyvsp[-2].strval), count, val);
            // cout << "p: " << a << " " << a << endl;
            // cout << "\ntest: " << val << "\n";
        }
    else {
        printf("Impartirea intre doua tipuri diferite nu este permisa!\n");
        valid = 0;
        }
    }
#line 1564 "limbaj1.tab.c"
    break;

  case 51: /* afirmatie: type ID ASSIGN value  */
#line 347 "limbaj1.y"
            {
            if (declarare_multipla((yyvsp[-2].strval), count) == true)printf("Declarare multipla\n"); 
             else 
                {
                    strcpy(nume,(yyvsp[-2].strval));strcpy(locatie,"Local"); adaugare('V');
                }
            }
#line 1576 "limbaj1.tab.c"
    break;

  case 52: /* afirmatie: CHAR ID ASSIGN CHARACTER  */
#line 354 "limbaj1.y"
                                    {
            if (declarare_multipla((yyvsp[-2].strval), count) == true)printf("Declarare multipla\n");
            else
            { strcpy(tip,"CHAR"); strcpy(nume, (yyvsp[-2].strval)); strcpy(val,yytext); strcpy(locatie,"Local"); adaugare('V');}
         }
#line 1586 "limbaj1.tab.c"
    break;

  case 53: /* afirmatie: STR ID ASSIGN STRING  */
#line 359 "limbaj1.y"
                                {
            if (declarare_multipla((yyvsp[-2].strval), count) == true)printf("Declarare multipla\n");
            else
            { strcpy(tip,"STRING"); strcpy(nume, (yyvsp[-2].strval)); strcpy(val,yytext); strcpy(locatie,"Local"); adaugare('V');}
         }
#line 1596 "limbaj1.tab.c"
    break;

  case 54: /* afirmatie: type ID  */
#line 365 "limbaj1.y"
         {
            if (declarare_multipla((yyvsp[0].strval), count) == true)printf("Declarare multipla\n"); 
             else 
                {
                    {strcpy(val, "neinit"); }strcpy(nume,(yyvsp[0].strval));strcpy(locatie,"Local"); adaugare('V');
                }
            }
#line 1608 "limbaj1.tab.c"
    break;

  case 55: /* afirmatie: CHAR ID  */
#line 372 "limbaj1.y"
                   {
            if (declarare_multipla((yyvsp[0].strval), count) == true)printf("Declarare multipla\n");
            else
            { strcpy(tip,"CHAR");  strcpy(val, "neinit"); strcpy(nume, (yyvsp[0].strval)); strcpy(locatie,"Local"); adaugare('V');}
            }
#line 1618 "limbaj1.tab.c"
    break;

  case 56: /* afirmatie: STR ID  */
#line 377 "limbaj1.y"
                  {
            if (declarare_multipla((yyvsp[0].strval), count) == true)printf("Declarare multipla\n");
            else
            { strcpy(tip,"STRING");  strcpy(val, "neinit"); strcpy(nume, (yyvsp[0].strval)); strcpy(locatie,"Local"); adaugare('V');}
         }
#line 1628 "limbaj1.tab.c"
    break;

  case 57: /* afirmatie: BOOL ID ASSIGN BOOL_VAL  */
#line 382 "limbaj1.y"
                                  {
            if (declarare_multipla((yyvsp[-2].strval), count) == true)printf("Declarare multipla\n");
            else{
                strcpy(tip,"BOOL");  strcpy(val,yytext); strcpy(nume, (yyvsp[-2].strval)); strcpy(locatie,"Local"); adaugare('V');
            }
         }
#line 1639 "limbaj1.tab.c"
    break;

  case 58: /* afirmatie: BOOL ID  */
#line 388 "limbaj1.y"
                   {
            if (declarare_multipla((yyvsp[0].strval), count) == true)printf("Declarare multipla\n");
            else{
                strcpy(tip,"BOOL");  strcpy(nume, (yyvsp[0].strval)); strcpy(locatie,"Local"); adaugare('V');
            }
         }
#line 1650 "limbaj1.tab.c"
    break;


#line 1654 "limbaj1.tab.c"

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

#line 400 "limbaj1.y"

void yyerror(const char* s)
{
     printf("Eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv)
{
    yyin=fopen(argv[1],"r");
    yyparse();
    print_table(count);
}
