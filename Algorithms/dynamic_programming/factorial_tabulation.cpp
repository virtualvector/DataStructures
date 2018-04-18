#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

void tabulated_fact(long long int n)
{
    vector<long long int> v(n+1);
    v[0]=1;
    v[1]=1;

    for(long long int i=2;i<=n;i++)
    {
       v[i]=i*v[i-1]; 

    }
    cout<<v[n]<<endl;


}



int main()
{
    long long int n;
    cin>>n;

    tabulated_fact(n);



return 0;
}
