#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

Node* random_binary_tree_generator(int size){

    srand(time(NULL));

    Node* root = new_node(rand()% 100);
    Node* temp = root;

    while(size--){

        int rval = rand()%100;

        if(rval<20 ){
            temp->left = new_node(rand()%100);
            temp = temp->left;
            
        }

        else if(rval>20 && rval<50 && temp->right){

                temp->right = new_node(rand()%100);
                temp = temp->right;
        }

        else if(rval>50 ){

                temp->left = new_node(rand()%100);
                temp->right = new_node(rand()%100);
        }

    }

return root;
    

}
