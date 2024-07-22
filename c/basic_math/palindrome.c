#include<stdio.h>

int palin(int a)
{
    int sum = 0;
    int q = a;

    while(q)
    {
        int rem = q%10;
        sum*=10;
        sum+=rem;
        q=q/10;
    }

    if(sum==a)
    return 1;
    else
    return 0;

}

int main()
{
    int a;

    printf("Enter the number to check: ");
    scanf("%d",&a);

    if(palin(a))
    printf("It is a palindrome.");
    else
    printf("Not a palindrome");

    return 0;
}