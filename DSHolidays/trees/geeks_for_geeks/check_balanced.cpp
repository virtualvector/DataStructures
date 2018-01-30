#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"

/*

    
    How to determine if a binary tree is height-balanced?
    2.7

    A tree where no leaf is much farther away from the root than any other leaf.
    Different balancing schemes allow different definitions of “much farther”
    and different amounts of work to keep them balanced.

    Consider a height-balancing scheme where following conditions should be
    checked to determine if a binary tree is balanced.
    An empty tree is height-balanced. A non-empty binary tree T is balanced if:
    1) Left subtree of T is balanced
    2) Right subtree of T is balanced
    3) The difference between heights of left subtree and right subtree is not
    more than 1. 


*/

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

int  check_balanced(Node* root)
{

    if(root==NULL) return 1;

    int diff = get_height(root->left) - get_height(root->right);
    if(diff<0) diff = -diff;

  if( (diff<=1)&& check_balanced(root->left) && check_balanced(root->right) ) 
  return 1;
  return 0;



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

    root->left->right->right = new_node(500);

    cout<<check_balanced(root);


}
