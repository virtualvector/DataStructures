#pragma warning(disable:4786)
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<functional>
#include<string>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<utility>
#include<fstream>
#include<sstream>
#include<cmath>
#include<stack>
#include<assert.h>
using namespace std;



#define MEM(a, b) memset(a, (b), sizeof(a))
#define CLR(a) memset(a, 0, sizeof(a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(X) ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X) ( (X) * (X) )
#define SZ(V) (int )V.size()
#define FORN(i, n) for(i = 0; i < n; i++)
#define FORAB(i, a, b) for(i = a; i <= b; i++)
#define ALL(V) V.begin(), V.end()
#define IN(A, B, C)  (B) <= (A) && (A) <= (C)


typedef pair<int,int> PII;
typedef pair<double, double> PDD;
typedef vector<int> VI;

#define AIN(A, B, C) assert(IN(A, B, C))

//typedef int LL;
//typedef long long int LL;
//typedef __int64 LL;


void check_pair(vector<int>& v,int val)
{
    unordered_set<int> hs;
    for(int i=0;i<v.size();i++) hs.insert(v[i]);

    for(int i=0;i<v.size();i++)
    {

        if(hs.find(val-v[i])!=hs.end())
        {
            cout<<v[i]<<" "<<val-v[i]<<endl;

        }


    }






}







int main()
{

ios_base::sync_with_stdio(0);
vector<int> v1;
int n;
cout<<"enter the number of elements"<<endl;
cin>>n;

for(int i=0;i<n;i++)
{
     int val;
     cin>>val;
     v1.push_back(val);


}
cout<<"enter the value whose pair has to be foudn"<<endl;
int val;
cin>>val;

check_pair(v1,val);


return 0;
}

