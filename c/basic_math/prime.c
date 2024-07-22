#include<stdio.h>

int Prime(int a)
{
    int cnt=0;

    for(int i=1;i*i<=a;i++)
    {
        if(a%i==0)
        cnt++;
      
    }
    if(cnt==2)
    return 1;
    else 
    return 0;

}

int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d",&a);

    if(Prime(a))
    printf("It is a prime number");
    else
    printf("It is not a prime number");

    return 0;
}