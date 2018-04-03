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

Node* lowest_common_ancestor(Node* root,int d1,int d2)
{

    if(root==NULL) return root;
    
    if((root->data >d1 && root->data< d2) || (root->data <d1 && root->data>d2) )
    {
        return root;

    }
    else if(root->data > d1)
    {
        return lowest_common_ancestor(root->left,d1,d2);
    }
    else return lowest_common_ancestor(root->right,d1,d2);


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
    iterative_insert(root,300);
    iterative_insert(root,11);
    iterative_insert(root,22);
    iterative_insert(root,8);
    iterative_insert(root,5);
    display(root);
    cout<<endl;

    cout<<lowest_common_ancestor(root,5,22)->data;


return 0;
}
