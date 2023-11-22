
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "1907051.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>
	#include <math.h>
	#include "required.h"
	#include "function.h"
	int yyparse();
	int yylex();
	int yyerror();
	extern int yylineno;
	int isdeclared(char*);
	int addnewval(char*,int );
	int getval(char*);
	int setval(char* , int );
   


/* Line 189 of yacc.c  */
#line 92 "1907051.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     NUMBER = 259,
     STR = 260,
     GREATEREQUAL = 261,
     LESSEQUAL = 262,
     GREATERTHAN = 263,
     LESSTHAN = 264,
     MINUS = 265,
     PLUS = 266,
     DIVIDE = 267,
     MULTIPLY = 268,
     INT = 269,
     DOUBLE = 270,
     CHAR = 271,
     VOID = 272,
     RUN = 273,
     PB = 274,
     PE = 275,
     BB = 276,
     BE = 277,
     SEMICOLON = 278,
     COMMA = 279,
     ASSIGN = 280,
     PRINTVAR = 281,
     PRINTSTR = 282,
     PRINTLN = 283,
     PRINTFUNC = 284,
     MOD = 285,
     FACT = 286,
     PRIME = 287,
     RETURN = 288,
     CALL = 289,
     WHILE = 290,
     IF = 291,
     ELSE = 292,
     ELSEIF = 293,
     FOR = 294,
     TO = 295,
     SWITCH = 296,
     DEFAULT = 297,
     COLON = 298,
     UDFUNCTION = 299,
     EQUAL = 300,
     NOTEQUAL = 301,
     LOGFUNC = 302,
     LOG10FUNC = 303,
     TANFUNC = 304,
     MAXNUMBER = 305,
     MINNUMBER = 306,
     ODDEVEN = 307,
     SUMDIGIT = 308,
     REVNUM = 309,
     COMPARE = 310,
     COMPAREREVERSE = 311,
     REVERSE = 312,
     SORT = 313,
     SINFUNC = 314,
     COSFUNC = 315,
     GCDFUNC = 316,
     LCMFUNC = 317,
     POWERFUNC = 318,
     IFX = 319,
     UMINUS = 320
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 21 "1907051.y"

  char text[1000];
  int value;



/* Line 214 of yacc.c  */
#line 200 "1907051.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 212 "1907051.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNRULES -- Number of states.  */
#define YYNSTATES  291

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      65
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    12,    13,    16,    19,    22,    25,
      28,    31,    34,    37,    40,    43,    46,    49,    53,    55,
      57,    59,    61,    65,    67,    69,    73,    77,    83,    89,
      95,   101,   107,   113,   119,   124,   130,   136,   142,   148,
     154,   160,   166,   171,   176,   182,   188,   193,   196,   197,
     200,   206,   212,   217,   218,   221,   227,   233,   238,   240,
     242,   245,   249,   253,   257,   261,   265,   269,   273,   277,
     281,   285,   289,   293,   297,   301,   305,   309,   313,   322,
     324,   325,   334,   340,   352,   364,   372,   374,   375,   382,
     389,   390,   393,   402,   403,   407,   408,   413,   417,   420
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,    90,    68,    -1,    18,    21,    69,    22,
      23,    -1,    -1,    69,    70,    -1,    69,    76,    -1,    69,
      81,    -1,    69,    82,    -1,    69,    75,    -1,    69,    85,
      -1,    69,    86,    -1,    69,    87,    -1,    69,    79,    -1,
      69,    74,    -1,    69,    94,    -1,    69,    95,    -1,    71,
      72,    23,    -1,    14,    -1,    15,    -1,    16,    -1,    17,
      -1,    73,    24,    72,    -1,    73,    -1,     3,    -1,     3,
      25,    81,    -1,     3,    25,    74,    -1,    50,    19,    81,
      20,    23,    -1,    51,    19,    81,    20,    23,    -1,    59,
      19,    81,    20,    23,    -1,    60,    19,    81,    20,    23,
      -1,    49,    19,    81,    20,    23,    -1,    48,    19,    81,
      20,    23,    -1,    47,    19,    81,    20,    23,    -1,    19,
      81,    20,    23,    -1,    31,    19,    81,    20,    23,    -1,
      32,    19,    81,    20,    23,    -1,    52,    19,    81,    20,
      23,    -1,    53,    19,    81,    20,    23,    -1,    54,    19,
      81,    20,    23,    -1,    57,    19,     5,    20,    23,    -1,
      58,    19,     5,    20,    23,    -1,     3,    25,    81,    23,
      -1,     3,    25,    74,    23,    -1,    26,    19,     3,    20,
      23,    -1,    27,    19,     5,    20,    23,    -1,    28,    19,
      20,    23,    -1,    29,    74,    -1,    -1,    77,    78,    -1,
      26,    19,     3,    20,    23,    -1,    27,    19,     5,    20,
      23,    -1,    28,    19,    20,    23,    -1,    -1,    79,    80,
      -1,    26,    19,     3,    20,    23,    -1,    27,    19,     5,
      20,    23,    -1,    28,    19,    20,    23,    -1,     4,    -1,
       3,    -1,    10,    81,    -1,    81,    11,    81,    -1,    81,
      10,    81,    -1,    81,    13,    81,    -1,    81,    12,    81,
      -1,    81,    30,    81,    -1,    81,    55,    81,    -1,    81,
      56,    81,    -1,    81,    61,    81,    -1,    81,    62,    81,
      -1,    81,    63,    81,    -1,    81,     9,    81,    -1,    81,
       8,    81,    -1,    81,     7,    81,    -1,    81,     6,    81,
      -1,    81,    45,    81,    -1,    81,    46,    81,    -1,    19,
      81,    20,    -1,    36,    19,    83,    20,    21,    77,    22,
      84,    -1,    81,    -1,    -1,    84,    38,    19,    81,    20,
      21,    77,    22,    -1,    84,    37,    21,    77,    22,    -1,
      39,    19,    81,    40,    81,    43,    81,    20,    21,    79,
      22,    -1,    35,    19,    81,    40,    81,    43,    81,    20,
      21,    79,    22,    -1,    41,    19,    88,    20,    21,    89,
      22,    -1,    81,    -1,    -1,    89,    81,    43,    21,    79,
      22,    -1,    89,    42,    43,    21,    79,    22,    -1,    -1,
      90,    91,    -1,    71,    44,    19,    92,    20,    21,    69,
      22,    -1,    -1,    71,     3,    93,    -1,    -1,    93,    24,
      71,     3,    -1,    33,     3,    23,    -1,    33,    81,    -1,
      34,     3,    19,    81,    24,    81,    20,    23,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    67,    69,    69,
      69,    69,    71,    72,    74,    82,    89,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   114,   115,   116,
     117,   118,   138,   146,   161,   169,   173,   175,   178,   179,
     183,   193,   197,   202,   203,   207,   217,   221,   231,   232,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   266,   285,
     295,   296,   312,   340,   384,   428,   431,   437,   438,   455,
     479,   480,   483,   485,   486,   488,   489,   494,   495,   499
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUMBER", "STR", "GREATEREQUAL",
  "LESSEQUAL", "GREATERTHAN", "LESSTHAN", "MINUS", "PLUS", "DIVIDE",
  "MULTIPLY", "INT", "DOUBLE", "CHAR", "VOID", "RUN", "PB", "PE", "BB",
  "BE", "SEMICOLON", "COMMA", "ASSIGN", "PRINTVAR", "PRINTSTR", "PRINTLN",
  "PRINTFUNC", "MOD", "FACT", "PRIME", "RETURN", "CALL", "WHILE", "IF",
  "ELSE", "ELSEIF", "FOR", "TO", "SWITCH", "DEFAULT", "COLON",
  "UDFUNCTION", "EQUAL", "NOTEQUAL", "LOGFUNC", "LOG10FUNC", "TANFUNC",
  "MAXNUMBER", "MINNUMBER", "ODDEVEN", "SUMDIGIT", "REVNUM", "COMPARE",
  "COMPAREREVERSE", "REVERSE", "SORT", "SINFUNC", "COSFUNC", "GCDFUNC",
  "LCMFUNC", "POWERFUNC", "IFX", "UMINUS", "$accept", "starthere",
  "program", "statement", "declaration", "type", "variables", "variable",
  "furstatement", "assign", "print", "ifbody", "ifstatement", "loopbody",
  "loopstatement", "expression", "ifelse", "ifexp", "elseif", "forloop",
  "whileloop", "switch", "expswitch", "switchinside", "function", "func",
  "fparameter", "fsparameter", "return", "call", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    71,    71,
      71,    71,    72,    72,    73,    73,    73,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    75,    75,    76,    76,    76,    76,    77,    77,
      78,    78,    78,    79,    79,    80,    80,    80,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    83,
      84,    84,    84,    85,    86,    87,    88,    89,    89,    89,
      90,    90,    91,    92,    92,    93,    93,    94,    94,    95
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     5,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     1,     1,
       1,     1,     3,     1,     1,     3,     3,     5,     5,     5,
       5,     5,     5,     5,     4,     5,     5,     5,     5,     5,
       5,     5,     4,     4,     5,     5,     4,     2,     0,     2,
       5,     5,     4,     0,     2,     5,     5,     4,     1,     1,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     8,     1,
       0,     8,     5,    11,    11,     7,     1,     0,     6,     6,
       0,     2,     8,     0,     3,     0,     4,     3,     2,     8
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      90,     0,     0,     1,    18,    19,    20,    21,     0,     2,
       0,    91,     4,     0,     0,    93,    59,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,    14,     9,     6,
      13,     7,     8,    10,    11,    12,    15,    16,     0,     0,
       0,    59,     0,    60,     0,     3,     0,     0,     0,     0,
      47,     0,     0,    59,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,    23,     0,     0,     0,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,     0,    97,     0,     0,
      79,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,    74,    73,    72,    71,    62,    61,    64,
      63,    65,    75,    76,    66,    67,    68,    69,    70,    94,
       4,    43,    42,    77,    34,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    25,
      22,     0,     0,     0,     0,     0,    44,    45,    35,    36,
       0,     0,    48,     0,    87,    33,    32,    31,    27,    28,
      37,    38,    39,    40,    41,    29,    30,     0,     0,    57,
       0,    92,     0,     0,     0,     0,     0,    55,    56,    96,
       0,     0,    80,     0,     0,     0,    49,     0,    85,     0,
       0,    99,     0,    78,     0,     0,     0,     0,     0,     0,
      53,     0,     0,     0,     0,     0,    53,    53,    53,     0,
      48,     0,     0,     0,    52,     0,     0,     0,    84,     0,
       0,    50,    51,    83,    89,    88,    82,     0,    48,     0,
      81
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     9,    14,    45,    46,    93,    94,    47,    48,
      49,   234,   246,    50,    98,    51,    52,   131,   253,    53,
      54,    55,   134,   236,     2,    11,    59,   169,    56,    57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -265
static const yytype_int16 yypact[] =
{
    -265,    14,    31,  -265,  -265,  -265,  -265,  -265,     6,  -265,
     -23,  -265,  -265,     3,   120,    63,     5,  -265,     9,     9,
       8,    21,    33,    36,  1303,    37,    38,    22,    47,    52,
      79,    80,    89,    90,    96,    97,    98,   102,   103,   106,
     109,   119,   121,   122,   124,  -265,   141,  -265,  -265,  -265,
      10,  1285,  -265,  -265,  -265,  -265,  -265,  -265,   142,   130,
     255,  -265,     9,   495,   271,  -265,   154,   153,   140,     9,
    -265,     9,     9,   139,  1285,   144,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,   160,   170,
       9,     9,   151,   158,   159,   163,   165,   166,  -265,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,  -265,   167,   164,   312,   339,
     168,   169,   173,   171,   397,   424,   482,  -265,     9,   509,
    1285,   175,   523,  1285,   176,   581,   608,   666,   693,   751,
     778,   836,   863,   177,   178,   921,   948,   255,  -265,   141,
     183,   185,   179,   326,   326,   326,   326,   410,   410,   495,
     495,  1285,  1285,  1285,  1285,  1285,  1285,  1285,  1285,   181,
    -265,  -265,  -265,  -265,  -265,   180,   186,  -265,   168,   187,
     198,   989,     9,   199,     9,   201,   204,   211,   212,   214,
     216,   217,   218,   219,   220,   229,   237,   238,  -265,  1285,
    -265,   182,   188,   239,    63,   197,  -265,  -265,  -265,  -265,
       9,  1016,  -265,  1030,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,  -265,   240,   241,  -265,
     203,  -265,  1088,     9,     7,     9,     1,  -265,  -265,  -265,
     243,  1115,  -265,   248,   249,   250,  -265,  1173,  -265,   227,
    1200,  -265,   251,   -30,   268,   270,   253,   264,   267,   269,
    -265,   272,   257,   274,   275,   266,  -265,  -265,  -265,    48,
    -265,     9,   273,   276,  -265,    75,    78,    85,  -265,    92,
    1258,  -265,  -265,  -265,  -265,  -265,  -265,   277,  -265,   105,
    -265
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -265,  -265,  -265,   127,  -265,     0,   143,  -265,   -21,  -265,
    -265,  -264,  -265,  -250,  -265,   -18,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      63,    64,    10,    70,    61,    17,   279,   261,   262,    74,
     269,    18,    61,    17,     3,    58,   275,   276,   277,    18,
      62,    13,    15,   248,   289,    73,    17,    12,    62,   242,
      60,    65,    18,   243,   244,   245,    95,    96,    97,   117,
      66,    62,   118,   249,   119,     4,     5,     6,     7,     8,
      75,   124,    67,   125,   126,    68,    71,    72,   129,   130,
     132,   133,   135,   136,   137,   138,   139,   140,   141,   142,
     278,    76,   145,   146,    95,    96,    97,     4,     5,     6,
       7,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   283,    77,    78,
     284,    95,    96,    97,    95,    96,    97,   285,    79,    80,
     181,    95,    96,    97,   286,    81,    82,    83,   243,   244,
     245,    84,    85,    16,    17,    86,   198,   290,    87,   199,
      18,   243,   244,   245,     4,     5,     6,     7,    88,    19,
      89,    90,    20,    91,    92,   115,    21,    22,    23,    24,
     116,    25,    26,    27,    28,    29,    30,   121,   122,    31,
     123,    32,   127,   128,   211,   143,   213,    33,    34,    35,
      36,    37,    38,    39,    40,   144,   147,    41,    42,    43,
      44,   148,   150,   149,   151,   152,   201,   171,   170,   175,
     202,   174,   232,   176,   177,   183,   185,   194,   195,   203,
      16,    17,   227,   206,   230,   204,   239,    18,   228,   207,
     208,     4,     5,     6,     7,   241,    19,   247,   250,   231,
     212,   209,   214,    21,    22,    23,    24,   215,    25,    26,
      27,    28,    29,    30,   216,   217,    31,   218,    32,   219,
     220,   221,   222,   223,    33,    34,    35,    36,    37,    38,
      39,    40,   224,   280,    41,    42,    43,    44,    61,    17,
     225,   226,   229,   237,   238,    18,   251,   254,   255,   256,
     258,   263,   260,   265,    19,   264,   271,    99,   100,   101,
     102,   103,   104,   105,   106,   266,    25,    26,   267,   274,
     268,   120,   200,   270,   272,   273,   281,   205,   288,   282,
       0,   107,    33,    34,    35,    36,    37,    38,    39,    40,
       0,     0,    41,    42,    43,    44,   108,   109,    99,   100,
     101,   102,   103,   104,   105,   106,   110,   111,     0,     0,
       0,     0,   112,   113,   114,   172,   103,   104,   105,   106,
       0,     0,   107,     0,     0,    99,   100,   101,   102,   103,
     104,   105,   106,     0,     0,     0,   107,   108,   109,   173,
       0,     0,     0,     0,     0,     0,     0,   110,   111,   107,
       0,   108,   109,   112,   113,   114,     0,     0,     0,     0,
       0,   110,   111,     0,   108,   109,     0,   112,   113,   114,
       0,     0,     0,     0,   110,   111,     0,     0,     0,     0,
     112,   113,   114,    99,   100,   101,   102,   103,   104,   105,
     106,     0,     0,     0,     0,     0,     0,   178,     0,     0,
       0,     0,   105,   106,     0,     0,     0,   107,     0,     0,
      99,   100,   101,   102,   103,   104,   105,   106,     0,     0,
     107,     0,   108,   109,   179,     0,     0,     0,     0,     0,
       0,     0,   110,   111,   107,   108,   109,     0,   112,   113,
     114,     0,     0,     0,     0,   110,   111,     0,     0,   108,
     109,   112,   113,   114,     0,     0,     0,     0,     0,   110,
     111,     0,     0,     0,     0,   112,   113,   114,    99,   100,
     101,   102,   103,   104,   105,   106,     0,     0,     0,     0,
       0,     0,   180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,    99,   100,   101,   102,   103,
     104,   105,   106,     0,     0,   107,     0,   108,   109,    99,
     100,   101,   102,   103,   104,   105,   106,   110,   111,   107,
     108,   109,     0,   112,   113,   114,     0,     0,     0,   182,
     110,   111,     0,   107,   108,   109,   112,   113,   114,     0,
       0,     0,     0,   184,   110,   111,     0,     0,   108,   109,
     112,   113,   114,     0,     0,     0,     0,     0,   110,   111,
       0,     0,     0,     0,   112,   113,   114,    99,   100,   101,
     102,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,   186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,    99,   100,   101,   102,   103,   104,
     105,   106,     0,     0,     0,     0,   108,   109,   187,     0,
       0,     0,     0,     0,     0,     0,   110,   111,   107,     0,
       0,     0,   112,   113,   114,     0,     0,     0,     0,     0,
       0,     0,     0,   108,   109,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,     0,     0,     0,     0,   112,
     113,   114,    99,   100,   101,   102,   103,   104,   105,   106,
       0,     0,     0,     0,     0,     0,   188,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,     0,
       0,   108,   109,   189,     0,     0,     0,     0,     0,     0,
       0,   110,   111,   107,     0,     0,     0,   112,   113,   114,
       0,     0,     0,     0,     0,     0,     0,     0,   108,   109,
       0,     0,     0,     0,     0,     0,     0,     0,   110,   111,
       0,     0,     0,     0,   112,   113,   114,    99,   100,   101,
     102,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,   190,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,    99,   100,   101,   102,   103,   104,
     105,   106,     0,     0,     0,     0,   108,   109,   191,     0,
       0,     0,     0,     0,     0,     0,   110,   111,   107,     0,
       0,     0,   112,   113,   114,     0,     0,     0,     0,     0,
       0,     0,     0,   108,   109,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,     0,     0,     0,     0,   112,
     113,   114,    99,   100,   101,   102,   103,   104,   105,   106,
       0,     0,     0,     0,     0,     0,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,     0,
       0,   108,   109,   193,     0,     0,     0,     0,     0,     0,
       0,   110,   111,   107,     0,     0,     0,   112,   113,   114,
       0,     0,     0,     0,     0,     0,     0,     0,   108,   109,
       0,     0,     0,     0,     0,     0,     0,     0,   110,   111,
       0,     0,     0,     0,   112,   113,   114,    99,   100,   101,
     102,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,   196,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,    99,   100,   101,   102,   103,   104,
     105,   106,     0,     0,     0,     0,   108,   109,   197,     0,
       0,     0,     0,     0,     0,     0,   110,   111,   107,     0,
       0,     0,   112,   113,   114,     0,     0,     0,     0,     0,
       0,     0,     0,   108,   109,    99,   100,   101,   102,   103,
     104,   105,   106,   110,   111,     0,     0,     0,     0,   112,
     113,   114,     0,   210,     0,     0,     0,     0,     0,   107,
       0,     0,    99,   100,   101,   102,   103,   104,   105,   106,
       0,     0,     0,     0,   108,   109,    99,   100,   101,   102,
     103,   104,   105,   106,   110,   111,   107,     0,     0,     0,
     112,   113,   114,     0,     0,     0,     0,     0,     0,   233,
     107,   108,   109,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,   235,     0,   108,   109,   112,   113,   114,
       0,     0,     0,     0,     0,   110,   111,     0,     0,     0,
       0,   112,   113,   114,    99,   100,   101,   102,   103,   104,
     105,   106,     0,     0,     0,     0,     0,     0,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,    99,   100,   101,   102,   103,   104,   105,   106,     0,
       0,     0,     0,   108,   109,   252,     0,     0,     0,     0,
       0,     0,     0,   110,   111,   107,     0,     0,     0,   112,
     113,   114,     0,     0,     0,     0,     0,     0,     0,     0,
     108,   109,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   111,     0,     0,     0,     0,   112,   113,   114,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,     0,
       0,     0,     0,   257,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,    99,   100,   101,   102,
     103,   104,   105,   106,     0,     0,     0,     0,   108,   109,
       0,     0,     0,     0,     0,     0,     0,     0,   110,   111,
     107,     0,     0,     0,   112,   113,   114,     0,     0,     0,
       0,     0,     0,   259,     0,   108,   109,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   111,     0,     0,     0,
       0,   112,   113,   114,    99,   100,   101,   102,   103,   104,
     105,   106,     0,     0,     0,     0,     0,     0,   287,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,    99,   100,   101,   102,   103,   104,   105,   106,     0,
       0,     0,     0,   108,   109,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,   107,     0,     0,     0,   112,
     113,   114,    69,     0,     0,     0,     0,     0,     0,     0,
     108,   109,     0,     0,    25,    26,     0,     0,     0,     0,
     110,   111,     0,     0,     0,     0,   112,   113,   114,     0,
      33,    34,    35,    36,    37,    38,    39,    40,     0,     0,
      41,    42,    43,    44
};

static const yytype_int16 yycheck[] =
{
      18,    19,     2,    24,     3,     4,   270,    37,    38,    27,
     260,    10,     3,     4,     0,    15,   266,   267,   268,    10,
      19,    44,    19,    22,   288,     3,     4,    21,    19,    22,
      25,    23,    10,    26,    27,    28,    26,    27,    28,    60,
      19,    19,    60,    42,    62,    14,    15,    16,    17,    18,
       3,    69,    19,    71,    72,    19,    19,    19,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      22,    19,    90,    91,    26,    27,    28,    14,    15,    16,
      17,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    22,    19,    19,
      22,    26,    27,    28,    26,    27,    28,    22,    19,    19,
     128,    26,    27,    28,    22,    19,    19,    19,    26,    27,
      28,    19,    19,     3,     4,    19,   147,    22,    19,   147,
      10,    26,    27,    28,    14,    15,    16,    17,    19,    19,
      19,    19,    22,    19,     3,     3,    26,    27,    28,    29,
      20,    31,    32,    33,    34,    35,    36,     3,     5,    39,
      20,    41,    23,    19,   182,     5,   184,    47,    48,    49,
      50,    51,    52,    53,    54,     5,    25,    57,    58,    59,
      60,    23,    19,    24,    19,    19,     3,    23,    21,    20,
       5,    23,   210,    20,    23,    20,    20,    20,    20,    20,
       3,     4,    20,    23,   204,    24,     3,    10,    20,    23,
      23,    14,    15,    16,    17,   233,    19,   235,   236,    22,
      21,    23,    21,    26,    27,    28,    29,    23,    31,    32,
      33,    34,    35,    36,    23,    23,    39,    23,    41,    23,
      23,    23,    23,    23,    47,    48,    49,    50,    51,    52,
      53,    54,    23,   271,    57,    58,    59,    60,     3,     4,
      23,    23,    23,    23,    23,    10,    23,    19,    19,    19,
      43,     3,    21,    20,    19,     5,    19,     6,     7,     8,
       9,    10,    11,    12,    13,    21,    31,    32,    21,    23,
      21,    20,   149,    21,    20,    20,    23,   170,    21,    23,
      -1,    30,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    57,    58,    59,    60,    45,    46,     6,     7,
       8,     9,    10,    11,    12,    13,    55,    56,    -1,    -1,
      -1,    -1,    61,    62,    63,    23,    10,    11,    12,    13,
      -1,    -1,    30,    -1,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    30,    45,    46,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    30,
      -1,    45,    46,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    45,    46,    -1,    61,    62,    63,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,
      61,    62,    63,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    -1,    30,    -1,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      30,    -1,    45,    46,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    30,    45,    46,    -1,    61,    62,
      63,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    45,
      46,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    -1,    -1,    61,    62,    63,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    30,    -1,    45,    46,     6,
       7,     8,     9,    10,    11,    12,    13,    55,    56,    30,
      45,    46,    -1,    61,    62,    63,    -1,    -1,    -1,    40,
      55,    56,    -1,    30,    45,    46,    61,    62,    63,    -1,
      -1,    -1,    -1,    40,    55,    56,    -1,    -1,    45,    46,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    -1,    -1,    -1,    61,    62,    63,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    45,    46,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    30,    -1,
      -1,    -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    61,
      62,    63,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    45,    46,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    30,    -1,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    -1,    -1,    -1,    61,    62,    63,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    45,    46,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    30,    -1,
      -1,    -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    61,
      62,    63,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    45,    46,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    30,    -1,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    -1,    -1,    -1,    61,    62,    63,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    45,    46,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    30,    -1,
      -1,    -1,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,     6,     7,     8,     9,    10,
      11,    12,    13,    55,    56,    -1,    -1,    -1,    -1,    61,
      62,    63,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    45,    46,     6,     7,     8,     9,
      10,    11,    12,    13,    55,    56,    30,    -1,    -1,    -1,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      30,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    43,    -1,    45,    46,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    -1,
      -1,    61,    62,    63,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    45,    46,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    30,    -1,    -1,    -1,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    -1,    -1,    61,    62,    63,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      30,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    -1,
      -1,    61,    62,    63,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    30,    -1,    -1,    -1,    61,
      62,    63,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      57,    58,    59,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    67,    90,     0,    14,    15,    16,    17,    18,    68,
      71,    91,    21,    44,    69,    19,     3,     4,    10,    19,
      22,    26,    27,    28,    29,    31,    32,    33,    34,    35,
      36,    39,    41,    47,    48,    49,    50,    51,    52,    53,
      54,    57,    58,    59,    60,    70,    71,    74,    75,    76,
      79,    81,    82,    85,    86,    87,    94,    95,    71,    92,
      25,     3,    19,    81,    81,    23,    19,    19,    19,    19,
      74,    19,    19,     3,    81,     3,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    19,    19,    19,
      19,    19,     3,    72,    73,    26,    27,    28,    80,     6,
       7,     8,     9,    10,    11,    12,    13,    30,    45,    46,
      55,    56,    61,    62,    63,     3,    20,    74,    81,    81,
      20,     3,     5,    20,    81,    81,    81,    23,    19,    81,
      81,    83,    81,    81,    88,    81,    81,    81,    81,    81,
      81,    81,    81,     5,     5,    81,    81,    25,    23,    24,
      19,    19,    19,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    93,
      21,    23,    23,    20,    23,    20,    20,    23,    20,    20,
      20,    81,    40,    20,    40,    20,    20,    20,    20,    20,
      20,    20,    20,    20,    20,    20,    20,    20,    74,    81,
      72,     3,     5,    20,    24,    69,    23,    23,    23,    23,
      24,    81,    21,    81,    21,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    20,    20,    23,
      71,    22,    81,    43,    77,    43,    89,    23,    23,     3,
      20,    81,    22,    26,    27,    28,    78,    81,    22,    42,
      81,    23,    20,    84,    19,    19,    19,    20,    43,    43,
      21,    37,    38,     3,     5,    20,    21,    21,    21,    79,
      21,    19,    20,    20,    23,    79,    79,    79,    22,    77,
      81,    23,    23,    22,    22,    22,    22,    20,    21,    77,
      22
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 46 "1907051.y"
    { printf("\n\n\n-------------- Successfully executed -----------------\n\n"); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 67 "1907051.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 69 "1907051.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 71 "1907051.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 72 "1907051.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 74 "1907051.y"
    {//printf("%s\n",$1);
												int x = addnewval((yyvsp[(1) - (1)].text),0);
												if(!x) {
													printf("Compilation Error:\nLine no: %d   Variable %s is already declared\n",yylineno,(yyvsp[(1) - (1)].text));
													exit(-1);
												}

											;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 82 "1907051.y"
    {//printf("%s %d\n",$1,$3);
												int x = addnewval((yyvsp[(1) - (3)].text),(yyvsp[(3) - (3)].value));
												if(!x) {
													printf("Compilation Error:\nLine no: %d   Variable %s is already declared\n",yylineno,(yyvsp[(1) - (3)].text));
													exit(-1);
													}
											;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 89 "1907051.y"
    {//printf("%s %d\n",$1,$3);
												int x = addnewval((yyvsp[(1) - (3)].text),(yyvsp[(3) - (3)].value));
												if(!x) {
													printf("Compilation Error:\nLine no: %d   Variable %s is already declared\n",yylineno,(yyvsp[(1) - (3)].text));
													exit(-1);
													}
											;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 103 "1907051.y"
    { ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 104 "1907051.y"
    { ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 105 "1907051.y"
    { printf("%lf\n",sin( (yyvsp[(3) - (5)].value)*3.1416/180)); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 106 "1907051.y"
    { printf("%lf\n",cos( (yyvsp[(3) - (5)].value)*3.1416/180)); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 107 "1907051.y"
    { printf("%lf\n",tan( (yyvsp[(3) - (5)].value)*3.1416/180)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 108 "1907051.y"
    { printf("%lf\n",(log( (yyvsp[(3) - (5)].value)*1.0)/log(10.0))); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 109 "1907051.y"
    { printf("%lf\n",(log( (yyvsp[(3) - (5)].value))));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 110 "1907051.y"
    { (yyval.value)=(yyvsp[(2) - (4)].value);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 111 "1907051.y"
    { factorial((yyvsp[(3) - (5)].value)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 112 "1907051.y"
    { checkforprime((yyvsp[(3) - (5)].value)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 114 "1907051.y"
    { checkforoddeven((yyvsp[(3) - (5)].value)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 115 "1907051.y"
    { sumofdigits((yyvsp[(3) - (5)].value)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 116 "1907051.y"
    { reversenumber((yyvsp[(3) - (5)].value)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 117 "1907051.y"
    { reversestr((yyvsp[(3) - (5)].text)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 118 "1907051.y"
    { int l = strlen((yyvsp[(3) - (5)].text));
																int i,j;
																for(i=1; i<l-1; i++)
																{
																	for(j=i+1; j<l-1; j++)
																	{
																		if((yyvsp[(3) - (5)].text)[i] > (yyvsp[(3) - (5)].text)[j])
																		{
																			char temp     = (yyvsp[(3) - (5)].text)[i];
																			(yyvsp[(3) - (5)].text)[i] = (yyvsp[(3) - (5)].text)[j];
																			(yyvsp[(3) - (5)].text)[j] = temp;
																		}
																	}
																}
																for(i = 1;  i < l-1; i++) 
																	printf("%c",(yyvsp[(3) - (5)].text)[i]);
															;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 138 "1907051.y"
    {	if(!isdeclared((yyvsp[(1) - (4)].text))) {
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,(yyvsp[(1) - (4)].text));
																	exit(-1);
																}
																else{
																	setval((yyvsp[(1) - (4)].text),(yyvsp[(3) - (4)].value));
																}
															;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 146 "1907051.y"
    {	if(!isdeclared((yyvsp[(1) - (4)].text))) {
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,(yyvsp[(1) - (4)].text));
																	exit(-1);
																}
																else{
																	setval((yyvsp[(1) - (4)].text),(yyvsp[(3) - (4)].value));
																}
															;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 161 "1907051.y"
    {	if( isdeclared((yyvsp[(3) - (5)].text)) ){
																	printf("%d",getval((yyvsp[(3) - (5)].text)));
																}
																else{
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,(yyvsp[(3) - (5)].text));
																	exit(-1);
																}
															;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 169 "1907051.y"
    {	int i,l = strlen((yyvsp[(3) - (5)].text));
															for(i = 1;  i < l-1; i++) {
																	printf("%c",(yyvsp[(3) - (5)].text)[i]); }
															;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 173 "1907051.y"
    {	printf("\n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 183 "1907051.y"
    {	pop++;
																if(!isdeclared((yyvsp[(3) - (5)].text))){
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,(yyvsp[(3) - (5)].text));
																	exit(-1);
																}
																else{
																	check=1;
																	v1[pop] = getval((yyvsp[(3) - (5)].text));
																}							
															;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 193 "1907051.y"
    {	pop++;
																check=2;
																strcpy(keep[pop],(yyvsp[(3) - (5)].text));	
															;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 197 "1907051.y"
    {	pop++;
																check=3;
															;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 207 "1907051.y"
    {
																if(!isdeclared((yyvsp[(3) - (5)].text))){
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,(yyvsp[(3) - (5)].text));
																	exit(-1);
																}
																else{
																	check=1;
																	v1[3] = getval((yyvsp[(3) - (5)].text));
																}
															;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 217 "1907051.y"
    {
																check = 2;
																strcpy(keep[3],(yyvsp[(3) - (5)].text));
															;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 221 "1907051.y"
    {
																check = 3;
															;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 231 "1907051.y"
    { (yyval.value) = (yyvsp[(1) - (1)].value);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 232 "1907051.y"
    { if(!isdeclared((yyvsp[(1) - (1)].text))) {
														printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,(yyvsp[(1) - (1)].text));
														exit(-1);
													}
												  else{
													(yyval.value) = getval((yyvsp[(1) - (1)].text));
													}
												;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 240 "1907051.y"
    { (yyval.value) = -(yyvsp[(2) - (2)].value);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 241 "1907051.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) + (yyvsp[(3) - (3)].value);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 242 "1907051.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) - (yyvsp[(3) - (3)].value);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 243 "1907051.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) * (yyvsp[(3) - (3)].value);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 244 "1907051.y"
    { dividefun((yyvsp[(1) - (3)].value),(yyvsp[(3) - (3)].value)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 245 "1907051.y"
    { modfun((yyvsp[(1) - (3)].value),(yyvsp[(3) - (3)].value)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 246 "1907051.y"
    { findmax((yyvsp[(1) - (3)].value),(yyvsp[(3) - (3)].value));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 247 "1907051.y"
    { findmin((yyvsp[(1) - (3)].value),(yyvsp[(3) - (3)].value)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 248 "1907051.y"
    { gcdfun((yyvsp[(1) - (3)].value),(yyvsp[(3) - (3)].value)); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 249 "1907051.y"
    { lcmfun((yyvsp[(1) - (3)].value),(yyvsp[(3) - (3)].value));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 250 "1907051.y"
    { (yyval.value)=powerfun((yyvsp[(1) - (3)].value),(yyvsp[(3) - (3)].value));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 251 "1907051.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) < (yyvsp[(3) - (3)].value); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 252 "1907051.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) > (yyvsp[(3) - (3)].value); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 253 "1907051.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) <= (yyvsp[(3) - (3)].value); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 254 "1907051.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) >= (yyvsp[(3) - (3)].value); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 255 "1907051.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) == (yyvsp[(3) - (3)].value); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 256 "1907051.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) != (yyvsp[(3) - (3)].value); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 257 "1907051.y"
    {(yyval.value) = (yyvsp[(2) - (3)].value);;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 266 "1907051.y"
    {	ifdone[ifptr] = 0;
															ifptr--;
														
															if(mark1){
																if(check==1){
																	printf("%d",v1[0]);
																}
																else if(check==2){
																	int i;
																	int l=strlen(keep[0]);
																	for(i = 1;  i < l-1; i++) 
																		printf("%c",keep[0][i]);
																}
																else{
																	printf("\n");
																}
															}
														;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 285 "1907051.y"
    {	ifptr++;
														ifdone[ifptr] = 0;
														pop = -1;
														mark1 = 0;
														if((yyvsp[(1) - (1)].value)){
															mark1 = 1;
															ifdone[ifptr] = 1;
														}
													;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 296 "1907051.y"
    {	if((yyvsp[(4) - (8)].value) && ifdone[ifptr] == 0){
																	ifdone[ifptr] = 1;
																	if(check==1){
																		printf("%d",v1[1]);
																	}
																	else if(check==2){
																		int i;
																		int l=strlen(keep[1]);
																		for(i = 1;  i < l-1; i++) 
																			printf("%c",keep[1][i]);
																	}
																	else{
																		printf("\n");
																	}
																}
															;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 312 "1907051.y"
    {	if(ifdone[ifptr] == 0){
																	ifdone[ifptr] = 1;
																	if(check==1)
																	{
																		printf("%d",v1[2]);
																	}
																	else if(check==2)
																	{
																		int i;
																		int l=strlen(keep[2]);
																		for(i = 1;  i < l-1; i++) 
																			printf("%c",keep[2][i]);
																	}
																	else
																	{
																		printf("\n");
																	}
																}
															;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 341 "1907051.y"
    {
						int start = (yyvsp[(3) - (11)].value);
						int end = (yyvsp[(5) - (11)].value);
						int dif = (yyvsp[(7) - (11)].value);
						int count = 0;
						int i = 0;
						finaldif=dif;
						for(i = start; i <= end; i += dif){
							count++;
						}	
						savestate = count;
						if(check==1){
							int k=0;
							for(k = 1; k <= savestate; k += finaldif){
								printf("%d",v1[3]);
							}
						}
						else if(check==2){
							int l = strlen(keep[3]);
							int k = 0,i=0;
							for(k = 1; k <= savestate; k += finaldif){
								for(i = 1;  i < l-1; i++) { 
									printf("%c",keep[3][i]);
								}
							}
						}
						else{
							int k = 0;
							for(k = 1; k <= savestate; k += finaldif){
								printf("\n");
							}
						}
						
					;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 385 "1907051.y"
    {
						int start = (yyvsp[(3) - (11)].value);
						int end = (yyvsp[(5) - (11)].value);
						int dif = (yyvsp[(7) - (11)].value);
						int count = 0;
						int i = 0;
						finaldif=dif;
						for(i = start; i <= end; i += dif){
							count++;
						}	
						savestate = count;
						if(check==1){
							int k=0;
							for(k = 1; k <= savestate; k += finaldif){
								printf("%d",v1[3]);
							}
						}
						else if(check==2){
							int l = strlen(keep[3]);
							int k = 0,i=0;
							for(k = 1; k <= savestate; k += finaldif){
								for(i = 1;  i < l-1; i++) { 
									printf("%c",keep[3][i]);
								}
							}
						}
						else{
							int k = 0;
							for(k = 1; k <= savestate; k += finaldif){
								printf("\n");
							}
						}
						
					;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 431 "1907051.y"
    {	switchdone = 0;
											switchvar = (yyvsp[(1) - (1)].value);
										;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 438 "1907051.y"
    {	if((yyvsp[(2) - (6)].value) == switchvar){
																			if(check==1){
																				printf("%d\n",v1[3]);
																			}
																			else if(check==2){
																				int l = strlen(keep[3]);
																				int i=0;
																				for(i = 1;  i < l-1; i++) { 
																						printf("%c",keep[3][i]);
																					}
																			}
																			else{
																				printf("\n");
																			}
																			switchdone = 1;
																		}					
																	;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 455 "1907051.y"
    {	if(switchdone == 0){
																			if(check==1){
																				printf("%d\n",v1[3]);
																			}
																			else if(check==2){
																				int l = strlen(keep[3]);
																				int i=0;
																				for(i = 1;  i < l-1; i++) { 
																						printf("%c",keep[3][i]);
																					}
																			}
																			else{
																				printf("\n");
																			}
																			switchdone = 1;
																		}
																	;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 483 "1907051.y"
    {	printf("User Defined found\n");  ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 494 "1907051.y"
    { printf("Value returns\n");;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 495 "1907051.y"
    { printf("Value returns\n");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 499 "1907051.y"
    { printf("Summation : %d\n",((yyvsp[(4) - (8)].value)+(yyvsp[(6) - (8)].value)));;}
    break;



/* Line 1455 of yacc.c  */
#line 2577 "1907051.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 501 "1907051.y"


int yyerror(char *s){
	printf( "\nError on Line %d:\n %s\n",yylineno, s);
}


