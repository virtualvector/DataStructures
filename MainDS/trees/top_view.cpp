#include <stdio.h>
#include<map>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"

using namespace std;

void top_view(Node* root,int dist, map<int,int>& m)
{
    if(root==NULL) return;
    if(m.count(dist)==0) m[dist]=root->data;
    if(root->left)
     top_view(root->left,dist-1,m);
     if(root->right)
     top_view(root->right,dist+1,m);
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

    map<int,int> m;
    top_view(root,0,m);

    auto iter = m.begin();

    for(iter;iter!=m.end();iter++)
    {
        cout<<iter->second<<" ";


    }


}
