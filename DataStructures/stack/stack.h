# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

struct stack {
    
    int size;
    int top;
    int* a;

};

typedef struct stack  Stack;

void  init_func(Stack* s, int si){

        s->size = si;
        s->top = -1;
        s->a = (int*)malloc(si*sizeof(int));
}


void push(struct stack* s,int data){

     s->top++;
     if (s->top == s->size) {

        printf("stack full, cannot be pushed\n");
       s-> top--;
        return; 

     }
     s->a[(s->top)]= data;
     
}

int pop (Stack* s){
    if(s-> top == -1){
        printf("stack underflow\n");
        return INT_MIN ;
    }

    return s->a[(s->top--)];
}


void display(Stack* s){
    int i;
    for(i=0;i<=s->top;i++){
            
            printf("%d ",s->a[i]);

    }

}


