#pragma warning(disable:4786)
#include<iostream>
#include<cstdio>
#include<algorithm>
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

int main()
{

ios_base::sync_with_stdio(0);

vector<int> v(10);
for(int i=0;i<10;i++){
        
        v[i]=i;

}

if(none_of(v.begin(),v.end(),[](int i){return i>11;})){
        cout<<"none is greater"<<endl;
}







return 0;
}

