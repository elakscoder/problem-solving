#include<bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) 
    {
        int sum=0;int ans=INT_MAX;int res=0;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
        while(j<k)
        {
            sum=nums[i]+nums[j]+nums[k];
            if(abs(target-sum)<ans)
            {
                ans=abs(target-sum);
                res=sum;
            }
            
            if(sum==target)return sum;
            else if(sum>target)k--;
            else j++;          
        }
        }
       
       
        return res;
    }

int main()
{

}