
 /*  Efficient Approach TC: O(nlogn) SC: O(n)
 
  int majorityElement(vector<int>& nums) 
    {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]>nums.size()/2)
            return nums[i];
        }
        return 0;
    }
       
*/


/*Optimized Approach O(2n) O(1)

   int majorityElement(vector<int>& nums) 
    {
        int count=0;
        int ans=0;
        int element;
        
        for(int i=0;i<nums.size();i++)
        {
            
             if(count==0)
            {
                count=1;
                element=nums[i];
            }
            else if(element==nums[i])
            {
                count++;

            }else
            {
                count--;
            }
           
           
        }
        int cans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==element)
            {
                cans++;
            }
        }
        if(cans>nums.size()/2)
        return element;
        return 0;
    }

*/