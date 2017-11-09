#include <cstdio>
#include <iostream>
#include <deque>
#include <cstdlib>
#include "binary_tree.h"

using namespace std;

void levelorder(Node* node){
    
    Node* temp;
    deque< Node*  > dq; 

    if(!node) return;
    
    dq.push_back(node);

    while(!dq.empty()){
        
        temp = dq.front();
        dq.pop_front();
        printf("%d \t",temp->data);

        if(temp->left) dq.push_back(temp->left);
        if(temp->right) dq.push_back(temp->right);

    }



}



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

    printf("\n");
    levelorder(root);    

return 0;
}
