/*Brute Force Approach O(n2) O(1)

#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) return "YES";
        }
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int n, vector<int> &arr, int target) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return { -1, -1};
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    return 0;
}
*/
/*
Efiicient Approach (Hashing )TC:O(nlogn) SC:O(n)
bool hasArrayTwoCandidates(int arr[], int n, int x) 
	{
	    map<int,int>mp;
	    for(int i=0;i<n;i++)
	    {
	        int a=arr[i];
	        int more=x-a;
	        if(mp.find(more)!=mp.end())
	        {
	            return 1;
	        }
	        mp[arr[i]]=i;
	        
	    }
	    return 0;
	    // code here
	}
*/
/*Optimized Approach (only for return YES or NO)

bool hasArrayTwoCandidates(int arr[], int n, int x) {
	 
	    sort(arr,arr+n);
	    
	    int i=0 , j=n-1;
	    
	    while(i<j){ 
	        int sum = arr[i] + arr[j];
	        
	        if(sum == x) return true; 
	        else if(sum<x) i++;  
	        else j--;
	        
	    }
	    return false;  
	}



*/