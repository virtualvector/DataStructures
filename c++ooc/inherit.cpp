#include<iostream>
#include<algorithm>

using namespace std;


class Credit
{

    public :
        int digit();
    private :
        int _digit();

};

class Loan : public Credit
{
    int _loan();

    public :
        int  loan();
    

};


int Credit::digit()
{
    return _digit();
}

int Credit::_digit()
{
    return 2;
}

int Loan::_loan()
{
    return digit();

}

int Loan::loan()
{
    return _loan()+2;
}





int main()
{

    Loan l1;
    cout<<l1.loan()<<endl;
    


return 0;
}




