#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>


using namespace std;


bool my_comparator(pair<int,int> a,pair<int,int> b){

    return((a.second)<(b.second));

}

int main(){

    vector< pair<int,int> > v(10);
    for(int i=0;i<10;i++){
        
        v[i]=make_pair(rand()%10,rand()%10);

    }
    sort(v.begin(),v.end(),my_comparator);
    vector< pair<int,int> > ::iterator iter;
    for(iter=v.begin();iter!=v.end();iter++){
    
        cout<<(iter->first)<<" "<<(iter->second)<<endl;

    }


return 0;
}
