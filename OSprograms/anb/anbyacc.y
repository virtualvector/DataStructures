%{
#include<stdio.h>
#include<stdlib.h>
extern int yylex();
int count=0;
%}

%token A B

%%

S: X B 
X: X A {count++;}
|;


%%

int yyerror(){}

int main()
{

    yyparse();
    if(count==5) printf("yes\n");
    else printf("no\n");
    
}
