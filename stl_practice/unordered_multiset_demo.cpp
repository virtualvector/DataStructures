#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

    unordered_multimap<string,string> umm;

    umm.insert(make_pair("HELLO","bye"));
    umm.insert(make_pair("HELLO","dye"));
    umm.insert(make_pair("HELLO","cye"));
    umm.insert(make_pair("HELLO","mye"));
    umm.insert(make_pair("HELL","bye"));
    umm.insert(make_pair("HELL","bye"));

    unordered_multimap<string,string>::iterator iter;

    for(iter=umm.begin();iter!=umm.end();++iter){

        if(iter->first == "HELLO"){

            cout<<(iter->second)<<endl;
        }

    }
    cout<<umm["HELLO"];


return 0;
}
