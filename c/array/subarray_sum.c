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

void subarray_sum(int arr[],int n,int target,int *i,int *j)
{
    *i = 0;
    *j = 0;
    int flag = 0;
    int sum = 0;

    while(*j < n)
    {
        if(*j<n)
        {
            sum += arr[*j];
        }

        while(sum > target && *i <= *j)
        {
            sum -= arr[*i];
            (*i)++;
        }

        if(sum == target)
        {
            break;
            flag = 1;
        }

        (*j)++;
    }
    if(flag == 0)
    {
        *j = -1;
        *i = -1;
    }
}

int main()
{
    int n;
    int target;
    int i;
    int j;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter target: ");
    scanf("%d",&target);

    int arr[n];

    scan(arr,n);

    printf("\nThe input array is: ");
    print(arr,n);
   
    subarray_sum(arr,n,target,&i,&j);

    printf("\nThe stsrt index is: ");
    printf("%d",i);

    printf("\nThe end index is: ");
    printf("%d",j);

  
    return 0;
}