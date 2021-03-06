	/* cs152-Fall2020
   Project Phase I : Lexial Anayzer
   Project Phase II : Parser
   Project Phase III: Code Generator
   Autor@ Hayden Pour
	*/
%{
#include <iostream>
#define YY_DECL yy::parser::symbol_type yylex()
#include "parser.tab.hh"

static yy::location loc;

%}

%option noyywrap 

%{
#define YY_USER_ACTION loc.columns(yyleng);
%}


DIGIT [0-9]

%%

%{
loc.step(); 
%}

	/* Reserved words */
function	{return yy::parser::make_FUNCTION(loc);}
beginparams	{return yy::parser::make_BEGIN_PARAMS(loc);}
endparams	{return yy::parser::make_END_PARAMS(loc);}
beginlocals	{return yy::parser::make_BEGIN_LOCALS(loc);}
endlocals	{return yy::parser::make_END_LOCALS(loc);}
beginbody	{return yy::parser::make_BEGIN_BODY(loc);}
endbody		{return yy::parser::make_END_BODY(loc);}
integer		{return yy::parser::make_INTEGER(loc);}
array		{return yy::parser::make_ARRAY(loc);}
of		{return yy::parser::make_OF(loc);}
if		{return yy::parser::make_IF(loc);}
then		{return yy::parser::make_THEN(loc);}
endif		{return yy::parser::make_ENDIF(loc);}
else		{return yy::parser::make_ELSE(loc);}
while		{return yy::parser::make_WHILE(loc);}
do		{return yy::parser::make_DO(loc);}
for		{return yy::parser::make_FOR(loc);}
beginloop	{return yy::parser::make_BEGINLOOP(loc);}
endloop		{return yy::parser::make_ENDLOOP(loc);}
continue	{return yy::parser::make_CONTINUE(loc);}
read		{return yy::parser::make_READ(loc);}
write		{return yy::parser::make_WRITE(loc);}
and		{return yy::parser::make_AND(loc);}
or		{return yy::parser::make_OR(loc);}
not		{return yy::parser::make_NOT(loc);}
true		{return yy::parser::make_TRUE(loc);}
false		{return yy::parser::make_FALSE(loc);}
return		{return yy::parser::make_RETURN(loc);}

	/* Arithmetic Operators */
"+"	{return yy::parser::make_ADD(loc);}
"-"     {return yy::parser::make_SUB(loc);}
"*"     {return yy::parser::make_MULT(loc);}
"/"     {return yy::parser::make_DIV(loc);}
"%"     {return yy::parser::make_MOD(loc);}

	/* Comparison Operators */
"=="    {return yy::parser::make_EQ(loc);}
"<>"	{return yy::parser::make_NEQ(loc);}
"<"     {return yy::parser::make_LT(loc);}
">"     {return yy::parser::make_GT(loc);}
"<="    {return yy::parser::make_LTE(loc);}
">="    {return yy::parser::make_GTE(loc);}

	/* Special symbols */
";"	{return yy::parser::make_SEMICOLON(loc);}
":"     {return yy::parser::make_COLON(loc);}
","     {return yy::parser::make_COMMA(loc);}
"("     {return yy::parser::make_L_PAREN(loc);}
")"     {return yy::parser::make_R_PAREN(loc);}
"="     {return yy::parser::make_EQUAL(loc);}
"["	{return yy::parser::make_L_SQUARE_BRACKET(loc);}
"]"     {return yy::parser::make_R_SQUARE_BRACKET(loc);}
":="    {return yy::parser::make_ASSIGN(loc);}
	
	/*comments */
(##).*\n	{loc.step(); loc.lines();} 
	
	/* Numbers */
{DIGIT}+	{return yy::parser::make_NUMBER(atoi(yytext),loc);}

	/* spaces and newlines */
[ \t]+	{loc.step();}
"\n"	{loc.step(); loc.lines();}

        /* Identifier */
		/*[a-zA-Z] range in lower and upper case any character */
		/* [a-zA-Z0-9_] range in lower and upper case any character or range of numbers 0-9 or lower case repeats*/
		/*[a-zA-Z0-9] ends with lower case or upper case character or numbers */

([a-zA-Z])|([a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9])       {return yy::parser::make_IDENT(yytext, loc);}
	
	/* Error for unreconized Identifier */
	/*if starts with any number or underscore, follow have any character, 
	number, or underscore in between and any character or 
	numbers in the end "ERROR" */
	
[0-9_][a-zA-Z0-9_]*        {cout <<"Error at the location: "<<loc << ": Identifier must start with a letter."<< endl;}
	
	/*starts with any character follow have any character, number, or underscore, in between 
	and end with underscore "ERROR" */
	
	
[a-zA-Z][a-zA-Z0-9_]*      {cout <<"Error at the location: "<<loc << ": Identifier can't end with an underscore."<< endl;}
	
	  /* unrecognized character */
	 /* removed exit(0) to move to next Identifier*/
	
.        {cout <<"Error at the location: "<<loc << ": unrecognized symbol."<< endl;}	


 <<EOF>>	{return yy::parser::make_END(loc);}
%%
