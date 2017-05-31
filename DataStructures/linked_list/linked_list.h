# include <stdio.h>
# include <stdlib.h>

struct node {

    struct node* next;
    int data;

};

struct node* init(); 
struct node* insert_back(struct node*,int);
struct node* delete_back(struct node*);
void display(struct node*);
struct node* insert_front(struct node*,int data);
struct node* delete_front(struct node*);

