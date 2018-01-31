#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"

/*


Check if a binary tree is subtree of another binary tree | Set 1

Given two binary trees, check if the first tree is subtree of the second one. A
subtree of a tree T is a tree S consisting of a node in T and all of its
descendants in T. The subtree corresponding to the root node is the entire tree;
the subtree corresponding to any other node is called a proper subtree.


*/
using namespace std;

int are_similar(Node* root1,Node* root2)
{
 

    if(root1==NULL && root2==NULL) return 1;

    if(root1!=NULL && root2!=NULL)

    {

    return are_similar(root1->left,root2->left) &&
    are_similar(root1->right,root2->right)   && (root1->data == root2->data) ;

}






}
int is_subset(Node* root1,Node* root2)
{
    if(root1==NULL) return 1;
    if(root2==NULL) return 0;
    
    if(are_similar(root1,root2)) return 1;

    return are_similar(root1,root2->left) || are_similar(root1,root2->right);
    


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



    Node* root2;
     
     root2 = (Node*)malloc(sizeof(struct node));
    Node*     root3 = (Node*)malloc(sizeof(struct node));
    root2->left = NULL;
    root2->right = NULL;
    root2->data=20;
    root3->right=root2;
    root3->left = NULL;

    root2->left = new_node(200);
    root2->right = new_node(300);

   cout<<is_subset(root,root3); 


}
