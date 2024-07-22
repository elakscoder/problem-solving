#include<stdio.h>

void pattern(int n)
{
    int val = 1;

    for(int i=0;i<n;i++)
    {
        val=1;

        for(int j=0;j<n*2-1;j++)
        {
            if(j<n-1-i)
            {
                printf(" ");

            }
            
            else if(j>n-1+i)
            {
                break;
            }

            else
            {
                printf("%d",val++);
            }

        }
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("Invalid input");
    }
    
    else
    {
        pattern(n);
    }

    return 0;
}