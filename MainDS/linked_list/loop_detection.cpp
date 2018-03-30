#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"

using namespace std;

void loop_detector(Node* head)
{

    Node* fast,*slow;
    fast=slow=head;

    while(fast)
    {
        if(fast->next==NULL || fast->next->next == NULL || slow->next==NULL) fast= NULL;
        else 
        {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {

            cout<<"loop detected";
            return ;

        }

        }


    }
    cout<<"no loop";


}


int main(){

    Node* head;
    head = create_list(100);
    head = insert_back(head,200);
    head = insert_back(head,300);

    head = insert_back(head,400);
    head = insert_back(head,500);
    Node* temp= head;
    while(temp->next)
    {

        temp=temp->next;

    }
    temp->next= (head->next->next);
    display(head);
    loop_detector(head);    
    //reversing

return 0;
}
