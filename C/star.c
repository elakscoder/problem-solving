#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=n-1-i;j>0;j--)
        {
            printf("%s"," ");
        }
        for(int j=0;j<2*i+1;j++)
        {
            printf("%s","*");
        }
        printf("\n");
    }
    return 0;
}