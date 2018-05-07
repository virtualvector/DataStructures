%{
#include<stdio.h>
#include<string.h>
int op=0;
int digi =0;
int flag = 0;
%}
%%

^([0-9]+)(([\+,\-,\*])([0-9]+))+  {printf("valid");

    int i=0;
    for(i=0;yytext[i]!='\0';i++)
    {
//        printf("running\n");
        if(yytext[i]=='+' || yytext[i]=='*')
        op++;
        else 
        digi++;

    }
    flag = 1;

    
} 
. {}

%%
void main()
{
    yylex();
    if(flag) printf("%d %d",op,digi);
    else printf("not valid");
}
