#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(){

    Queue* q ;
    q = create_queue(10);
    insert(q,10);
    insert(q,10);
    insert(q,10);
    insert(q,10);
    insert(q,10);
    insert(q,10);

    display(q);
    printf("\n");

    printf("removed %d\n",delete(q));
    printf("removed %d\n",delete(q));
    printf("removed %d\n",delete(q));
    printf("removed %d\n",delete(q));
    printf("removed %d\n",delete(q));
    printf("removed %d\n",delete(q));
    printf("removed %d\n",delete(q));

    
    display(q);
    printf("\n");
return 0;
}
