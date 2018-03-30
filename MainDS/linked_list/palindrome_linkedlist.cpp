#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"
#include<vector>
#include<stack>
#include<iostream>

using namespace std;

void palindrome(Node* head)
{
    stack<int>s;
    Node* temp = head;
    while(temp)
    {
        s.push(temp->data);
        temp=temp->next;


    }

    while(head)
    {

            if(head->data != s.top())
            {
                    printf("not a palindrome\n");return ;

            }
            s.pop();
            head=head->next;

    }
    printf("is a palindrome\n");return ;
}

int main(){

    Node* head;
    head = create_list(100);
    head = insert_back(head,200);
    head = insert_back(head,300);
    head = insert_back(head,300);
    head = insert_back(head,100);

    display(head);
    palindrome(head);
return 0;
}
