#include<iostream>
using namespace std;
int maxDepth(string s) 
    {
        int depth=0;
        int count=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            count++;
            else if(s[i]==')')
            count--;
            depth=max(depth,count);
        }
        return depth;
    }
    int main()
    {
        string s;
        cin>>s;
        cout<<maxDepth(s);
        return 0;

        
    }