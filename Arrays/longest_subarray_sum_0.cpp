/*Optimized 

#include<vector>
#include<bits/stdc++.h>

	
#include<bits/stdc++.h>
int getLongestZeroSumSubarrayLength(vector<int> &arr)
{

	int pSum=0;
	int len=0;
	int n=arr.size();
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		pSum+=arr[i];
		if(pSum==0)
		{
			len=max(len,i+1);
		}else 
		{
			if(mp.find(pSum)!=mp.end())
			{
				len=max(len,i-mp[pSum]);
            }else
			{
                mp[pSum] = i;
            }
        }
    }

        return len;
	// Write your code here.
	
}
	// Write your code here.
	


	// Write your code here.
	
*/