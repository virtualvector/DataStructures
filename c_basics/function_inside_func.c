#include<stdio.h>
#include<stdlib.h>

int main()
{
    int func() { return printf("hell0");};
printf("%d", func());
func();

return 0;
}

