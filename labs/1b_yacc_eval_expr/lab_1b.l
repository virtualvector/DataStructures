%{
#include<stdio.h>
#include<stdlib.h>
#include "y.tab.h"
extern  yylval;
extern int yychar;
%}

%%
[ \t]	;
[0-9]+	{
	 yylval = atoi(yytext);
		 return INTEGER;
	}

[-\+\*\/]		{
			
			return yytext[0]; 
		}

(.|\n) 		{return 0;}

%%

