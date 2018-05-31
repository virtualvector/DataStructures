#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    
    ifstream myfile;
    myfile.open("inputfile.txt");
    string out,op1,oper1,op2,oper2,extra;
    while(!myfile.eof())
    {
      myfile >>out>>op1>>oper1>>op2>>oper2;;
      if(myfile.eof())break;
      cout<<out<<endl<<op1<<endl<<oper1<<endl<<op2<<endl<<oper2<<endl;
    }
    myfile.close();

return 0;

}
