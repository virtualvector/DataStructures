%{
#include<stdio.h>
#include "y.tab.h"
%}

%%
a 	{printf("a\n"); return A;}
b 	{return B;}
\n	{return 0;} 
. ;
%%

int yywrap()
{
	return 0;
}
