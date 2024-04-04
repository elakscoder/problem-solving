#include <bits/stdc++.h> 
using namespace std;
//sorted  -multiset
void explainMSet()
{
    //Everything is same as set only
    //stores duplicate elements also

    multiset<int>ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1);//all 1's are erased

    int cnt=ms.count(1);

    ms.erase(ms.find(1));//single element is erased

    ms.erase(ms.find(1),ms.find(4));
    //rest all functions same as set
    

    
}
int main()
{
    explainMSet();
    return 0;
}