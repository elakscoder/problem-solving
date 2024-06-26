#include<bits/stdc++.h>
using namespace std;
bool same(vector<int>& mp1,vector<int>& mp2)
{
    for(int i=0;i<26;i++)
    {
        if(mp1[i]!=mp2[i])
        return false;
    }
    return true;
}
vector<int> findAnagrams(string s, string p) 
{
    int s1=s.size();
    int s2=p.size();
    vector<int>ans;
    
    vector<int>mp2(26,0);
    for(int i=0;i<s2;i++)
    {
        mp2[p[i]-'a']++;
    }
    for(int i=0;i<s1-s2+1;i++)
    {
        vector<int>mp1(26,0);
        
        for(int j=i;j<s2+i;j++)
        {
            mp1[s[j]-'a']++;
        }
        if(same(mp1,mp2))
        {
            ans.push_back(i);
        }
    }
    return ans;
}
int main()
{
    string a;
    string b;
    cout<<"Enter string a:";
    cin>>a;
    cout<<"Enter string b:";
    cin>>b;
    vector<int>res=findAnagrams(a,b);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}