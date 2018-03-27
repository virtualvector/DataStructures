#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"
using namespace std;
//Root to leaf path sum equal to a given number

/*Given a binary tree and a number, return true if the tree has a root-to-leaf
path such that adding up all the values along the path equals the given number.
Return false if no such path can be found. 
using namespace std;
*/

int root_to_leaf_path(Node* root,int sumval,int dummy)
{
    if( root==NULL) return 0;

    if( root->data+ dummy == sumval) return 1;

    return root_to_leaf_path(root->left,sumval,dummy+root->data ) || 
    root_to_leaf_path(root->right,sumval,dummy+ root->data);




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

    cout<<root_to_leaf_path(root,320,0);


}
