#include<bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t) 
    {
        unordered_map<char,char>mps;
        unordered_map<char,char>mpt;

        int n=s.size();
        int m=t.size();
        for(int i=0;i<n;i++)
        {
            if(mps.find(s[i])!=mps.end())
            {
                if(mps[s[i]]!=t[i])
                return false;

            }else if(mpt.find(t[i])!=mpt.end())
            {
                return false;
            }else
            {
                mps[s[i]]=t[i];
                mpt[t[i]]++;
            }

        }
        return true;

        
    }
int main()
{
    string s,t;
    cin>>s>>t;
    cout<<isIsomorphic(s,t);
    return 0;
}