#include<iostream>
#include<unordered_map>
#include<vector>
#include<cstdio>

using namespace std;

int  binomial_tabulation(int n,int k,vector< vector<int> >& v)
{

    v[n][0]=1;
    v[n][n]=1;

    if(v[n][k]) return v[n][k];
    else
    {
       return  v[n][k] =
       binomial_tabulation(n-1,k-1,v)+binomial_tabulation(n-1,k,v); 
    }



}




int main()
{
    int n;
    cin>>n;
    vector< vector<int> > v(n+1,vector<int>(n+1,0));
    
    
    for(int i=0;i<=n;i++)
    cout<<binomial_tabulation(n,i,v)<<" ";





return 0;
}
