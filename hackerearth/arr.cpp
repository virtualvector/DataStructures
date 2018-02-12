#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    long long int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];



        long long int q;
        cin>>q;
        
        while(q--)
        {
            long long int val;
            cin>>val;
            vector<int> v2;
            v2.push_back(val);
            auto iter = find_end(v.begin(),v.end(),v2.begin(),v2.end());
            if(iter!=v.end())
            cout<<(iter-v.begin())+1<<endl;
            else cout<<-1<<endl;
        }
    }
    
    
return 0;
}
