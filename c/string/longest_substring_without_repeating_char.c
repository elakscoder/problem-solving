#include<stdio.h>
#define n 100
#define ascii 128

/*  
int length(char *str)
{
    int cnt = 0;
    while(*str != '\0')
    {
        cnt++;
        str++;
    }

    return cnt;
}  */

int substring(char *str)
{
    int l = 0;int i = 0;
    int r = 0;int j = 0;
    int len = 0;
    int maxLen = 0;
    int hash[ascii] = {-1};

    for(int k=0;k<ascii;k++)
    {
        hash[k] = -1;
    }

    while(str[r] != '\0')
    {
        if( hash[str[r]] >= l)
        {
            l = hash[str[r]] + 1;
        }

        hash[str[r]] = r;

        len = r - l + 1;

        if(len >= maxLen)
        {
            maxLen = len;
            i = l;
            j = r;
        }

        r++;
    }

    for(int k = i;k<j+1;k++)
    {
        printf("%c",str[k]);
    }

    return maxLen;
}

int main()
{
    char str[n];

    printf("Enter the string: ");
    scanf("%s",str);

    printf("\nlength of longest substring without repeating characters is: %d",substring(str));

    return 0;
}