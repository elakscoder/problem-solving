#include<bits/stdc++.h>
using namespace std;
 int strStr(string haystack, string needle) 
    {
        int nsize=needle.size();
        int hsize=haystack.size();
        for(int i=0;i<hsize;i++)
        {
            if(haystack.substr(i,nsize)==needle)
            {
                return i;
            }
        } 
        return -1;
    }
    int main()
    {
        string haystack;
        string needle;
        cout<<"Enter the string haystack:";
        cin>>haystack;
        cout<<"Enter the string needle:";
        cin>>needle;
        cout<<strStr(haystack,needle);
        return 0;
    }