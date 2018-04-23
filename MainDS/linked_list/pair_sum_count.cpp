#include<stdio.h>
#include<stdlib.h>
#include<unordered_map>
#include"linked_list.h"
#include<vector>
#include<cmath>
#include<stack>
#include<unordered_set>

#include<iostream>

using namespace std;

void pair_sum_count(Node* head,int sumval)
{
    unordered_set<int> um;

    while(head)
    {
        if(um.count(sumval-head->data))
        {
            cout<<head->data<<" "<<sumval-head->data<<endl;
        }
        else 
        {
            um.insert(head->data);
        }
        head=head->next;

    }


}


int main(){

    Node* head1,*head2;
    head1 = create_list(5);
    head1 = insert_back(head1,2);
    head1 = insert_back(head1,7);
    head1 = insert_back(head1,5);
    head1 = insert_back(head1,3);
    head1 = insert_back(head1,8);
    
    pair_sum_count(head1,10);

    display(head1);

return 0;
}
