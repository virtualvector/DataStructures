//print linked list in reverse using recursion
//only printing in reverse, original links remain same

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

//reverse print
void reverse_print(Node* head){

    if(head==NULL) return;

    reverse_print(head->next);

    printf("%d\t",head->data);
    


}



int main(){

    Node* head = create_list(100);
    for(int i=200;i<600;i+=100){
            head = insert_back(head,i);

    }
    display(head);
    
    //call to reverse print 
    reverse_print(head);
    printf("\n");


return 0;
}
