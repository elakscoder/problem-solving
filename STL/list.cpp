#include<bits/stdc++.h>
using namespace std;
void print(list<int> ls)
{
    for(auto i:ls)
    {
        cout<<i<<" ";
    }
}
void explainList()
{
    list<int> ls;
    ls.push_back(2);
    print(ls);
    cout<<endl;

    ls.emplace_back(4);
    print(ls);
    cout<<endl;

    ls.push_front(5);
    print(ls);
    cout<<endl;

    ls.emplace_front();
    print(ls);
    cout<<endl;


    //rest functions same as vector
    //begin ,end , rbegin , rend,clear,insert,size,swap
}
int main()
{
    explainList();
    return 0;
}