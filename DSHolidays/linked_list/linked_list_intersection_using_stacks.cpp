#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"
#include<vector>
#include<stack>
#include<unordered_set>
#include<iostream>

using namespace std;

void check_intersection(Node* head1, Node* head2)
{
    stack<Node*> s1;
    stack<Node*> s2;

    Node* temp;
    temp= head1;

    while(temp)
    {

        s1.push(temp); temp=temp->next;



    }
    temp = head2;


    while(temp)
    {

        s2.push(temp); temp=temp->next;



    }
        Node* one,*two,*prev1,*prev2;
        prev1=prev2=NULL;
        while(true)
        {

            one=s1.top();
            two = s2.top();

            if(one == two)
            {

                prev1 = one;
                prev2  = two;
                s1.pop();s2.pop();

            }
            else {

               cout<<"intersection occurs value is "<<prev1<<"data is"<<prev1->data; 
               return;


            }



        }

    cout<<"no intersection"<<endl;

}


int main(){

    Node* head1,*head2;
    head1 = create_list(100);
    head2 = create_list(100);
    head1 = insert_back(head1,200);
    head1 = insert_back(head1,300);
    head1 = insert_back(head1,400);
    head1 = insert_back(head1,500);
    head1 = insert_back(head1,600);



    head2 = insert_back(head2,700);
    head2 = insert_back(head2,700);

    head2->next->next= head1->next->next;


    display(head1);
    display(head2);

    check_intersection(head1,head2);
return 0;
}
