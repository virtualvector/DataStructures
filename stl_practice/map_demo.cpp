#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    map<int,char> m;

    m[1]='a';
    m[10]='b';
    m[5]='c';

    auto iter = m.begin();

    
    for(iter;iter!=m.end();iter++)
    {
        cout<<(iter->first)<<" "<<(iter->second)<<endl;

    }


return 0;
}
