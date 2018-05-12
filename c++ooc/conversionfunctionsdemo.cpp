#include<iostream>
#include<cstdio>

using namespace std;

class A
{
    friend A operator+(int m,const A& a);
    
    int x;

    public:
        
        int getter();
        void setter(int x);
        A  operator+(const A& c);
        operator double();


};


A::operator double()
{
    return 122.0;
}

A operator+(int m,const A& a)
{
   A c;
   int k = m+ a.x;
   c.setter(k);
   return c;
}

void A::setter(int x)
{
this->x = x;
}


int  A::getter()
{
    return this->x;
}

A A::operator+(const A& a)
{
    int m = this->x + a.x;
    A c;
    c.setter(m);
    return c;
}



int main()
{


    A a1,a2;
    a1.setter(2);
    a2.setter(3);
    A c;

     c = a1+a2;


    cout<<c.getter()<<endl;

    A d;
    d = 2+a1;
    cout<<d.getter()<<endl;
    cout<<(double)d<<endl;

}










