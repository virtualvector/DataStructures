# include<stdio.h>
# include"array.h"
# include<stdlib.h>

int main(){
    
    int size;
    printf("enter the size of the array\n");   
    scanf("%d",&size);
    int* a;
    make_array(&a,size);

    printf("enter the data");
    int i;
    for( i=0;i<size;i++)
    scanf("%d",&a[i]);

    printf("\n");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }


return 0;
}

