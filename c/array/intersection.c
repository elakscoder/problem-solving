#include<stdio.h>

int min(int a,int b)
{
    if(a < b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}

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

int is(int arr1[],int arr2[],int n1,int n2,int res[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    
    while(i < n1 && j < n2)
    {
        if(arr1[i] == arr2[j])
        {
            if(k == 0 ||res[k-1] != arr1[i])
            {
                res[k++] = arr1[i];
            }
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return k;
}

int main()
{
    int n1;
    int n2;
    int m;


    printf("Enter number of elements: ");
    scanf("%d",&n1);

    int arr1[n1];

    scan(arr1,n1);

    printf("\nThe input array1 is: ");
    print(arr1,n1);

    printf("\nEnter number of elements: ");
    scanf("%d",&n2);

    int arr2[n2];

    scan(arr2,n2);

    printf("\nThe input array2 is: ");
    print(arr2,n2);

    int res[min(n1,n2)];
   
    int k = is(arr1,arr2,n1,n2,res);

    if(k == 0)
    {
        printf("\nNo intersection elements found");
    }
    else
    {
        printf("\nThe output array is: ");
        print(res,k);
    }

    return 0;

}