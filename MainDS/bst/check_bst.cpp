#include<iostream>
#include "binary_search_tree.cpp"
#include <deque>


using namespace std;


bool check_bst(Node* bst)
{
    if(root==NULL) return true;

    else if(


}

int main()
{
    Node* root = (struct node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=30;

    iterative_insert(root,200);
    iterative_insert(root,10);
    display(root);
    
    cout<<check_bst(root);


return 0;
}
