#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1 = "ehellimyfrndhelli";
    size_t sizeval = s1.find("hello",0,4);

    cout<<s1.substr(sizeval,4)<<endl;



return 0;
}
