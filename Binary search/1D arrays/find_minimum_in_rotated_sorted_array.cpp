#include<bits/stdc++.h>
using namespace std;


int findMin(vector<int>& nums) 
    {
        int n=nums.size();
        int low=0;
        int high=n-1;int min=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]<min)min=nums[mid];
            if(nums[low]<=nums[mid])
            {
                if(nums[low]<nums[high])
                {
                    high=mid-1;
                }else 
                {
                    low=mid+1;
                }
            }else if(nums[mid]<=nums[high])
            {
                if(nums[high]<nums[low])
                {
                    low++;
                }else
                {
                    high=mid-1;
                }
            }
            
        }
        return min;

    }
    int main()
    {
        
    }