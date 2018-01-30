#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"

using namespace std;

void levelorder_traversal(Node* root)
{

    deque<Node*> dq;
    dq.push_back(root);

    while(!dq.empty())
    {


        Node* node = dq.front();
        dq.pop_front();

        cout<<node->data<<" ";
        if(node->left) dq.push_back(node->left);
        if(node->right) dq.push_back(node->right);


    }



}

int main(){

    Node* root;
     
     root = (Node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=20;

    root->left = new_node(200);
    root ->right = new_node(300);

    printf("\nlevelorder\n");
    levelorder_traversal(root);


}
