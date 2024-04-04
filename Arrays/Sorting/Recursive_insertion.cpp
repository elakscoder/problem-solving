#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

}
void insertSort(int arr[],int i,int n)
{
    if(i==n)return;
    int j=i;
    while(arr[j]<arr[j-1])
    {
        swap(arr,j,j-1);
        j--;
    }
    insertSort(arr,i+1,n);

}
void insertionSort(int arr[], int n)
{
   insertSort(arr,1,n);
    //write your code here
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
    //before recursive insertion sort
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    insertionSort(arr,n);
    cout<<endl;
    //after recursive insertion sort
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
