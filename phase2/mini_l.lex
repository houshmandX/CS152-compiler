	/* cs152-Fall2020
   Project Phase I : Lexial Anayzer
   Project Phase II : Parser
   Autor@ Hayden Pour
	*/
%{
#include "parser.tab.h"	
int x = 1;
int y = 1;
%}

DIGIT [0-9]

%%
	/* Reserved words */
function	{y = y + yyleng; return FUNCTION;}
beginparams	{y = y + yyleng; return BEGIN_PARAMS;}
endparams	{y = y + yyleng; return END_PARAMS;}
beginlocals	{y = y + yyleng; return BEGIN_LOCALS;}
endlocals	{y = y + yyleng; return END_LOCALS;}
beginbody	{y = y + yyleng; return BEGIN_BODY;}
endbody		{y = y + yyleng; return END_BODY;}
integer		{y = y + yyleng; return INTEGER;}
array		{y = y + yyleng; return ARRAY;}
of		    {y = y + yyleng; return OF;}
if		    {y = y + yyleng; return IF;}
then		{y = y + yyleng; return THEN;}
endif		{y = y + yyleng; return ENDIF;}
else		{y = y + yyleng; return ELSE;}
while		{y = y + yyleng; return WHILE;}
do		    {y = y + yyleng; return DO;}
for		    {y = y + yyleng; return FOR;}
beginloop	{y = y + yyleng; return BEGINLOOP;}
endloop		{y = y + yyleng; return ENDLOOP;}
continue	{y = y + yyleng; return CONTINUE;}
read		{y = y + yyleng; return READ;}
write		{y = y + yyleng; return WRITE;}
and		    {y = y + yyleng; return AND;}
or		    {y = y + yyleng; return OR;}
not		    {y = y + yyleng; return NOT;}
true		{y = y + yyleng; return TRUE;}
false		{y = y + yyleng; return FALSE;}
return		{y = y + yyleng; return RETURN;}

	/* Arithmetic Operators */
"+"	    {y = y + yyleng; return ADD;}
"-"     {y = y + yyleng; return SUB;}
"*"     {y = y + yyleng; return MULT;}
"/"     {y = y + yyleng; return DIV;}
"%"     {y = y + yyleng; return MOD;}

	/* Comparison Operators */
"=="    {y = y + yyleng; return EQ;}
"<>"	{y = y + yyleng; return NEQ;}
"<"     {y = y + yyleng; return LT;}
">"     {y = y + yyleng; return GT;}
"<="    {y = y + yyleng; return LTE;}
">="    {y = y + yyleng; return GTE;}

	/* Special symbols */
";"	{y = y + yyleng; return SEMICOLON;}
":"     {y = y + yyleng; return COLON;}
","     {y = y + yyleng; return COMMA;}
"("     {y = y + yyleng; return L_PAREN;}
")"     {y = y + yyleng; return R_PAREN;}
"="     {y = y + yyleng; return EQUAL;}
"["	{y = y + yyleng; return L_SQUARE_BRACKET;}
"]"     {y = y + yyleng; return R_SQUARE_BRACKET;}
":="    {y = y + yyleng; return ASSIGN;}
	
	/*comments */
(##).*\n	{x = x+1; y = 1;} 
	
	/* Numbers */
{DIGIT}+	{y = y + yyleng; yylval.ival = atoi(yytext); return NUMBER;}

	/* spaces and newlines */
[ \t]+	{y = y+yyleng;}
"\n"	{x = x+1; y = 1;}

        /* Identifier */
		/*[a-zA-Z] range in lower and upper case any character */
		/* [a-zA-Z0-9_] range in lower and upper case any character or range of numbers 0-9 or lower case repeats*/
		/*[a-zA-Z0-9] ends with lower case or upper case character or numbers */
([a-zA-Z])|([a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9])       {y= y + yyleng; yylval.cval = strdup(yytext); return IDENT;}
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
