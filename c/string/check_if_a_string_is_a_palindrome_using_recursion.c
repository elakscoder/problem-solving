#include <stdio.h>
#define n 1000

int length(char *str)
{
    int cnt = 0;

    while (*str != '\0')
    {
        cnt++;
        str++;
    }

    return cnt;
}

int check(char *str, int start, int end)
{
    if (start > end)
    {
        return 1;
    }
    if (str[start] != str[end])
    {
        return 0;
    }
    return check(str, start + 1, end - 1);
}

int main()
{
    char str[n];

    printf("Enter string: ");
    scanf("%[^\n]", str);

    int len = length(str);

    if (check(str, 0, len - 1))
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }

    return 0;
}