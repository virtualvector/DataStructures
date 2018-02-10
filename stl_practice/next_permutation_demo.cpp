#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main()
{
    string s = "hello";

    while(next_permutation(s.begin(),s.end()))
    {

        cout<<s<<endl;

    }




return 0;
}
