#include<stdio.h>


int power(int num,int m)
{
    int sum = 1;

    for(int i=0;i<m;i++)
    {
        sum *= num;
    }

    return sum;
}

void check(int size,int k,int arr[])
{
    
    int sum = 0;

    for(int i=0;i<size;i++)
    {
        sum+= arr[i];
    }

    if(sum % k ==0)
    {
        for(int i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
        
        printf("\n");
    }
}

void Subsequence(int n,int k,int arr[])
{

    int s[n];
    int index = 0;
    int size = 0;

    for(int i=0;i<power(2,n);i++)
    {
        index = 0;
        size = 0;

        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                s[index++] = arr[j];
                size++;
            }
        }
 
    /*printf("\nsize %d: %d\n",i,size);
    
    for(int k=0;k<size;k++)
    {
        printf("index %d: %d ",k,s[k]);
    } */
        if(size>1 && size<=k)
        {
            check(size,k,s);
        }   
        
        
    }

   
}

int main()
{
    int n;
    int k;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter k: ");
    scanf("%d",&k);


    int arr[n];
    int ans[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n");

    Subsequence(n,k,arr);

    return 0;
}