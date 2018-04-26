#include<bits/stdc++.h>
using namespace std;

void find_stock_span(vector<int>& v)
{
    stack<int> stock;

    stock.push(0);
    vector<int> span(v.size());
    span[0]=1;

    for(int i=1;i<v.size();i++)
    {
        
        while(!stock.empty() && v[stock.top()]<=v[i])
        {
            stock.pop();

        }

        span[i]= stock.empty()?i+1:i-stock.top();
        stock.push(i);


    }

    for(int i=0;i<span.size();i++)cout<<span[i]<<" ";
    cout<<endl;

}

int main()
{
    int n;
    cout<<"days"<<endl;
    cin>>n;
    
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<endl;

    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<endl;

    find_stock_span(v);



return 0;
}
