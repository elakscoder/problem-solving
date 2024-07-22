#include<stdio.h>

void print(int arr[],int n)
{
     for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void scan(int arr[], int n)
{
    printf("Enter the array elements: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

int fun(int arr[],int n)
{
    int ans = arr[0];

    for(int i=1;i<n;i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];

    scan(arr,n);

    printf("The input array is: ");
    print(arr,n);
   

    printf("The number that appears once is: ");
    printf("%d",fun(arr,n));
 
    return 0;
}