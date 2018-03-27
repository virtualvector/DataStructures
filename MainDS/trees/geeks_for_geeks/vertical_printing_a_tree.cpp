#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include "binary_tree.h"

using namespace std;


void get_horizontal(Node* root,int hd, map<int,vector<int>>& m)
{
    if(root==NULL) return;

    m[hd].push_back(root->data);

    get_horizontal(root->left,hd-1,m);
    get_horizontal(root->right,hd+1,m);


}

void print_vertical(Node* root)
{

  map< int, vector<int> > m;
  int hd=0;

  get_horizontal(root,hd,m);


  map<int, vector<int> >::iterator iter;

  for(iter=m.begin();iter!=m.end();iter++)
  {

        for(int i=0;i<(iter->second).size();i++)
        {
                cout<<(iter->second)[i]<<" ";

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
    root->left->right = new_node(500);
    root ->right = new_node(300);

    printf("\nlevelorder\n");
    print_vertical(root);


}
