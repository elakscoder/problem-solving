#include<bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        //creating a vector to store the answer
        vector<int>ans;
        //creating a deque to store the greater element
        deque<int>dq;
        //size of the input array
        int n=nums.size();
        //loop throught the entire array once
        for(int i=0;i<n;i++)
        {
            //check if there is any element out of bound(out of the limit k) and remove it.
            if(!dq.empty()&&dq.front()==i-k)dq.pop_front();
            //check if there is any element that is less than the current element , if it is then remove it.
            //so that greater element stays on the front , we could return the element that is present in the front (greater)
            while(!dq.empty()&&nums[dq.back()]<nums[i])dq.pop_back();
            //insert element in the deque and return the front element(greater)
            dq.push_back(i);
            //insert the element when the index value is greater than or equal to k-1, since in the initial k-1 value we cannot 
            //find the greater among the substring of length k.
            if(i>=k-1)ans.push_back(nums[dq.front()]);
        }
        return ans;
    }

int main()
{

}