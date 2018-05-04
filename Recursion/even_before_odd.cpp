#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v {1,2,3,4,5,6};
    sort(v.begin(),v.end(),[](int a,int b)->bool{
        if(a%2==0) return true;
    });

    for(auto& x: v)cout<<x<<" ";



return 0;
}
