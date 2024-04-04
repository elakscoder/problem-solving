#include<iostream>
using namespace std;
string largestOddNumber(string num) 
    {
        int n=num.size();
        string ans="";
        for(int i=n-1;i>=0;i--)
        {
           int x=num[i]-'0';
           if(x%2!=0)
           {
               for(int j=0;j<=i;j++)
               {
                   ans+=num[j];
                   
               }
               break;
               
           }
        }
        return ans;

    
    }
int main()
{
    string a;
    cin>>a;
    cout<<largestOddNumber(a);
    return 0;


}