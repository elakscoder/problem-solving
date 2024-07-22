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
    int i=0;
    int j = i + 1;

    while(j<n)
    {
        while(arr[i] == arr[j])
        {
            j++;
        }

        arr[i+1] = arr[j];

        i++;
    }

    return i;
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
   
    int k = fun(arr,n);

    printf("The output array is: ");
    for(int i=0;i<k;i++)
    {
        printf("%d ",arr[i]);

    }
    
  
    return 0;
}