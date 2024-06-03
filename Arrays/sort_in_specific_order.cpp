#include<bits/stdc++.h>
using namespace std;
void sortIt(long long arr[], long long n)
    {
        int even[n];int odd[n];
        sort(arr,arr+n);
        int e=0;int o=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                even[e++]=arr[i];
            }else
            {
                odd[o++]=arr[i];
            }
        }
        for(int i=0;i<o;i++)
        {
            arr[i]=odd[o-i-1];
        }
        for(int i=0;i<e;i++)
        {
            arr[i+o]=even[i];
        }
       
        
        
    }
    int main()
    {
        long long n;
        cout<<"Enter the no. of elements: ";
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sortIt(arr,n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;
    }