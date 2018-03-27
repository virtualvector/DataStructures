#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"

using namespace std;

int count_leaf_nodes(Node* root)
{
    
    if( root->left == NULL && root->right==NULL) return 1;

    return count_leaf_nodes(root->right)+count_leaf_nodes(root->right);



}


int main(){

    Node* root;
     
     root = (Node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=20;

    root->left = new_node(200);
    root ->right = new_node(300);
    root->right->right = new_node(700);
    root->right->left = new_node(800);
    root->left->right = new_node(500);

    cout<<count_leaf_nodes(root);


}
