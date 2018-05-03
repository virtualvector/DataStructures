#include<bits/stdc++.h>
using namespace std;

int find_sum(vector<int>& v,int n)
{
        if(n==0) return v[0];
        else return v[n]+find_sum(v,n-1);

}


int main()
{
    vector<int> v {1,2,3,4,5};
    cout<<find_sum(v,v.size())<<endl;

    transform(v.begin(),v.end(),v.begin() ,[](int x)->int {
        return x+1;
    });

    cout<<find_sum(v,v.size())<<endl;




}
