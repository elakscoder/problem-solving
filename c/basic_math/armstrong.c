#include<stdio.h>

int noOfDigits(int a)
{ 
    int cnt = 0;

    while(a)
    {
        a/=10;
        cnt++;
    }

    return cnt;
}

int armstrong(int a,int n)
{
    
    int b = a;
    int sum = 0;
    int val = 1;
    
    while(b)
    {
        int rem = b%10;
        for(int i=0;i<n;i++)
        {
            
            val = val * rem;
        }
        sum += val;
        b = b/10;
        val = 1;
    }

    if(a==sum)
    return 1;
    else 
    return 0;

}

int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d",&a);

    int n = noOfDigits(a);

    printf("No of digits: %d\n",n);

    if(armstrong(a,n))
    printf("It is a Armstrong number");
    else
    printf("It is not a Armstrong number");

    return 0;
}