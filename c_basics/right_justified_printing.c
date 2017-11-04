#include<stdio.h>
int counter(int num){
   int count=0; 
    while(num!=0){
        count++;
        num/=10;

    }
    return count;
}
int main(){
        
    printf("enter the outer limit\n");
    int outerlimit;
    scanf("%d",&outerlimit);
        int val = counter(outerlimit);
    for(int i=0;i<=outerlimit;i+=10){
        printf("%*.0f\n",val,double(i));

    }


return 0;
}
