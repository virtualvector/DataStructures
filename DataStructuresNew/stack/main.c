#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
    Stack* my_stack;

    my_stack = create_stack(10);
    push(my_stack,10);
    push(my_stack,20);

    push(my_stack,20);
    push(my_stack,20);
    push(my_stack,20);
    push(my_stack,20);
    
    display(my_stack);

return 0;
}
