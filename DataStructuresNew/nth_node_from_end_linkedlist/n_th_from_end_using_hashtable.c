#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

//finding nth node from the end in a linked list
int main(){
    
    Node* header=NULL;

    while(1){
    
        printf("%s\n","enter your choice:\n1 for insertion\n2 for display\n3 for
        nth node from the end");
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
            int counter=0;
            int arr[10];
            int i;
            for(i=0;i<10;i++)arr[i]=0;
            i=1;
            while(temp!=NULL){
                arr[i++]=(temp->data); 
                temp=temp->next;
                counter++;

            }
            counter=counter-n+1;
            /*
            for(i=1;i<10;i++){
                printf("%d\t",arr[i]);

            }
            */
            
            printf("node value is %d\n",arr[counter]);


       }

    }


return 0;
}
