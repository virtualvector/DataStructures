#include<iostream>
#include<cstdio>
#include<unordered_map>
#include<vector>
#include<ctime>

using namespace std;


void fibo(int n,vector<long long int>& um)
{
    um[0]=0;
    um[1]=1;

    for(int i=2;i<n;i++)
    {
        um[i]=um[i-1]+um[i-2];
    }


}

long long int normal_fibo(long long int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else return normal_fibo(n-1)+normal_fibo(n-2);

}

 int main()
{

    long long int i;
    cin>>i;
    vector<long long int> v(i);
    size_t t1 = clock();
    fibo(i,v);
    cout<<v[i-1]<<endl;
    /*
    cout<<(double)(clock()-t1)<<"dynamic"<<endl;
    
    t1=clock();
    cout<<normal_fibo(i)<<endl;;
    cout<<(double)(clock()-t1)<<"normal"<<endl;
    */

    for(int k=0;k<v.size();k++)
    {
        cout<<v[k]<<" ";
    }


    return 0;
}
