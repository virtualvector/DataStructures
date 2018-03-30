#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <queue>
#include "binary_tree.h"

int max_value(int a,int b,int c)
{
    return a>b?(b>c?a:(c>a?c:a)):(b>c?b:c);
}

using namespace std;

int max_elem(Node* root)
{
    if(root==NULL) return -1;

    else return
    max_value(root->data,max_elem(root->left),max_elem(root->right));


}


int main(){

    Node* root;
     
     root = (Node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=20;

    root->left = new_node(200);
    root ->right = new_node(300);
    root->right->left = new_node(400);
    root->right->right = new_node(500);
    root->left->right=new_node(3000);
    



cout<<max_elem(root);

}
