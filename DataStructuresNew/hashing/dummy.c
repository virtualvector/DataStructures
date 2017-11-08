#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){

    Node* header;
    int a = 100;
    header=insert_back(header,a);
    header=insert_back(header,200);
    display(header);


return 0;
}
