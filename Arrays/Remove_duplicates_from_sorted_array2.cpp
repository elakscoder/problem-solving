#include<bits/stdc++.h>
using namespace std;
      int removeDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        int j=1;
        for(int i=1;i<n;i++)
        {
            if(j==1||nums[i]!=nums[j-2])
            {
                nums[j++]=nums[i];
            }

        }
        return j;

        
    }
int main()
{
    int n;
    cout<<"Enter the no.of elements: ";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter array "<<i+1<<" element:";
        cin>>nums[i];
    }
    int m=removeDuplicates(nums);
    for(int i=0;i<m;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}


