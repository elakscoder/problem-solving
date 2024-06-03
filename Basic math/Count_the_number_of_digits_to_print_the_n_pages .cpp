#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of pages-n:";
    cin>>n;
    int ans=0;
    /*if(n<10)
    {
        ans=n;
    }else if(n<100)
    {
        ans+=9;
        ans+=(n-9)*2;
    }else if(n<1000)
    {
        ans+=9;
        ans+=90*2;
        ans+=(n-99)*3;

    }else if(n<10000)
    {
        ans+=9;
        ans+=90*2;
        ans+=900*3;
        ans+=(n-999)*4;

    }
    cout<<"The no of digits required is:"<<ans;
    return 0;
    */ 
   string s=to_string(n);
   int length=s.length();
   int m=length;
   while(m>0)
   {
    if(m==length)
    {
        ans+=(n-((pow(10,m-1))-1))*m;
        m--;
    }else 
    {
        ans+=(9*pow(10,m-1))*m;
        m--;
    }
   }
   cout<<ans;
   return 0;
   
}