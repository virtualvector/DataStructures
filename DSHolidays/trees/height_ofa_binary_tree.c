#include<stdio.h>
#include<stdlib.h>


#include"binary_tree.h"
#include"random_binary_tree_generator.h"

int maxDepth(struct node* node) 
{
   if (node==NULL) 
       return 0;
   else
   {
       /* compute the depth of each subtree */
       int lDepth = maxDepth(node->left);
       int rDepth = maxDepth(node->right);
 
       /* use the larger one */
       if (lDepth > rDepth) 
           return(lDepth+1);
       else return(rDepth+1);
   }
} 

int main()
{

    Node* root = random_binary_tree_generator(20);

    inorder_traversal(root);
    printf("\n");
    printf("%d is the height of the tree",maxDepth(root));


return 0;
}

