#include <cstdio>
#include <climits>
#include <iostream>
#include <deque>
#include <cstdlib>
#include "binary_tree.h"

//searching for an element using recursion
using namespace std;

int search(Node* root,int val){

    if(!root) return 0;

    if(root->data==val)return 1;

    int left_val= search(root->left,val);
    if(left_val) return 1;
    else return search(root->right,val);


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
    printf("%d\n",search(root,30));    

return 0;
}
