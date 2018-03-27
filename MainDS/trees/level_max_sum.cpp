#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include <climits>
#include <iostream>
#include <unordered_map>
#include <queue>
#include "binary_tree.h"

using namespace std;

void levelorder_traversal(Node* root){

    deque<Node*> dq;
    dq.push_back(root);
    dq.push_back(NULL);
    unordered_map<int, vector<int> >um;
    int level=0;

    while(!dq.empty()){

        Node* node = dq.front();
        dq.pop_front();
        if(node==NULL )
        {
        if(!dq.empty()){
        cout<<endl;
        level++;
            dq.push_back(NULL);
            }


        }
        else{
        printf("%d\t",node->data);
        um[level].push_back(node->data);
        if(node->left) dq.push_back(node->left);
        if(node->right) dq.push_back(node->right);
        }

    }

cout<<endl;
cout<<"each val is"<<endl;
int max_sum=0; int max_level=0;

auto iter = um.begin();

for(iter;iter!=um.end();iter++)
{

    int sum_val  = accumulate((iter->second).begin(),(iter->second).end(),0);
    cout<<sum_val<<" level is"<<(iter->first)<<endl;
    if(sum_val> max_sum) 
    {
            max_sum=sum_val;
            max_level= (iter->first);

    }

}

cout<<"max level is"<<max_level<<endl;
}



int main(){

    Node* root;
     
     root = (Node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=20;

    root->left = new_node(200);
    root ->right = new_node(300);

    printf("\npreorder\n");
    levelorder_traversal(root);


}
