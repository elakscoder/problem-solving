/*Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer. 

 

Example 1:

Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.
Example 2:

Input:
N = 10, D = 3
arr[] = {2,4,6,8,10,12,14,16,18,20}
Output: 8 10 12 14 16 18 20 2 4 6
Explanation: 2 4 6 8 10 12 14 16 18 20 
when rotated by 3 elements, it becomes 
8 10 12 14 16 18 20 2 4 6.

SOLUTION: 


BRUTE FORCE APPROACH O(N*d)

#include <stdio.h>
int rotate(int arr[],int n,int i)
{
	int last=arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=last;
}
int main()
{
	int n,i,m;
	printf("Enter the number of array elements: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter the number %d of array elements: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the no of rotations: ");
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		rotate(arr,n,i);
	}
	printf("After Reversal:\n");
	for(int i=0;i<n;i++)
	{
		
		printf("Enter the number %d of array elements: ",i+1);
		printf("%d\n",arr[i]);
	}
}

EFFICIENT APPROACH O(N)
left rotation
void rotateArr(int arr[], int d, int n)
{
    d=d%n;
    reverseArr(arr,0,d-1);
    reverseArr(arr,d,n-1);
    reverseArr(arr,0,n-1);
   
    // code here
    
}
void reverseArr(int arr[],int start,int end)
{
  
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
}
*/
/*
right rotation
void reverse(vector<int>& nums,int start,int end)
{
    while(start<end)
    {
        int temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;
    }

}

    void rotate(vector<int>& nums, int k) 
    {
        int n=nums.size();
       
        k=k%n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
       

        
    }

*/