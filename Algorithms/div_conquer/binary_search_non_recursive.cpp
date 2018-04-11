#include<iostream>
#include<vector>
#include<cstdio>


using namespace std;

int binary_search(vector<int>& a,int elem)
{

    int left=0,right=a.size()-1;



    while(left<=right)
    {

    int mid = left+(right-left)/2;

        if(a[mid]==elem) return mid;
        else if(a[mid]<elem) left=mid+1;
        else right=mid-1;

    }

    return -1;



}





int main()
{

    int n;
    cin>>n;
    vector<int> v(n);


    for(int i=0;i<n;i++)cin>>v[i];
    cout<<"to be searched"<<endl;
    int ele;
    cin>>ele;
    cout<<"entereing"<<endl;
   cout<< binary_search(v,ele);

return 0;
}
