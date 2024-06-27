#include<bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) 
    {
        int n=arr.size();
        int ele=1;
        int val=0;
        int ptr=0;int i=0;
        while(i<n)
        {
            if(arr[i]==ele)
            {
                ele++;i++;
            }else if(ele<arr[i])
            {
                val=ele;
                ele++;
                ptr++;
            }
            if(ptr==k)break;
            
        }
        if(ptr<k)
        {
            int sum=k-ptr;
            val=arr[n-1]+sum;
        }
        
         return val;
    }