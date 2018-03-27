#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"

using namespace std;

void levelorder_traversal(Node* root){

    deque<Node*> dq;
    dq.push_back(root);

    while(!dq.empty()){

        Node* node = dq.front();
        dq.pop_front();
        if(node->left==NULL && node->right==NULL)
        printf("%d\t",node->data);
        if(node->left) dq.push_back(node->left);
        if(node->right) dq.push_back(node->right);

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

    printf("\npreorder\n");
    levelorder_traversal(root);


}
