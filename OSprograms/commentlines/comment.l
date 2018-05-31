%{
#include<stdio.h>
#include<stdlib.h>
%}

%%
"//".*\n {;}
"/*"(.|\n)*"*/" {;}

%%

void main()
{
    yyin = fopen("inputfile.c","r");
    yyout  = fopen("outputfile.c","w");
    yylex();


}
