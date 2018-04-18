#include<iostream>
#include<unordered_map>
#include<vector>
#include<cstdio>

using namespace std;

void binomial_tabulation(int n,int k)
{
    vector<int> v(n+1);
    v[0]=v[1]=1;

    for(int i=2;i<=n;i++)
    {

        v[i]=i*v[i-1];
    }

    cout<<"nck is "<<(v[n]/(v[k]*v[n-k]))<<endl;



}




int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;

    binomial_tabulation(n,k);





return 0;
}
