#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"

Node* reverse_list(Node* head){

    Node* temp=NULL;
    Node* next_node = NULL;

    while(head){
        
        next_node = head->next;
        head->next = temp;
        temp = head;
        head = next_node;


    }
    return temp;

}


int main(){

    Node* head;
    head = create_list(100);
    head = insert_back(head,200);
    head = insert_back(head,300);
    head = insert_back(head,400);
    head = insert_back(head,500);

    display(head);
    
    //reversing
    head = reverse_list(head);
    display(head);

return 0;
}
