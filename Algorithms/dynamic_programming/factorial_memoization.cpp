#include<iostream>
#include<vector>
#include<unordered_map>
#include<cstdio>

using namespace std;

int factorial_memo(int n, unordered_map<int,int>& um)
{

    um[0]=1;
    um[1]=1;

    if(um.find(n)!=um.end())
    {
        return um[n];

    }
    else
    {
        return um[n]=factorial_memo(n-1,um);


    }


}

int main()
{

    int n;
    cin>>n;

    unordered_map<int,int> um;

    factorial_memo(n,um);
    cout<<um[n]<<endl;


    return 0;
}
