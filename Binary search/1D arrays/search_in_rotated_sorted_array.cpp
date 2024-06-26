 #include<bits/stdc++.h>
 using namespace std;
 
 int search(vector<int>& nums, int target) 
    {
        int ans=-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]<=nums[high])
            {
                if(target>nums[mid]&&target<=nums[high])
                low=mid+1;
                else
                high=mid-1;

            }
            if(nums[low]<=nums[mid])
            {
                if(target>=nums[low]&&target<nums[mid])
                high=mid-1;
                else
                low=mid+1;
            }
        }

        return ans;
    }
    int main()
    {
        
    }