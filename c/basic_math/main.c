#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

float div(int a,int b)
{
    return a/b;
}

int main()
{
    int a,b;

    printf("Enter the first num: ");
    scanf("%d",&a);

    printf("Enter the second num: ");
    scanf("%d",&b);

    printf("ADDITION: %d\n",add(a,b));
    printf("SUBTRACTION: %d\n",sub(a,b));
    printf("MULTIPLICATION: %d\n",mul(a,b));
    printf("DIVISION: %f\n",div(a,b));

    return 0;
}