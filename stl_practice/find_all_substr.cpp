#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s="hello dear hello wassup helloomyhello";
    auto iter = s.begin();
    size_t pos;

    for(pos=s.find("hello");pos!=string::npos;pos = s.find("hello",pos+5))
    {
        cout<<s.substr(pos,5);
        cout<<endl;

    }



return 0;
}
