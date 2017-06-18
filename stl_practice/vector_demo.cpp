/*

This demo illustrates various operations that can be performed using a vector
Author : Rohith Raj R
Date   : 18/06/2017


*/
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{

ios_base::sync_with_stdio(0);

//Create a vector
vector<int> v;

//Create a vector indicating it's initial size
vector<int> v2(100);

//Create a vector indicationg it's intial size and with default values
vector<int> v3(100,3);

//Create a vector from an array
int a[]={1,2,3,4,5,6,7};
vector<int> v4(a,a+sizeof(a)/sizeof(a[0]));

//creating a vector of pairs 
vector< pair<int,int> >v5;

/*various ways to insert elements into a vector*/
v.push_back(10); //insert 10 @ end of the vector
v2[2]=10;        //insert 10 @ index 2

//Available iterators
vector<int>::iterator iter = v.begin(); //returns a iterator @beginning
iter = v.end(); //iter points to end of the vector.

//constant iterator
vector<int>::const_iterator iter2 = v.begin(); //constant iter @beginning

//reverse iterator
vector<int>::reverse_iterator iter3 = v.rbegin();// rev iter 

//Element Access
int data = v2.at(2); // element found at index 2
data = v2[2] ;       // element found at index 2
data = v.front() ;     // element at beginning of the array
data = v.back();       // element at end of the array

//Modifiers
v3.erase(v3.begin(),v3.begin()+3); //erase the selected contents

v3.pop_back();   //removes the last elements but
                             //does not return it


v2.insert(v2.begin(),v3.begin(),v3.begin()+4); //insertion

v2.swap(v3); //swap operation , swaps v2 with v3


v3.clear(); // clears the vector contents

return 0;
}

