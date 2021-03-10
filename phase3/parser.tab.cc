// A Bison parser, made by GNU Bison 3.7.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

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



// First part of user prologue.
#line 7 "mini_l.yy"


#line 44 "parser.tab.cc"


#include "parser.tab.hh"


// Unqualified %code blocks.
#line 42 "mini_l.yy"

#include "parser.tab.hh"

	/* you may need these header files
	 * add more header file if you need more
	 */
#include <iostream>
#include <sstream>
#include <map>
#include <regex>
#include <set>
yy::parser::symbol_type yylex();
void yyerror(const char *msg);

	/* define your symbol table, global variables,
	 * list of keywords or any function you may need here */
  string _temp_() {
     static int i = 0;
     string temp = "__temp__" + to_string(i++);
     return temp;
  }
  string _label_(){
     static int i = 0;
     string temp = "__label__" + to_string(i++);
     return temp;
  }

map<string, int> tableVar;
map<string, int> tableFunc;
map<string, int> twoarray;
set<string> reservedKeywords = {"FUNCTION", "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER", "ARRAY",
"OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "FOR", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT", "TRUE", "FALSE", "RETURN",
"ADD", "SUB", "MULT", "DIV", "MOD", "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA", "L_PAREN", "R_PAREN", "EQUAL", "L_SQUARE_BRACKET",
"R_SQUARE_BRACKET", "ASSIGN", "IDENT", "NUMBER"};
	/* end of your code */

#line 88 "parser.tab.cc"


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
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
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
#line 180 "parser.tab.cc"

  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr)
#else

#endif
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | symbol kinds.  |
  `---------------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_Declarations: // Declarations
      case symbol_kind::S_DeclarationDef: // DeclarationDef
        value.YY_MOVE_OR_COPY< dec_type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_identifier: // identifier
        value.YY_MOVE_OR_COPY< list<string> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_Var_loop: // Var_loop
      case symbol_kind::S_Var: // Var
      case symbol_kind::S_Bool_Exp: // Bool_Exp
      case symbol_kind::S_Relation_And_Expr: // Relation_And_Expr
      case symbol_kind::S_Relation_Expr: // Relation_Expr
      case symbol_kind::S_Expression: // Expression
      case symbol_kind::S_Mutiplicative_Expr: // Mutiplicative_Expr
      case symbol_kind::S_Term: // Term
      case symbol_kind::S_Expression_loop: // Expression_loop
        value.YY_MOVE_OR_COPY< stat_type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_Statements: // Statements
      case symbol_kind::S_StatementDef: // StatementDef
      case symbol_kind::S_Comp: // Comp
      case symbol_kind::S_ident: // ident
        value.YY_MOVE_OR_COPY< string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_Declarations: // Declarations
      case symbol_kind::S_DeclarationDef: // DeclarationDef
        value.move< dec_type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        value.move< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_identifier: // identifier
        value.move< list<string> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_Var_loop: // Var_loop
      case symbol_kind::S_Var: // Var
      case symbol_kind::S_Bool_Exp: // Bool_Exp
      case symbol_kind::S_Relation_And_Expr: // Relation_And_Expr
      case symbol_kind::S_Relation_Expr: // Relation_Expr
      case symbol_kind::S_Expression: // Expression
      case symbol_kind::S_Mutiplicative_Expr: // Mutiplicative_Expr
      case symbol_kind::S_Term: // Term
      case symbol_kind::S_Expression_loop: // Expression_loop
        value.move< stat_type > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_Statements: // Statements
      case symbol_kind::S_StatementDef: // StatementDef
      case symbol_kind::S_Comp: // Comp
      case symbol_kind::S_ident: // ident
        value.move< string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_Declarations: // Declarations
      case symbol_kind::S_DeclarationDef: // DeclarationDef
        value.copy< dec_type > (that.value);
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        value.copy< int > (that.value);
        break;

      case symbol_kind::S_identifier: // identifier
        value.copy< list<string> > (that.value);
        break;

      case symbol_kind::S_Var_loop: // Var_loop
      case symbol_kind::S_Var: // Var
      case symbol_kind::S_Bool_Exp: // Bool_Exp
      case symbol_kind::S_Relation_And_Expr: // Relation_And_Expr
      case symbol_kind::S_Relation_Expr: // Relation_Expr
      case symbol_kind::S_Expression: // Expression
      case symbol_kind::S_Mutiplicative_Expr: // Mutiplicative_Expr
      case symbol_kind::S_Term: // Term
      case symbol_kind::S_Expression_loop: // Expression_loop
        value.copy< stat_type > (that.value);
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_Statements: // Statements
      case symbol_kind::S_StatementDef: // StatementDef
      case symbol_kind::S_Comp: // Comp
      case symbol_kind::S_ident: // ident
        value.copy< string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_Declarations: // Declarations
      case symbol_kind::S_DeclarationDef: // DeclarationDef
        value.move< dec_type > (that.value);
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        value.move< int > (that.value);
        break;

      case symbol_kind::S_identifier: // identifier
        value.move< list<string> > (that.value);
        break;

      case symbol_kind::S_Var_loop: // Var_loop
      case symbol_kind::S_Var: // Var
      case symbol_kind::S_Bool_Exp: // Bool_Exp
      case symbol_kind::S_Relation_And_Expr: // Relation_And_Expr
      case symbol_kind::S_Relation_Expr: // Relation_Expr
      case symbol_kind::S_Expression: // Expression
      case symbol_kind::S_Mutiplicative_Expr: // Mutiplicative_Expr
      case symbol_kind::S_Term: // Term
      case symbol_kind::S_Expression_loop: // Expression_loop
        value.move< stat_type > (that.value);
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_Statements: // Statements
      case symbol_kind::S_StatementDef: // StatementDef
      case symbol_kind::S_Comp: // Comp
      case symbol_kind::S_ident: // ident
        value.move< string > (that.value);
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
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YYUSE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
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
            symbol_type yylookahead (yylex ());
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
      case symbol_kind::S_Declarations: // Declarations
      case symbol_kind::S_DeclarationDef: // DeclarationDef
        yylhs.value.emplace< dec_type > ();
        break;

      case symbol_kind::S_NUMBER: // NUMBER
        yylhs.value.emplace< int > ();
        break;

      case symbol_kind::S_identifier: // identifier
        yylhs.value.emplace< list<string> > ();
        break;

      case symbol_kind::S_Var_loop: // Var_loop
      case symbol_kind::S_Var: // Var
      case symbol_kind::S_Bool_Exp: // Bool_Exp
      case symbol_kind::S_Relation_And_Expr: // Relation_And_Expr
      case symbol_kind::S_Relation_Expr: // Relation_Expr
      case symbol_kind::S_Expression: // Expression
      case symbol_kind::S_Mutiplicative_Expr: // Mutiplicative_Expr
      case symbol_kind::S_Term: // Term
      case symbol_kind::S_Expression_loop: // Expression_loop
        yylhs.value.emplace< stat_type > ();
        break;

      case symbol_kind::S_IDENT: // IDENT
      case symbol_kind::S_program: // program
      case symbol_kind::S_function: // function
      case symbol_kind::S_Statements: // Statements
      case symbol_kind::S_StatementDef: // StatementDef
      case symbol_kind::S_Comp: // Comp
      case symbol_kind::S_ident: // ident
        yylhs.value.emplace< string > ();
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
  case 2: // start_prog: program
#line 108 "mini_l.yy"
                    {

    string temp = "main"; 
    //3. Not definig a main function 
    if(tableFunc.find(temp) == tableFunc.end()){
         yy::parser::error(yystack_[0].location, "Error: Not defining a main function!");
    }   
    cout << yystack_[0].value.as < string > () << endl; 
      }
#line 756 "parser.tab.cc"
    break;

  case 3: // program: %empty
#line 119 "mini_l.yy"
                       {yylhs.value.as < string > () = "";}
#line 762 "parser.tab.cc"
    break;

  case 4: // program: program function
#line 120 "mini_l.yy"
                          {
         if(yystack_[1].value.as < string > () == ""){yylhs.value.as < string > () = yystack_[0].value.as < string > ();}
            else{
            yylhs.value.as < string > () = yystack_[1].value.as < string > () + "\n" +yystack_[0].value.as < string > () ;}
             }
#line 772 "parser.tab.cc"
    break;

  case 5: // function: FUNCTION ident SEMICOLON BEGIN_PARAMS Declarations END_PARAMS BEGIN_LOCALS Declarations END_LOCALS BEGIN_BODY Statements END_BODY
#line 129 "mini_l.yy"
                                        {
              yylhs.value.as < string > () = "func " + yystack_[10].value.as < string > () + "\n";
	      yylhs.value.as < string > () += yystack_[7].value.as < dec_type > ().code;
	      int i = 0;
	      for(list<string>::iterator it = yystack_[7].value.as < dec_type > ().ids.begin(); it != yystack_[7].value.as < dec_type > ().ids.end(); it++){
	          yylhs.value.as < string > () += "= " + *it + ", $" + to_string(i) + "\n";
	          i++;
	          }
	      yylhs.value.as < string > () += yystack_[4].value.as < dec_type > ().code;
	      yylhs.value.as < string > () += yystack_[1].value.as < string > ();
              //9.Using continue statement outside a loop
              if(yylhs.value.as < string > ().find("continue") != string::npos){
                  yy::parser::error(yystack_[10].location, "Error: continue statemnet not within a loop.");
              }
	      yylhs.value.as < string > () += "endfunc";
	      }
#line 793 "parser.tab.cc"
    break;

  case 6: // function: FUNCTION ident error BEGIN_PARAMS Declarations END_PARAMS BEGIN_LOCALS Declarations END_LOCALS BEGIN_BODY Statements END_BODY
#line 148 "mini_l.yy"
                                        {}
#line 799 "parser.tab.cc"
    break;

  case 7: // Declarations: %empty
#line 151 "mini_l.yy"
                            {yylhs.value.as < dec_type > ().code = "";
          yylhs.value.as < dec_type > ().ids = list<string>();
          }
#line 807 "parser.tab.cc"
    break;

  case 8: // Declarations: Declarations DeclarationDef SEMICOLON
#line 155 "mini_l.yy"
        {
            yylhs.value.as < dec_type > ().code = yystack_[1].value.as < dec_type > ().code + yystack_[2].value.as < dec_type > ().code;
            yylhs.value.as < dec_type > ().ids = yystack_[1].value.as < dec_type > ().ids;
            for(list<string>::iterator it = yystack_[2].value.as < dec_type > ().ids.begin(); it != yystack_[2].value.as < dec_type > ().ids.end(); it++){
                  yylhs.value.as < dec_type > ().ids.push_back(*it);
                  }
        }
#line 819 "parser.tab.cc"
    break;

  case 9: // Declarations: Declarations DeclarationDef error
#line 162 "mini_l.yy"
                                           {}
#line 825 "parser.tab.cc"
    break;

  case 10: // DeclarationDef: identifier COLON INTEGER
#line 165 "mini_l.yy"
                                         {
	      
                    for(list<string>::iterator it = yystack_[2].value.as < list<string> > ().begin(); it != yystack_[2].value.as < list<string> > ().end(); it++){
                        //4. defining avariable more than one
                        if(tableVar.find(std::string(*it)) != tableVar.end()){
                            yy::parser::error(yystack_[2].location, "Error: variable is multiply-defined");
                        }
                        else if(tableFunc.find(std::string(*it)) != tableFunc.end()){
                            yy::parser::error(yystack_[2].location, "Error: defined variable being used by function");
                        }
                        //5. variable same as reserved keywords
                        else if(reservedKeywords.find(std::string(*it)) != reservedKeywords.end()){
                            yy::parser::error(yystack_[2].location, "Error: defined the name which is the same as reserved keywords"); 
                        }
                        else{
                            tableVar[*it] = 0;
                            yylhs.value.as < dec_type > ().code += ". " + *it + "\n";
			    yylhs.value.as < dec_type > ().ids.push_back(*it);
                        }
                }
            }
#line 851 "parser.tab.cc"
    break;

  case 11: // DeclarationDef: identifier COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
#line 187 "mini_l.yy"
                                                                                     {
            //8.Declaring an array of size <=0  
            if(yystack_[3].value.as < int > () <= 0){
                yy::parser::error(yystack_[3].location, "Error: Array size declared is less than <=0"); 
            }
            for(list<string>::iterator it = yystack_[7].value.as < list<string> > ().begin(); it != yystack_[7].value.as < list<string> > ().end(); it++){
                //4. defining avariable more than one
                if(tableVar.find(std::string(*it)) != tableVar.end()){
                    yy::parser::error(yystack_[7].location, "Error: variable is multiply-defined");
                    }
                else if(tableFunc.find(std::string(*it)) != tableFunc.end()){
                    yy::parser::error(yystack_[7].location, "Error: defined variable being used by function");
                    }
                //5. variable same as reserved keywords
                else if(reservedKeywords.find(std::string(*it)) != reservedKeywords.end()){
                    yy::parser::error(yystack_[7].location, "Error: defined the name which is the same as reserved keywords"); 
                    }
                else{
                    tableVar[*it] = 1;
                    yylhs.value.as < dec_type > ().code += ".[] " + *it + ", " + to_string(yystack_[3].value.as < int > ()) +"\n";
		    yylhs.value.as < dec_type > ().ids.push_back(*it);
		}
            }
        }
#line 880 "parser.tab.cc"
    break;

  case 12: // DeclarationDef: identifier COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
#line 212 "mini_l.yy"
                {
                     //8.Declaring an array of size <=0 
                     if((yystack_[6].value.as < int > () <= 0)|| (yystack_[3].value.as < int > () <= 0)){
                         yy::parser::error(yystack_[6].location, "Error: Array size declared is less than <=0"); 
                     }
                     for(list<string>::iterator it = yystack_[10].value.as < list<string> > ().begin(); it != yystack_[10].value.as < list<string> > ().end(); it++){
                          //4. defining avariable more than one
                         if(tableVar.find(std::string(*it)) != tableVar.end()){
                              yy::parser::error(yystack_[10].location, "Error: variable is multiply-defined");
                          }
                         else if(tableFunc.find(std::string(*it)) != tableFunc.end()){
                              yy::parser::error(yystack_[10].location, "Error: defined variable being used by function");
                         }
                         //5. variable same as reserved keywords
                         else if(reservedKeywords.find(std::string(*it)) != reservedKeywords.end()){
                              yy::parser::error(yystack_[10].location, "Error: defined the name which is the same as reserved keywords"); 
                         } 
                         else{
                             tableVar[*it] = 2;
                             yylhs.value.as < dec_type > ().code += ".[] " + *it + ", " + to_string(yystack_[6].value.as < int > () * yystack_[3].value.as < int > ()) +"\n";
		             yylhs.value.as < dec_type > ().ids.push_back(*it);
                             twoarray[*it]= yystack_[3].value.as < int > (); 
	                }
                     }
               }
#line 910 "parser.tab.cc"
    break;

  case 13: // DeclarationDef: identifier error INTEGER
#line 237 "mini_l.yy"
                                  {}
#line 916 "parser.tab.cc"
    break;

  case 14: // DeclarationDef: identifier error ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
#line 238 "mini_l.yy"
                                                                                    {}
#line 922 "parser.tab.cc"
    break;

  case 15: // DeclarationDef: identifier error ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
#line 239 "mini_l.yy"
                                                                                                                             {}
#line 928 "parser.tab.cc"
    break;

  case 16: // identifier: IDENT
#line 242 "mini_l.yy"
                  {yylhs.value.as < list<string> > ().push_front(yystack_[0].value.as < string > ());}
#line 934 "parser.tab.cc"
    break;

  case 17: // identifier: identifier COMMA IDENT
#line 243 "mini_l.yy"
                                 {
          yylhs.value.as < list<string> > () = yystack_[2].value.as < list<string> > ();
          yylhs.value.as < list<string> > ().push_back(yystack_[0].value.as < string > ());
           }
#line 943 "parser.tab.cc"
    break;

  case 18: // identifier: identifier error IDENT
#line 247 "mini_l.yy"
                                {}
#line 949 "parser.tab.cc"
    break;

  case 19: // Statements: StatementDef SEMICOLON
#line 250 "mini_l.yy"
                                   {
	    yylhs.value.as < string > () = yystack_[1].value.as < string > ();
          }
#line 957 "parser.tab.cc"
    break;

  case 20: // Statements: Statements StatementDef SEMICOLON
#line 254 "mini_l.yy"
            { 
            yylhs.value.as < string > () = yystack_[2].value.as < string > () + yystack_[1].value.as < string > ();
            
            }
#line 966 "parser.tab.cc"
    break;

  case 21: // Statements: StatementDef error
#line 258 "mini_l.yy"
                            {}
#line 972 "parser.tab.cc"
    break;

  case 22: // Statements: Statements StatementDef error
#line 259 "mini_l.yy"
                                       {}
#line 978 "parser.tab.cc"
    break;

  case 23: // StatementDef: Var ASSIGN Expression
#line 263 "mini_l.yy"
            {
              yylhs.value.as < string > () = yystack_[2].value.as < stat_type > ().code + yystack_[0].value.as < stat_type > ().code;
	
              if(yystack_[2].value.as < stat_type > ().array){
                  yylhs.value.as < string > () += "[]= " + yystack_[2].value.as < stat_type > ().id + ", " + yystack_[0].value.as < stat_type > ().id + "\n"; 
              }
              else{
                  yylhs.value.as < string > () += "= " + yystack_[2].value.as < stat_type > ().id + ", " + yystack_[0].value.as < stat_type > ().id + "\n"; 
              }

            }
#line 994 "parser.tab.cc"
    break;

  case 24: // StatementDef: IF Bool_Exp THEN Statements ENDIF
#line 275 "mini_l.yy"
          {
              string L1 = _label_();
              string L2 = _label_();
              
              yylhs.value.as < string > () = yystack_[3].value.as < stat_type > ().code + "?:= " + L1 + ", " + yystack_[3].value.as < stat_type > ().id + "\n" + ":= "+ L2 + "\n" + ": " + L1 + "\n" + yystack_[1].value.as < string > () + ": " + L2 + "\n";
          }
#line 1005 "parser.tab.cc"
    break;

  case 25: // StatementDef: IF Bool_Exp THEN Statements ELSE Statements ENDIF
#line 282 "mini_l.yy"
          {
              string L1 = _label_();
              string L2 = _label_();
              yylhs.value.as < string > () = yystack_[5].value.as < stat_type > ().code + "?:= " + L1 + ", " + yystack_[5].value.as < stat_type > ().id + "\n" + yystack_[1].value.as < string > () + ":= "+ L2 + "\n" + ": " + L1 + "\n" + yystack_[3].value.as < string > () + ": " + L2 + "\n"; 
          }
#line 1015 "parser.tab.cc"
    break;

  case 26: // StatementDef: WHILE Bool_Exp BEGINLOOP Statements ENDLOOP
#line 288 "mini_l.yy"
          {
              string whileStart = _label_();
              string L1 = _label_();
              string L2 = _label_();
              string jump;
              string statements = yystack_[1].value.as < string > (); 
              jump = ":= " + whileStart;
              
              while(statements.find("continue") != string::npos){
                  statements.replace(statements.find("continue"), 8, jump); 
              }
               yylhs.value.as < string > () = ": " + whileStart + "\n" + yystack_[3].value.as < stat_type > ().code + "?:= " + L1 + ", " + yystack_[3].value.as < stat_type > ().id + "\n" + ":= " + L2 + "\n" 
               + ": " + L1 + "\n" + statements + ":= " + whileStart + "\n" + ": " + L2 + "\n";
          }
#line 1034 "parser.tab.cc"
    break;

  case 27: // StatementDef: DO BEGINLOOP Statements ENDLOOP WHILE Bool_Exp
#line 303 "mini_l.yy"
        {
              string whileStart = _label_();
              string L1 = _label_();
              string jump;
              string statements = yystack_[3].value.as < string > (); 
              jump = ":= " + whileStart;
              
              while(statements.find("continue") != string::npos){
                  statements.replace(statements.find("continue"), 8, jump); 
              }
               yylhs.value.as < string > () = ": " + L1 + "\n" + statements + ":= " + whileStart + "\n " + yystack_[0].value.as < stat_type > ().code + "?:= " + L1 + ", " 
               + yystack_[0].value.as < stat_type > ().id + "\n" ;
          }
#line 1052 "parser.tab.cc"
    break;

  case 28: // StatementDef: FOR Var ASSIGN NUMBER SEMICOLON Bool_Exp SEMICOLON Var ASSIGN Expression BEGINLOOP Statements ENDLOOP
#line 317 "mini_l.yy"
        {
            string counter = _temp_();
            string check = _label_();
            string L1 = _label_();
            string L2 = _label_();
            string statements = yystack_[1].value.as < string > ();
            string jump;
            jump = ":= " + check;
         
            while(statements.find("continue") != string::npos){
                  statements.replace(statements.find("continue"), 8, jump); 
              }
               
            yylhs.value.as < string > () = "= " + counter + ", " + to_string(yystack_[9].value.as < int > ()) + "\n" + ": " + check + "\n" + yystack_[7].value.as < stat_type > ().code + "\n" + 
                 "?:= " + L1 + ", " + yystack_[7].value.as < stat_type > ().id + "\n" + ":= " + L2 + "\n" + 
                 ": " + L1 + "\n" + yystack_[1].value.as < string > () + "\n" + yystack_[3].value.as < stat_type > ().code + "\n" + 
                 "= " + counter + ", " + yystack_[3].value.as < stat_type > ().id + "\n" + 
                 ":= " + check + "\n" + ": " + L2;  	
        }
#line 1076 "parser.tab.cc"
    break;

  case 29: // StatementDef: READ Var_loop
#line 337 "mini_l.yy"
          {
              string temp; 
              temp = yystack_[0].value.as < stat_type > ().code;
              size_t pos = 0;
              do{
                    pos = temp.find("|", pos);
                    if(pos == string::npos)
                       break;
                       temp.replace(pos, 1, "<");
                      }while(true);

                    yylhs.value.as < string > () += temp;
               }
#line 1094 "parser.tab.cc"
    break;

  case 30: // StatementDef: WRITE Var_loop
#line 351 "mini_l.yy"
          {
               string temp;
               temp = yystack_[0].value.as < stat_type > ().code;
               size_t pos = 0;
               do{
                     pos = temp.find("|", pos);
                     if(pos == string::npos)
                        break;
                        temp.replace(pos, 1, ">");
                      }while(true);
                      
                     yylhs.value.as < string > () += temp;
                  }
#line 1112 "parser.tab.cc"
    break;

  case 31: // StatementDef: CONTINUE
#line 365 "mini_l.yy"
                   {yylhs.value.as < string > () = "continue\n";}
#line 1118 "parser.tab.cc"
    break;

  case 32: // StatementDef: RETURN Expression
#line 366 "mini_l.yy"
                            {yylhs.value.as < string > () = yystack_[0].value.as < stat_type > ().code + "ret " + yystack_[0].value.as < stat_type > ().id + "\n";}
#line 1124 "parser.tab.cc"
    break;

  case 33: // StatementDef: Var error Expression
#line 367 "mini_l.yy"
                              {}
#line 1130 "parser.tab.cc"
    break;

  case 34: // StatementDef: FOR Var error NUMBER error Bool_Exp error Var error Expression BEGINLOOP Statements ENDLOOP
#line 368 "mini_l.yy"
                                                                                                     {}
#line 1136 "parser.tab.cc"
    break;

  case 35: // Var_loop: Var
#line 372 "mini_l.yy"
        {
            string temp = yystack_[0].value.as < stat_type > ().code;
            if(yystack_[0].value.as < stat_type > ().array){temp += ".[]| ";}
            else{temp += ".| ";}
            temp += yystack_[0].value.as < stat_type > ().id + "\n";
            yylhs.value.as < stat_type > ().code = temp;
            yylhs.value.as < stat_type > ().id = "";
        }
#line 1149 "parser.tab.cc"
    break;

  case 36: // Var_loop: Var_loop COMMA Var
#line 381 "mini_l.yy"
          {
              string temp;
              temp = yystack_[0].value.as < stat_type > ().code;
              if(yystack_[0].value.as < stat_type > ().array){
                 temp += ".[]| ";
              }
              else{temp += ".| ";}
              
              temp += yystack_[0].value.as < stat_type > ().id + "\n" + yystack_[2].value.as < stat_type > ().code;
              yylhs.value.as < stat_type > ().code = temp;
              yylhs.value.as < stat_type > ().id = "";
          }
#line 1166 "parser.tab.cc"
    break;

  case 37: // Var: IDENT
#line 395 "mini_l.yy"
           {
               //1. undeclared variables
               if(tableVar.find(std::string(yystack_[0].value.as < string > ())) == tableVar.end()){
                   yy::parser::error(yystack_[0].location, "Error: used variable was not previously declared");
               }
               //6. use array variable as regular
               else if(tableVar[yystack_[0].value.as < string > ()] != 0){
                   yy::parser::error(yystack_[0].location, "Error: This is not regular integer variables");
               }
               
               yylhs.value.as < stat_type > ().code = "";
               yylhs.value.as < stat_type > ().id = yystack_[0].value.as < string > ();
               yylhs.value.as < stat_type > ().array = false;
           }
#line 1185 "parser.tab.cc"
    break;

  case 38: // Var: IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET
#line 410 "mini_l.yy"
        { 
            //1. undeclared variables
            if(tableVar.find(std::string(yystack_[3].value.as < string > ())) == tableVar.end()){
                   yy::parser::error(yystack_[3].location, "Error: used variable was not previously declared");
               }
            //7. error!
            else if(tableVar[yystack_[3].value.as < string > ()] != 1){
                   yy::parser::error(yystack_[3].location, "Error: This is not 1D array, array is missing a specific index");
               }
            yylhs.value.as < stat_type > ().code = yystack_[1].value.as < stat_type > ().code;
            yylhs.value.as < stat_type > ().id = yystack_[3].value.as < string > () + ", " + yystack_[1].value.as < stat_type > ().id;
            yylhs.value.as < stat_type > ().array = true;

        }
#line 1204 "parser.tab.cc"
    break;

  case 39: // Var: IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET L_SQUARE_BRACKET Expression R_SQUARE_BRACKET
#line 424 "mini_l.yy"
                                                                                                          {
	    //1. undeclared variables
            if(tableVar.find(std::string(yystack_[6].value.as < string > ())) == tableVar.end()){
                   yy::parser::error(yystack_[6].location, "Error: used variable was not previously declared");
               }
            //7. error!
            else if(tableVar[yystack_[6].value.as < string > ()] != 2){
                   yy::parser::error(yystack_[6].location, "Error; This is not 2D array, array is missing a specific index");
               }
            string temp = _temp_();
            yylhs.value.as < stat_type > ().code = yystack_[4].value.as < stat_type > ().code + yystack_[1].value.as < stat_type > ().code;
            yylhs.value.as < stat_type > ().code += ". " + temp + "\n" + "* " + temp + ", " + yystack_[4].value.as < stat_type > ().id + ", " + to_string(twoarray[yystack_[6].value.as < string > ()]) + "\n" + "+ " + temp + ", " + temp + ", " + yystack_[1].value.as < stat_type > ().id + "\n";
            yylhs.value.as < stat_type > ().id = yystack_[6].value.as < string > () + ", " + temp; 
            yylhs.value.as < stat_type > ().array = true; 
        }
#line 1224 "parser.tab.cc"
    break;

  case 40: // Bool_Exp: Relation_And_Expr
#line 441 "mini_l.yy"
                            {yylhs.value.as < stat_type > ().id = yystack_[0].value.as < stat_type > ().id; yylhs.value.as < stat_type > ().code = yystack_[0].value.as < stat_type > ().code;}
#line 1230 "parser.tab.cc"
    break;

  case 41: // Bool_Exp: Bool_Exp OR Relation_And_Expr
#line 443 "mini_l.yy"
        {
            yylhs.value.as < stat_type > ().code = yystack_[0].value.as < stat_type > ().code + yystack_[2].value.as < stat_type > ().code + ". " + _temp_() + "\n" + "|| " + _temp_() + ", " + yystack_[0].value.as < stat_type > ().id + ", " + yystack_[2].value.as < stat_type > ().id + "\n";
            yylhs.value.as < stat_type > ().id = _temp_(); 
        }
#line 1239 "parser.tab.cc"
    break;

  case 42: // Relation_And_Expr: Relation_Expr
#line 449 "mini_l.yy"
                                 {yylhs.value.as < stat_type > ().id = yystack_[0].value.as < stat_type > ().id; yylhs.value.as < stat_type > ().code = yystack_[0].value.as < stat_type > ().code;}
#line 1245 "parser.tab.cc"
    break;

  case 43: // Relation_And_Expr: Relation_And_Expr AND Relation_Expr
#line 451 "mini_l.yy"
        {
            yylhs.value.as < stat_type > ().code = yystack_[2].value.as < stat_type > ().code + yystack_[0].value.as < stat_type > ().code + ". " + _temp_() + "\n" + "&& " + _temp_() + ", " + yystack_[2].value.as < stat_type > ().id + ", " + yystack_[0].value.as < stat_type > ().id + "\n";
            yylhs.value.as < stat_type > ().id = _temp_(); 
        }
#line 1254 "parser.tab.cc"
    break;

  case 44: // Relation_Expr: Expression Comp Expression
#line 458 "mini_l.yy"
             {
                 string temp = _temp_();
                 yylhs.value.as < stat_type > ().code = yystack_[2].value.as < stat_type > ().code + yystack_[0].value.as < stat_type > ().code + ". " + temp + "\n" + yystack_[1].value.as < string > () + temp + ", " + yystack_[2].value.as < stat_type > ().id + ", " + yystack_[0].value.as < stat_type > ().id + "\n";
                 yylhs.value.as < stat_type > ().id = temp;
             }
#line 1264 "parser.tab.cc"
    break;

  case 45: // Relation_Expr: NOT Expression Comp Expression
#line 464 "mini_l.yy"
        {
             string temp = _temp_();
             yylhs.value.as < stat_type > ().code = yystack_[2].value.as < stat_type > ().code + yystack_[0].value.as < stat_type > ().code + ". " + temp + "\n" + yystack_[1].value.as < string > () + temp + ", " + yystack_[2].value.as < stat_type > ().id + ", " + yystack_[0].value.as < stat_type > ().id + "\n" + ". " + temp + "\n" + "! " + temp + ", " + temp + "\n";
             yylhs.value.as < stat_type > ().id = temp;
        }
#line 1274 "parser.tab.cc"
    break;

  case 46: // Relation_Expr: TRUE
#line 469 "mini_l.yy"
               {yylhs.value.as < stat_type > ().id = "1"; yylhs.value.as < stat_type > ().code = "";}
#line 1280 "parser.tab.cc"
    break;

  case 47: // Relation_Expr: NOT TRUE
#line 471 "mini_l.yy"
        {
            string temp = _temp_();
            yylhs.value.as < stat_type > ().id = ". " + temp + "\n" + "! " + temp+ ", " + "1" + "\n"; 
            yylhs.value.as < stat_type > ().code = "";
        }
#line 1290 "parser.tab.cc"
    break;

  case 48: // Relation_Expr: FALSE
#line 476 "mini_l.yy"
                {yylhs.value.as < stat_type > ().id= "0"; yylhs.value.as < stat_type > ().code = "";}
#line 1296 "parser.tab.cc"
    break;

  case 49: // Relation_Expr: NOT FALSE
#line 478 "mini_l.yy"
        {
            string temp = _temp_();
            yylhs.value.as < stat_type > ().id = ". " + temp + "\n" + "! " + temp+ ", " + "0" + "\n"; 
            yylhs.value.as < stat_type > ().code = "";
        }
#line 1306 "parser.tab.cc"
    break;

  case 50: // Relation_Expr: L_PAREN Bool_Exp R_PAREN
#line 484 "mini_l.yy"
        {
            yylhs.value.as < stat_type > ().code = yystack_[1].value.as < stat_type > ().code;
            yylhs.value.as < stat_type > ().id = yystack_[1].value.as < stat_type > ().id;
        }
#line 1315 "parser.tab.cc"
    break;

  case 51: // Relation_Expr: NOT L_PAREN Bool_Exp R_PAREN
#line 489 "mini_l.yy"
        {
            string temp = _temp_();
            yylhs.value.as < stat_type > ().code = yystack_[1].value.as < stat_type > ().code + ". " + temp + "\n" + "! " + temp+ ", " + yystack_[1].value.as < stat_type > ().id + "\n"; 
            yylhs.value.as < stat_type > ().id = temp;
        }
#line 1325 "parser.tab.cc"
    break;

  case 52: // Relation_Expr: Expression error Expression
#line 494 "mini_l.yy"
                                     {}
#line 1331 "parser.tab.cc"
    break;

  case 53: // Relation_Expr: NOT Expression error Expression
#line 495 "mini_l.yy"
                                         {}
#line 1337 "parser.tab.cc"
    break;

  case 54: // Comp: EQ
#line 498 "mini_l.yy"
          {yylhs.value.as < string > () = "== ";}
#line 1343 "parser.tab.cc"
    break;

  case 55: // Comp: NEQ
#line 499 "mini_l.yy"
          {yylhs.value.as < string > () = "!= ";}
#line 1349 "parser.tab.cc"
    break;

  case 56: // Comp: LT
#line 500 "mini_l.yy"
          {yylhs.value.as < string > () = "< ";}
#line 1355 "parser.tab.cc"
    break;

  case 57: // Comp: GT
#line 501 "mini_l.yy"
          {yylhs.value.as < string > () = "> ";}
#line 1361 "parser.tab.cc"
    break;

  case 58: // Comp: LTE
#line 502 "mini_l.yy"
          {yylhs.value.as < string > () = "<= ";}
#line 1367 "parser.tab.cc"
    break;

  case 59: // Comp: GTE
#line 503 "mini_l.yy"
          {yylhs.value.as < string > () = ">= ";}
#line 1373 "parser.tab.cc"
    break;

  case 60: // Expression: Mutiplicative_Expr
#line 507 "mini_l.yy"
          {
              yylhs.value.as < stat_type > ().code = yystack_[0].value.as < stat_type > ().code;
              yylhs.value.as < stat_type > ().id = yystack_[0].value.as < stat_type > ().id;
          }
#line 1382 "parser.tab.cc"
    break;

  case 61: // Expression: Expression ADD Mutiplicative_Expr
#line 512 "mini_l.yy"
          {
               yylhs.value.as < stat_type > ().id = _temp_();
               yylhs.value.as < stat_type > ().code = yystack_[2].value.as < stat_type > ().code + yystack_[0].value.as < stat_type > ().code + ". " + yylhs.value.as < stat_type > ().id + "\n" + "+ " + yylhs.value.as < stat_type > ().id + ", " + yystack_[2].value.as < stat_type > ().id + ", " + yystack_[0].value.as < stat_type > ().id + "\n"; 
          }
#line 1391 "parser.tab.cc"
    break;

  case 62: // Expression: Expression SUB Mutiplicative_Expr
#line 517 "mini_l.yy"
          {
               yylhs.value.as < stat_type > ().id = _temp_();
               yylhs.value.as < stat_type > ().code = yystack_[2].value.as < stat_type > ().code + yystack_[0].value.as < stat_type > ().code + ". " + yylhs.value.as < stat_type > ().id + "\n" + "- " + yylhs.value.as < stat_type > ().id + ", " + yystack_[2].value.as < stat_type > ().id + ", " + yystack_[0].value.as < stat_type > ().id + "\n"; 
          }
#line 1400 "parser.tab.cc"
    break;

  case 63: // Mutiplicative_Expr: Term
#line 524 "mini_l.yy"
                  {
                      yylhs.value.as < stat_type > ().code = yystack_[0].value.as < stat_type > ().code;
                      yylhs.value.as < stat_type > ().id = yystack_[0].value.as < stat_type > ().id;
                  }
#line 1409 "parser.tab.cc"
    break;

  case 64: // Mutiplicative_Expr: Mutiplicative_Expr MULT Term
#line 529 "mini_l.yy"
          {
              yylhs.value.as < stat_type > ().id = _temp_();
              yylhs.value.as < stat_type > ().code = yystack_[2].value.as < stat_type > ().code + yystack_[0].value.as < stat_type > ().code + ". " + yylhs.value.as < stat_type > ().id + "\n" + "* " + yylhs.value.as < stat_type > ().id + ", " + yystack_[2].value.as < stat_type > ().id + ", " + yystack_[0].value.as < stat_type > ().id + "\n"; 
          }
#line 1418 "parser.tab.cc"
    break;

  case 65: // Mutiplicative_Expr: Mutiplicative_Expr DIV Term
#line 534 "mini_l.yy"
          {
              yylhs.value.as < stat_type > ().id = _temp_();
              yylhs.value.as < stat_type > ().code = yystack_[2].value.as < stat_type > ().code + yystack_[0].value.as < stat_type > ().code + ". " + yylhs.value.as < stat_type > ().id + "\n" + "/ " + yylhs.value.as < stat_type > ().id + ", " + yystack_[2].value.as < stat_type > ().id + ", " + yystack_[0].value.as < stat_type > ().id + "\n"; 
          }
#line 1427 "parser.tab.cc"
    break;

  case 66: // Mutiplicative_Expr: Mutiplicative_Expr MOD Term
#line 540 "mini_l.yy"
          {
              yylhs.value.as < stat_type > ().id = _temp_();
              yylhs.value.as < stat_type > ().code = yystack_[2].value.as < stat_type > ().code + yystack_[0].value.as < stat_type > ().code + ". " + yylhs.value.as < stat_type > ().id + "\n" + "% " + yylhs.value.as < stat_type > ().id + ", " + yystack_[2].value.as < stat_type > ().id + ", " + yystack_[0].value.as < stat_type > ().id + "\n"; 
          }
#line 1436 "parser.tab.cc"
    break;

  case 67: // Term: Var
#line 547 "mini_l.yy"
    {
        if(yystack_[0].value.as < stat_type > ().array){
            
            string ind = _temp_();
            yylhs.value.as < stat_type > ().code = yystack_[0].value.as < stat_type > ().code + ". " + ind + "\n" + "=[] " + ind + ", " + yystack_[0].value.as < stat_type > ().id + "\n";
            yylhs.value.as < stat_type > ().id = ind;
            yylhs.value.as < stat_type > ().array = false;
         }
        else{
	
                yylhs.value.as < stat_type > ().id = _temp_();
                yylhs.value.as < stat_type > ().code = yystack_[0].value.as < stat_type > ().code + ". " + yylhs.value.as < stat_type > ().id + "\n" + "= " + yylhs.value.as < stat_type > ().id + ", " + yystack_[0].value.as < stat_type > ().id + "\n";
            } 
    }
#line 1455 "parser.tab.cc"
    break;

  case 68: // Term: SUB Var
#line 562 "mini_l.yy"
        {
            yylhs.value.as < stat_type > ().id = _temp_();
            string temp;
            temp = yystack_[0].value.as < stat_type > ().code + ". " + yylhs.value.as < stat_type > ().id + "\n";
            if(yystack_[0].value.as < stat_type > ().array){
                temp += "=[] " + yylhs.value.as < stat_type > ().id + ", " + yystack_[0].value.as < stat_type > ().id + "\n";
            }
            else{
                temp += "= " + yylhs.value.as < stat_type > ().id + ", " + yystack_[0].value.as < stat_type > ().id + "\n";
            }
            yylhs.value.as < stat_type > ().code = temp + "* " + yylhs.value.as < stat_type > ().id + ", " + yylhs.value.as < stat_type > ().id + ", -1\n";
            yylhs.value.as < stat_type > ().array = false;
        }
#line 1473 "parser.tab.cc"
    break;

  case 69: // Term: NUMBER
#line 576 "mini_l.yy"
        {
            yylhs.value.as < stat_type > ().id = _temp_();
            yylhs.value.as < stat_type > ().code = ". " + yylhs.value.as < stat_type > ().id + "\n" + "= " + yylhs.value.as < stat_type > ().id + ", " + to_string(yystack_[0].value.as < int > ()) + "\n";
	}
#line 1482 "parser.tab.cc"
    break;

  case 70: // Term: SUB NUMBER
#line 581 "mini_l.yy"
        {
            yylhs.value.as < stat_type > ().code = "";
            yylhs.value.as < stat_type > ().id = "-" + to_string(yystack_[0].value.as < int > ()); 
        }
#line 1491 "parser.tab.cc"
    break;

  case 71: // Term: L_PAREN Expression R_PAREN
#line 586 "mini_l.yy"
        {
            yylhs.value.as < stat_type > ().code = yystack_[1].value.as < stat_type > ().code;
            yylhs.value.as < stat_type > ().id = yystack_[1].value.as < stat_type > ().id;
        }
#line 1500 "parser.tab.cc"
    break;

  case 72: // Term: SUB L_PAREN Expression R_PAREN
#line 591 "mini_l.yy"
        {
            yylhs.value.as < stat_type > ().id = yystack_[1].value.as < stat_type > ().id;
            yylhs.value.as < stat_type > ().code = yystack_[1].value.as < stat_type > ().code + "* " + yystack_[1].value.as < stat_type > ().id + ", " + yystack_[1].value.as < stat_type > ().id + ", -1\n";
        }
#line 1509 "parser.tab.cc"
    break;

  case 73: // Term: IDENT L_PAREN Expression_loop R_PAREN
#line 596 "mini_l.yy"
        {  
            //2.error check for calling a function which has not been declared
            if(tableFunc.find(std::string(yystack_[3].value.as < string > ())) == tableFunc.end()){
                 yy::parser::error(yystack_[3].location, "Error: used function did not declared");
            }
            yylhs.value.as < stat_type > ().id = _temp_();
            yylhs.value.as < stat_type > ().code = yystack_[1].value.as < stat_type > ().code + ". " + yylhs.value.as < stat_type > ().id + "\n" + "call " + yystack_[3].value.as < string > () + ", " + yylhs.value.as < stat_type > ().id + "\n";
        }
#line 1522 "parser.tab.cc"
    break;

  case 74: // Term: IDENT L_PAREN R_PAREN
#line 605 "mini_l.yy"
        {
            //2.error check for calling a function which has not been declared
            if(tableFunc.find(std::string(yystack_[2].value.as < string > ())) == tableFunc.end()){
                 yy::parser::error(yystack_[2].location, "Error: used function did not declared");
            }
            yylhs.value.as < stat_type > ().id = _temp_();
            yylhs.value.as < stat_type > ().code = ". " + yylhs.value.as < stat_type > ().id + "\n" + "call " + yystack_[2].value.as < string > () + ", " + yylhs.value.as < stat_type > ().id + "\n";
        }
#line 1535 "parser.tab.cc"
    break;

  case 75: // Expression_loop: Expression
#line 616 "mini_l.yy"
               {    
                   yylhs.value.as < stat_type > ().code = yystack_[0].value.as < stat_type > ().code + "param " + yystack_[0].value.as < stat_type > ().id + "\n";
                   yylhs.value.as < stat_type > ().id = "";
               }
#line 1544 "parser.tab.cc"
    break;

  case 76: // Expression_loop: Expression_loop COMMA Expression
#line 621 "mini_l.yy"
               {
                   yylhs.value.as < stat_type > ().code = yystack_[0].value.as < stat_type > ().code + "param " + yystack_[0].value.as < stat_type > ().id + "\n" + yystack_[2].value.as < stat_type > ().code;
                   yylhs.value.as < stat_type > ().id = "";
               }
#line 1553 "parser.tab.cc"
    break;

  case 77: // Expression_loop: Expression_loop error Expression
#line 625 "mini_l.yy"
                                                 {}
#line 1559 "parser.tab.cc"
    break;

  case 78: // ident: IDENT
#line 627 "mini_l.yy"
            {

    tableFunc.insert(std::pair<std::string,int>(yystack_[0].value.as < string > (),0));

    yylhs.value.as < string > () = yystack_[0].value.as < string > ();  
}
#line 1570 "parser.tab.cc"
    break;


#line 1574 "parser.tab.cc"

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
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
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
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // parser::context.
  parser::context::context (const parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        int yychecklim = yylast_ - yyn + 1;
        int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
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
  parser::yy_syntax_error_arguments_ (const context& yyctx,
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
  parser::yysyntax_error_ (const context& yyctx) const
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


  const signed char parser::yypact_ninf_ = -46;

  const signed char parser::yytable_ninf_ = -1;

  const short
  parser::yypact_[] =
  {
     -46,    47,    72,   -46,   -35,   -46,   -46,    26,    38,    93,
     -46,   -46,    -3,    -1,    82,   -46,    39,    27,   108,   -46,
     -46,   -46,    15,   187,    48,   -46,     5,   -46,    56,   -46,
     -46,    75,   -46,    13,   125,   111,   117,   152,   297,   140,
     151,   297,   301,   301,   183,   122,   -46,   122,   122,   129,
     175,   153,    40,     4,    24,    64,   169,    73,   -46,   -46,
      -6,   301,   -24,   -46,   -46,    84,   201,   -46,   178,   172,
     -46,   124,   297,     7,   192,   -46,   192,   129,   211,   129,
     -46,    42,   -46,   -46,   129,   129,   240,   199,   246,   209,
     -46,   -46,   -46,   301,   193,   129,   -46,   -46,     3,    54,
     176,   297,   301,   301,   129,   129,   129,   -46,   -46,   -46,
     -46,   -46,   -46,   129,   129,   129,   129,   297,    98,   210,
     212,   122,     6,   104,   -46,   -46,   211,   211,   -46,   214,
     -46,   219,    63,   129,   129,    99,   -46,   -46,   -46,   211,
      16,   222,   201,   -46,   211,   172,   172,   211,   -46,   -46,
     -46,   236,   255,   276,   237,   -46,   230,   269,   271,   -46,
     211,   211,   -46,   129,   129,   -46,   -46,   297,   -46,   301,
     301,   301,   129,   282,   284,   211,   211,   252,   272,    18,
     -12,   136,   -46,   -46,   -46,   122,   122,   -46,   292,   245,
     129,   129,   164,   170,   297,   297,   267,   283,   -46,   -46
  };

  const signed char
  parser::yydefact_[] =
  {
       3,     0,     2,     1,     0,     4,    78,     0,     0,     0,
       7,     7,     0,     0,     0,    16,     0,     0,     0,     7,
       9,     8,     0,     0,     0,     7,     0,    13,     0,    18,
      10,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,    46,    48,
       0,     0,    37,    69,    67,     0,    40,    42,     0,    60,
      63,     0,     0,     0,    29,    35,    30,     0,    32,     0,
       6,     0,    21,    19,     0,     0,     0,     0,     0,     0,
       5,    47,    49,     0,     0,     0,    70,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
      57,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    20,    33,    23,    14,     0,
      11,     0,     0,     0,     0,     0,    50,    71,    74,    75,
       0,     0,    41,    43,    52,    61,    62,    44,    64,    65,
      66,     0,     0,     0,     0,    36,    38,     0,     0,    51,
      53,    45,    72,     0,     0,    73,    24,     0,    26,     0,
       0,     0,     0,     0,     0,    77,    76,     0,    27,     0,
       0,     0,    15,    12,    25,     0,     0,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    28
  };

  const short
  parser::yypgoto_[] =
  {
     -46,   -46,   -46,   -46,   115,   -46,   -46,   -40,   -45,   251,
     -38,   -28,   206,   208,   215,   -26,   142,    97,   -46,   -46
  };

  const short
  parser::yydefgoto_[] =
  {
      -1,     1,     2,     5,    12,    16,    17,    51,    52,    74,
      64,    65,    66,    67,   113,    68,    69,    70,   140,     7
  };

  const unsigned char
  parser::yytable_[] =
  {
      53,    56,    14,    53,    18,    84,    81,    73,   119,    75,
      75,    81,    34,    53,   102,    71,     6,   163,    53,   185,
      37,   100,    97,    78,    79,    27,    28,     8,    22,   102,
     186,    94,   118,    98,    53,    99,    86,   105,   106,    95,
      20,    82,    10,   124,   102,    50,    96,     3,    15,   136,
      15,   122,   137,   123,    85,   104,    15,   120,   126,   127,
     164,   141,   165,    53,    15,   132,    29,    99,     9,   135,
      23,    24,    87,    81,   139,     4,    88,   151,   144,    53,
      53,    21,    83,   155,   125,   105,   106,   147,    19,   102,
     107,   108,   109,   110,   111,   112,    81,    11,   101,    32,
     137,    91,    92,    53,    35,    60,    81,   160,   161,   159,
     102,    42,    89,    53,    25,    43,    44,    45,    93,   152,
      46,    47,    48,    36,    62,    63,    13,   177,    49,    53,
     105,   106,    81,    38,    26,   105,   106,   175,   176,    53,
      33,   178,   179,   180,   117,   162,   181,   188,   189,    50,
     102,    81,    81,   156,   196,   197,    53,    53,    53,    53,
      41,    60,    80,    39,   192,   193,    42,   105,   106,    40,
      43,    44,    45,    50,    77,    46,    47,    48,    90,   104,
      62,    63,    42,    49,   194,   187,    43,    44,    45,    54,
     195,    46,    47,    48,   133,   105,   106,    30,    31,    49,
      55,   105,   106,    72,    50,   114,   115,   116,    60,   105,
     106,   148,   149,   150,   107,   108,   109,   110,   111,   112,
      50,    77,   138,    79,   105,   106,   103,    62,    63,   107,
     108,   109,   110,   111,   112,    42,   121,   166,   167,    43,
      44,    45,   105,   106,    46,    47,    48,   145,   146,    42,
     128,   129,    49,    43,    44,    45,   130,   168,    46,    47,
      48,   131,   153,   157,   154,    42,    49,   184,   158,    43,
      44,    45,   169,    50,    46,    47,    48,   170,   172,   171,
      42,   173,    49,   174,    43,    44,    45,    50,   198,    46,
      47,    48,   182,   190,   183,   191,    42,    49,   102,    76,
      43,    44,    45,    50,   199,    46,    47,    48,   142,   134,
      42,   143,     0,    49,    43,    44,    45,     0,    50,    46,
      47,    48,     0,     0,     0,     0,     0,    49,    57,    58,
      59,     0,     0,    60,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,    50,     0,
       0,     0,    62,    63
  };

  const short
  parser::yycheck_[] =
  {
      38,    41,     5,    41,     5,     1,    51,    45,     1,    47,
      48,    56,     7,    51,    26,    43,    51,     1,    56,     1,
       7,    45,    60,    49,    48,    10,    11,     1,     1,    26,
      42,    57,    72,    61,    72,    61,    12,    31,    32,    45,
       1,     1,     4,     1,    26,    51,    52,     0,    51,    46,
      51,    77,    46,    79,    50,     1,    51,    50,    84,    85,
      44,   101,    46,   101,    51,    93,    51,    93,    42,    95,
      43,    44,    48,   118,   100,     3,    12,   117,   104,   117,
     118,    42,    42,   121,    42,    31,    32,   113,     6,    26,
      36,    37,    38,    39,    40,    41,   141,     4,    14,    51,
      46,    28,    29,   141,    48,    32,   151,   133,   134,    46,
      26,    13,    48,   151,     6,    17,    18,    19,    45,    21,
      22,    23,    24,    48,    51,    52,    11,   167,    30,   167,
      31,    32,   177,     8,    19,    31,    32,   163,   164,   177,
      25,   169,   170,   171,    20,    46,   172,   185,   186,    51,
      26,   196,   197,    49,   194,   195,   194,   195,   196,   197,
       8,    32,     9,    52,   190,   191,    13,    31,    32,    52,
      17,    18,    19,    51,    45,    22,    23,    24,     9,     1,
      51,    52,    13,    30,    20,    49,    17,    18,    19,    49,
      20,    22,    23,    24,     1,    31,    32,    10,    11,    30,
      49,    31,    32,    20,    51,    33,    34,    35,    32,    31,
      32,   114,   115,   116,    36,    37,    38,    39,    40,    41,
      51,    45,    46,    48,    31,    32,    25,    51,    52,    36,
      37,    38,    39,    40,    41,    13,    44,    15,    16,    17,
      18,    19,    31,    32,    22,    23,    24,   105,   106,    13,
      10,    52,    30,    17,    18,    19,    10,    21,    22,    23,
      24,    52,    52,    49,    52,    13,    30,    15,    49,    17,
      18,    19,    17,    51,    22,    23,    24,     1,    48,    42,
      13,    12,    30,    12,    17,    18,    19,    51,    21,    22,
      23,    24,    10,     1,    10,    50,    13,    30,    26,    48,
      17,    18,    19,    51,    21,    22,    23,    24,   102,    94,
      13,   103,    -1,    30,    17,    18,    19,    -1,    51,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    27,    28,
      29,    -1,    -1,    32,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    51,    -1,
      -1,    -1,    51,    52
  };

  const signed char
  parser::yystos_[] =
  {
       0,    55,    56,     0,     3,    57,    51,    73,     1,    42,
       4,     4,    58,    58,     5,    51,    59,    60,     5,     6,
       1,    42,     1,    43,    44,     6,    58,    10,    11,    51,
      10,    11,    51,    58,     7,    48,    48,     7,     8,    52,
      52,     8,    13,    17,    18,    19,    22,    23,    24,    30,
      51,    61,    62,    64,    49,    49,    61,    27,    28,    29,
      32,    45,    51,    52,    64,    65,    66,    67,    69,    70,
      71,    65,    20,    64,    63,    64,    63,    45,    69,    48,
       9,    62,     1,    42,     1,    50,    12,    48,    12,    48,
       9,    28,    29,    45,    69,    45,    52,    64,    65,    69,
      45,    14,    26,    25,     1,    31,    32,    36,    37,    38,
      39,    40,    41,    68,    33,    34,    35,    20,    61,     1,
      50,    44,    69,    69,     1,    42,    69,    69,    10,    52,
      10,    52,    65,     1,    68,    69,    46,    46,    46,    69,
      72,    61,    66,    67,    69,    70,    70,    69,    71,    71,
      71,    61,    21,    52,    52,    64,    49,    49,    49,    46,
      69,    69,    46,     1,    44,    46,    15,    16,    21,    17,
       1,    42,    48,    12,    12,    69,    69,    61,    65,    65,
      65,    69,    10,    10,    15,     1,    42,    49,    64,    64,
       1,    50,    69,    69,    20,    20,    61,    61,    21,    21
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    54,    55,    56,    56,    57,    57,    58,    58,    58,
      59,    59,    59,    59,    59,    59,    60,    60,    60,    61,
      61,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    63,    63,    64,    64,    64,
      65,    65,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    72,    73
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     1,     0,     2,    12,    12,     0,     3,     3,
       3,     8,    11,     3,     8,    11,     1,     3,     3,     2,
       3,     2,     3,     3,     5,     7,     5,     6,    13,     2,
       2,     1,     2,     3,    13,     1,     3,     1,     4,     7,
       1,     3,     1,     3,     3,     4,     1,     2,     1,     2,
       3,     4,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     3,     3,     1,     2,     1,
       2,     3,     4,     4,     3,     1,     3,     3,     1
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "FUNCTION",
  "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY",
  "END_BODY", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE",
  "WHILE", "DO", "FOR", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ",
  "WRITE", "AND", "OR", "NOT", "TRUE", "FALSE", "RETURN", "ADD", "SUB",
  "MULT", "DIV", "MOD", "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON",
  "COLON", "COMMA", "L_PAREN", "R_PAREN", "EQUAL", "L_SQUARE_BRACKET",
  "R_SQUARE_BRACKET", "ASSIGN", "IDENT", "NUMBER", "UMINUS", "$accept",
  "start_prog", "program", "function", "Declarations", "DeclarationDef",
  "identifier", "Statements", "StatementDef", "Var_loop", "Var",
  "Bool_Exp", "Relation_And_Expr", "Relation_Expr", "Comp", "Expression",
  "Mutiplicative_Expr", "Term", "Expression_loop", "ident", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  parser::yyrline_[] =
  {
       0,   108,   108,   119,   120,   126,   145,   151,   154,   162,
     165,   187,   211,   237,   238,   239,   242,   243,   247,   250,
     253,   258,   259,   262,   274,   281,   287,   302,   316,   336,
     350,   365,   366,   367,   368,   371,   380,   395,   409,   424,
     441,   442,   449,   450,   457,   463,   469,   470,   476,   477,
     483,   488,   494,   495,   498,   499,   500,   501,   502,   503,
     506,   511,   516,   523,   528,   533,   539,   546,   561,   575,
     580,   585,   590,   595,   604,   615,   620,   625,   627
  };

  void
  parser::yy_stack_print_ () const
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
  parser::yy_reduce_print_ (int yyrule) const
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
#line 2190 "parser.tab.cc"

#line 634 "mini_l.yy"

int main(int argc, char **argv)
{
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << l << ": " << m << std::endl;
}
