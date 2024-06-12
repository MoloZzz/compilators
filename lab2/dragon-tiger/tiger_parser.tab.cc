// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "tiger_parser.tab.hh"


// Unqualified %code blocks.
#line 35 "src/parser/tiger_parser.yy"

#include "parser_driver.hh"

#line 50 "tiger_parser.tab.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 142 "tiger_parser.tab.cc"

  /// Build a parser object.
  tiger_parser::tiger_parser (ParserDriver& driver_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      driver (driver_yyarg)
  {}

  tiger_parser::~tiger_parser ()
  {}

  tiger_parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  tiger_parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  tiger_parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  tiger_parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  tiger_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  tiger_parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  tiger_parser::symbol_kind_type
  tiger_parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  tiger_parser::stack_symbol_type::stack_symbol_type ()
  {}

  tiger_parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_decl: // decl
      case symbol_kind::S_varDecl: // varDecl
      case symbol_kind::S_funcDecl: // funcDecl
        value.YY_MOVE_OR_COPY< Decl * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_program: // program
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_intExpr: // intExpr
      case symbol_kind::S_stringExpr: // stringExpr
      case symbol_kind::S_var: // var
      case symbol_kind::S_callExpr: // callExpr
      case symbol_kind::S_negExpr: // negExpr
      case symbol_kind::S_opExpr: // opExpr
      case symbol_kind::S_assignExpr: // assignExpr
      case symbol_kind::S_whileExpr: // whileExpr
      case symbol_kind::S_forExpr: // forExpr
      case symbol_kind::S_breakExpr: // breakExpr
      case symbol_kind::S_letExpr: // letExpr
      case symbol_kind::S_seqExpr: // seqExpr
      case symbol_kind::S_ifThenExpr: // ifThenExpr
      case symbol_kind::S_ifThenElseExpr: // ifThenElseExpr
        value.YY_MOVE_OR_COPY< Expr * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ID: // "id"
      case symbol_kind::S_STRING: // "string"
        value.YY_MOVE_OR_COPY< Symbol > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_param: // param
        value.YY_MOVE_OR_COPY< VarDecl * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_typeannotation: // typeannotation
        value.YY_MOVE_OR_COPY< boost::optional<Symbol> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INT: // "integer"
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_decls: // decls
        value.YY_MOVE_OR_COPY< std::vector<Decl *> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_exprs: // exprs
      case symbol_kind::S_nonemptyexprs: // nonemptyexprs
      case symbol_kind::S_arguments: // arguments
      case symbol_kind::S_nonemptyarguments: // nonemptyarguments
        value.YY_MOVE_OR_COPY< std::vector<Expr *> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_params: // params
      case symbol_kind::S_nonemptyparams: // nonemptyparams
        value.YY_MOVE_OR_COPY< std::vector<VarDecl *> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  tiger_parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_decl: // decl
      case symbol_kind::S_varDecl: // varDecl
      case symbol_kind::S_funcDecl: // funcDecl
        value.move< Decl * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_program: // program
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_intExpr: // intExpr
      case symbol_kind::S_stringExpr: // stringExpr
      case symbol_kind::S_var: // var
      case symbol_kind::S_callExpr: // callExpr
      case symbol_kind::S_negExpr: // negExpr
      case symbol_kind::S_opExpr: // opExpr
      case symbol_kind::S_assignExpr: // assignExpr
      case symbol_kind::S_whileExpr: // whileExpr
      case symbol_kind::S_forExpr: // forExpr
      case symbol_kind::S_breakExpr: // breakExpr
      case symbol_kind::S_letExpr: // letExpr
      case symbol_kind::S_seqExpr: // seqExpr
      case symbol_kind::S_ifThenExpr: // ifThenExpr
      case symbol_kind::S_ifThenElseExpr: // ifThenElseExpr
        value.move< Expr * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ID: // "id"
      case symbol_kind::S_STRING: // "string"
        value.move< Symbol > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_param: // param
        value.move< VarDecl * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_typeannotation: // typeannotation
        value.move< boost::optional<Symbol> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INT: // "integer"
        value.move< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_decls: // decls
        value.move< std::vector<Decl *> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_exprs: // exprs
      case symbol_kind::S_nonemptyexprs: // nonemptyexprs
      case symbol_kind::S_arguments: // arguments
      case symbol_kind::S_nonemptyarguments: // nonemptyarguments
        value.move< std::vector<Expr *> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_params: // params
      case symbol_kind::S_nonemptyparams: // nonemptyparams
        value.move< std::vector<VarDecl *> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  tiger_parser::stack_symbol_type&
  tiger_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_decl: // decl
      case symbol_kind::S_varDecl: // varDecl
      case symbol_kind::S_funcDecl: // funcDecl
        value.copy< Decl * > (that.value);
        break;

      case symbol_kind::S_program: // program
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_intExpr: // intExpr
      case symbol_kind::S_stringExpr: // stringExpr
      case symbol_kind::S_var: // var
      case symbol_kind::S_callExpr: // callExpr
      case symbol_kind::S_negExpr: // negExpr
      case symbol_kind::S_opExpr: // opExpr
      case symbol_kind::S_assignExpr: // assignExpr
      case symbol_kind::S_whileExpr: // whileExpr
      case symbol_kind::S_forExpr: // forExpr
      case symbol_kind::S_breakExpr: // breakExpr
      case symbol_kind::S_letExpr: // letExpr
      case symbol_kind::S_seqExpr: // seqExpr
      case symbol_kind::S_ifThenExpr: // ifThenExpr
      case symbol_kind::S_ifThenElseExpr: // ifThenElseExpr
        value.copy< Expr * > (that.value);
        break;

      case symbol_kind::S_ID: // "id"
      case symbol_kind::S_STRING: // "string"
        value.copy< Symbol > (that.value);
        break;

      case symbol_kind::S_param: // param
        value.copy< VarDecl * > (that.value);
        break;

      case symbol_kind::S_typeannotation: // typeannotation
        value.copy< boost::optional<Symbol> > (that.value);
        break;

      case symbol_kind::S_INT: // "integer"
        value.copy< int > (that.value);
        break;

      case symbol_kind::S_decls: // decls
        value.copy< std::vector<Decl *> > (that.value);
        break;

      case symbol_kind::S_exprs: // exprs
      case symbol_kind::S_nonemptyexprs: // nonemptyexprs
      case symbol_kind::S_arguments: // arguments
      case symbol_kind::S_nonemptyarguments: // nonemptyarguments
        value.copy< std::vector<Expr *> > (that.value);
        break;

      case symbol_kind::S_params: // params
      case symbol_kind::S_nonemptyparams: // nonemptyparams
        value.copy< std::vector<VarDecl *> > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  tiger_parser::stack_symbol_type&
  tiger_parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_decl: // decl
      case symbol_kind::S_varDecl: // varDecl
      case symbol_kind::S_funcDecl: // funcDecl
        value.move< Decl * > (that.value);
        break;

      case symbol_kind::S_program: // program
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_intExpr: // intExpr
      case symbol_kind::S_stringExpr: // stringExpr
      case symbol_kind::S_var: // var
      case symbol_kind::S_callExpr: // callExpr
      case symbol_kind::S_negExpr: // negExpr
      case symbol_kind::S_opExpr: // opExpr
      case symbol_kind::S_assignExpr: // assignExpr
      case symbol_kind::S_whileExpr: // whileExpr
      case symbol_kind::S_forExpr: // forExpr
      case symbol_kind::S_breakExpr: // breakExpr
      case symbol_kind::S_letExpr: // letExpr
      case symbol_kind::S_seqExpr: // seqExpr
      case symbol_kind::S_ifThenExpr: // ifThenExpr
      case symbol_kind::S_ifThenElseExpr: // ifThenElseExpr
        value.move< Expr * > (that.value);
        break;

      case symbol_kind::S_ID: // "id"
      case symbol_kind::S_STRING: // "string"
        value.move< Symbol > (that.value);
        break;

      case symbol_kind::S_param: // param
        value.move< VarDecl * > (that.value);
        break;

      case symbol_kind::S_typeannotation: // typeannotation
        value.move< boost::optional<Symbol> > (that.value);
        break;

      case symbol_kind::S_INT: // "integer"
        value.move< int > (that.value);
        break;

      case symbol_kind::S_decls: // decls
        value.move< std::vector<Decl *> > (that.value);
        break;

      case symbol_kind::S_exprs: // exprs
      case symbol_kind::S_nonemptyexprs: // nonemptyexprs
      case symbol_kind::S_arguments: // arguments
      case symbol_kind::S_nonemptyarguments: // nonemptyarguments
        value.move< std::vector<Expr *> > (that.value);
        break;

      case symbol_kind::S_params: // params
      case symbol_kind::S_nonemptyparams: // nonemptyparams
        value.move< std::vector<VarDecl *> > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  tiger_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  tiger_parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  tiger_parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  tiger_parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  tiger_parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  tiger_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  tiger_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  tiger_parser::debug_level_type
  tiger_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  tiger_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  tiger_parser::state_type
  tiger_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  tiger_parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  tiger_parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  tiger_parser::operator() ()
  {
    return parse ();
  }

  int
  tiger_parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    // User initialization code.
#line 26 "src/parser/tiger_parser.yy"
{
  // Initialize the initial location.
  yyla.location.begin.filename = yyla.location.end.filename = &driver.file;
}

#line 640 "tiger_parser.tab.cc"


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_decl: // decl
      case symbol_kind::S_varDecl: // varDecl
      case symbol_kind::S_funcDecl: // funcDecl
        yylhs.value.emplace< Decl * > ();
        break;

      case symbol_kind::S_program: // program
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_intExpr: // intExpr
      case symbol_kind::S_stringExpr: // stringExpr
      case symbol_kind::S_var: // var
      case symbol_kind::S_callExpr: // callExpr
      case symbol_kind::S_negExpr: // negExpr
      case symbol_kind::S_opExpr: // opExpr
      case symbol_kind::S_assignExpr: // assignExpr
      case symbol_kind::S_whileExpr: // whileExpr
      case symbol_kind::S_forExpr: // forExpr
      case symbol_kind::S_breakExpr: // breakExpr
      case symbol_kind::S_letExpr: // letExpr
      case symbol_kind::S_seqExpr: // seqExpr
      case symbol_kind::S_ifThenExpr: // ifThenExpr
      case symbol_kind::S_ifThenElseExpr: // ifThenElseExpr
        yylhs.value.emplace< Expr * > ();
        break;

      case symbol_kind::S_ID: // "id"
      case symbol_kind::S_STRING: // "string"
        yylhs.value.emplace< Symbol > ();
        break;

      case symbol_kind::S_param: // param
        yylhs.value.emplace< VarDecl * > ();
        break;

      case symbol_kind::S_typeannotation: // typeannotation
        yylhs.value.emplace< boost::optional<Symbol> > ();
        break;

      case symbol_kind::S_INT: // "integer"
        yylhs.value.emplace< int > ();
        break;

      case symbol_kind::S_decls: // decls
        yylhs.value.emplace< std::vector<Decl *> > ();
        break;

      case symbol_kind::S_exprs: // exprs
      case symbol_kind::S_nonemptyexprs: // nonemptyexprs
      case symbol_kind::S_arguments: // arguments
      case symbol_kind::S_nonemptyarguments: // nonemptyarguments
        yylhs.value.emplace< std::vector<Expr *> > ();
        break;

      case symbol_kind::S_params: // params
      case symbol_kind::S_nonemptyparams: // nonemptyparams
        yylhs.value.emplace< std::vector<VarDecl *> > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // program: expr
#line 120 "src/parser/tiger_parser.yy"
              { driver.result_ast = yystack_[0].value.as < Expr * > (); }
#line 836 "tiger_parser.tab.cc"
    break;

  case 3: // decl: varDecl
#line 123 "src/parser/tiger_parser.yy"
              { yylhs.value.as < Decl * > () = yystack_[0].value.as < Decl * > (); }
#line 842 "tiger_parser.tab.cc"
    break;

  case 4: // decl: funcDecl
#line 124 "src/parser/tiger_parser.yy"
              { yylhs.value.as < Decl * > () = yystack_[0].value.as < Decl * > (); }
#line 848 "tiger_parser.tab.cc"
    break;

  case 5: // expr: stringExpr
#line 127 "src/parser/tiger_parser.yy"
                 { yylhs.value.as < Expr * > () = yystack_[0].value.as < Expr * > (); }
#line 854 "tiger_parser.tab.cc"
    break;

  case 6: // expr: seqExpr
#line 128 "src/parser/tiger_parser.yy"
             { yylhs.value.as < Expr * > () = yystack_[0].value.as < Expr * > (); }
#line 860 "tiger_parser.tab.cc"
    break;

  case 7: // expr: var
#line 129 "src/parser/tiger_parser.yy"
         { yylhs.value.as < Expr * > () = yystack_[0].value.as < Expr * > (); }
#line 866 "tiger_parser.tab.cc"
    break;

  case 8: // expr: callExpr
#line 130 "src/parser/tiger_parser.yy"
              { yylhs.value.as < Expr * > () = yystack_[0].value.as < Expr * > (); }
#line 872 "tiger_parser.tab.cc"
    break;

  case 9: // expr: opExpr
#line 131 "src/parser/tiger_parser.yy"
            { yylhs.value.as < Expr * > () = yystack_[0].value.as < Expr * > (); }
#line 878 "tiger_parser.tab.cc"
    break;

  case 10: // expr: negExpr
#line 132 "src/parser/tiger_parser.yy"
             { yylhs.value.as < Expr * > () = yystack_[0].value.as < Expr * > (); }
#line 884 "tiger_parser.tab.cc"
    break;

  case 11: // expr: assignExpr
#line 133 "src/parser/tiger_parser.yy"
                { yylhs.value.as < Expr * > () = yystack_[0].value.as < Expr * > (); }
#line 890 "tiger_parser.tab.cc"
    break;

  case 12: // expr: whileExpr
#line 134 "src/parser/tiger_parser.yy"
               { yylhs.value.as < Expr * > () = yystack_[0].value.as < Expr * > (); }
#line 896 "tiger_parser.tab.cc"
    break;

  case 13: // expr: forExpr
#line 135 "src/parser/tiger_parser.yy"
             { yylhs.value.as < Expr * > () = yystack_[0].value.as < Expr * > (); }
#line 902 "tiger_parser.tab.cc"
    break;

  case 14: // expr: breakExpr
#line 136 "src/parser/tiger_parser.yy"
               { yylhs.value.as < Expr * > () = yystack_[0].value.as < Expr * > (); }
#line 908 "tiger_parser.tab.cc"
    break;

  case 15: // expr: letExpr
#line 137 "src/parser/tiger_parser.yy"
             { yylhs.value.as < Expr * > () = yystack_[0].value.as < Expr * > (); }
#line 914 "tiger_parser.tab.cc"
    break;

  case 16: // expr: intExpr
#line 138 "src/parser/tiger_parser.yy"
             { yylhs.value.as < Expr * > () = yystack_[0].value.as < Expr * > (); }
#line 920 "tiger_parser.tab.cc"
    break;

  case 17: // expr: ifThenExpr
#line 139 "src/parser/tiger_parser.yy"
                { yylhs.value.as < Expr * > () = yystack_[0].value.as < Expr * > (); }
#line 926 "tiger_parser.tab.cc"
    break;

  case 18: // expr: ifThenElseExpr
#line 140 "src/parser/tiger_parser.yy"
                    { yylhs.value.as < Expr * > () = yystack_[0].value.as < Expr * > (); }
#line 932 "tiger_parser.tab.cc"
    break;

  case 19: // varDecl: "var" "id" typeannotation ":=" expr
#line 144 "src/parser/tiger_parser.yy"
  { yylhs.value.as < Decl * > () = new VarDecl(yystack_[4].location, yystack_[3].value.as < Symbol > (), yystack_[2].value.as < boost::optional<Symbol> > (), yystack_[0].value.as < Expr * > ()); }
#line 938 "tiger_parser.tab.cc"
    break;

  case 20: // funcDecl: "function" "id" "(" params ")" typeannotation "=" expr
#line 148 "src/parser/tiger_parser.yy"
  { yylhs.value.as < Decl * > () = new FunDecl(yystack_[7].location, yystack_[6].value.as < Symbol > (), yystack_[2].value.as < boost::optional<Symbol> > (), yystack_[4].value.as < std::vector<VarDecl *> > (), yystack_[0].value.as < Expr * > ()); }
#line 944 "tiger_parser.tab.cc"
    break;

  case 21: // intExpr: "integer"
#line 154 "src/parser/tiger_parser.yy"
  { yylhs.value.as < Expr * > () = new IntegerLiteral(yystack_[0].location, yystack_[0].value.as < int > ()); }
#line 950 "tiger_parser.tab.cc"
    break;

  case 22: // stringExpr: "string"
#line 158 "src/parser/tiger_parser.yy"
  { yylhs.value.as < Expr * > () = new StringLiteral(yystack_[0].location, yystack_[0].value.as < Symbol > ()); }
#line 956 "tiger_parser.tab.cc"
    break;

  case 23: // var: "id"
#line 162 "src/parser/tiger_parser.yy"
  { yylhs.value.as < Expr * > () = new Identifier(yystack_[0].location, yystack_[0].value.as < Symbol > ()); }
#line 962 "tiger_parser.tab.cc"
    break;

  case 24: // callExpr: "id" "(" arguments ")"
#line 166 "src/parser/tiger_parser.yy"
  { yylhs.value.as < Expr * > () = new FunCall(yystack_[3].location, yystack_[1].value.as < std::vector<Expr *> > (), yystack_[3].value.as < Symbol > ()); }
#line 968 "tiger_parser.tab.cc"
    break;

  case 25: // negExpr: "-" expr
#line 170 "src/parser/tiger_parser.yy"
  { yylhs.value.as < Expr * > () = new BinaryOperator(yystack_[1].location, new IntegerLiteral(yystack_[1].location, 0), yystack_[0].value.as < Expr * > (), o_minus); }
#line 974 "tiger_parser.tab.cc"
    break;

  case 26: // expr: expr '|' expr
#line 174 "src/parser/tiger_parser.yy"
                    {
  yylhs.value.as < Expr * > () = new ast::IfThenElse(yylhs.location, yystack_[2].value.as < Expr * > (), new ast::IfThenElse(yylhs.location, yystack_[0].value.as < Expr * > (), new ast::IntegerLiteral(yylhs.location, 1), new ast::IntegerLiteral(yylhs.location, 0)), new ast::IntegerLiteral(yylhs.location, 0));
}
#line 982 "tiger_parser.tab.cc"
    break;

  case 27: // opExpr: expr "+" expr
#line 182 "src/parser/tiger_parser.yy"
                         { yylhs.value.as < Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > (), o_plus); }
#line 988 "tiger_parser.tab.cc"
    break;

  case 28: // opExpr: expr "-" expr
#line 183 "src/parser/tiger_parser.yy"
                         { yylhs.value.as < Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > (), o_minus); }
#line 994 "tiger_parser.tab.cc"
    break;

  case 29: // opExpr: expr "*" expr
#line 184 "src/parser/tiger_parser.yy"
                         { yylhs.value.as < Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > (), o_times); }
#line 1000 "tiger_parser.tab.cc"
    break;

  case 30: // opExpr: expr "/" expr
#line 185 "src/parser/tiger_parser.yy"
                         { yylhs.value.as < Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > (), o_divide); }
#line 1006 "tiger_parser.tab.cc"
    break;

  case 31: // opExpr: expr "=" expr
#line 186 "src/parser/tiger_parser.yy"
                         { yylhs.value.as < Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > (), o_eq); }
#line 1012 "tiger_parser.tab.cc"
    break;

  case 32: // opExpr: expr "<>" expr
#line 187 "src/parser/tiger_parser.yy"
                         { yylhs.value.as < Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > (), o_neq); }
#line 1018 "tiger_parser.tab.cc"
    break;

  case 33: // opExpr: expr "<" expr
#line 188 "src/parser/tiger_parser.yy"
                         { yylhs.value.as < Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > (), o_lt); }
#line 1024 "tiger_parser.tab.cc"
    break;

  case 34: // opExpr: expr ">" expr
#line 189 "src/parser/tiger_parser.yy"
                         { yylhs.value.as < Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > (), o_gt); }
#line 1030 "tiger_parser.tab.cc"
    break;

  case 35: // opExpr: expr "<=" expr
#line 190 "src/parser/tiger_parser.yy"
                         { yylhs.value.as < Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > (), o_le); }
#line 1036 "tiger_parser.tab.cc"
    break;

  case 36: // opExpr: expr ">=" expr
#line 191 "src/parser/tiger_parser.yy"
                         { yylhs.value.as < Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > (), o_ge); }
#line 1042 "tiger_parser.tab.cc"
    break;

  case 37: // opExpr: expr "&" expr
#line 192 "src/parser/tiger_parser.yy"
                         {
        yylhs.value.as < Expr * > () = new IfThenElse(yystack_[1].location, yystack_[2].value.as < Expr * > (),
                            new IfThenElse(yystack_[0].location, yystack_[0].value.as < Expr * > (), new IntegerLiteral(nl, 1), new IntegerLiteral(nl, 0)),
                            new IntegerLiteral(nl, 0));
      }
#line 1052 "tiger_parser.tab.cc"
    break;

  case 38: // opExpr: expr "|" expr
#line 197 "src/parser/tiger_parser.yy"
                         {
        yylhs.value.as < Expr * > () = new IfThenElse(yystack_[1].location, yystack_[2].value.as < Expr * > (),
                            new IntegerLiteral(nl, 1),
                            new IfThenElse(yystack_[0].location, yystack_[0].value.as < Expr * > (), new IntegerLiteral(nl, 1), new IntegerLiteral(nl, 0)));
      }
#line 1062 "tiger_parser.tab.cc"
    break;

  case 39: // opExpr: "if" expr "then" expr "else" expr
#line 202 "src/parser/tiger_parser.yy"
                                    { yylhs.value.as < Expr * > () = new IfThenElse(yystack_[5].location, yystack_[4].value.as < Expr * > (), yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > ()); }
#line 1068 "tiger_parser.tab.cc"
    break;

  case 40: // opExpr: "if" expr "then" expr
#line 204 "src/parser/tiger_parser.yy"
                          { yylhs.value.as < Expr * > () = new IfThenElse(yystack_[3].location, yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > (), new Sequence(nl, {}));}
#line 1074 "tiger_parser.tab.cc"
    break;

  case 41: // assignExpr: "id" ":=" expr
#line 209 "src/parser/tiger_parser.yy"
  { yylhs.value.as < Expr * > () = new Assign(yystack_[1].location, new Identifier(yystack_[2].location, yystack_[2].value.as < Symbol > ()), yystack_[0].value.as < Expr * > ()); }
#line 1080 "tiger_parser.tab.cc"
    break;

  case 42: // whileExpr: "while" expr "do" expr
#line 212 "src/parser/tiger_parser.yy"
                              { yylhs.value.as < Expr * > () = new WhileLoop(yystack_[3].location, yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > ()); }
#line 1086 "tiger_parser.tab.cc"
    break;

  case 43: // forExpr: "for" "id" ":=" expr "to" expr "do" expr
#line 216 "src/parser/tiger_parser.yy"
  { yylhs.value.as < Expr * > () = new ForLoop(yystack_[7].location, new VarDecl(yystack_[6].location, yystack_[6].value.as < Symbol > (), boost::none, yystack_[4].value.as < Expr * > (), true), yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > ()); }
#line 1092 "tiger_parser.tab.cc"
    break;

  case 44: // breakExpr: "break"
#line 219 "src/parser/tiger_parser.yy"
                 { yylhs.value.as < Expr * > () = new Break(yystack_[0].location); }
#line 1098 "tiger_parser.tab.cc"
    break;

  case 45: // letExpr: "let" decls "in" exprs "end"
#line 223 "src/parser/tiger_parser.yy"
  { yylhs.value.as < Expr * > () = new Let(yystack_[4].location, yystack_[3].value.as < std::vector<Decl *> > (), new Sequence(nl, yystack_[1].value.as < std::vector<Expr *> > ())); }
#line 1104 "tiger_parser.tab.cc"
    break;

  case 46: // seqExpr: "(" exprs ")"
#line 226 "src/parser/tiger_parser.yy"
                              { yylhs.value.as < Expr * > () = new Sequence(yystack_[2].location, yystack_[1].value.as < std::vector<Expr *> > ()); }
#line 1110 "tiger_parser.tab.cc"
    break;

  case 47: // ifThenExpr: "if" expr "then" expr
#line 230 "src/parser/tiger_parser.yy"
  { yylhs.value.as < Expr * > () = new IfThenElse(yystack_[3].location, yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > (), new Sequence(nl, std::vector<Expr*>())); }
#line 1116 "tiger_parser.tab.cc"
    break;

  case 48: // ifThenElseExpr: "if" expr "then" expr "else" expr
#line 234 "src/parser/tiger_parser.yy"
  { yylhs.value.as < Expr * > () = new IfThenElse(yystack_[5].location, yystack_[4].value.as < Expr * > (), yystack_[2].value.as < Expr * > (), yystack_[0].value.as < Expr * > ()); }
#line 1122 "tiger_parser.tab.cc"
    break;

  case 49: // exprs: %empty
#line 237 "src/parser/tiger_parser.yy"
       { yylhs.value.as < std::vector<Expr *> > () = std::vector<Expr *>(); }
#line 1128 "tiger_parser.tab.cc"
    break;

  case 50: // exprs: nonemptyexprs
#line 238 "src/parser/tiger_parser.yy"
                  { yylhs.value.as < std::vector<Expr *> > () = yystack_[0].value.as < std::vector<Expr *> > (); }
#line 1134 "tiger_parser.tab.cc"
    break;

  case 51: // nonemptyexprs: expr
#line 241 "src/parser/tiger_parser.yy"
                    { yylhs.value.as < std::vector<Expr *> > () = std::vector<Expr *>({yystack_[0].value.as < Expr * > ()}); }
#line 1140 "tiger_parser.tab.cc"
    break;

  case 52: // nonemptyexprs: nonemptyexprs ";" expr
#line 243 "src/parser/tiger_parser.yy"
  {
    yylhs.value.as < std::vector<Expr *> > () = std::move(yystack_[2].value.as < std::vector<Expr *> > ());
    yylhs.value.as < std::vector<Expr *> > ().push_back(yystack_[0].value.as < Expr * > ());
  }
#line 1149 "tiger_parser.tab.cc"
    break;

  case 53: // arguments: %empty
#line 249 "src/parser/tiger_parser.yy"
           { yylhs.value.as < std::vector<Expr *> > () = std::vector<Expr *>(); }
#line 1155 "tiger_parser.tab.cc"
    break;

  case 54: // arguments: nonemptyarguments
#line 250 "src/parser/tiger_parser.yy"
                      { yylhs.value.as < std::vector<Expr *> > () = yystack_[0].value.as < std::vector<Expr *> > (); }
#line 1161 "tiger_parser.tab.cc"
    break;

  case 55: // nonemptyarguments: expr
#line 253 "src/parser/tiger_parser.yy"
                        { yylhs.value.as < std::vector<Expr *> > () = std::vector<Expr *>({yystack_[0].value.as < Expr * > ()}); }
#line 1167 "tiger_parser.tab.cc"
    break;

  case 56: // nonemptyarguments: nonemptyarguments "," expr
#line 255 "src/parser/tiger_parser.yy"
  {
    yylhs.value.as < std::vector<Expr *> > () = std::move(yystack_[2].value.as < std::vector<Expr *> > ());
    yylhs.value.as < std::vector<Expr *> > ().push_back(yystack_[0].value.as < Expr * > ());
  }
#line 1176 "tiger_parser.tab.cc"
    break;

  case 57: // params: %empty
#line 261 "src/parser/tiger_parser.yy"
        { yylhs.value.as < std::vector<VarDecl *> > () = std::vector<VarDecl *>(); }
#line 1182 "tiger_parser.tab.cc"
    break;

  case 58: // params: nonemptyparams
#line 262 "src/parser/tiger_parser.yy"
                   { yylhs.value.as < std::vector<VarDecl *> > () = yystack_[0].value.as < std::vector<VarDecl *> > (); }
#line 1188 "tiger_parser.tab.cc"
    break;

  case 59: // nonemptyparams: param
#line 265 "src/parser/tiger_parser.yy"
                      { yylhs.value.as < std::vector<VarDecl *> > () = std::vector<VarDecl *>({yystack_[0].value.as < VarDecl * > ()}); }
#line 1194 "tiger_parser.tab.cc"
    break;

  case 60: // nonemptyparams: nonemptyparams "," param
#line 267 "src/parser/tiger_parser.yy"
  {
    yylhs.value.as < std::vector<VarDecl *> > () = std::move(yystack_[2].value.as < std::vector<VarDecl *> > ());
    yylhs.value.as < std::vector<VarDecl *> > ().push_back(yystack_[0].value.as < VarDecl * > ());
  }
#line 1203 "tiger_parser.tab.cc"
    break;

  case 61: // decls: %empty
#line 273 "src/parser/tiger_parser.yy"
       { yylhs.value.as < std::vector<Decl *> > () = std::vector<Decl *>();}
#line 1209 "tiger_parser.tab.cc"
    break;

  case 62: // decls: decls decl
#line 275 "src/parser/tiger_parser.yy"
  {
    yylhs.value.as < std::vector<Decl *> > () = std::move(yystack_[1].value.as < std::vector<Decl *> > ());
    yylhs.value.as < std::vector<Decl *> > ().push_back(yystack_[0].value.as < Decl * > ());
  }
#line 1218 "tiger_parser.tab.cc"
    break;

  case 63: // param: "id" ":" "id"
#line 281 "src/parser/tiger_parser.yy"
                   { yylhs.value.as < VarDecl * > () = new VarDecl(yystack_[2].location, yystack_[2].value.as < Symbol > (), yystack_[0].value.as < Symbol > (), nullptr); }
#line 1224 "tiger_parser.tab.cc"
    break;

  case 64: // typeannotation: %empty
#line 284 "src/parser/tiger_parser.yy"
                { yylhs.value.as < boost::optional<Symbol> > () = boost::none; }
#line 1230 "tiger_parser.tab.cc"
    break;

  case 65: // typeannotation: ":" "id"
#line 285 "src/parser/tiger_parser.yy"
             { yylhs.value.as < boost::optional<Symbol> > () = yystack_[0].value.as < Symbol > (); }
#line 1236 "tiger_parser.tab.cc"
    break;


#line 1240 "tiger_parser.tab.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  tiger_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  tiger_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  tiger_parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // tiger_parser::context.
  tiger_parser::context::context (const tiger_parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  tiger_parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  tiger_parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  tiger_parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char tiger_parser::yypact_ninf_ = -29;

  const signed char tiger_parser::yytable_ninf_ = -1;

  const short
  tiger_parser::yypact_[] =
  {
      -5,    -5,    -5,    -5,    -5,   -28,   -29,   -29,   -29,     1,
     -29,    11,   158,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   158,     5,     8,
     -27,    48,    63,    -8,   -26,    -5,    -5,   -29,    -5,    -5,
      -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,
      -5,   -29,    -5,    -5,    -5,    -5,    -5,   -22,   -21,   -29,
     -29,   -29,   158,    12,    17,   158,    14,    14,   -27,   -27,
     204,   204,    83,    83,    83,    83,   191,   171,   158,   158,
     103,   158,   119,    -3,    18,    26,   -29,    -5,    -5,    -5,
     -29,    -7,    -1,    29,   158,   158,   138,    53,    64,    67,
     -29,   -29,    -5,    -5,    47,    26,    -7,   158,   158,   -29,
      72,   -29,    -5,   158
  };

  const signed char
  tiger_parser::yydefact_[] =
  {
       0,    49,     0,     0,     0,     0,    61,    44,    21,    23,
      22,     0,     2,    16,     5,     7,     8,    10,     9,    11,
      12,    13,    14,    15,     6,    17,    18,    51,     0,    50,
      25,     0,     0,     0,     0,    53,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,     0,     0,    49,     0,     0,    62,
       3,     4,    55,     0,    54,    41,    27,    28,    29,    30,
      31,    32,    33,    35,    34,    36,    37,    38,    26,    52,
      40,    42,     0,     0,     0,    64,    24,     0,     0,     0,
      45,    57,     0,     0,    56,    39,     0,     0,     0,    58,
      59,    65,     0,     0,     0,    64,     0,    19,    43,    63,
       0,    60,     0,    20
  };

  const signed char
  tiger_parser::yypgoto_[] =
  {
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
      35,   -29,   -29,   -29,   -29,   -29,   -29,    -9,    -6
  };

  const signed char
  tiger_parser::yydefgoto_[] =
  {
       0,    11,    59,    27,    60,    61,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      28,    29,    63,    64,    98,    99,    34,   100,    93
  };

  const signed char
  tiger_parser::yytable_[] =
  {
      12,     1,    30,    31,    32,    56,     2,    35,    57,    58,
      33,    37,    51,    52,    55,    50,    84,    85,     3,    86,
      87,     4,     5,    36,    91,     6,    40,    41,     7,    90,
      92,    97,     8,     9,    10,    62,    65,   101,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,   102,    79,    80,    81,    82,    50,   104,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
     106,   105,    53,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,   109,   112,    94,    95,    96,
      50,    83,    54,    38,    39,    40,    41,   111,     0,   110,
       0,     0,   107,   108,     0,    50,     0,     0,     0,     0,
       0,     0,   113,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,    88,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,     0,     0,     0,     0,    50,     0,    89,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       0,    50,     0,     0,     0,     0,     0,   103,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     0,     0,    50,    38,    39,    40,    41,     0,     0,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50
  };

  const signed char
  tiger_parser::yycheck_[] =
  {
       0,     6,     2,     3,     4,    31,    11,     6,    34,    35,
      38,     0,     7,     5,    22,    42,    38,    38,    23,     7,
       3,    26,    27,    22,     6,    30,    12,    13,    33,    32,
       4,    38,    37,    38,    39,    35,    36,    38,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    22,    52,    53,    54,    55,    42,     4,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       3,     7,    24,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    38,    14,    87,    88,    89,
      42,    56,    29,    10,    11,    12,    13,   106,    -1,   105,
      -1,    -1,   102,   103,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    42,    -1,    -1,    25,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    42,    -1,    28,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    29,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      42,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    42,    10,    11,    12,    13,    -1,    -1,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42
  };

  const signed char
  tiger_parser::yystos_[] =
  {
       0,     6,    11,    23,    26,    27,    30,    33,    37,    38,
      39,    44,    46,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    46,    63,    64,
      46,    46,    46,    38,    69,     6,    22,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      42,     7,     5,    24,    29,    22,    31,    34,    35,    45,
      47,    48,    46,    65,    66,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    63,    38,    38,     7,     3,    25,    28,
      32,     6,     4,    71,    46,    46,    46,    38,    67,    68,
      70,    38,    22,    29,     4,     7,     3,    46,    46,    38,
      71,    70,    14,    46
  };

  const signed char
  tiger_parser::yyr1_[] =
  {
       0,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    47,
      48,    49,    50,    51,    52,    53,    46,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      63,    64,    64,    65,    65,    66,    66,    67,    67,    68,
      68,    69,    69,    70,    71,    71
  };

  const signed char
  tiger_parser::yyr2_[] =
  {
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       8,     1,     1,     1,     4,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     6,
       4,     3,     4,     8,     1,     5,     3,     4,     6,     0,
       1,     1,     3,     0,     1,     1,     3,     0,     1,     1,
       3,     0,     2,     3,     0,     2
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const tiger_parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "\",\"", "\":\"",
  "\";\"", "\"(\"", "\")\"", "\"{\"", "\"}\"", "\"+\"", "\"-\"", "\"*\"",
  "\"/\"", "\"=\"", "\"<>\"", "\"<\"", "\"<=\"", "\">\"", "\">=\"",
  "\"&\"", "\"|\"", "\":=\"", "\"if\"", "\"then\"", "\"else\"",
  "\"while\"", "\"for\"", "\"to\"", "\"do\"", "\"let\"", "\"in\"",
  "\"end\"", "\"break\"", "\"function\"", "\"var\"", "\"uminus\"",
  "\"integer\"", "\"id\"", "\"string\"", "TYPE", "OF", "'|'", "$accept",
  "program", "decl", "expr", "varDecl", "funcDecl", "intExpr",
  "stringExpr", "var", "callExpr", "negExpr", "opExpr", "assignExpr",
  "whileExpr", "forExpr", "breakExpr", "letExpr", "seqExpr", "ifThenExpr",
  "ifThenElseExpr", "exprs", "nonemptyexprs", "arguments",
  "nonemptyarguments", "params", "nonemptyparams", "decls", "param",
  "typeannotation", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  tiger_parser::yyrline_[] =
  {
       0,   120,   120,   123,   124,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   143,
     147,   153,   157,   161,   165,   169,   174,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   197,   202,
     204,   208,   212,   215,   219,   222,   226,   229,   233,   237,
     238,   241,   242,   249,   250,   253,   254,   261,   262,   265,
     266,   273,   274,   281,   284,   285
  };

  void
  tiger_parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  tiger_parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1813 "tiger_parser.tab.cc"

#line 288 "src/parser/tiger_parser.yy"


void
yy::tiger_parser::error (const location_type& l,
                          const std::string& m)
{
  utils::error (l, m);
}
