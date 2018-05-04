#include<bits/stdc++.h>
using namespace std;


void dutch_flag(vector<int>&v)
{
int lo=0,mid=0,hi=v.size()-1;

while(mid<=hi)
{

    if(v[mid]==1)mid++;
    else if(v[mid]==0) 
    {
        swap(v[mid],v[lo]);
        mid++,lo++;

    }
    else if(v[mid]==2)
    {
        swap(v[mid],v[hi]);
        hi--;

    }


}



}

int main()
{
    vector<int> v{2,2,1,2,0,0,0,1,2,2};
    
    dutch_flag(v);

    for(auto& x:v) cout<<x<<" ";

return 0;
}
