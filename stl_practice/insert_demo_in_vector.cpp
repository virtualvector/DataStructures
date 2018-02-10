#include<iostream>
#include<vector>

using namespace std;

int main()
{

    vector<int> v(5);
    vector<int>::iterator iter = v.insert(v.begin()+2,22);

    cout<<(*iter)<<endl;

    for(auto& x:v)cout<<x<<" ";
    cout<<endl;

    v.insert(iter,10,10);

    for(auto& x:v)cout<<x<<" ";
    cout<<endl;

    vector<int> v2(10,6);
    v.resize(200);
    v.insert(iter,v2.begin(),v2.begin()+5);


    for(auto& x:v)cout<<x<<" ";
    cout<<endl;
    

return 0;
}
