#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"

void kth_from(Node* head,int k)
{

    static int counter = 0;

    if(head->next)
    {
        kth_from(head->next,k);

    }

    if(counter==k) printf("\n%d\n",head->data);

    counter++;
    return;




}

int main(){

    Node* head;
    head = create_list(100);
    head = insert_back(head,200);
    head = insert_back(head,300);
    head = insert_back(head,400);
    head = insert_back(head,500);

    display(head);
    printf("\nenter the k position");
    int k;
    scanf("%d",&k);
    //reversing
    kth_from(head,k);
return 0;
}
