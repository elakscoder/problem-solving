#include <bits/stdc++.h> //push pop - logn and top-  O(1)
using namespace std;

void explainPQueue()
{
    priority_queue<int>pq;
    //greatest value stays on the top-maximum heap
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}

    cout<<pq.top();//10
    cout<<endl;
    pq.pop();//{8,5,2}
    cout<<pq.top();//8
    cout<<endl;

    //size swap empty function same as others

    //Minimum heap
    priority_queue<int,vector<int>,greater<int>>p;
    p.push(5);//5
    p.push(2);//2,5
    p.push(8);//2,5,8
    p.emplace(10);//2,5,8,10

    cout<<p.top();

   
  

}
int main()
{
    explainPQueue();
    return 0;
}