/*TC:O(n)
SC:O(1)*/


#include<iostream>
using namespace std;
    string removeOuterParentheses(string s) 
    {
        int n=s.size();
        int count=0;
        string res="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                count++;
                if(count!=1)
                {
                    res+=s[i];
                }
            }
            if(s[i]==')')
            {
                count--;
                if(count!=0)
                {
                    res+=s[i];
                }
            }
        }
        return res;
    }
    int main()
    {
        string a;
        cin>>a;
        cout<<removeOuterParentheses(a);
        return 0;
    }
        
