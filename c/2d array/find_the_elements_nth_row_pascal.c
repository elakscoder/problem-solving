#include<stdio.h>

void pas(int n)
{
    int val = 1;
    int ans = 1;

    printf("1 ");

    for(int i=1;i<n;i++)
    {
        ans *= n - i ;
        ans /= i ;
        printf("%d ",ans);
    }
}

int main()
{
    int row;
    
    printf("Enter the row: ");
    scanf("%d",&row);

    pas(row);
    
    return 0;
}