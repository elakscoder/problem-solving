/*Brute Force approach O(n2)

#include<iostream>
using namespace std;
int missing(int arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
            {
                flag=1;
                break;
            }

        }
        if(flag==0)
        {
            return i;
        }

    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<missing(arr,n);
    return 0;

} 
*/
/* Efficient Approach O(n) O(n)

#include<bits/stdc++.h>
using namespace std;
int missing(int arr[],int n)
{
    int m[n+1]={0};
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(int i=0;i<=n;i++)
    {
        if(m[i]==0)
        return i;
    }
    return -1;


}
int main()
{
    int n;
     cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<missing(arr,n);
    return 0;

}
*/

/*Most optimized approach O(n) O(1)
1.SUM
 int missingNumber(vector<int>& nums) 
    {
        int ans=0;
        int n=nums.size();
        int sum=(n*(n+1))/2;
        for(int i=0;i<nums.size();i++)
        {
            ans+=nums[i];
        }
        return sum-ans;
        
    }
    2.XOR
    int missingNumber(vector<int>&a, int N) 
{
    int xor1=0;
    int xor2=0;
    for(int i=0;i<N-1;i++)
    {
       xor1=xor1^(i+1);
       xor2=xor2^a[i]; 
    }
    xor1=xor1^N;
    return xor1^xor2;
    // Write your code here.
}

*/