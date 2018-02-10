#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool sort_function(vector<int>& v1, vector<int>& v2)
{
return v1.size()<v2.size();

}

int main()
{

vector< vector<int> > v = {{1,2}, {2,3,4,4,5},{6,7,8,8}};

sort(v.begin(),v.end(),sort_function);

for(auto& x: v)
{
    for(auto& y: x) cout<<y<<" ";
    cout<<endl;

}




return 0;
}
