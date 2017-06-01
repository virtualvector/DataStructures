#include<stdio.h>
#include<stdlib.h>
#include"queue.h"
#include"queue.c"

int main(){

    struct queue* Q;
    while(1){

        printf(" 1:create\n 2:insert\n 3:delete\n 4:display\n 5:exit\n");
        printf("Enter the choice");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            case 1 :  printf("enter the size\n");
                      int size;
                      scanf("%d",&size);
                      Q= init(size);
                      break;

            case 2 : printf("enter the value\n");
                     int value;
                     scanf("%d",&value);
                     insert_rear(Q,value);
                     break;


            case 3 :printf(""); 
                    int val;
                    val= delete_front(Q);
                    if(val!=INT_MAX) printf("%d is deleted from queue\n",val);
                    break;

            case 4 : display(Q);
                     break;
            case 5 : exit(0);



        }



    }

}
