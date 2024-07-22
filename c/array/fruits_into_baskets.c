#include<stdio.h>

int count(int arr[],int n)
{
    int cnt = 1;
    int prev = 0 ;
    int curr = 0;
    int max = 0;
    int curr_ele = arr[0];
    int prev_ele = 0;

    for(int i=0;i<n;i++)
    {
        if(curr_ele == arr[i+1])
        {
            cnt++;
        }
        else
        {
            prev_ele = curr_ele;
            curr_ele = arr[i+1];
            prev = curr;
            curr = cnt;
            if((curr + prev) > max)
            {
                max = curr + prev;
            }
            cnt = 1;
        }
    }

    return max;
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("%d",count(arr,n));

    return 0;
}