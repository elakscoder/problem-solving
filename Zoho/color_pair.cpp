#include<bits/stdc++.h>
using namespace std;
int pairofsocks(int arr[],int n)
{
    int ans=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        if(i->second>1)
        {
            ans+=(i->second)/2;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<pairofsocks(arr,n);
    return 0;
}