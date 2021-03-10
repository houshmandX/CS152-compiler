	/* cs152-Fall2020
   Project Phase I : Lexial Anayzer
   Autor@ Hayden Pour
	*/
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int x = 1;
int y = 1;
%}

DIGIT [0-9]

%%
	/* Reserved words */
function	{printf("FUNCTION\n"); y = y + yyleng;}
beginparams	{printf("BEGIN_PARAMS\n"); y = y + yyleng;}
endparams	{printf("END_PARAMS\n"); y = y + yyleng;}
beginlocals	{printf("BEGIN_LOCALS\n"); y = y + yyleng;}
endlocals	{printf("END_LOCALS\n"); y = y + yyleng;}
beginbody	{printf("BEGIN_BODY\n"); y = y + yyleng;}
endbody		{printf("END_BODY\n"); y = y + yyleng;}
integer		{printf("INTEGER\n"); y = y + yyleng;}
array		{printf("ARRAY\n"); y = y + yyleng;}
of		    {printf("OF\n"); y = y + yyleng;}
if		    {printf("IF\n"); y = y + yyleng;}
then		{printf("THEN\n"); y = y + yyleng;}
endif		{printf("ENDIF\n"); y = y + yyleng;}
else		{printf("ELSE\n"); y = y + yyleng;}
while		{printf("WHILE\n"); y = y + yyleng;}
do		    {printf("DO\n"); y = y + yyleng;}
for		    {printf("FOR\n"); y = y + yyleng;}
beginloop	{printf("BEGINLOOP\n"); y = y + yyleng;}
endloop		{printf("ENDLOOP\n"); y = y + yyleng;}
continue	{printf("CONTINUE\n"); y = y + yyleng;}
read		{printf("READ\n"); y = y + yyleng;}
write		{printf("WRITE\n"); y = y + yyleng;}
and		    {printf("AND\n"); y = y + yyleng;}
or		    {printf("OR\n"); y = y + yyleng;}
not		    {printf("NOT\n"); y = y + yyleng;}
true		{printf("TRUE\n"); y = y + yyleng;}
false		{printf("FALSE\n"); y = y + yyleng;}
return		{printf("RETURN\n"); y = y + yyleng;}

	/* Arithmetic Operators */
"+"	    {printf("ADD\n"); y = y + yyleng;}
"-"     {printf("SUB\n"); y = y + yyleng;}
"*"     {printf("MULT\n"); y = y + yyleng;}
"/"     {printf("DIV\n"); y = y + yyleng;}
"%"     {printf("MOD\n"); y = y + yyleng;}

	/* Comparison Operators */
"=="    {printf("EQ\n"); y = y + yyleng;}
"<>"	{printf("NEQ\n"); y = y + yyleng;}
"<"     {printf("LT\n"); y = y + yyleng;}
">"     {printf("GT\n"); y = y + yyleng;}
"<="    {printf("LTE\n"); y = y + yyleng;}
">="    {printf("GTE\n"); y = y + yyleng;}

	/* Special symbols */
";"	    {printf("SEMICOLON\n"); y = y + yyleng;}
":"     {printf("COLON\n"); y = y + yyleng;}
","     {printf("COMMA\n"); y = y + yyleng;}
"("     {printf("L_PAREN\n"); y = y + yyleng;}
")"     {printf("R_PAREN\n"); y = y + yyleng;}
"="     {printf("EQUAL\n"); y = y + yyleng;}
"["	    {printf("L_SQUARE_BRACKET\n"); y = y + yyleng;}
"]"     {printf("R_SQUARE_BRACKET\n"); y = y + yyleng;}
":="    {printf("ASSIGN\n"); y = y + yyleng;}
	
	/*comments */
(##).*\n	{x = x+1; y = 1;} 
	
	/* Numbers */
{DIGIT}+	{printf("NUMBER %s\n", yytext); y = y + yyleng;}

	/* spaces and newlines */
[ \t]+	{y = y+yyleng;}
"\n"	{x = x+1; y = 1;}

        /* Identifier */
		/*[a-zA-Z] range in lower and upper case any character */
		/* [a-zA-Z0-9_] range in lower and upper case any character or range of numbers 0-9 or lower case repeats*/
		/*[a-zA-Z0-9] ends with lower case or upper case character or numbers */
([a-zA-Z])|([a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9])       {printf("IDENT %s\n", yytext);y= y + yyleng;}
	/* Error for unreconized Identifier */
	/*if starts with any number or underscore, follow have any character, 
	number, or underscore in between and any character or 
	numbers in the end "ERROR" */
[0-9_][a-zA-Z0-9_]*    {printf("Error at line %d, column %d: Identifier \"%s\" must start with a letter\n",x,y,yytext);exit(0);}  
	/*starts with any character follow have any character, number, or underscore, in between 
	and end with underscore "ERROR" */
[a-zA-Z][a-zA-Z0-9_]*               {printf("Error at line %d, column %d: Identifier \"%s\" can't end with an underscore\n",x,y,yytext);exit(0);}
        /* unrecognized character */
		/* removed exit(0) to move to next Identifier*/
.       {printf("Error at line %d, column %d :unrecognized symbol \"%s\"\n",x,y,yytext);}
%%

int main(int argc, char ** argv)
{
	
   if(argc >= 2)
   {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL) 
      {
         yyin = stdin;
      }
}
   else
   {
      yyin = stdin;
   }
   
   yylex();
}

