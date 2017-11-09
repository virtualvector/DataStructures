#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "binary_tree.h"
//finding max element in a binary tree

int max_element(Node* root){

    int max=INT_MIN;
    int root_val,left_max,right_max;

    if(root){

        root_val = root->data;

        left_max = max_element(root->left);
        right_max = max_element(root->right);

        if(left_max>right_max) max= left_max;
        else max = right_max;

        if(root_val>max)max=root_val;

    }
    return max;

}



int main(){
    
    Node* root = new_node(10);
    root->left = new_node(20);
    root->right = new_node(30);

    root->left->left = new_node(40);
    root->right->right = new_node(50);
    root->left->right = new_node(60);
    root->right->left = new_node(70);
    
    printf("max element is %d\n",max_element(root)); 

    preorder(root);



return 0;
}
