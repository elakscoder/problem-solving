#include<stdio.h>
#define n 10

int length(char *str1)
{
    int cnt = 0;

    while(*str1 != '\0')
    {
        cnt++;
        str1++;
    }

    return cnt;
}

void concat(char *str1,char *str2,char *ans)
{
    while(*str1 != '\0')
    {
        *ans++ = *str1++; 
    }

    while(*str2 != '\0')
    {
        *ans++ = *str2++;
    }

    *ans = '\0';
}

void concati(char *str1,char *str2)
{
    int l1 = length(str1);
    int l2 = length(str2);

    int index = 0;
    int i = 0;

    for(i=l1;i<l1+l2;i++)
    {
        str1[i] = str2[index++];
    }

    str1[i] = '\0';
}

int main()
{
    char str1[n];
    char str2[n];
    char ans[n];

    printf("Enter string 1: ");
    scanf("%s",str1);

    printf("Enter string 2: ");
    scanf("%s",str2);

    printf("Before concatenation: str1 = %s , str2 = %s\n",str1,str2);

    concat(str1,str2,ans);

    printf("After concatenation: ans = %s",ans);

    return 0;

}