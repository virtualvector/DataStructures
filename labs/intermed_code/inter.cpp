#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<vector>

using namespace std;

int main()
{

    ifstream myfile ;
    myfile.open("hello.txt");
    string str;
    while((getline(myfile,str)))
    {
        vector<string> v;
        char* spll = strtok(const_cast<char*>(str.c_str())," ");
        while(spll!=NULL)
        {
            v.push_back(spll);
            spll  = strtok(NULL," ");

        }

        if(v[3]=="+")
        {
            cout<<"MOV x0,"<<v[4]<<endl;
            cout<<"MOV x1,"<<v[2]<<endl;
            cout<<"ADD x0,x1"<<endl;
            cout<<"MOV "<<v[0]<<",x0"<<endl;

        }

        else if(v[3]=="-")
        {

            cout<<v[3]<<endl;

        }

    }
    myfile.close();

}
