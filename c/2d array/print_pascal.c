#include<stdio.h>

void pascal(int n)
{
    int ans = 1;

    for(int i=1;i<=n;i++)
    {
        ans = 1;

        for(int j=0;j<i;j++)
        {
            if(j == 0)
            {
                ans = 1;

            }else
            {
                ans *= i - j;
                ans /= j;

            }
            
            printf("%d ",ans);
        }
        
        printf("\n");
        
    }
}

int main()
{
    int n;
    
    printf("Enter the n: ");
    scanf("%d",&n);

    pascal(n);
    
    return 0;
}