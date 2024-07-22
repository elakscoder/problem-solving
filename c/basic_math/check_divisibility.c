#include<stdio.h>

int main()
{
    int n;
    int d;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter number to check: ");
    scanf("%d",&d);

    while(n>=d)
    {
        n = n-d;
    }

    if(!n)
    {
        printf("Divisible");
    }
    else
    {
        printf("Not divisible");
    }

    

    return 0;
}