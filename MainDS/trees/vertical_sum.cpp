#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <deque>
#include <map>
#include "binary_tree.h"
#include <unordered_map>
#include <algorithm>
#include <utility>

using namespace std;

void levelorder_traversal(Node* root){

    deque< pair<int,Node*> > dq;
    map<int,vector<int> > mm;
    dq.push_back( pair<int,Node*>(0,root));

    while(!dq.empty()){

        pair<int,Node*> p = dq.front();
        Node* node = p.second;
        int level = p.first;
        dq.pop_front();
        mm[level].push_back(node->data);
        printf("%d\t",node->data);
        if(node->left) dq.push_back(pair<int,Node*>(level-1,node->left));
        if(node->right) dq.push_back(pair<int,Node*>(level+1,node->right));

    }
    
    cout<<mm.size()<<endl;
    auto iter = mm.begin();

    for(iter;iter!=mm.end();iter++)
    {
            int level = iter->first;
            vector<int> v= iter->second;
            cout<<level<<" ";
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";

            }
            cout<<endl;
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
    root->left->left = new_node(700);
    root->left->right = new_node(900);
    root->right->left = new_node(1000);
    root->right->right = new_node(111);

    printf("\npreorder\n");
    levelorder_traversal(root);


}
