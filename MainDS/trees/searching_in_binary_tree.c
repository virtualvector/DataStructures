#include<stdio.h>
#include<stdlib.h>

#include"binary_tree.h"
#include"random_binary_tree_generator.h"


int search_element(Node* root,int data){
    
   int temp; 
    if(root==NULL) return -1;

    else {

           if(root->data == data) return 1;
           else {

                temp = search_element(root->left,data);
                if(temp!=0) return temp;
                else {

                    temp = search_element(root->right,data);
                    return temp;

                }


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

