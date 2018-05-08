%{
#include<stdio.h>
    int cnt=0;  
%}

%%
    ((\/)(\/).*) {cnt++;}
    (("/*")(.*|("\n"))*("*/")) {cnt++;}


%%

int main()
{
    yyin = fopen("out.c","r");
    yyout = fopen("out2.c","w");
    yylex();
    printf("Number of comments %d\n",cnt);

}
