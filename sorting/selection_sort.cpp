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
using namespace std;

void selection_sort(vector<int>& a){

    for(int i=0;i<a.size()-1;i++){

        int min_index = i;

        for(int j=i+1;j<a.size();j++){
                
                if(a[j]<a[min_index])min_index=j;


        }
        int temp = a[i];
        a[i]=a[min_index];
        a[min_index]=temp;
    }

}



int main()
{

ios_base::sync_with_stdio(0);

vector<int> v(100);
for(int i=0;i<100;i++){
        
        v[i]=rand()%100;

}

selection_sort(v);
for(int i=0;i<v.size();i++){
    
    cout<<v[i]<<" ";

}

return 0;
}

