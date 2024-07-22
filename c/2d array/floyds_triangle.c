#include<stdio.h>

void floyds(int n)
{
    int k=1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",k++);
            
        }
        printf("\n");
    }
}

int main()
{
    int n;
    
    printf("Enter the n: ");
    scanf("%d",&n);

    floyds(n);


    
    return 0;
}