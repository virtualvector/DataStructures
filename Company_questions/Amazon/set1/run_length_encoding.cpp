#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

string run_len_encode(string s)
{
    string ss="";

    for(int i=0;i<s.size();i++)
    {
        int j=i;

        while(s[i]==s[j] && j<s.size())
        {

            j++;

        }

        ss+=s[i]+to_string(j-i);
        i=j-1;


    }
    return ss;



}



int main()
{
    string s;
    cin>>s;

    string ss= run_len_encode(s);

    cout<<ss<<endl;



return 0;
}
