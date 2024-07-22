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

void insert(int *k,int res[],int value,int *a)
{
    if( *k == 0 || res[(*k)-1] != value)
    {
        res[(*k)++] = value;
    }

    (*a)++;
}

int Union(int a[],int b[],int res[],int n,int m)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            insert(&k,res,a[i],&i);
        }
        else if(b[j] < a[i])
        {
            insert(&k,res,b[j],&j);
        }
        else
        {
            insert(&k,res,a[i],&i);
            j++;
        }
    }

    while(i < n)
    {
        insert(&k,res,a[i],&i);
    }

    while(j < m)
    {
        insert(&k,res,b[j],&j);
    }

    return k;
}

int main()
{
    int n;
    int m;
    int k;

    printf("Enter number of elements of array1: ");
    scanf("%d",&n);

    int arr1[n];

    scan(arr1,n);

    printf("Enter number of elements of array2: ");
    scanf("%d",&m);
    
    int arr2[m];
    
    scan(arr2,m);

    printf("The input array1 is: ");
    print(arr1,n);

    printf("The input array2 is: ");
    print(arr2,m);

    int res[n + m];

    int val = Union(arr1,arr2,res,n,m);

    printf("\nThe output array is: ");
    print(res,val);
  
    return 0;
}