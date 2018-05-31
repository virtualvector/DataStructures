%{
#include<stdio.h>
#include<stdlib.h>
%}

%%

"int" |
"char" |
"void" |
"return" |
"if" |
"else" |
"for" {printf("%s -> keyword\n",yytext);}

['+','-','*','\\','\/'] { printf("%s -> operator\n",yytext);}
[0-9]* {printf("%s -> digit\n",yytext);}
[a-zA-Z0-9]* { printf("%s -> identifier\n",yytext);}


%%

void main()
{
    yyin = fopen("inputfile.c","r");
    yylex();



}
