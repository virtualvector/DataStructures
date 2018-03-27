#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"

//maximum element in a binary tree

using namespace std;

int max_item(int a ,int b,int c)
{
    return a>b?(a>c?a:c):(c>b?c:b);

}

int max_item_intree(Node* root)
{

    if(root->left==NULL && root->right==NULL)return root->data;

    else if(root->left && !root->right) return
    max_item(root->data,root->left->data,-1);

    else if(!root->left && root->right)
    return max_item(root->data,root->right->data,-1);

    else return
    max_item(max_item_intree(root->left),max_item_intree(root->right),-1);


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

    printf("\nmaximum element in binary tree\n");
    cout<<max_item_intree(root);

}
