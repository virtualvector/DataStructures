%{
#include<stdio.h>
int yylex();
void yyerror(char *s);
int n = 5;
int b= 0;
%}

%token A B

%%
program : program A		{printf("A\n"); n--;} 
		  | B			{printf("B\n");}
		;

%%

void yyerror(char *s)
{	
	printf("%s\n", s);
}
int main()
{
	
	scanf("%d",&n);
	yyparse();
	if(n==0 && b==0)
	printf("Success");
	else
		printf("FAilure");
}
	
