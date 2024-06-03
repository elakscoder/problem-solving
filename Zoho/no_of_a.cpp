#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    
    
        string a;int n=0;int noa=0;int ans=0;
         cout<<"Enter the string:";
    cin>>a;
    
    cout<<"Enter n:";
    cin>>n;
    
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='a')
        noa++;
    }
    int value=n/a.size();
     ans=value*noa;
    int valuerem=n%a.size();
    for(int i=0;i<valuerem;i++)
    {
        if(a[i]=='a')
        ans++;
    }
    cout<<ans<<endl;
    
   
    return 0;
}

