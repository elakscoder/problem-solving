#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int left=0;
        int right=0;
        int n=s.length();
        int len=0;
        map<int,int>mp;
        while(right<n)
        {
            if(mp.find(s[right])!=mp.end())
            {
                if(mp[s[right]]>=left&& mp[s[right]]<=right)
                {
                    left=mp[s[right]]+1;
                    mp[s[right]]=right;
                }else
                {
                    mp[s[right]]=right;
                    len=max(len,right-left+1);
                }
            }
            else
            {
                mp[s[right]]=right;
                len=max(len,right-left+1);
            }
            right++;
        }
        return len;
    }
};