#include<stdio.h>
#define n 50
#define ascii 128

int len(char *s)
{
    int cnt = 0;

    while(*s != '\0')
    {
        cnt++;
        s++;
    }

    return cnt;
}

int isomorphic(char *s1,char *s2)
{
    if(len(s1) != len(s2))
    {
        return 0;
    }

    char arr1[ascii] = {0};
    char arr2[ascii] = {0};

    for(int i=0;i<len(s1);i++)
    {
        if(arr1[s1[i]] == 0)
        {
            arr1[s1[i]] = s2[i];
        }
        else if(arr1[s1[i]] != s2[i])
        {
            return 0;
        }
        if(arr2[s2[i]] == 0)
        {
            arr2[s2[i]] = s1[i];
        }
        else if(arr2[s2[i]] != s1[i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str1[n];
    char str2[n];

    printf("Enter the string1: ");
    scanf("%s",str1);

    printf("Enter the string2: ");
    scanf("%s",str2);

    int ans = isomorphic(str1,str2);

    printf("%d",ans);

    return 0;
}