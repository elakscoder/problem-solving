#include<stdio.h>
#define n 20

int len(char *str)
{
    int cnt = 0;

    while(*str != '\0')
    {
        cnt++;
        str++;
    }

    return cnt;
}
void binary(char *a,char *b,char *ans)
{
    int sum = 0;
    int i = len(a)-1;
    int j = len(b)-1;
    int carry = 0;
    int l = 0;
    l=i>j?i+2:j+2;

    ans[l--] = '\0';

    while(i>=0 || j>=0 ||carry > 0)
    {
        sum = carry;

        if(i>=0)
        {
            sum += a[i] - '0';
            i--;
        }

        if(j>=0)
        {
            sum += b[j] - '0';
            j--;
        }
        if(l>=0)
        {
            ans[l--] = (sum%2) + '0';

        }
       

        carry = sum /2;
    }
}

int main()
{
    char a[n];
    char b[n];
    char ans[n] = {0};

    printf("Enter the number1: ");
    scanf("%s",a);

    printf("Enter the number2: ");
    scanf("%s",b);

    binary(a,b,ans);

    printf("\n%s",ans);

    return 0;
}