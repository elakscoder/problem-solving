#include<bits/stdc++.h>
using namespace std;
void print(deque<int> dq)
{
    for(auto i:dq)
    {
        cout<<i<<" ";
    }
}
void explainDeque()
{
    deque<int>dq;
    dq.push_back(1);//{1}
    print(dq);
    cout<<endl;
    dq.emplace_back(2);//{1,2}
    print(dq);
    cout<<endl;
    dq.push_front(4);//{4,1,2}
    print(dq);
    cout<<endl;
    dq.emplace_front(3);//{3,4,1,2}
    print(dq);
    cout<<endl;

    dq.pop_back();
    print(dq);
    cout<<endl;
    dq.pop_front();
    print(dq);
    cout<<endl;
    cout<<dq.back();
    cout<<endl;
    cout<<dq.front();
    cout<<endl;

    //rest functions same as vector
    //begin ,end , rbegin , rend,clear,insert,size,swap
}
int main()
{
    explainDeque();
    return 0;
}