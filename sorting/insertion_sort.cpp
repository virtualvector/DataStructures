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

void insertion_sort(vector<int>& a){

    for(int i=1;i<a.size();i++){

            int temp = a[i];
            int j= i-1;
            while(j>=0 && a[j]>temp){


                    a[j+1]=a[j];
                    j--;
            
            }
            a[j+1]=temp;

            }

}


int main()
{

ios_base::sync_with_stdio(0);

vector<int> v;
v.push_back(5);
v.push_back(4);
v.push_back(3);
v.push_back(5);
v.push_back(5);
v.push_back(1);
v.push_back(5);
insertion_sort(v);

for(int i=0;i<v.size();i++)cout<<v[i]<<" ";



return 0;
}

