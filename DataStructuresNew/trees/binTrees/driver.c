#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

int main(){
    
    Node* root = new_node(10);
    root->left = new_node(20);
    root->right = new_node(30);

    root->left->left = new_node(40);
    root->right->right = new_node(50);
    root->left->right = new_node(60);
    root->right->left = new_node(70);
    
    
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
