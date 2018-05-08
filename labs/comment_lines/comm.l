%{
#include<stdio.h>
#include<stdlib.h>
int num=0;
%}

%%

\/\/.* {num++;}


%%

int main()
{
    yyin = fopen("inputmy.c","w");
    yyout = fopen("outputmy.c","w");

    yylex();


}
