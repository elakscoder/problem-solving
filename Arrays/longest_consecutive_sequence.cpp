/*
Brute Force - O(n3) O(1)

bool linSearch(vector<int>&a,int x)
{
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return true;
        }
    }
    return false;
}


int longestSuccessiveElements(vector<int>&a) 
{
    int n=a.size();
    int longest=0;
    int x=0;
    for(int i=0;i<n;i++)
    {
        x=a[i];
        int cnt=1;
        while(linSearch(a,x+1))
        {
            x+=1;
            cnt+=1;
        }
        longest=max(longest,cnt);
        
    }
    return longest;

    // Write your code here.
}*/

/*Better Approach O(nxnlogn)


int longestSuccessiveElements(vector<int>&a) 
{
    int n=a.size();
    sort(a.begin(),a.end());
    int cntCur=1;
    int longest=0;
    int lastSmaller=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]!=lastSmaller)
        {
            if(a[i]==lastSmaller+1)
            {
                cntCur++;
                lastSmaller=a[i];
            }
            else
            {
                cntCur=1;
                lastSmaller=a[i];

            }

        }
        longest=max(cntCur,longest);
    }
    return longest;

    
    // Write your code here.
}



*/

/*Optimal Approach

class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int cnt=0;
        int longest=0;
        
        int n=nums.size();
        if(n==0)return 0;
        unordered_set<int>st;
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        for(auto it:st)
        {
            if(st.find(it-1)==st.end())
            {
                int x=it;
                 cnt=1;
                while(st.find(x+1)!=st.end())
                {
                    cnt++;
                    x=x+1;
                }
            }
            longest=max(cnt,longest);
        
        }
        return longest;

        
        
    }
};



*/