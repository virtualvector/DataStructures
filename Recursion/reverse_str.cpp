#include<bits/stdc++.h>
#include<string>
using namespace std;

void reverse_str(string s,int len)
{
    if(len==s.size())
        return ;
    reverse_str(s,len+1);

    cout<<s[len];


}


int main()
{
    string s = "quick brown fox";
    reverse_str(s,0);


return 0;
}
