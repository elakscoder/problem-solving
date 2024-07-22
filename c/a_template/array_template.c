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

void fun(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i] = arr[i] * 5;
    }
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
   
    fun(arr,n);

    printf("The output array is: ");
    print(arr,n);
  
    return 0;
}