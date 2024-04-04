/*


*/








/*Optimized Approach  O(2N)  O(2N)

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;int n=nums1.size();
        int j=0;int m=nums2.size();
        vector<int> ans;
        while(i<n&&j<m)
        {
            if(nums1[i]==nums2[j])
            {
                if(ans.size()==0||ans.back()!=nums1[i])
                {
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }else
            {
                j++;
            }
        }
        return ans;

        

        
    }*/