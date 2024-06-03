#include<bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s) 
    {
        int n=s.size();
        int cnt=0;
        
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                cnt++;
            }
            else if(cnt==0)
            {
                continue;
            }else
            {
                break;
            }
        }
        return cnt;
        
    }

int main()
{
    string s;
    while(1)
    {
         cout<<"Enter string: ";
    cin>>s;
    cout<<lengthOfLastWord(s);
    return 0;
    }
   

}