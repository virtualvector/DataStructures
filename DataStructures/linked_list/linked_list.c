struct node* init(){
    
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head -> next = NULL;
    head -> data = 100;
    return head;

}

struct node* insert_back(struct node* head,int dat ){

    struct node* new_node= (struct node*)malloc(sizeof(struct node));
    new_node->next=NULL;
    new_node->data = dat;

    struct node* temp=head;
    while(temp->next!=NULL){

        temp=temp->next;
    }
    temp->next = new_node;


return head;
}

void display(struct node* head){

    struct node* temp;
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;

    }


}

struct node* delete_back(struct node* head){

    struct node* temp = head;
    while((temp->next)->next !=NULL){
            temp=temp->next;

    }

    temp->next = NULL;
    return head;


}

struct node* insert_front(struct node* head,int data){
    
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node ->data = data;
    new_node -> next = NULL;
    struct node* temp=head;
    new_node->next = head;
    return new_node;

}

struct node* delete_front(struct node* head){
    
    return head->next;


}



