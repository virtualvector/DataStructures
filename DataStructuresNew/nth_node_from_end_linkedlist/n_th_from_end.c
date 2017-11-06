#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

//finding nth node from the end in a linked list
int main(){
    
    Node* header=NULL;

    while(1){
    
        printf("%s\n","enter your choice: 1 for insertion 2 for display");
        int choice;
        scanf("%d",&choice);
        
        if(choice==1){
            int value;
            scanf("%d",&value);
            header=insert_back(header,value);

        }
        else if(choice==2) display(header);
        printf("\n");
       else {
            printf("%s\n","enter n to find nth node from the end");
            int n;
            scanf("%d",&n);

            Node* temp= header;
            int counter=0;
            while(temp!=NULL){
                counter++;
                temp=temp->next;

            }
            counter=counter-n+1;
            temp=header;
            while(--counter){
                temp=temp->next;
            }
            printf("node value is %d\n",temp->data);


       }

    }


return 0;
}
