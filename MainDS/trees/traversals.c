#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

int main(){

    Node* root;
     
     root = (Node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=20;

    root->left = new_node(200);
    root ->right = new_node(300);

    printf("\npreorder\n");
    preorder_traversal(root);
    printf("\npostorder\n");
    postorder_traversal(root);
    printf("\ninorder\n");
    inorder_traversal(root);


}
