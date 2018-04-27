#include <stdio.h>
#include<map>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"
#include<vector>

using namespace std;

bool print_path(Node* root,int node,vector<int>& v)
{
    

    if(root==NULL) return false;

    v.push_back(root->data);
    if(root->data == node) return true;

    if(print_path(root->left,node,v) || print_path(root->right,node,v))
    {
        return true;
    }
    v.pop_back();
    return false;
    


}

int main(){

    Node* root;
     
     root = (Node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=1;

    root->left = new_node(2);
    root ->right = new_node(3);
    root->left->left = new_node(4);
    root->left->right = new_node(5);
    root->left->right->left = new_node(8);
    root->left->right->left->left =new_node(7);

    root->left->right->left->left->left  =new_node(17);

    vector<int> v;

    print_path(root,17,v);

    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;

}
