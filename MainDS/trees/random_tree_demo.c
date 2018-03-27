#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"
#include "random_binary_tree_generator.h"

int main(){

    Node* root;
    
    root = random_binary_tree_generator(20);

    printf("%d",root==NULL);


    printf("\npreorder\n");
    preorder_traversal(root);
    printf("\npostorder\n");
    postorder_traversal(root);
    printf("\ninorder\n");
    inorder_traversal(root);

}
