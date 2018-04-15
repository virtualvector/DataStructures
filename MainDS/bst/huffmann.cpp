#include<iostream>
#include "binary_search_tree.cpp"
#include<queue>
#include <deque>
#include <vector>
#include<utility>
#include<algorithm>


using namespace std;

int max(int a,int b)
{
    return a>b?a:b;

}

int find_height(Node* root)
{   

    if(root==NULL) return 0;
    return max(find_height(root->left),find_height(root->right))+1;



}

Node* huffmann(Node* root, vector< pair<int,int> > v)
{

    priority_queue< pair<int,int>  > pq; 

    for(int i=0;i<v.size();i++) pq.push(v[i]);

    while(pq.size())
    {
        if(pq.size()==1) 
        {
            pair<int,int> p1= pq.top();
            cout<<p1.first<<" "<<p1.second<<" ";
            pq.pop();
            break;
        }
    pair<int,int> n1 = pq.top();
    pq.pop();
    pair<int,int> n2 = pq.top();
    pq.pop();
    cout<< n1.first<<" "<<n1.second<<endl;

    cout<< n2.first<<" "<<n2.second<<endl;
    

    pq.push(pair<int,int>(0,n1.second+n2.second));

    }

    return root;


}




using namespace std;

int main()
{
    Node* root = (struct node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    root->data=30;

    iterative_insert(root,200);
    iterative_insert(root,10);
    display(root);
   // cout<<find_height(root)<<endl;
    Node* root2 = NULL;

    cout<<"enter the number of elements"<<endl;
    int n;
    cin>>n;

    vector<pair<int,int>> v(n);
    cout<<"enter the elements"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;

    }



     root2 = huffmann(root2,v);


return 0;
}
