%{
#include<stdio.h>
#include"y.tab.h"
%}

%%

"int" |
"char" {return KEY;}



%%
