/*BRUTE FORCE APPROACH O(n2) O(1)
 int n = a.size();
    // maxLength is used to store the maximum 
    // length of a subarray whose sum = 'k'
    
    int maxLength = 0;

    // Iterating over 'a'
    for (int i = 0; i < n; ++i) {
        long long currentSum = 0;
        for(int j = i; j < n; ++j) {
            currentSum += a[j];

            if(currentSum == k) {
                maxLength = max(maxLength, j - i + 1); //to consider zero , we are not using break here;
            }
        }
    }

    return maxLength;
*/
/* positives and negatives

#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k)
{
    int prefix_sum=0;
    int rem=0;
    int len=0;
    map<int,int>mp;
   
    for(int i=0;i<nums.size();i++)
    {
        prefix_sum+=nums[i];
        rem=prefix_sum-k;
        if(rem==0)
        {
            len=max(i+1,len);
        }

       
       
        if(mp.find(rem)!=mp.end())
        {
            len=max(len,i-mp[rem]);
        }
        if(mp.find(prefix_sum)==mp.end())
        {
            mp[prefix_sum]=i;

        }


    }
    return len;
    // Write your code here
}
*/

/*
postives and zeros

int longestSubarrayWithSumK(vector<int> a, long long k) 
{
    int j=0;
    int i=0;
    long long sum=0;
    int len=0;
    while(j<a.size())
    {
        sum+=a[j];
        while(sum>k&&i<=j)
        {
            sum-=a[i];
            i++;
        }
        if(sum==k)
        {
            len=max(len,j+1-i);
           
        }
        j++;

    }
    return len;

    // Write your code here
}



*/