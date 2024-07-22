#include<stdio.h>

int fibbo(int a ,int b,int n)
{
    if(n<=2)
    return b;
    return (b,a+b,n-1);
}

int main()
{
    int n;
    
    printf("Enter the nth term: ");
    scanf("%d",&n);

    int a=0;
    int b=1;

    printf("The %d th term is: %d",n,fibbo(a,b,n));
    
    return 0;
}