#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int val=n;
    int rem,sum=0;
    while(n)
    {
        rem=n%10;
        sum=sum*10;
        sum+=rem;
        n=n/10;
    }
    if(sum==val)printf("True");
    else printf("False");
    return 0;
}