%{

#include<stdio.h>
int yylex();
void yyerror(char *s);
extern char* yytext;
%}

%token INTEGER
%left '+' '-'
%left '*' '/'

%%

program:	program expr 	{printf("%d \n",$2);exit(0);}
			| 
			;

expr:	INTEGER 				{$$ = $1;}
		| expr '+' expr 		{$$ = $1+$3;}
		| expr '-' expr 		{$$ = $1-$3;}
		| expr '*' expr			{$$ = $1*$3;}
		| expr '/' expr 		{$$ = $1/$3;}
		| '(' expr ')' 			{$$ = $2;}
		;

%%

int main()
{
	yyparse();
	return 0;
}

void yyerror(char *s)
{
	printf("%s\n", s);
}
