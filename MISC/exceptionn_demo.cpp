#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    
    try
    {
        int a = 0;
        int b = 2;
        
        if(a==0) throw (char)a;
        //throw a;
        //else cout<<" helllo "<<endl;

    }
    catch(int a)
    {
        cout<<"unexpected error caught"<<endl;

    }
    catch(char a)
    {
        cout<<" char wala"<<endl;

    }
    catch(...)
    {
        cout<<"careful"<<endl;

    }


return 0;
}
