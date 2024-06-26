#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>&nums,int mid)
{
    int ans=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        ans+=ceil((double)(nums[i])/(double)(mid));
    }
    return ans;
}
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(sum(nums,mid)<=threshold)
            {
                high=mid-1;
            }else 
            {
                low=mid+1;
            }
            
        }
        return low;
    }
    int main()
    {
        
    }