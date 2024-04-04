/*
TC: O(N x logN)
SC: O(N) 

Count subarrays with sum equals k 

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        map<int,int>mp;
        int prefix_sum=0;
        int count=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            prefix_sum+=nums[i];
            int remove=prefix_sum-k;
            count+=mp[remove];
            mp[prefix_sum]++;
        }
        return count;

    
        
    }
};



*/