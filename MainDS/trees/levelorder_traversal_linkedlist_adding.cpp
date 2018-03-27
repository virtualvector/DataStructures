#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <iostream>
#include <queue>
#include "binary_tree.h"

using namespace std;

 vector< list<int> > levelorder_traversal(Node* root){

    deque<Node*> dq;
    vector< list<int> > storage(5);
    dq.push_back(root);
    int i=0;

//    storage[i].push_back(root->data);
    dq.push_back(NULL);

    while(!dq.empty()){

        Node* node = dq.front();
        dq.pop_front();
        
        if(node)
        {
        printf("%d\t",node->data);
        storage[i].push_back(node->data);
        if(node->left) dq.push_back(node->left);
        if(node->right) dq.push_back(node->right);
        }
        else
        {

            cout<<endl;
            if(dq.size()==0){ return storage;}
            i++;
            dq.push_back(NULL);


        }

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
    root->right->right= new_node(400);
    root->right->left = new_node(500);
    root->left->left = new_node(600);
    root->left->right = new_node(700);

    printf("\nlevel_order\n");
    vector< list<int> > v  = levelorder_traversal(root);
    
    
    for(int i=0;i<v.size();i++)
    {

        list<int>::iterator iter;
        for(iter=v[i].begin();iter!=v[i].end();iter++)
        {

            cout<<(*iter)<<" ";

        }
        cout<<endl;

    }

}
