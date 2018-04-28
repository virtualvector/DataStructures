#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string rep;
    getline(cin,rep);
    string repp;
    getline(cin,repp);

    while(s.find(rep,0)!=string::npos)
    {
        s.replace(s.find(rep,0),2,repp);

    }
    cout<<s<<endl;


return 0;
}
