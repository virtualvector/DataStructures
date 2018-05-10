#include<iostream>
#include<cstdio>

using namespace std;

class AncestorBase
{

    public :
        void AncestorHello()
        {
            printf("Ancestor hello\n");
        }

};

class DerivedBase1:   public virtual AncestorBase
{
    public:
        void DerivedBase1Hello()
        {
    
            cout<<"Derived Hello 1"<<endl;
        }


};

class DerivedBase2 :  virtual public AncestorBase
{
    
    public:
        void  DerivedBase2Hello()
        {

            cout<<"Derived Hello 2"<<endl;
        }

};

class Derived : public DerivedBase1, public DerivedBase2
{

    public :
        void DerivedHello()
        {
            AncestorHello();

        }


};


int main()
{

    Derived d1;
    d1.DerivedHello();

}







