#include<iostream>
#include "binary_search_tree.cpp"
#include <deque>


using namespace std;
int max(int a,int b)
{
    return a>b?a:b;

}

int find_height(Node* root)
{   

    if(root==NULL) return 0;
    return max(find_height(root->left),find_height(root->right))+1;



}

void kthsmallest(Node* root,int k)
{
static int counterval =1;
static bool boolean = false;
    if(root)
    {
        kthsmallest(root->left,k);
        if(counterval==k and !boolean)
        {
        cout<<root->data<<" ";
        boolean = true;
        }
        else counterval++;
        kthsmallest(root->right,k);


    }

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

    kthsmallest(root,5);



return 0;
}
