#include<stdio.h>
#include<stdlib.h>
#include "linked_list.h"

int main(){

    Node* header = create_list(100);
    insert_back(header,200);
    insert_back(header,300);
    display(header);
    printf("\n");
    header=insert_front(header,400);
    display(header);
    printf("\n");

    printf("%d deleted from front\n",delete_front(&header));
    display(header);
    printf("\n");


    printf("%d deleted from front\n",delete_rear(header));
    display(header);
    printf("\n");


return 0;
}
