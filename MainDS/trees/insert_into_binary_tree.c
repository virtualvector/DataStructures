#include<stdio.h>
#include<stdlib.h>

#include"binary_tree.h"
#include"random_binary_tree_generator.h"

void insert_into_bt(Node* root,int data){

    while(root){
        
        if(root->left == NULL){
        root->left = new_node(data);
        root=NULL;
        }

        else if (root->right == NULL) 
        {
        
        root->right = new_node(data);
        root=NULL;
        }

        else {
            root=root->left;

        }



    }

}



int main()
{

    Node* root = random_binary_tree_generator(20);

    inorder_traversal(root);
    printf("\n");
    insert_into_bt(root,233);

    printf("\n");
    inorder_traversal(root);




return 0;
}

