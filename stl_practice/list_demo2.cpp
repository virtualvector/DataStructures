#include<iostream>
#include<list>
#include<algorithm>

using namespace std;
bool condition_remove(int x)
{
    return x%2==0;

}

int main()
{
    list<int> ll;
    ll.emplace_back(20);
    ll.emplace_back(501);
    ll.emplace_front(403);
    auto iter2 = ll.begin();
    advance(iter2,2);
    ll.emplace(iter2,44);

    auto iter = ll.begin();

    for(iter;iter!=ll.end();iter++)
    {
        cout<<(*iter)<<" ";
    }

    ll.remove_if(condition_remove);

    for(iter=ll.begin();iter!=ll.end();iter++)
    {
        cout<<(*iter)<<" ";
    }




return 0;
}
