/*

This demo illustrates the use of unordered_set available in c++ 11

Author : Rohith Raj R
data   : 23/06/2017


*/



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
#include<unordered_set>
using namespace std;

int main()
{

ios_base::sync_with_stdio(0);

unordered_set<int> s; //create an unordered_set of ints
s.insert(10); //insert 10 in the set
s.insert(20);

//print the elements in set
unordered_set<int>:: iterator iter;
for(iter=s.begin();iter!=s.end();iter++){
    cout<<*iter<<" ";
}

s.erase(20); //remove 3 from the set
cout<<s.count(10); //used to tell if an element exists in an array or not

iter = s.find(10); //returns a itertator to 10



return 0;
}

