#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"
//c program to print the size of the tree
using namespace std;

int sizeof_tree(Node* root)
{

    if(root==NULL) return 0;

    else return 1+sizeof_tree(root->left)+sizeof_tree(root->right);



}



int main(){

    Node* root;
     
     root = (Node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=20;

    root->left = new_node(200);
    root ->right = new_node(300);
    root->left->right = new_node(500);

    cout<<sizeof_tree(root);


}
