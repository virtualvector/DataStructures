#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int data;
    struct node* next;


}Node;

Node* create_list(int val){

    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->next=NULL;
    new_node->data=val;
    return new_node;

}

void insert_back(Node* header,int val){
    
    Node* temp = header;
    while(temp->next != NULL){

        temp=temp->next;

    }

    
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->next=NULL;
    new_node->data=val;
    temp->next = new_node;

}

void display(Node* header){

    Node* temp = header;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;

    }

}

Node* insert_front(Node* header,int val){

    
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data=val;

    new_node->next= header;
    return new_node;

}

int delete_front(Node** header){

    int val = (*header)->data;
    (*header)=(*header)->next;
    return val;


}

int delete_rear(Node* header){
    
    
    Node* temp = header;
    while(temp->next->next != NULL){

        temp=temp->next;

    }
    int val = temp->next->data;
    temp->next=NULL;
    return val;


}


