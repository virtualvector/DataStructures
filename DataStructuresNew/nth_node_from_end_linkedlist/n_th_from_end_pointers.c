#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

//finding nth node from the end in a linked list using two pointers
int main(){
    
    Node* header=NULL;

    while(1){
    
        printf("%s\n","enter your choice:\n1 for insertion\n2 for display\n3 for nth node from the end");
        int choice;
        scanf("%d",&choice);
        
        if(choice==1){
            int value;
            scanf("%d",&value);
            header=insert_back(header,value);

        }
        else if(choice==2) {display(header);
        printf("\n");}

       else {
            printf("%s\n","enter n to find nth node from the end");
            int n;
            scanf("%d",&n);

            Node* temp= header;
            Node* ptr1;ptr1= header;
            Node* ptr2 = NULL;

            while(--n){
                ptr1=ptr1->next;

            }

            while(ptr1!=NULL){

                    if(ptr2==NULL){
                    ptr2=header;
                    ptr1=ptr1->next;
                    }

                    else{
                    ptr1=ptr1->next;
                    ptr2=ptr2->next;
                    }

            }

           printf("%d is the value\n",ptr2->data); 


       }

    }


return 0;
}
