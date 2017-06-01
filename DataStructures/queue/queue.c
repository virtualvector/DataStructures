# include<limits.h>
struct queue* init(int size){

  struct queue*  Queue= (struct queue*)malloc(sizeof(struct queue));   
  Queue->a = (int*)malloc(size*sizeof(int));
  Queue->size = size;
  Queue->front=-1;
  Queue->rear=-1;
  return Queue;

}

void insert_rear(struct queue* Queue,int data){
    
    if(Queue->rear == -1){
        Queue->rear++;
        Queue->front++;
        Queue->a[Queue->rear]=data;

    }


    else if(Queue->rear == Queue->size-1){
        printf("queue full\n");
        return;

    }

    else {
    Queue->a[++Queue->rear]=data; 
    }

}

int delete_front(struct queue* Queue){
    


     if(Queue->front ==  -1 || Queue->front > Queue->rear){
        printf("Queue empty \n");
        return INT_MAX;
    }

    return Queue->a[Queue->front++];

}
void display(struct queue* Queue){

    int i;
    for(i=Queue->front;i<=Queue->rear;i++){
            printf("%d ",Queue->a[i]);

    }
    printf("\n");


}
