#include <stdio.h>
#include <stdio.h>

int main(){
    int val = getchar();    
    printf("%d",val);
    while(val!=EOF){
        putchar(val);
        val = getchar();

    }

return 0;
}
