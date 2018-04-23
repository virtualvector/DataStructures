#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <deque>
#include "binary_tree.h"

using namespace std;

int find_level(Node* root,int data)
{
    deque<Node*> dq;
    dq.push_back(root);
    dq.push_back(NULL);
    int my_level =1;

    while(!dq.empty())
    {
        Node* curr_node  = dq.front();
        dq.pop_front();



        if(curr_node==NULL && !dq.empty())
        {
            dq.push_back(NULL);
            my_level++;

        }

        else if(curr_node->data == data) 
        {
            return my_level;

        }
        if(curr_node)
        {
        if(curr_node->left) dq.push_back(curr_node->left);
        if(curr_node->right) dq.push_back(curr_node->right);
        }


    }
    
return -1;

}




int main(){

    Node* root;
     
     root = (Node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=20;

    root->left = new_node(200);
    root ->right = new_node(300);
    root->right->right = new_node(500);

    cout<<find_level(root,20);
    cout<<find_level(root,500);


}
