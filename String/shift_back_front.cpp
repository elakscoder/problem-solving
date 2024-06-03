#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cout<<"Enter the string: ";
    cin>>a;
    string b=a;
    char temp;
    //backward shift
    temp=a[0];
    for(int i=1;i<a.size();i++)
    {
        a[i-1]=a[i];
    }
    a[a.size()-1]=temp;
    //forward shift
    temp=b[b.size()-1];
    for(int i=b.size()-1;i>=1;i--)
    {
        b[i]=b[i-1];
    }
    b[0]=temp;
    cout<<b<<" "<<a<<endl;
    if(b==a)
    {
        cout<<"1"<<endl;
    }else
    {
        cout<<"0"<<endl;
    }
    return 0;
}