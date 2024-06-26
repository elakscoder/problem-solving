#include<bits/stdc++.h>
using namespace std;
int findKRotation(int arr[], int n) 
	{
	    
	    int low=0;int min=INT_MAX;
	    int high=n-1;int ans=0;
	    while(low<=high)
	    {
	        int mid=(low+high)/2;
	        if(arr[mid]<min)
	        {
	            min=arr[mid];
	            ans=mid;
	            
	        }
	        if(arr[low]<=arr[mid])
	        {
	            if(arr[low]<arr[high])
	            {
	                high=mid-1;
	            }else
	            {
	                low=mid+1;
	            }
	        }else if(arr[mid]<=arr[high])
	        {
	            if(arr[high]<arr[low])
	            {
	                low++;
	            }else
	            {
	                high=mid-1;
	            }
	        }
	    }
	    return ans;
	    
	}
    int main()
    {
        
    }