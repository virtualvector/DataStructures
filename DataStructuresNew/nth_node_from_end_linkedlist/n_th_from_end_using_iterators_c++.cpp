#include <cstdio>
#include <list>
#include <cstdlib>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

void display(list<int>& fl){
    list<int>::iterator iter;
    for(iter=fl.begin();iter!=fl.end();iter++){
            cout<<(*iter)<<" ";
    }
    std::cout<<endl;

}

//finding nth node from the end in a linked list
int main(){
    
    list<int> fl;
    while(1){
    
        printf("%s\n","enter your choice:\n1 for insertion\n2 for display\n3 for nth node from the end");
        int choice;
        scanf("%d",&choice);
        
        if(choice==1){
            int value;
            scanf("%d",&value);
            fl.push_back(value);

        }
        else if(choice==2) {display(fl);
        printf("\n");}

       else {


            printf("%s\n","enter n to find nth node from the end");
            int n;
            scanf("%d",&n);

            list<int>::iterator iter1,iter2;
            iter1=fl.begin();
            while(n--)iter1++;
            iter2=fl.begin();

            while(iter1!=fl.end()){
                iter1++;
                iter2++;

            }
            cout<<"node val is "<<(*iter2)<<endl;

       }

    }


return 0;
}
