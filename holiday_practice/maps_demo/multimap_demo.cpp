#pragma warning(disable:4786)
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<set>
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

int main()
{

ios_base::sync_with_stdio(0);

unordered_multimap<int,int> um;
um.insert(pair<int,int>(1,1));
um.insert(pair<int,int>(1,2));
um.insert(pair<int,int>(1,3));
um.insert(pair<int,int>(2,1));
um.insert(pair<int,int>(2,1));

unordered_multimap<int,int>::iterator iter;

auto iter2  = um.equal_range(1);

for(iter=iter2.first;iter!=iter2.second;iter++){
    cout<< (*iter).second << " "<<endl;
}





return 0;
}

