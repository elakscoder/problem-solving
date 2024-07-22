#include<stdio.h>

int gcd(int a,int b)
{
    if(b==0)
    return a;
    return (b,a%b);
}

int main()
{
    int a,b;

    printf("Enter the a: ");
    scanf("%d",&a);

    printf("Enter the b: ");
    scanf("%d",&b);

    printf("GCD of two numbers %d and %d is %d",a,b,gcd(a,b));

    return 0;

    
}