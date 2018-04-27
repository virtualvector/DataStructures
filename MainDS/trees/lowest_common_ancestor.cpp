#include <stdio.h>
#include<map>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"
#include<vector>

using namespace std;

bool search(Node* root,int  node)
{
    if(root==NULL)return false;
    if(root->data == node) return true;
    else return (search(root->left,node) || search(root->right,node));
}

int lowest_common_ancestor(Node* root,int node1, int node2)
{
    if(root==NULL) return 0;
    bool bool1,bool2;
    bool1=(search(root->left,node1)&&search(root->right,node2));
    bool2=(search(root->left,node2)&&search(root->right,node1));


    if(bool1 || bool2)
    {

            return root->data;

    }
    else{
    
    int val1= lowest_common_ancestor(root->left,node1,node2) ;
    int val2 = lowest_common_ancestor(root->right,node1,node2);

    if(val1!=0) return val1;
    else return val2;

    }
}

int main(){

    Node* root;
     
     root = (Node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=1;

    root->left = new_node(2);
    root ->right = new_node(3);
    root->right->right = new_node(20);
    root->left->left = new_node(4);
    root->left->right = new_node(5);
    root->left->right->left = new_node(8);
    root->left->right->left->left =new_node(7);

    root->left->right->left->left->left  =new_node(17);

//    cout<<search(root,root->right->right);
    cout<<lowest_common_ancestor(root,root->left->left->data,root->left->right->data);
    

}
