#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    cout<<"Enter string a:";
    cin>>a;
    cout<<"Enter string b:";
    cin>>b;
    int asize=a.size();
    int bsize=b.size();
    int i=0;int j=0;
    while(i<asize&&j<bsize)
    {
        if(a[i]==b[j])
        {
            i++;j++;
        }else{
            j++;
        }  
        
    }
    if(i==asize)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    return 0;



}