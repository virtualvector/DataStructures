#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"

using namespace std;

bool identical(Node* root1, Node* root2)
{
    if(root1==NULL and root2==NULL) return true;
    else if(root1==NULL and root2!=NULL)return false;
    else if(root1!=NULL and root2==NULL) return false;

    else 
    {

        return identical(root1->left,root2->left) and
        identical(root1->right,root2->right);

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
    root->right->left = new_node(400);
    root->right->right = new_node(500);
    

    Node* root1;
     
     root1 = (Node*)malloc(sizeof(struct node));
    root1->left = NULL;
    root1->right = NULL;
    root1->data=20;

    root1->left = new_node(200);
    root1 ->right = new_node(300);
    root1->right->left = new_node(400);
    root1->right->right = new_node(500);



cout<<    identical(root,root1);

}
