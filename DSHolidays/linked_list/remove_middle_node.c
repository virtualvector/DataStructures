#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"

void remove_middle(Node* head)
{
    Node* fast,*slow,*prev;
    fast=head;
    slow=head;
    prev = NULL;

    while(fast)
    {
        if(!(fast->next)) fast=NULL;
        else 
        {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
        }


    }

    prev->next = slow->next;


}

int main(){

    Node* head;
    head = create_list(100);
    head = insert_back(head,200);
    head = insert_back(head,300);
    head = insert_back(head,400);
    head = insert_back(head,500);
    head = insert_back(head,600);

    display(head);
    remove_middle(head);
    display(head);
return 0;
}
