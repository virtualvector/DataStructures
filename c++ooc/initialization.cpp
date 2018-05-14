#include<iostream>
#include<cstdio>

using namespace std;


class A
{

    int a;
    public:
        A();
        int returner();



};

A::A() : a(2)
{

}
int A::returner()
{
    return a;
}


int main()
{

    A a;
    cout<<a.returner()<<endl;


}

