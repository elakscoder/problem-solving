#include<stdio.h>

int Perfect(int a)
{
    int sum=0;

    for(int i=1;i<=a/2;i++)
    {
        if((a%i)==0)
        {
            sum+=i;
        }
    }
    
    return sum == a;

}

int main()
{
    int num;

    printf("Enter the num: ");
    scanf("%d",&num);

    if(Perfect(num))
    {
        printf("It is a Perfect number");
    }else{
        printf("It is not a perfect number");
    }

    return 0;
}