#include<bits/stdc++.h>
using namespace std;
void explainPair()
{
    pair<int,int>p = {1,2};
    cout<<p.first<<" "<<p.second<<" ";
    pair<int,pair<int,int>>v={1,{2,3}};
    cout<<v.first<<" "<<v.second.second<<" "<<v.second.first<<" ";
    pair<int,int>arr[]={{1,2},{2,3},{3,4}};
    cout<<arr[2].second<<" ";
}
int main()
{
    explainPair();
    return 0;
}