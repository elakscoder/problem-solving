#include<bits/stdc++.h>
using namespace std;
    int beautySum(string s) 
    {
        
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int>mp;
            for(int j=i;j<n;j++)
            {
                mp[s[j]]++;
                int maxi=0;
                int mini=INT_MAX;
                for(auto it:mp)
                {
                    maxi=max(maxi,it.second);
                    mini=min(mini,it.second);
                }
                ans+=maxi-mini;

            }
        }
        return ans;
    }

int main()
{
    string a;
    cin>>a;
    cout<<beautySum(a);
    return 0;
}