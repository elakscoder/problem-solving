#include<bits/stdc++.h>
using namespace std;
void printPattern(string val)
{
    int n=val.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                cout<<val[i];
            }
            else if(j==n-1-i)
            {
                cout<<val[j];
            }
            cout<<" ";
            
        }
        cout<<endl;
    }
}

int main()
{
    string val;
    while(1)
    {
    cout<<"Enter the string to print:";
    cin>>val;
    printPattern(val);
    }
    
    return 0;
}