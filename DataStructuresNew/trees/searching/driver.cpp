#include <cstdio>
#include <climits>
#include <iostream>
#include <deque>
#include <cstdlib>
#include "binary_tree.h"
//searching using level order traversal
using namespace std;

int levelorder_search(Node* node,int val){
    int max=0;  
    Node* temp;
    deque< Node*  > dq; 

    if(!node) return max;
    
    dq.push_back(node);

    while(!dq.empty()){
        
        temp = dq.front();
        dq.pop_front();
       // printf("%d \t",temp->data);
       if(temp->data ==val) max=1;

        if(temp->left) dq.push_back(temp->left);
        if(temp->right) dq.push_back(temp->right);

    }

    return max;

}



int main(){
    
    Node* root = new_node(10);
      root->left = new_node(20);
      root->right = new_node(30);
  
      root->left->left = new_node(40);
     root->right->right = new_node(50);
      root->left->right = new_node(60);
      root->right->left = new_node(70);

    printf("\n");
    printf("%d\n",levelorder_search(root,300));    

return 0;
}
