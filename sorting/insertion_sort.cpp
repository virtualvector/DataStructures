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
#include<cmath>
#include<queue>
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


vector<int> v(100);
for(int i=0;i<100;i++){
    v[i]=rand()%100;
}
insertion_sort(v);

for(int i=0;i<v.size();i++)cout<<v[i]<<" ";



return 0;
}

