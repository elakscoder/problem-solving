#include<iostream>
using namespace std;



void nBinaryTriangle(int n) {
    int k;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        k=1;
        else
        k=0;
        
        for(int j=0;j<i+1;j++)
        {
            
            cout<<k<<" ";
            if(k==1)k=0;
            else k=1;
        }
        cout<<"\n";
    }
    // Write your code here.
}
int main()
{
    int n;
    cin>>n;
    nBinaryTriangle(n);
    return 0;
}
