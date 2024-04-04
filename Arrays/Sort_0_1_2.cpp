/*Merge Sort TC:O(NLOGN) SC:O(N)*/




/*EFFICIENT APPROACH TC:O(2N) SC:O(1)
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        int count0=0;
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            count0++;
            else if(arr[i]==1)
            count1++;
            else if(arr[i]==2)
            count2++;
            
        }
        int j=0;
        for(int i=0;i<count0;i++)
        {
            arr[j]=0;
            j++;
            
        }
        
        for(int i=0;i<count1;i++)
        {
             arr[j]=1;
             j++;
            
        }
       
        for(int i=0;i<count2;i++)
        {
            arr[j]=2;
            j++;
        }
        // code here 
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}
*/

/*Optimized TC:O(n) SC:O(1)

void sortColors(vector<int>& nums) 
    {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(high>=mid)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                low++;mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }else if(nums[mid]==2)
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        
    }
*/

// } Driver Code Ends