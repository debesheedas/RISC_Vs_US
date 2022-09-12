/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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

    #include <stdio.h>
    #include <stdlib.h>
    #include <ctype.h>
    #include <vector>
    #include <string.h>

    #define add_tac($$, $1, $2, $3) {strcpy($$.type, $1.type);\
                                        sprintf($$.lexeme, "@t%d", variable_count);\
                                        variable_count++;\
                                        tac.push_back(string($$.lexeme) + " = " + string($1.lexeme) + " " + string($2.lexeme) + " " + string($3.lexeme) + " " + string($$.type));}
    
    #include <iostream>
    #include <string>
    #include <unordered_map>
    #include <stack>

    using namespace std;

    void yyerror(const char *s);
    int yylex();
    int yywrap();
    int yytext();

    bool check_declaration(string variable);

    struct var_info {
        string data_type;
        int line_number; 
    };
    vector<string> tac;
    unordered_map<string, struct var_info> symbol_table;
    int variable_count = 0;
    int label_counter = 0;
    vector<string> sem_errors;
    int temp_index;
    int temp_label;

    stack<int> loop_continue, loop_break;

    extern int countn;

    typedef struct node{
        char* id;
        char* data_type;
        int size;
        char* type;     // category : keyword K; variable V; Constant C; Functions V
        int line_number;
    } func_symbol_table; // 100 entries allowed as of now

    int func_ind = 0;
    int func_arg = 0;
    int func_arg_ind = 0;
    int param_ind = 0;
    char curr_func_name[50];
    int curr_func_ind = 0;

    struct func_table{
        char name[50];
        char type[50];
        int num_of_param;
        int count;
        func_symbol_table st[1000];
    }func_table[50];

#line 136 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    CHAR = 259,
    FLOAT = 260,
    RETURN = 261,
    INT_NUM = 262,
    ID = 263,
    LEFTSHIFT = 264,
    RIGHTSHIFT = 265,
    LE = 266,
    GE = 267,
    EQ = 268,
    NE = 269,
    GT = 270,
    LT = 271,
    AND = 272,
    OR = 273,
    NOT = 274,
    ADD = 275,
    SUBTRACT = 276,
    DIVIDE = 277,
    MULTIPLY = 278,
    MODULO = 279,
    BITAND = 280,
    BITOR = 281,
    NEGATION = 282,
    XOR = 283,
    STR = 284,
    CHARACTER = 285,
    CC = 286,
    OC = 287,
    CS = 288,
    OS = 289,
    CF = 290,
    OF = 291,
    COMMA = 292,
    COLON = 293,
    SCOL = 294,
    PRINT = 295,
    SCAN = 296,
    SWITCH = 297,
    CASE = 298,
    BREAK = 299,
    DEFAULT = 300,
    IF = 301,
    ELIF = 302,
    ELSE = 303,
    WHILE = 304,
    FOR = 305,
    CONTINUE = 306,
    ASSIGN = 307
  };
#endif
/* Tokens.  */
#define INT 258
#define CHAR 259
#define FLOAT 260
#define RETURN 261
#define INT_NUM 262
#define ID 263
#define LEFTSHIFT 264
#define RIGHTSHIFT 265
#define LE 266
#define GE 267
#define EQ 268
#define NE 269
#define GT 270
#define LT 271
#define AND 272
#define OR 273
#define NOT 274
#define ADD 275
#define SUBTRACT 276
#define DIVIDE 277
#define MULTIPLY 278
#define MODULO 279
#define BITAND 280
#define BITOR 281
#define NEGATION 282
#define XOR 283
#define STR 284
#define CHARACTER 285
#define CC 286
#define OC 287
#define CS 288
#define OS 289
#define CF 290
#define OF 291
#define COMMA 292
#define COLON 293
#define SCOL 294
#define PRINT 295
#define SCAN 296
#define SWITCH 297
#define CASE 298
#define BREAK 299
#define DEFAULT 300
#define IF 301
#define ELIF 302
#define ELSE 303
#define WHILE 304
#define FOR 305
#define CONTINUE 306
#define ASSIGN 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 67 "parser.y"

    struct node { 
        char lexeme[100];
        int line_number;
        char type[100];
        char if_body[5];
        char elif_body[5];
		char else_body[5];
        char loop_body[5];
        char parentNext[5];
        char case_body[5];
        char id[5];
        char temp[5];
        int nParams;
    } node;

#line 309 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   409

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  189

#define YYUNDEFTOK  2
#define YYMAXUTOK   307


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   103,   103,   105,   106,   109,   109,   117,   117,   134,
     137,   140,   145,   149,   154,   155,   158,   159,   160,   161,
     162,   163,   164,   165,   170,   175,   178,   183,   190,   195,
     198,   201,   208,   211,   214,   217,   220,   223,   226,   229,
     232,   235,   238,   241,   244,   247,   250,   253,   256,   261,
     266,   271,   281,   287,   294,   299,   305,   306,   307,   308,
     311,   315,   321,   326,   329,   335,   326,   344,   349,   356,
     344,   361,   364,   365,   368,   373,   377,   368,   387,   391,
     394,   397,   394,   412,   413,   416,   422,   416,   440,   444,
     456,   440,   467,   495,   496,   497,   500
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "CHAR", "FLOAT", "RETURN",
  "INT_NUM", "ID", "LEFTSHIFT", "RIGHTSHIFT", "LE", "GE", "EQ", "NE", "GT",
  "LT", "AND", "OR", "NOT", "ADD", "SUBTRACT", "DIVIDE", "MULTIPLY",
  "MODULO", "BITAND", "BITOR", "NEGATION", "XOR", "STR", "CHARACTER", "CC",
  "OC", "CS", "OS", "CF", "OF", "COMMA", "COLON", "SCOL", "PRINT", "SCAN",
  "SWITCH", "CASE", "BREAK", "DEFAULT", "IF", "ELIF", "ELSE", "WHILE",
  "FOR", "CONTINUE", "ASSIGN", "$accept", "Program", "func_list", "func",
  "$@1", "func_prefix", "$@2", "param_list", "param", "stmt_list", "stmt",
  "declaration", "return_stmt", "data_type", "expr", "postfix_expr",
  "unary_expr", "primary_expr", "unary_op", "const", "assign", "if_stmt",
  "$@3", "$@4", "$@5", "elif_stmt", "$@6", "$@7", "$@8", "else_stmt",
  "switch_stmt", "$@9", "$@10", "$@11", "case_stmt_list", "case_stmt",
  "$@12", "$@13", "default_stmt", "while_loop_stmt", "$@14", "$@15",
  "for_loop_stmt", "$@16", "$@17", "$@18", "func_call", "arg_list", "arg", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF (-53)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -53,     4,    30,   -53,   -53,    61,   -53,   -53,   -53,     2,
      24,    85,   -53,   192,   -53,   -27,   -53,   -53,   -53,   -53,
     -53,   192,   -53,    -5,   -53,   -53,     7,     8,    35,    85,
     -53,    32,    64,    -2,   -53,   -53,   -53,    -1,   -53,    34,
     -53,   -53,   -53,   -53,   -53,    42,    47,   298,   192,   192,
     214,    49,   -53,    50,    51,    69,   -53,   -53,   -53,   -53,
     -11,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   -53,   -53,   -53,
     -53,    61,   298,    53,    48,   298,   -53,    78,   192,   192,
      43,    57,   -53,   192,    22,    22,   129,   129,    22,    22,
     334,   316,    45,    45,   -53,   -53,   -53,   385,   352,   370,
      -4,   -53,    79,   -53,   192,   -53,   235,   256,   -53,   150,
     -53,    61,    63,   -53,    67,   -53,   -53,   192,   -53,   -53,
      66,    71,    72,    75,   170,    62,    59,    85,    85,   -53,
     100,   -53,   -53,    59,    81,    84,    69,   105,    88,    76,
     -53,   -53,   -53,    91,   -53,    10,    86,    90,    83,   -53,
     -53,    85,   -53,   -53,    80,    87,    95,   -53,   106,    96,
     -53,    85,    99,   192,    85,   104,    85,   277,   107,   -53,
     -53,   -53,   -53,   111,    85,   119,   -53,    83,   -53
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     5,     1,     3,     0,    29,    31,    30,     0,
       0,    15,     7,     0,    60,    53,    58,    56,    57,    59,
      61,     0,    74,     0,    63,    85,     0,     0,     0,    15,
      16,     0,     0,     0,    50,    48,    49,     0,    54,     0,
      20,    25,    21,    22,    51,     0,    53,    28,    95,     0,
       0,     0,    23,     0,     0,     0,    24,     6,    14,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,    53,    52,
      17,    11,    96,     0,    94,    62,    55,     0,     0,     0,
       0,     0,    26,     0,    36,    37,    40,    41,    39,    38,
      42,    43,    32,    33,    35,    34,    44,    45,    46,    47,
       0,    10,     0,    92,    95,    75,     0,     0,    88,     0,
       8,     0,    12,    93,     0,    64,    86,     0,    27,     9,
       0,     0,     0,     0,     0,     0,    79,    15,    15,    89,
       0,    80,    76,    79,     0,     0,     0,     0,     0,    84,
      78,    65,    87,     0,    13,     0,     0,     0,    71,    90,
      81,    15,    77,    67,    73,     0,     0,    83,     0,     0,
      66,    15,     0,     0,    15,     0,    15,     0,     0,    91,
      82,    68,    72,     0,    15,     0,    69,    71,    70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,    36,   -28,
     -53,   -53,   -53,    -3,   -13,   -53,   -53,   118,   -53,     3,
     -52,   -53,   -53,   -53,   -53,   -18,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,    16,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,    65,   -53
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,     9,    45,   110,   111,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    53,   132,   158,   164,   168,   183,   187,   170,
      41,    51,   124,   149,   142,   143,   148,   166,   157,    42,
      54,   133,    43,   127,   146,   165,    44,    83,    84
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    58,    10,    91,     3,    48,    14,    78,    50,    61,
      62,    63,    64,    65,    66,    67,    68,    14,    69,    70,
      71,    72,    73,    74,    75,    49,    76,   120,    92,    20,
      -2,    21,    12,   121,    52,    82,    85,    77,    11,    55,
      20,    93,    69,    70,    71,    72,    73,    56,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,     6,     7,     8,    71,    72,    73,
      57,    59,    60,    80,    81,   116,   117,    90,   112,    48,
     119,    87,    88,    89,   113,   114,   115,   122,     6,     7,
       8,    13,    14,    15,   153,    49,   118,   130,   131,   135,
     140,    82,   141,   147,    16,    17,    18,   136,   137,   144,
     145,   138,    19,   154,   134,    20,   151,    21,   112,   152,
     155,   156,   159,   171,   161,   162,   172,    22,   169,    23,
     163,    24,   174,   167,    25,    26,    27,   176,   173,   179,
      61,    62,   182,   175,    65,    66,   178,   184,   180,    69,
      70,    71,    72,    73,   186,    79,   185,   129,   160,   150,
     177,    61,    62,    63,    64,    65,    66,    67,    68,   188,
      69,    70,    71,    72,    73,    74,    75,     0,    76,   123,
       0,    61,    62,    63,    64,    65,    66,    67,    68,   128,
      69,    70,    71,    72,    73,    74,    75,     0,    76,    14,
      46,     0,     0,     0,     0,     0,     0,     0,     0,   139,
       0,    16,    17,    18,     0,     0,     0,     0,     0,    19,
       0,     0,    20,     0,    21,    61,    62,    63,    64,    65,
      66,    67,    68,     0,    69,    70,    71,    72,    73,    74,
      75,     0,    76,     0,     0,    86,    61,    62,    63,    64,
      65,    66,    67,    68,     0,    69,    70,    71,    72,    73,
      74,    75,     0,    76,     0,     0,   125,    61,    62,    63,
      64,    65,    66,    67,    68,     0,    69,    70,    71,    72,
      73,    74,    75,     0,    76,     0,     0,   126,    61,    62,
      63,    64,    65,    66,    67,    68,     0,    69,    70,    71,
      72,    73,    74,    75,     0,    76,     0,     0,   181,    61,
      62,    63,    64,    65,    66,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,     0,    76,    61,    62,    63,
      64,    65,    66,    67,     0,     0,    69,    70,    71,    72,
      73,    74,    75,     0,    76,    61,    62,    63,    64,    65,
      66,     0,     0,     0,    69,    70,    71,    72,    73,    74,
      75,     0,    76,    61,    62,    63,    64,    65,    66,     0,
       0,     0,    69,    70,    71,    72,    73,    74,     0,     0,
      76,    61,    62,    63,    64,    65,    66,     0,     0,     0,
      69,    70,    71,    72,    73,    74,    61,    62,    63,    64,
      65,    66,     0,     0,     0,    69,    70,    71,    72,    73
};

static const yytype_int16 yycheck[] =
{
      13,    29,     5,    55,     0,    32,     7,     8,    21,    11,
      12,    13,    14,    15,    16,    17,    18,     7,    20,    21,
      22,    23,    24,    25,    26,    52,    28,    31,    39,    30,
       0,    32,     8,    37,    39,    48,    49,    39,    36,    32,
      30,    52,    20,    21,    22,    23,    24,    39,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,     3,     4,     5,    22,    23,    24,
      35,    39,     8,    39,    32,    88,    89,     8,    81,    32,
      93,    32,    32,    32,    31,    37,     8,     8,     3,     4,
       5,     6,     7,     8,   146,    52,    39,    34,    31,    33,
      38,   114,    43,     3,    19,    20,    21,    36,    36,   137,
     138,    36,    27,     8,   127,    30,    35,    32,   121,    35,
      32,    45,    31,    36,    38,    35,    31,    42,    48,    44,
      47,    46,    36,   161,    49,    50,    51,    38,    32,    35,
      11,    12,    35,   171,    15,    16,   174,    36,   176,    20,
      21,    22,    23,    24,    35,    37,   184,   121,   155,   143,
     173,    11,    12,    13,    14,    15,    16,    17,    18,   187,
      20,    21,    22,    23,    24,    25,    26,    -1,    28,   114,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    39,
      20,    21,    22,    23,    24,    25,    26,    -1,    28,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    30,    -1,    32,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    -1,    -1,    31,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      25,    26,    -1,    28,    -1,    -1,    31,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    -1,    -1,    31,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    -1,    -1,    31,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    -1,    28,    11,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    11,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,    11,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    20,    21,    22,    23,    24
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    54,    55,     0,    56,    57,     3,     4,     5,    58,
      66,    36,     8,     6,     7,     8,    19,    20,    21,    27,
      30,    32,    42,    44,    46,    49,    50,    51,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    83,    92,    95,    99,    59,     8,    67,    32,    52,
      67,    84,    39,    75,    93,    32,    39,    35,    62,    39,
       8,    11,    12,    13,    14,    15,    16,    17,    18,    20,
      21,    22,    23,    24,    25,    26,    28,    39,     8,    70,
      39,    32,    67,   100,   101,    67,    31,    32,    32,    32,
       8,    73,    39,    52,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      60,    61,    66,    31,    37,     8,    67,    67,    39,    67,
      31,    37,     8,   100,    85,    31,    31,    96,    39,    61,
      34,    31,    76,    94,    67,    33,    36,    36,    36,    39,
      38,    43,    87,    88,    62,    62,    97,     3,    89,    86,
      87,    35,    35,    73,     8,    32,    45,    91,    77,    31,
      72,    38,    35,    47,    78,    98,    90,    62,    79,    48,
      82,    36,    31,    32,    36,    62,    38,    67,    62,    35,
      62,    31,    35,    80,    36,    62,    35,    81,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    55,    57,    56,    59,    58,    60,
      60,    60,    61,    61,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    65,    66,
      66,    66,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    68,    69,    70,    70,    70,    71,    71,    71,    71,
      72,    72,    73,    75,    76,    77,    74,    79,    80,    81,
      78,    78,    82,    82,    84,    85,    86,    83,    87,    87,
      89,    90,    88,    91,    91,    93,    94,    92,    96,    97,
      98,    95,    99,   100,   100,   100,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     0,     5,     0,     6,     3,
       1,     0,     2,     7,     2,     0,     1,     2,     2,     2,
       1,     1,     1,     2,     2,     1,     3,     5,     2,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     0,     0,     0,    12,     0,     0,     0,
      11,     0,     4,     0,     0,     0,     0,    11,     2,     0,
       0,     0,     8,     3,     0,     0,     0,     9,     0,     0,
       0,    14,     4,     3,     1,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
  case 2:
#line 103 "parser.y"
                              {}
#line 1662 "y.tab.c"
    break;

  case 3:
#line 105 "parser.y"
                                   {}
#line 1668 "y.tab.c"
    break;

  case 5:
#line 109 "parser.y"
                    {
                        func_table[func_ind].count = 0;
                    }
#line 1676 "y.tab.c"
    break;

  case 6:
#line 112 "parser.y"
                                                {
                        func_ind++; 
                        tac.push_back("end:\n");
                    }
#line 1685 "y.tab.c"
    break;

  case 7:
#line 117 "parser.y"
                                 {tac.push_back(string((yyvsp[0].node).lexeme) + ":"); sprintf(curr_func_name, "%s", (yyvsp[0].node).lexeme);}
#line 1691 "y.tab.c"
    break;

  case 8:
#line 117 "parser.y"
                                                                                                                                      {

                        strcpy((yyval.node).lexeme, (yyvsp[-4].node).lexeme);
                        
                        sprintf(func_table[func_ind].name, "%s" ,(yyvsp[-4].node).lexeme);
                        sprintf(func_table[func_ind].type, "%s", (yyvsp[-5].node).type);
                        func_table[func_ind].num_of_param = (yyvsp[-1].node).nParams;


                        // checking for duplicate function names
                        for(int i=0; i<func_ind; i++){
                            if(strcmp(func_table[i].name, func_table[func_ind].name) == 0){
                                printf("Error: Duplicate function name %s", func_table[func_ind].name);
                            }
                        }
                    }
#line 1712 "y.tab.c"
    break;

  case 9:
#line 134 "parser.y"
                                           {
                        (yyval.node).nParams = (yyvsp[-2].node).nParams + 1;
                    }
#line 1720 "y.tab.c"
    break;

  case 10:
#line 137 "parser.y"
                            {
                        (yyval.node).nParams = (yyvsp[0].node).nParams;
                    }
#line 1728 "y.tab.c"
    break;

  case 11:
#line 140 "parser.y"
                      {
                        (yyval.node).nParams = 0;
                    }
#line 1736 "y.tab.c"
    break;

  case 12:
#line 145 "parser.y"
                                 {
                        (yyval.node).nParams = 1;
                        strcpy((yyval.node).lexeme, (yyvsp[0].node).lexeme);
                    }
#line 1745 "y.tab.c"
    break;

  case 13:
#line 149 "parser.y"
                                                      {
                        (yyval.node).nParams = 1;                        
                    }
#line 1753 "y.tab.c"
    break;

  case 23:
#line 165 "parser.y"
                                 {
                        if(!loop_break.empty()){
                            tac.push_back("GOTO L" + to_string(loop_break.top()));
                        }
                    }
#line 1763 "y.tab.c"
    break;

  case 24:
#line 170 "parser.y"
                                    {
                        if(!loop_continue.empty()){
                            tac.push_back("GOTO L" + to_string(loop_continue.top()));
                        }
                    }
#line 1773 "y.tab.c"
    break;

  case 26:
#line 178 "parser.y"
                                      {
                        strcpy((yyvsp[-1].node).type, (yyvsp[-2].node).type);
                        tac.push_back("- " + string((yyvsp[-2].node).type) + " " + string((yyvsp[-1].node).lexeme));
                        symbol_table[string((yyvsp[-1].node).lexeme)] = { string((yyvsp[-2].node).type), countn+1 };
                    }
#line 1783 "y.tab.c"
    break;

  case 27:
#line 183 "parser.y"
                                                    {
                        tac.push_back("- " + string((yyvsp[-4].node).type) + " " + string((yyvsp[-3].node).lexeme));
                        tac.push_back(string((yyvsp[-3].node).lexeme) + " = " + string((yyvsp[-1].node).lexeme) + " " + string((yyvsp[-4].node).type));
                        symbol_table[string((yyvsp[-3].node).lexeme)] = { string((yyvsp[-4].node).type), countn+1 };
                    }
#line 1793 "y.tab.c"
    break;

  case 28:
#line 190 "parser.y"
                                {
                        tac.push_back("return " + string((yyvsp[0].node).lexeme) + " " + string((yyvsp[0].node).type));
                    }
#line 1801 "y.tab.c"
    break;

  case 29:
#line 195 "parser.y"
                        {
                        strcpy((yyval.node).type, "INT");
                    }
#line 1809 "y.tab.c"
    break;

  case 30:
#line 198 "parser.y"
                            {
                        strcpy((yyval.node).type, "FLOAT");
                    }
#line 1817 "y.tab.c"
    break;

  case 31:
#line 201 "parser.y"
                           {
                        strcpy((yyval.node).type, "CHAR");
                    }
#line 1825 "y.tab.c"
    break;

  case 32:
#line 208 "parser.y"
                                      {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1833 "y.tab.c"
    break;

  case 33:
#line 211 "parser.y"
                                         {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1841 "y.tab.c"
    break;

  case 34:
#line 214 "parser.y"
                                         {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1849 "y.tab.c"
    break;

  case 35:
#line 217 "parser.y"
                                       {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1857 "y.tab.c"
    break;

  case 36:
#line 220 "parser.y"
                                   {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1865 "y.tab.c"
    break;

  case 37:
#line 223 "parser.y"
                                   {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1873 "y.tab.c"
    break;

  case 38:
#line 226 "parser.y"
                                   {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1881 "y.tab.c"
    break;

  case 39:
#line 229 "parser.y"
                                   {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1889 "y.tab.c"
    break;

  case 40:
#line 232 "parser.y"
                                   {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1897 "y.tab.c"
    break;

  case 41:
#line 235 "parser.y"
                                   {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1905 "y.tab.c"
    break;

  case 42:
#line 238 "parser.y"
                                    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1913 "y.tab.c"
    break;

  case 43:
#line 241 "parser.y"
                                   {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1921 "y.tab.c"
    break;

  case 44:
#line 244 "parser.y"
                                       {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1929 "y.tab.c"
    break;

  case 45:
#line 247 "parser.y"
                                       {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1937 "y.tab.c"
    break;

  case 46:
#line 250 "parser.y"
                                      {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1945 "y.tab.c"
    break;

  case 47:
#line 253 "parser.y"
                                    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1953 "y.tab.c"
    break;

  case 48:
#line 256 "parser.y"
                                 {
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        sprintf((yyval.node).lexeme, "%s", (yyvsp[0].node).lexeme);
                    }
#line 1963 "y.tab.c"
    break;

  case 49:
#line 261 "parser.y"
                                   {
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        strcpy((yyval.node).lexeme, (yyvsp[0].node).lexeme);
                    }
#line 1973 "y.tab.c"
    break;

  case 50:
#line 266 "parser.y"
                                   {
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        sprintf((yyval.node).lexeme, "%s", (yyvsp[0].node).lexeme);
                    }
#line 1982 "y.tab.c"
    break;

  case 51:
#line 271 "parser.y"
                              {
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        sprintf((yyval.node).lexeme, "%s", (yyvsp[0].node).lexeme);
                    }
#line 1991 "y.tab.c"
    break;

  case 52:
#line 281 "parser.y"
                                          {
                        // strcpy($$.type, $2.type);
                        // tac.push_back(string($$.lexeme) + " = " + string($1.lexeme) + " " + string($2.lexeme) + " " + string($$.type));
                    }
#line 2000 "y.tab.c"
    break;

  case 53:
#line 287 "parser.y"
                       {
                        if(check_declaration(string((yyvsp[0].node).lexeme))){
                            strcpy((yyval.node).type, symbol_table[string((yyvsp[0].node).lexeme)].data_type.c_str());
                            sprintf((yyval.node).lexeme, "@t%d", variable_count++);
                            tac.push_back(string((yyval.node).lexeme) + " = " + string((yyvsp[0].node).lexeme) + " " + string((yyval.node).type));
                        }
                    }
#line 2012 "y.tab.c"
    break;

  case 54:
#line 294 "parser.y"
                            {
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        sprintf((yyval.node).lexeme, "@t%d", variable_count++);
                        tac.push_back(string((yyval.node).lexeme) + " = " + string((yyvsp[0].node).lexeme) + " " + string((yyval.node).type)); 
                    }
#line 2022 "y.tab.c"
    break;

  case 55:
#line 299 "parser.y"
                                 {
                        strcpy((yyval.node).type, (yyvsp[-1].node).type);
                        strcpy((yyval.node).lexeme, (yyvsp[-1].node).lexeme);
                    }
#line 2031 "y.tab.c"
    break;

  case 60:
#line 311 "parser.y"
                            {
                        strcpy((yyval.node).type, "INT");
                        strcpy((yyval.node).lexeme, (yyvsp[0].node).lexeme);
                    }
#line 2040 "y.tab.c"
    break;

  case 61:
#line 315 "parser.y"
                                {
                        strcpy((yyval.node).type, "CHAR");
                        strcpy((yyval.node).lexeme, (yyvsp[0].node).lexeme);
                    }
#line 2049 "y.tab.c"
    break;

  case 62:
#line 321 "parser.y"
                                   {
                        check_declaration(string((yyvsp[-2].node).lexeme));
                        tac.push_back(string((yyvsp[-2].node).lexeme) + " = " + string((yyvsp[0].node).lexeme) + " " + symbol_table[string((yyvsp[-2].node).lexeme)].data_type);
                    }
#line 2058 "y.tab.c"
    break;

  case 63:
#line 326 "parser.y"
                        {
                        sprintf((yyvsp[0].node).parentNext, "L%d", label_counter++);
                    }
#line 2066 "y.tab.c"
    break;

  case 64:
#line 329 "parser.y"
                               { 
                        tac.push_back("if ( " + string((yyvsp[-1].node).lexeme) + " != 0) GOTO L" + to_string(label_counter) + " else GOTO L" + to_string(label_counter+1));
                        sprintf((yyvsp[-1].node).if_body, "L%d", label_counter++);
                        sprintf((yyvsp[-1].node).else_body, "L%d", label_counter++); 
                        tac.push_back("LABEL " + string((yyvsp[-1].node).if_body) + " :");
                    }
#line 2077 "y.tab.c"
    break;

  case 65:
#line 335 "parser.y"
                                    {  
                        tac.push_back("GOTO " + string((yyvsp[-8].node).parentNext));
                        tac.push_back("LABEL " + string((yyvsp[-5].node).else_body) + ":");
                    }
#line 2086 "y.tab.c"
    break;

  case 66:
#line 339 "parser.y"
                                         {   
                        tac.push_back("LABEL " + string((yyvsp[-11].node).parentNext) + ":");
                    }
#line 2094 "y.tab.c"
    break;

  case 67:
#line 344 "parser.y"
                         {
                        string str = tac[tac.size()-2].substr(5);
                        char* hold = const_cast<char*>(str.c_str());
                        sprintf((yyvsp[0].node).parentNext, "%s", hold);
                    }
#line 2104 "y.tab.c"
    break;

  case 68:
#line 349 "parser.y"
                               {
                        // sprintf(icg[ic_idx++], "\nif (%s != 0) GOTO L%d else GOTO L%d\n", $4.token, label, label+1);
                        tac.push_back("if (" + string((yyvsp[-1].node).lexeme) + " != 0) GOTO L" + to_string(label_counter) + " else GOTO L" + to_string(label_counter+1));
                        sprintf((yyvsp[-1].node).if_body, "L%d", label_counter++);
                        sprintf((yyvsp[-1].node).else_body, "L%d", label_counter++); 
                        tac.push_back("LABEL " + string((yyvsp[-1].node).if_body) + ":");
                    }
#line 2116 "y.tab.c"
    break;

  case 69:
#line 356 "parser.y"
                                    {
                        tac.push_back("GOTO " + string((yyvsp[-8].node).parentNext));
                        tac.push_back("LABEL " + string((yyvsp[-5].node).else_body) + ":");
                    }
#line 2125 "y.tab.c"
    break;

  case 74:
#line 368 "parser.y"
                           {
                        int temp_label = label_counter;
                        loop_break.push(temp_label);
                        sprintf((yyvsp[0].node).parentNext, "L%d", label_counter++);
                    }
#line 2135 "y.tab.c"
    break;

  case 75:
#line 373 "parser.y"
                          {
                        temp_index = variable_count;
                        tac.push_back("@t" + to_string(variable_count++) + " = " + string((yyvsp[0].node).lexeme));
                    }
#line 2144 "y.tab.c"
    break;

  case 76:
#line 377 "parser.y"
                                         {
                        // strcpy($8.id, $4.lexeme);
                        // strcpy($8.parentNext, $1.parentNext);
                    }
#line 2153 "y.tab.c"
    break;

  case 77:
#line 381 "parser.y"
                                    {
                        tac.push_back("Label " + string((yyvsp[-10].node).parentNext));
                        loop_break.pop();
                    }
#line 2162 "y.tab.c"
    break;

  case 78:
#line 387 "parser.y"
                                             {
                        strcpy((yyvsp[-1].node).id, (yyval.node).id);
                        strcpy((yyvsp[-1].node).parentNext, (yyval.node).parentNext);
                    }
#line 2171 "y.tab.c"
    break;

  case 80:
#line 394 "parser.y"
                         {
                        // tac.push_back("LABEL " + string($4.if_body) + ":");
                    }
#line 2179 "y.tab.c"
    break;

  case 81:
#line 397 "parser.y"
                             {
                        char* hold = const_cast<char*>(to_string(variable_count).c_str());
                        sprintf((yyvsp[0].node).temp, "%s", hold);
                        tac.push_back("@t" + to_string(variable_count++) + " = " + (yyvsp[0].node).lexeme);
                        tac.push_back("@t" + to_string(variable_count++) + " = " + "@t" + to_string(temp_index) + " == " + "@t" + string((yyvsp[0].node).temp));
                        tac.push_back("if ( @t" + to_string(variable_count-1) + " != 0) GOTO L" + to_string(label_counter) + " else GOTO L" + to_string(label_counter+1));
                        tac.push_back("Label L" + to_string(label_counter) + ":");
                        sprintf((yyvsp[0].node).case_body, "L%d", label_counter++);
                        sprintf((yyvsp[0].node).parentNext, "L%d", label_counter++);
                    }
#line 2194 "y.tab.c"
    break;

  case 82:
#line 407 "parser.y"
                                       {
                        // tac.push_back("Label " + string($4.parentNext) + ":");
                        tac.push_back("Label " + string((yyvsp[-4].node).parentNext) + ":");
                    }
#line 2203 "y.tab.c"
    break;

  case 85:
#line 416 "parser.y"
                          {
                        sprintf((yyvsp[0].node).loop_body, "L%d", label_counter); 
                        loop_continue.push(label_counter++);
                        tac.push_back("\nLABEL " + string((yyvsp[0].node).loop_body) + ":");
                    }
#line 2213 "y.tab.c"
    break;

  case 86:
#line 422 "parser.y"
                    {
                        sprintf((yyvsp[-1].node).if_body, "L%d", label_counter++); 

                        loop_break.push(label_counter);
                        sprintf((yyvsp[-1].node).else_body, "L%d", label_counter++); 

                        tac.push_back("\nif " + string((yyvsp[-1].node).lexeme) + " GOTO " + string((yyvsp[-1].node).if_body) + " else GOTO " + string((yyvsp[-1].node).else_body));
                        tac.push_back("\nLABEL " + string((yyvsp[-1].node).if_body) + ":");
                        
                    }
#line 2228 "y.tab.c"
    break;

  case 87:
#line 433 "parser.y"
                    {
                        tac.push_back("GOTO " + string((yyvsp[-8].node).loop_body));
                        tac.push_back("\nLABEL " + string((yyvsp[-5].node).else_body) + ":");
                        loop_continue.pop();
                        loop_break.pop();
                    }
#line 2239 "y.tab.c"
    break;

  case 88:
#line 440 "parser.y"
                                       {
                        sprintf((yyvsp[-3].node).loop_body, "L%d", label_counter++); 
                        tac.push_back("\nLABEL " + string((yyvsp[-3].node).loop_body) + ":");
                    }
#line 2248 "y.tab.c"
    break;

  case 89:
#line 444 "parser.y"
                              {  
                        sprintf((yyvsp[-1].node).if_body, "L%d", label_counter++); 

                        loop_break.push(label_counter);
                        sprintf((yyvsp[-1].node).else_body, "L%d", label_counter++); 

                        tac.push_back("\nif " + string((yyvsp[-1].node).lexeme) + " GOTO " + string((yyvsp[-1].node).if_body) + " else GOTO " + string((yyvsp[-1].node).else_body));

                        sprintf((yyvsp[-1].node).loop_body, "L%d", label_counter); 
                        loop_continue.push(label_counter++);
                        tac.push_back("\nLABEL " + string((yyvsp[-1].node).loop_body) + ":");
                    }
#line 2265 "y.tab.c"
    break;

  case 90:
#line 456 "parser.y"
                              {
                        tac.push_back("GOTO " + string((yyvsp[-9].node).loop_body));
                        tac.push_back("\nLABEL " + string((yyvsp[-4].node).if_body) + ":");
                    }
#line 2274 "y.tab.c"
    break;

  case 91:
#line 460 "parser.y"
                                    {
                        tac.push_back("GOTO " + string((yyvsp[-8].node).loop_body));
                        tac.push_back("\nLABEL " + string((yyvsp[-8].node).else_body) + ":");
                        loop_continue.pop();
                        loop_break.pop();
                    }
#line 2285 "y.tab.c"
    break;

  case 92:
#line 467 "parser.y"
                                       {
                        sprintf((yyval.node).lexeme, (yyvsp[-3].node).lexeme);        
                        sprintf((yyval.node).lexeme, "@t%d", variable_count);
                        variable_count++;

                        // checking if function is declared
                        bool flag = false;
                        int ind = -1;
                        for(int i=0; i<func_ind; i++){
                            if((strcmp(func_table[i].name, (yyvsp[-3].node).lexeme) == 0) || (strcmp(curr_func_name, (yyvsp[-3].node).lexeme)==0)){
                                ind = i;
                                curr_func_ind = i;
                                flag = true;
                                break;
                            }
                        }
                    
                        if(!flag && (strcmp(curr_func_name, (yyvsp[-3].node).lexeme)!=0)){
                            printf("ERROR in line %d : Function %s is not declared\n", countn+1, (yyvsp[-3].node).lexeme);
                        }
                        tac.push_back(string((yyval.node).lexeme) + " = @call " + string((yyvsp[-3].node).lexeme) + " " + to_string(func_table[ind].num_of_param));
                    
                        param_ind = 0;
                        func_arg_ind = 0;
                        func_arg = 0;
                    }
#line 2316 "y.tab.c"
    break;

  case 94:
#line 496 "parser.y"
                          {}
#line 2322 "y.tab.c"
    break;

  case 95:
#line 497 "parser.y"
                      {}
#line 2328 "y.tab.c"
    break;

  case 96:
#line 500 "parser.y"
                         {
                        // check argument types
                        tac.push_back("@param " + to_string(param_ind++) + " " + string((yyvsp[0].node).lexeme) + " " + string((yyvsp[0].node).type));

                        // if(strcmp($1.type, func_table[curr_func_ind].st[func_arg_ind++].data_type) != 0){
                        //     printf("Error in function call %s: variable type is not matched", func_table[curr_func_ind].name);
                        //     exit(0);
                        // }
                        func_arg++;
                    }
#line 2343 "y.tab.c"
    break;


#line 2347 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 512 "parser.y"


int main(int argc, char *argv[]) {
    // yydebug = 0;
    yyparse();
    for(auto x: tac)
        cout << x << endl;
    for(auto item: sem_errors)
        cout << item << endl;
    for(auto item: symbol_table)
        cout << item.first << "-->" << item.second.data_type << endl;
}

bool check_declaration(string variable){
    if(symbol_table.find(variable) == symbol_table.end()){
        sem_errors.push_back("Variable not declared in line " + to_string(countn+1) + " before usage.");
        return false;
    }
    return true;
}

void yyerror(const char* msg) {
    fprintf(stderr, "%s\n", msg);
    exit(1);
}


// Prepend # to label names
