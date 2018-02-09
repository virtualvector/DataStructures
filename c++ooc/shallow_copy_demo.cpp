#pragma warning(disable:4786)
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<functional>
#include<string>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<utility>
#include<fstream>
#include<sstream>
#include<cmath>
#include<stack>
#include<assert.h>
using namespace std;

class Shallow
{
    private :
        int a;
        string s;
    public:

    string get_string()
    {
        return s;
    }

    int return_int()
    {
        return a;

    }
    
    void set_string(string s) 
   { 
    this->s=s;
    }

};


int main()
{

ios_base::sync_with_stdio(0);
Shallow s1,s2;

s1.set_string("hello");
s2.set_string("bye");

cout<<s1.get_string()<<endl;
cout<<s2.get_string()<<endl;

s2=s1;

s2.set_string("hello2");

cout<<s1.get_string()<<endl<<s2.get_string()<<endl;
return 0;
}

