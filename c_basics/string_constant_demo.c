#include<stdio.h>

char* func()
{

    char* a  = "hello dear";
    return a;

}

int main()
{
    
   char* a = func();
   printf("%s",a);
   a[2]='c';

return 0;
}
