#include <bits/stdc++.h> 
using namespace std;
//key value pair - map
//map stores unique keys in sorted order
void explainMap()
{
    map<int,int>mp;
    map<int,pair<int,int>>mp;
    map<pair<int,int>,int>mp;

    mp[1]=2;
    mp.insert({2,4});


    for(auto it:mp)
    {
       cout<<it.first<<" "<<it.second<<endl;  

    }
    cout<<mp[1];
    cout<<mp[5];

    auto it=mp.find(2);
    

    auto it=mp.find(5);

    auto it=mp.lower_bound(2);
    auto it=mp.upper_bound(3);

    //erase ,swap,size,empty are same as above
}
int main()
{
    explainMap();
    return 0;
}