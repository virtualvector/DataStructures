#include <stdio.h>
#include <stdlib.h>

typedef struct bintree{

    int data;
    struct bintree* left;
    struct bintree* right;


}Node;

void preorder(Node* node){

    if(node!=NULL){
            

            printf("%d\t",node->data);
            preorder(node->left);
            preorder(node->right);

    }

}

void inorder(Node* node){

    if(node!=NULL){
        
        inorder(node->left);
        printf("%d\t",node->data);
        inorder(node->right);

    }

}

void postorder(Node* node){
    
    if(node!=NULL){
        
        postorder(node->left);
        postorder(node->right);
        printf("%d\t",node->data);

    }

}


