typedef struct node {

    int data;
    struct node* left;
    struct node* right;

}Node;

Node* new_node (int data){

    Node* new_node = (Node*) malloc(sizeof(struct node));
    new_node->data= data;
    new_node->left = NULL;
    new_node ->right = NULL;
    return new_node;

}

void inorder_traversal(Node* root){

    if(root){
        
        inorder_traversal(root->left);
        printf("%d \t",root->data);
        inorder_traversal(root->right);


    }

}

void preorder_traversal(Node* root){

    if(root){

            printf("%d\t",root->data);
            preorder_traversal(root->left);
            preorder_traversal(root->right);

    }

}

void postorder_traversal(Node* root){

    if(root){

        postorder_traversal(root->left);
        postorder_traversal(root->right);
        printf("%d\t",root->data);

    }

}




