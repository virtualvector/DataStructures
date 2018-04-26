#include<bits/stdc++.h>
using namespace std;

void find_next_greater_elem(vector<int>& v)
{
stack<int> s;
s.push(v[0]);

for(int i=0;i<v.size();i++)
{
    
    int next = v[i];

    if(!s.empty())
    {
        int elem = s.top();
        s.pop();

        while(elem<next)
        {
            cout<<elem<<"->"<<next;
            cout<<endl;

            if(s.empty())break;
                elem = s.top();
                s.pop();

        }

        if(elem>next) s.push(elem);



    }
    s.push(next);


}



}

int main()
{
  int n;
  cout<<"enter the number of elemnts"<<endl;
  cin>>n;

  vector<int> v(n);
  for(int i=0;i<n;i++) cin>>v[i];

  find_next_greater_elem(v);


return 0;
}
