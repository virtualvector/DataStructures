#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v(100);
    for(int i=0;i<v.size();i++) v[i]=i;

    sort(v.begin(),v.end(), [](int a,int b)->bool { return a>b; });
    cout<<endl;
    for_each(v.begin(),v.end(), [](int a)->float{ cout<<a<<" ";} );

}
