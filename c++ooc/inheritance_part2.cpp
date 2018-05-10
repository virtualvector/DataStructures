#include<iostream>
#include<cstdio>

using namespace std;


class A
{
    int a,b;
    public :
    A(int a,int b)
    {
        this->a = a;
        this->b = b;
    }

    void printer()
    {
        cout<<a<<" "<<b<<endl;
    }



};

class B
{

    A ob1;

    public :
        B(int a, int b) : ob1(a,b)
        {
            ob1.printer();
        }




};



int main()
{
    
    B b1(5,3);



return 0;
}
