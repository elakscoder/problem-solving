#include <stdio.h>
#define n 100
#define ascii 26

void fill(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        
    }
}

void sbstr(char *str1, char *str2, char *ans)
{
    fill(str2);
}

int main()
{
    char str1[n];
    char str2[n];
    char ans[n];

    printf("Enter the string1: ");
    scanf("%s", str1);

    printf("Enter the string2: ");
    scanf("%s", str2);
    sbstr(str1, str2, ans);

    return 0;
}