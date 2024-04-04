#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
    {
        int freq[26]={0};
        int n=s.size();
        int m=t.size();
        if(n!=m)
        return 0;
        for(int i=0;i<n;i++)
        {
            freq[s[i]-'a']++;
        }
        for(int i=0;i<m;i++)
        {
            freq[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0)
            return 0;
        }
        return 1;

    }
    int main()
    {
        string s,t;
        cout<<"Enter the string1: ";
        cin>>s;
        cout<<"Enter the string2: ";
        cin>>t;
        cout<<isAnagram(s,t);
        return 0;
    }