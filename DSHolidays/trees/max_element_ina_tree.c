#include<stdio.h>
#include<stdlib.h>

#include"binary_tree.h"
#include"random_binary_tree_generator.h"


int max_element(Node* root){

    if(root==NULL) return -1;


   int left_max = max_element(root->left);
   int current = root->data;
   int right_max = max_element(root->right);

    if(left_max>current) current = left_max;
    if(right_max>current) current  = right_max;

    return current;

}



int main()
{

    Node* root = random_binary_tree_generator(20);

    inorder_traversal(root);
    printf("\n");
    printf("%d is the max element",max_element(root));


return 0;
}

