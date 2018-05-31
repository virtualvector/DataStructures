#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE* fp = fopen("inputfile.txt","r");
char s[10][5];
while(1)
{
    fscanf(fp,"%s%s%s%s%s",s[0],s[1],s[2],s[3],s[4]);
    if(feof(fp))break;
    printf("%s%s%s%s%s\n",s[0],s[1],s[2],s[3],s[4]);
}



}
