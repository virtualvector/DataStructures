#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

bool mycomp(pair<int,int>p1, pair<int,int> p2)
{
    return p1.second>=p2.second;


}

using namespace std;

int main()
{
    int n;
    cout<<"enter the nubmer of items"<<endl;
    cin>>n;

    cout<<"enter the knapsack capacity"<<endl;
    int capa;
    cin>>capa;

    vector< pair<int,int> > v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
        
    }

    sort(v.begin(),v.end(),mycomp);

    while(capa!=0)
    {
        pair<int,int> p1 = v.front();
        v.erase(v.begin());

        if(p1.second


    }



return 0;
}
