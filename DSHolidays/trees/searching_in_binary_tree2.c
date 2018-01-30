#include<stdio.h>
#include<stdlib.h>

#include"binary_tree.h"
#include"random_binary_tree_generator.h"

int search_element(Node* root,int data)
{

    if(root==NULL)return -1;
    else
    {
        
        if(root->data == data) return 1;
        else {
        return (search_element(root->left,data) || search_element(root->right,data));
        
        }




    }

}



int main()
{

    Node* root = random_binary_tree_generator(20);

    inorder_traversal(root);
    printf("\n");
    int data;
    scanf("%d",&data);
    printf("%d is the result of the search",search_element(root,data));


return 0;
}

