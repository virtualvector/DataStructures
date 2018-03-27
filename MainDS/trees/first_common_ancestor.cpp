#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <iostream>
#include <queue>
#include "binary_tree.h"

using namespace std;

int does_exist(Node* root,Node* firstone)
{
    static int value = 0;
    if(root)
    {
        if(root==firstone)value=1;
        if(value==1){
        value=0;
        return 1;
        }
        does_exist(root->left,firstone);
        does_exist(root->right,firstone);


    }




}







 Node*  levelorder_traversal(Node* root,Node* firstone,Node* secondone)
 {

    deque<Node*> dq;
    dq.push_back(root);
    Node* temp=root;

    while(!dq.empty())
    {

        Node* node = dq.front();
        dq.pop_front();

        if((does_exist(node->left,firstone)==1)&&(does_exist(node->left,secondone)==1))
        {
        cout<<"left coming"<<endl;
            temp=(node->left);
            dq.push_back(node->left);


        }


        if((does_exist(node->right,firstone)==1)&&(does_exist(node->right,secondone)==1))
        {
        cout<<"right coming"<<endl;
            
            temp=(node->right);
            dq.push_back(node->right);
        } 

        }
        return temp;






}



int main(){

    Node* root;
     
     root = (Node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=20;

    root->left = new_node(200);
    root ->right = new_node(300);
    root->right->right= new_node(400);
    root->right->left = new_node(500);
    root->left->left = new_node(600);
    root->left->right = new_node(700);

    printf("\nlevel_order\n");
    cout<<"are "<< root->left->left->data <<" "<<root->right->right->data<<endl;
    Node* temp = levelorder_traversal(root,root->left->left,root->left->right);
    cout<<(temp->data);
    cout<<endl;


}
