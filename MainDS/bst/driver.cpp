#include<iostream>
#include "binary_search_tree.cpp"
#include <deque>
int max(int a,int b)
{
    return a>b?a:b;

}

int find_height(Node* root)
{   

    if(root==NULL) return 0;
    return max(find_height(root->left),find_height(root->right))+1;



}




using namespace std;

int main()
{
    Node* root = (struct node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=30;

    iterative_insert(root,200);
    iterative_insert(root,10);
    display(root);
    cout<<find_height(root)<<endl;


return 0;
}
