#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int test;
    cin>>test;
    while(test--)
    {
        long long int size;
        cin>>size;
        vector<long long int> v[size];

        long long int positive=0,negative=0,counter=0;
        for(int i=0;i<size;i++)
        {
            int input;
            cin>>input;

            if(input>=0)
            {
                counter++; positive+=input;


            }
            else negative+=input;

        }
        cout<<(positive* counter)+negative<<endl;



        



    }

}
