#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n value:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i<<" ";
        cin>>arr[i];
    }
    int sum=0;
    //find equilibrium point 
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int fi=0;
    for(int i=0;i<n;i++)
    {
        fi+=arr[i];
         if((sum-arr[i])/2==(fi-arr[i]))
         {
            cout<<i<<endl;
         }
         
    }
    return 0;
    
}