#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main()
{
    
    int n;
    cout<<"enter the number of processes"<<endl;
    cin>>n;

    vector< pair<int,int> > v;
    vector<int> gantt;
    int total_burst = 0;
    cout<<"arrival and burst times"<<endl;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        total_burst +=b;
        v.push_back(pair<int,int>(a,b));

    }

    sort(v.begin(),v.end(),[](pair<int,int> p1, pair<int,int> p2)->bool{
        return p1.first < p2.first;
    });

    for(int i=0;i<n;i++)
    {
//        cout<<v[i].first<<" "<<v[i].second<<endl;

    }
    
    int currtime =1;
    while(total_burst)
    {
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first <= currtime)
            {

                if(v[i].second>=2) {
                v[i].second-=2;
                    currtime+=2;
                    total_burst-=2;
                    gantt.push_back(i);
                    }

                else if(v[i].second==1)
                {


                v[i].second-=2;
                    currtime+=2;
                    total_burst-=2;
                    gantt.push_back(i);

                }

            }
        }



    }
    for(int i=0;i<gantt.size();i++)
    {
        cout<<"p"<<gantt[i]<<endl;

    }

}
