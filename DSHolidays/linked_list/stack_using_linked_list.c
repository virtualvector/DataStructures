#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"

int main(){


    Node* head_node = NULL;
    int value;
    int value_popped;
    
    for(;;){

        printf("%s","the options are\n1.create\n2.push\n3.pop\n4.display\n5.size\n");

        int choice;
        scanf("%d",&choice);
        switch(choice){

            case 1 : 

                    head_node = create_list(0);
                    printf("\n");
                    break;
            case 2 : 
                    scanf("%d",&value);
                    head_node->next = insert_front(head_node->next,value);
                    head_node->data++;
                    break;

            case 3 : value_popped = (head_node->next)->data;
                    printf("value popped is %d\n",value_popped);
                    delete_front(&(head_node->next));
                    head_node->data--;
                    break;

            case 4: display(head_node->next);printf("\n");break;

            case 5 : printf("%d \n",head_node->data);

        }

    }











return 0;
}
