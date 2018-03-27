#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"

//maximum element in a binary tree

using namespace std;

int foldable(Node* root1,Node* root2)
{
    
    if(root1->left==NULL && root2->right==NULL) return 1;
    else if(root1->right==NULL && root2->left==NULL) return 1;
    else return foldable(root1->left)&&foldable(root2->right);


}





int main(){

    Node* root;
     
     root = (Node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=20;

    root->left = new_node(200);
    root ->right = new_node(3000);
    root->left->right = new_node(500);


}
