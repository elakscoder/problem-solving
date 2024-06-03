#include<bits/stdc++.h>
using namespace std;
 int maxArea(vector<int>& height) 
    {
        int n=height.size();
        int i=0;
        int j=n-1;
        int ans=0;
        while(i<j)
        {
            int max_val=min(height[i],height[j])*(j-i);
            ans=max(ans,max_val);
            if(height[i]<=height[j])
            {
                i++;
            }else if(height[i]>=height[j])
            {
                j--;
            }
        }
        return ans;

    }
    int main()
    {
        int n;
        cout<<"Enter the n:";
        cin>>n;
        vector<int>height(n);
        for(int i=0;i<n;i++)
        {
            cout<<"Enter the array1";
            cin>>height[i];
        }
        cout<<maxArea(height);

        return 0;
    }