#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"

void reverse_list(Node** head){
    
    Node* first,*rest;
    if(*head==NULL) return;

    first = *head;
    rest = first->next;

    if(rest==NULL) return ;

    reverse_list(&rest);

    first->next->next = first;
    first->next = NULL;

    *head= rest;
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
    reverse_list(&head);
    display(head);

return 0;
}
