#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"

using namespace std;

int max_item(int a ,int b)
{
    return a>b?a:b;

}

int get_height(Node* root)
{
    
    if(root==NULL) return 0;

    return 1+ max_item(get_height(root->left),get_height(root->right));





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

    printf("\nlevelorder\n");
    cout<<get_height(root);


}
