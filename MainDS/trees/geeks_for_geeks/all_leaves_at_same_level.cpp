#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include "binary_tree.h"

/*


Given a Binary Tree, check if all leaves are at same level or not. 


*/




using namespace std;

void levelorder_traversal(Node* root)
{

    deque<Node*> dq;
    dq.push_back(root);
    int boolval=0;
    while(!dq.empty())
    {


        Node* node = dq.front();
        dq.pop_front();

        if(!boolval)
        {
        if(node->left) dq.push_back(node->left);
        if(node->right) dq.push_back(node->right);
        }

        if(!node->left && !node->right)
        {
            boolval=1;

            while(!dq.empty())
            {
                
                 node = dq.front();
                dq.pop_front();

                if(node->left || node->right)
                {
                        cout<<"not at same level\n";
                        return;

                }

            }

        }


    }

cout<<"are at same level"<<endl;

}

int main(){

    Node* root;
     
     root = (Node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=20;

    root->left = new_node(200);
    root ->right = new_node(300);
    root->right->right = new_node(500);
    root->right->left = new_node(600);
    root->left->left = new_node(700);
    root->left->right = new_node(800);

    printf("\ncheck if the leaf nodes are at the same level\n");
    levelorder_traversal(root);


}
