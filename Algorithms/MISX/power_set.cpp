#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

void power_set_gen(vector<char>& v,int size)
{
    int power_set_size = (int)pow(2,size);
    
    for(int counter=0;counter<power_set_size;counter++)
    {
        for(int j=0;j<size;j++)
        {
            if(counter & 1<<j)
            {
                cout<<v[j]<<" ";

            }

        }
        cout<<endl;


    }



}


int main()
{
    vector<char> v;
    v.push_back('A');
    v.push_back('B');
    v.push_back('C');

    power_set_gen(v,3);



return 0;
}
