#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"
#include<vector>
#include<cmath>
#include<stack>
#include<unordered_set>
#include<iostream>

using namespace std;

int sum_list_recursion(Node* ll1, Node* ll2,Node* ll3)
{
    int remin=0;
    if(ll1->next)
    {
         remin = sum_list_recursion(ll1->next,ll2->next,ll3);
        

    }

    int sumval = (ll1->data)+(ll2->data)+remin;
    //cout<<ll1->data<<" "<<ll2->data<<" "<<sumval<<endl;;
    cout<<(sumval%10)<<" ";
    cout<<endl;
    return (sumval-sumval%10)/10;
   return 0;



}


int main(){

    Node* head1,*head2;
    head1 = create_list(1);
    head2 = create_list(1);


    head1 = insert_back(head1,22);
    head1 = insert_back(head1,3);



    head2 = insert_back(head2,7);
    head2 = insert_back(head2,4);



    display(head1);
    display(head2);
    cout<<endl;
    Node* ll3;
    sum_list_recursion(head1,head2,ll3);
return 0;
}
