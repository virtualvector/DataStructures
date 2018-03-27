#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"

//check if two trees are similar or not

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
    root2->left = NULL;
    root2->right = NULL;
    root2->data=20;

    root2->left = new_node(200);
    root2->right = new_node(300);
    root2->left->right = new_node(50);

   cout<<are_similar(root,root2); 


}
