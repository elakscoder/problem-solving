#include<stdio.h>
#define s 10

int count(int n)
{
    int cnt = 0;

    while(n)
    {
        n/=10;
        cnt++;
    }
    
    return cnt;
}

char* itos(int n,char *str)
{
    int len = count(n);

    for(int i=len-1;i>=0;i--)
    {
        str[i] = (n%10)+'0';
        n /= 10;
    }

    str[len] = '\0';
}

int main()
{
    int n;

    printf("Enter the integer to convert to string: ");
    scanf("%d",&n);

    int len = count(n);
    char str[len];

    itos(n,str);

    printf("%s",str);

    return 0;
}
