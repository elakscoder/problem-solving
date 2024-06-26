#include<bits/stdc++.h>
using namespace std;
int find(vector<int>  arr,int m)
{
    int low=0;
    int high=m-1;int ans=m;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=1)
        {
            ans=mid;
            high=mid-1;
        }else
        {
            low=mid+1;
        }
    }
    return ans;
}
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{
	    int val=0;int index=-1;
	    int max_val=0;
	   for(int i=0;i<n;i++)
	   {
	        val=m-find(arr[i],m);
	       if(val>max_val)
	       {
	           max_val=val;
	           index=i;
	       }
	   }
	   return index;
	    // code here
	}