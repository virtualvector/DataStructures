#include <stdio.h>
#include <stdlib.h>

typedef struct stack{

    int* a;
    int top;
    int size;

}Stack;

/*
Stack* create_stack(int);
void push(Stack*,int);
int pop(Stack*);
int peek(Stack*);
void display(Stack*);
*/

Stack* create_stack(int size){

    Stack* s;
    s= (Stack*)malloc(sizeof(Stack));
    s->a = malloc(size*sizeof(int));
    s->top=-1;
    s->size=size;
    return s;

}

void push(Stack* s,int val){

    if(s->top != s->size){
        s->a[++(s->top)]=val;

    }

}

int pop(Stack* s){
    
    return s->a[(s->top)--];

}

void display(Stack* s){

    int tracker = s->top;
    int i=0;
    for(i=0;i<=tracker;i++){
        printf("%d\t",s->a[i]);

    }

}


