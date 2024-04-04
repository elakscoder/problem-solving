//TC:O(n2) O(1)


#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n) 
{
    if(n==1)return;
    int did=0;
    for(int j=0;j<n-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            did=1;
        }
    }
    if(did==0)return;
    bubbleSort(arr,n-1);
    //write your code here
}
int main()
{
    vector<int> arr={10,9,8,7,6,5,4,3,2};
    int n=arr.size();
    //before bubble sort
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubbleSort(arr,n);
    //after bubble sort
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
}