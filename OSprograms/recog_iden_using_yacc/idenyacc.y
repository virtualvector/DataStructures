%{
#include<stdio.h>
extern FILE* yyin;
extern int yylex();
%}

%token KEY

%%

S: KEY S {printf("keyword");}
|KEY {printf("keyword");}

%%


int  yyerror()
{
return 0;
}

void main()
{
    yyin  = fopen("inputfile.c","r");
    while(!feof(yyin))
    {
    yyparse();
    }


}

