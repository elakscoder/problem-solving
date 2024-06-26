/*int lowerbound(vector<int> nums,int target)
{
    int ans=0;
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[mid]>=target)
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
int upperbound(vector<int> nums,int target)
{
    int ans=nums.size();
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[mid]>target)
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
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        if(nums.size()==0)
        {
            return {-1,-1};
        }
        if(nums.size()==1&&target==nums[0])
        {
            return {0,0};
        }
        vector<int>ans;
        int lower = lowerbound(nums,target);
        if(nums[lower]!=target||lower>=nums.size())
        {
          return {-1,-1};
        }
        int upper =upperbound(nums,target);
        return {lower,upper-1};
        return ans;
    }
    */

#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int> nums,int target)
{
    int n=nums.size();
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[mid]==target)
        {
            first=mid;
            high=mid-1;
        }else if(nums[mid]<target)
        {
            low=mid+1;
        }else
        {
            high=mid-1;
        }
    }
    return first;
}
int upperbound(vector<int> nums,int target)
{
    int n=nums.size();
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[mid]==target)
        {
            first=mid;
            low=mid+1;
        }else if(nums[mid]<target)
        {
            low=mid+1;
        }else
        {
            high=mid-1;
        }
    }
    return first;
}
vector<int> searchRange(vector<int>& nums, int target) 
{
       
        vector<int>ans;
        int lower = lowerbound(nums,target);
        if(lower==-1)
        {
            return {-1,-1};
        }
        int upper =upperbound(nums,target);
        return {lower,upper};
        
}