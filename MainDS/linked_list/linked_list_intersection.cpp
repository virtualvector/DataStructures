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

        unordered_set<Node*> um;
        Node* temp = head1;

        while(temp)
        {

                um.insert(temp);
                temp= temp->next;


        }

        temp = head2;

        while(temp)
        {

                if(um.find(temp) != um.end())
                {
                    cout<<"intersection present, node address is"<<temp<<"data is" << temp->data<<endl;
                    return;

                }

                temp=temp->next;

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
