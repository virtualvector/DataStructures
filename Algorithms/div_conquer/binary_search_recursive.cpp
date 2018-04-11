#include<iostream>
#include<vector>
#include<cstdio>


using namespace std;

int binary_search(vector<int>& a,int left,int right,int elem)
{
    if(left<=right)
    {
    int mid = left+(right-left)/2;

        if(a[mid]==elem) return mid;
        else if(a[mid]<elem) binary_search(a,mid+1,right,elem);
        else binary_search(a,left,mid-1,elem);
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
   cout<< binary_search(v,0,v.size()-1,ele);

return 0;
}
