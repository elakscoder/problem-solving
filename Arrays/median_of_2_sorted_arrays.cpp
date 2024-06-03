/*Brute Force Approach 
extra space
*/

/*Efficient approach
two-pointer algorithm
*/

/*#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int n=nums1.size();
        int m=nums2.size();
        int m2=0;
        int m1=0;
        int i=0;
        int j=0;
        double sol=0;
        for(int count=0;count<=(n+m)/2;count++)
        {
            m2=m1;
            if(i!=n&&j!=m)
            {
                
                if(nums1[i]<nums2[j])
                {
                    m1=nums1[i++];
                }else
                {
                    m1=nums2[j++];
                }

            }
            else if(i<n)
            {
                m1=nums1[i++];
            }else if(j<m)
            {
                m1=nums2[j++];
            }
        }
        if((n+m)%2==0)
        {
            sol=(m2+m1)/2.0;
        }else
        {
            sol=m1;
        }
        return sol;


       
    }
int main()
{
    
    cout<<"Enter no.of elements for nums1: ";
    int n;cin>>n;
    cout<<"Enter no.of elements for nums2: ";
    int m;cin>>m;
    vector<int>nums1(n);
    vector<int>nums2(m);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter array1 element "<<i+1<<" :";
        cin>>nums1[i];
    }
    
    for(int i=0;i<m;i++)
    {
        cout<<"Enter array2 element "<<i+1<<" :";
        cin>>nums2[i];
    }
    cout<<findMedianSortedArrays(nums1,nums2);
    return 0;

}*/

/*Optimized Approach
Binary Search
*/
#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int n1=nums1.size();
        int n2=nums2.size();
        if(n2<n1)return findMedianSortedArrays(nums2,nums1);
        int low=0;int high=n1;
        int left=(n1+n2+1)/2;
        while(low<=high)
        {
            int mid1=(low+high)/2;
            int mid2=left-mid1;
            int l1=INT_MIN,l2=INT_MIN;
            int r1=INT_MAX,r2=INT_MAX;
            if(mid1<n1)r1=nums1[mid1];
            if(mid2<n2)r2=nums2[mid2];
            if((mid1-1)>=0)l1=nums1[mid1-1];
            if((mid2-1)>=0)l2=nums2[mid2-1];
            if(l1<=r2&&l2<=r1)
            {
                if((n1+n2)%2==0)
                {
                    return (double)(max(l1,l2)+min(r1,r2))/2;
                }else
                {
                    return max(l1,l2);
                }
            }else if(l1>r2)high=mid1-1;
            else if(l2>r1)low=mid1+1;

        }
        return 0;
        
    }


int main()
{
    int n;
    cout<<"Enter the size of the array1: ";
    cin>>n;
    int m;
    cout<<"Enter the size of the array2: ";
    cin>>m;
    
    vector<int>nums1(n);

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the array1 "<<i+1<<" :";
        cin>>nums1[i];
    }
    vector<int>nums2(m);

    for(int i=0;i<m;i++)
    {
        cout<<"Enter the array2 "<<i+1<<" :";
        cin>>nums2[i];
    }

    cout<<findMedianSortedArrays(nums1,nums2);
    
    return 0;
}
