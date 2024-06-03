#include<bits/stdc++.h>
using namespace std;

vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
         vector<string>s;
        int n=heights.size();
        unordered_map<int,string>mp;
        for(int i=0;i<n;i++)
        {
            mp[heights[i]]=names[i];
        }
        sort(heights.begin(),heights.end());
        for(int i=n-1;i>=0;i--)
        {
            s.push_back(mp[heights[i]]);
        }
        return s;

    }
    int main()
    {
        int n;
        cout<<"Enter the size of the array:";
        cin>>n;

        vector<int>heights(n);
        vector<string>names(n);
       

        for(int i=0;i<n;i++)
        {
            cout<<"Enter the names:";
            cin>>names[i];
        }

        for(int i=0;i<n;i++)
        {
            cout<<"Enter the heights:";
            cin>>heights[i];
        }
        vector<string> ans=sortPeople(names,heights);
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
      
            
        
        return 0;

    }