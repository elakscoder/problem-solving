 #include<bits/stdc++.h>
 using namespace std;
 int firstMissingPositive(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>ans(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0||nums[i]>n)
            continue;
            
            ans[nums[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(ans[i]==0)
            {
                return i;
            }
        }
        return n+1;
        
    }
    int main()
    {
        int n;
        cout<<"Enter n";
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
        cout<<firstMissingPositive(nums);
        return 0;
    }