#include<bits/stdc++.h>
using namespace std;
vector<string> commonChars(vector<string>& words) 
    {
        int n=words.size();
        int freq[26]={0};
        
        unordered_map<int,int>mp;
        for(int i=0;i<words[0].size();i++)
        {
            freq[words[0][i]-'a']++;
        }
        for(int i=1;i<words.size();i++)
        {
            int freq1[26]={0};
            for(int j=0;j<words[0].size();j++)
            {
                freq1[words[i][j]-'a']++;
            }
            for(int i=0;i<26;i++)
            {
                freq[i]=min(freq[i],freq1[i]);
            }
        }
        vector<string>ans;
        for(int i=0;i<26;i++)
        {
            while(freq[i]>0)
            { 
                string s="";
                s=s+(char)(i+'a');
                ans.push_back(s);
                freq[i]--;
            }
        }
        return ans;

    }
    int main()
    {
        
    }