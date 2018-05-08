#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>


using namespace std;


bool mysorter(pair<int, pair<int,int> > p1, pair<int , pair<int,int> > p2)
{
    return p1.second.second < p2.second.second;


}

void myeraser(vector< pair<int,pair<int,int> > >& v)
{
    
    for(int i=0;i<v.size();i++)
    {

            if(v[i].second.second == 0)
            {
                auto iter = v.begin();
                advance(iter,i);
                v.erase(iter);
                i--;

            }

    }

}

int main()
{

    int n;
    cout<<"enter the number of processes"<<endl;
    cin>>n;

    vector< pair<int,pair<int,int> > > v;
    int total_burst=0;
    for(int i=0;i<n ;i++)
    {
        int a, b;
        cin>>a>>b;
        total_burst+=b;
        pair<int,int> p1(a,b);
        v.push_back(pair< int,pair<int,int> >(i,p1));

    }
    int currtime =1;
    vector<int> gantt;
    while(total_burst)
    {

        sort(v.begin(),v.end(),mysorter);
        myeraser(v);
    for(int i=0;i<v.size();i++)
    {
        if(v[i].second.second && v[i].second.first<=currtime)
        {
            v[i].second.second--;
            gantt.push_back(v[i].first);
            total_burst--;
            currtime++;
            break;
        }
        

    }


    }

    for(int i=0;i<gantt.size();i++)
    {

        cout<<gantt[i]<<endl;
    }




}
