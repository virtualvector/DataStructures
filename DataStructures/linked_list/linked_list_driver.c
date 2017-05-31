# include <stdio.h>
# include <stdlib.h>
# include "linked_list.h"
# include "linked_list.c"

int main(){


    struct node * head = init();
    head = insert_back( head,10);

    head = insert_back( head,20);



    head = delete_back(head);

    head = insert_front(head,30);
    display(head);
    printf("\n");
    head = delete_front(head);
    display(head);
return 0;
}
