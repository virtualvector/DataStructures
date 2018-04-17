#include<iostream>
#include<cstdio>
#include<unordered_map>
#include<vector>
#include<ctime>

using namespace std;


long long int fibo(int n,unordered_map<long long int,long long int>& um)
{
    um[0]=0;
    um[1]=1;
    if(n==0) return 0;
    else if(n==1) return 1;

    else if(um.find(n)!=um.end()) return um[n];
    else
    {
        um[n]= fibo(n-1,um)+fibo(n-2,um);
        return um[n];
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
    unordered_map<long long int,long long int> um;
    size_t t1 = clock();
    cout<<fibo(i,um)<<endl;;
    cout<<(double)(clock()-t1)<<"dynamic"<<endl;
    
    t1=clock();
    cout<<normal_fibo(i)<<endl;;
    cout<<(double)(clock()-t1)<<"normal"<<endl;



    return 0;
}
