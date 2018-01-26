#include<stdio.h>
#include<algorithm>
#include<string>
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
    string s="";

    Node* temp=head;
    while(temp)
    {

            s+= to_string(temp->data);
            temp= temp->next;
            counter++;

    }
    
     reverse(s.begin(),s.end());
    return stoi(s);

}

Node* patcher(int number)
{

    string s = to_string(number);
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    Node* head = create_list(s[0]-'0');

    for(int i=1;i<s.length();i++)
    {
        head = insert_back(head,s[i]-'0');

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
