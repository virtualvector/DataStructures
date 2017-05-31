# include <stdio.h>
# include <stdlib.h>
# include "stack.h"

int main(){

printf("enter the size of the stack\n");
int size;
scanf("%d",&size);
Stack s;
init_func(&s,size);

push(&s,5);

push(&s,15);
push(&s,25);
push(&s,40);

display(&s);
printf("\n");

int val = pop(&s);
if(val!=INT_MIN) printf("popped value is %d \n",val);




return 0;
}
