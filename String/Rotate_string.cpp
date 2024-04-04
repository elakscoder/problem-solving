#include<bits/stdc++.h>
using namespace std;


/*void rotateArr(string &s)
{
    int n=s.size();
   char temp=s[0];
    for(int i=0;i<s.size()-1;i++)
    {   
        s[i]=s[i+1];
       
    }
     s[n-1]=temp;
    
}
    bool rotateString(string s, string goal) 
    {
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            rotateArr(s);
           
            
            if(s==goal)
            {
                return 1;
            }
        }
        return 0;
    }*/
    bool rotateString(string s, string goal) 
    {
       if(s.length()==goal.length()&& (s+s).find(goal)!=string::npos)
        return true;
        return false;
    }
    
    int main()
    {
        string s,goal;
        cin>>s>>goal;
        cout<<rotateString(s,goal);
        return 0;
    }
    