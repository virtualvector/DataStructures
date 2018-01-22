
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void remove_duplicates(Node* head)
{

    Node* temp;
    temp=head;

    while(temp->next)
    {
        printf("%s\n","outer while loop");
        Node* temp2,*prev;
        prev = temp;
        temp2=temp->next;

        while(temp2)
        {
            printf("inner while loop\n");
            if(temp->data == temp2->data)
            {
                    printf("duplicated detected\n");
                    
                    prev->next = prev->next->next;
                    temp2 = prev->next;
                    continue;
                    


            }
            prev = temp2;
            temp2 = temp2->next;
            


        }
        

        temp=temp->next;
        if(! (temp))break;


    }




}




int main(){

    Node* head = create_list(100);
    for(int i=200;i<600;i+=100){
            head = insert_back(head,i);

    }
    for(int i=300;i<600;i+=100){
            head = insert_back(head,i);

    }
    display(head);
    
    //call to reverse print 
    remove_duplicates(head);

    printf("\n");
    display(head);


return 0;
}
