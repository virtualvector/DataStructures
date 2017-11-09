#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

int main(){
    
    Node* root;
    root = (Node*)malloc(sizeof(Node));
    root->data=10;


    Node* node1;
    node1 = (Node*)malloc(sizeof(Node));
    node1->data=20;
    node1->left=NULL;
    node1->right=NULL;

    root->left=node1;



    Node* node2;
    node2 = (Node*)malloc(sizeof(Node));
    node2->data=30;
    node2->left = NULL;
    node2->right=NULL;


    root->right=node2;
    printf("preorder \t");
    preorder(root);

    printf("\n");

    
    printf("inorder \t");
    inorder(root);

    printf("\n");

    printf("postorder \t");
    postorder(root);

    printf("\n");
return 0;
}
