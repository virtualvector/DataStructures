#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#define LOAD_FACTOR 10

int main(){

    printf("enter the size of the hashtable\n");
    int size;
    scanf("%d",&size);

    int arr_size = size/LOAD_FACTOR;
    //Node** array = (Node*)malloc(arr_size* sizeof(Node*));
    Node* array[arr_size];

    int i;
    for(i=0;i<arr_size;i++){
        array[i] = create_list(LOAD_FACTOR);

    }

    int number;
    printf("enter the number\n");
    scanf("%d",&number);

    int hash_value = number%10;

    array[hash_value]=insert_back(array[hash_value],number);
    display(array[hash_value]);
    printf("\n");

    printf("enter the number\n");
    scanf("%d",&number);
    
    hash_value = number%10;
    array[hash_value]=insert_back(array[hash_value],number);
    display(array[hash_value]);

    

return 0;
}
