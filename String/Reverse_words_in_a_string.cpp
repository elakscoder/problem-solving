#include<bits/stdc++.h>
using namespace std;
    string reverseWords(string s) 
    {
        reverse(s.begin(),s.end());
        int i=0,j=0,startIndex=0,LastIndex=0;
        int n=s.size();
        while(j<n)
        {
            while(j<n&&s[j]==' ')
            {
                j++;
            }
            startIndex=i;
            while(j<n&&s[j]!=' ')
            {
                 s[i++]=s[j++];
                  LastIndex=i;
                 
            }
           
            
            reverse(s.begin()+startIndex,s.begin()+LastIndex);
            s[i++]=' ';
        }
        s.resize(LastIndex);
        return s;
    }
    int main()
    {
        string a;
        cout<<"Enter the input: "<<endl;
        getline(cin,a);
        cout<<reverseWords(a);
        return 0;
        

    }
    
