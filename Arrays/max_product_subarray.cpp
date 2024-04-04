/*Brute Force -O(n2)

    int n=nums.size();
    int ans=1;
    int pro=1;
    for(int i=0;i<n;i++)
    {
        pro=1;
        for(int j=i;j<n;j++)
        {
            pro*=nums[j];
            ans=max(ans,pro);
            

        }
    }
    return ans;
*/


/* Optimal solution - O(n)






*/
    
