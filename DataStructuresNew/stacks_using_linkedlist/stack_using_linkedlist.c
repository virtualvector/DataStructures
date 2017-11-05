#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){
        
                    int size;
                    int data;
                    Node* header=NULL;
    while(1){
        printf("Choices are \n1.create\n2.push\n3.pop\n4.display\n");
        printf("Enter your choice\n");
        int choice;
        scanf("%d",&choice);


        switch(choice){
            
            case 1: //create stack

                    printf("enter the size\n");
                    scanf("%d",&size);
                    break;

            case 2 : //insert or push
                    
                    if(header!=NULL && header->number == size){
                        printf("stack full\n");break;
                    }
                    printf("enter the data to be pushed\n");
                    scanf("%d",&data);



                        header=insert_front(header,data);
                        break;

            case 3 : //pop
                    if(header==NULL){printf("stack empty\n");break;}
                    printf("data popped is %d\n",delete_front(&header));
                    break;

            case 4 ://display
                    display(header);
                    printf("\n");
                    break;

        }


    }

return 0;
}
