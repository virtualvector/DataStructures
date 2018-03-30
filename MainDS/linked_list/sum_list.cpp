#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"
#include<vector>
#include<cmath>
#include<stack>
#include<unordered_set>
#include<iostream>

using namespace std;

int accum(Node* head)
{

    int counter=0;
    int sumval=0;

    Node* temp=head;
    while(temp)
    {

            sumval+= ((temp->data)*(int)(pow(10,counter)));
            temp= temp->next;
            counter++;

    }
    return sumval;


}

Node* patcher(int number)
{

    int rem;
    Node* head = create_list(number%10);
    number/=10;
    while(number)
    {
        rem = number%10;
        head = insert_back(head,rem);
        number = number/10;

    }
    return head;


}

int main(){

    Node* head1,*head2;
    head1 = create_list(1);
    head2 = create_list(1);


    head1 = insert_back(head1,2);
    head1 = insert_back(head1,3);



    head2 = insert_back(head2,7);
    head2 = insert_back(head2,4);



    display(head1);
    display(head2);

    int number1 = accum(head1);
    int number2 = accum(head2);
    cout<<number1<<" "<<number2<<endl;;
    Node* new_list = patcher(number1+number2);
    display(new_list);
return 0;
}
