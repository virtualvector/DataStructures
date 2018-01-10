#include <stdio.h>
#include <stdlib.h>

int main(){

    int* p = (int*)malloc(10*sizeof(int));
    int i=0;
    for(i;i<10;i++){
        
        scanf("%d",p+i);
        printf("%d",*(p+i));
    }
    return 0;

}
