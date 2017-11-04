#include<stdio.h>
#include<stdlib.h>

typedef struct queue{

    int* a;
    int front;
    int rear;
    int size;


}Queue;


Queue* create_queue(int size){

    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->size = size;
    q->front=q->rear=-1;
    q->a = malloc(size * sizeof(int));

}

void insert(Queue* q,int val){

       if(q->rear != q->size){
            if((q->front==-1)&&(q->rear==-1)){
                q->front++;
                q->rear++;
                q->a[q->rear]=val;

            }
            else{

                q->a[++(q->rear)]=val;

            }

       }

}

int delete(Queue* q )
{

    if(q->rear != -1){
            if(q->rear == q->front){
                int val= q->a[q->front];
                q->front = q->rear = -1;
                return val;

            }

            else{
                return q->a[(q->front)++];

            }

    }
    else return -1;

}

void display(Queue* q){
    if(q->rear==-1) return;
    int i;
    for(i=q->front;i<=(q->rear);i++){
        printf("%d\t",q->a[i]);

    }


}



