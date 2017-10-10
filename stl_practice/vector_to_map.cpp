#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){

    vector<pair<string,string>> v;
    v.push_back(make_pair("rohi","raj"));


    unordered_map<string,string> um(v.begin(),v.end());
    unordered_map<string,string>::iterator iter;

    for(iter=um.begin();iter!=um.end();iter++){

        cout<<(iter->first)<<" "<<(iter->second);

    }


return 0;
}
