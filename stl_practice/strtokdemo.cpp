#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
    string s="the-quick-brown-fox-jumps-over-a-lazy-dog";

    char* str= new char[s.size()];
    strcpy(str, s.c_str());
    char* tok = strtok(str,"-");
    while(tok!=NULL)
    {

        cout<<tok<<endl;
        tok = strtok(NULL,"-");

    }


return 0;
}
