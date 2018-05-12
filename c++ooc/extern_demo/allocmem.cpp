#include<iostream>
using namespace std;
extern int hello;
void func()
{

 hello = new int(10);


}

int main()
{

    cout<<hello; 
}
