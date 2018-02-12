#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

long long int special_sum_calc(long long int num)
{

    long long int sum_val =0;
    long long int temp= num;
    while(temp)
    {
        long long int rem = temp%10;
        if(rem!=0)
        {
        sum_val+=(long long int)pow(rem,rem);
        }
        temp=temp/10;

    }
    return sum_val;

}

bool decision_func(long long int num,long long int specialsum)
{
    
    while(num)
    {

        long long int rem= num%10;
        if(rem!=0)
        {
            if(specialsum%rem != 0) return false;

        }
        num/=10;

    }
    return true;



}

int main()
{
    
    long long int test;
    cin>>test;
     
     while(test--)
     {
        long long int left, right;
        cin>>left>>right;
        long int counter_value=0;
        for(long long int i=left;i<=right;i++)
        {
        long int special_sum = special_sum_calc(i);
        long int decision = decision_func(i,special_sum);

        if(decision) counter_value++;
        }
        cout<<counter_value<<endl;

     }


return 0;
}
