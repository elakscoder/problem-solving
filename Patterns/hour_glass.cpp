#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n value: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<i;k++)
            {
                cout<<" ";
            }
        for(int j=0;j<n-i;j++)
        {
            
            cout<<j+i+1<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int k=0;k<n-i-2;k++)
            {
                cout<<" ";
            }
        for(int j=i+1;j>=0;j--)
        {
            
            cout<<n-j<<" ";
        }
        cout<<endl;
    }
    return 0;
}