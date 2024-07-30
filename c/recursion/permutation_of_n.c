#include <stdio.h>
#define len 1000

int length(char *str)
{
    int cnt = 0;

    while (*str)
    {
        cnt++;
        str++;
    }

    return cnt;
}

void swap(char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b = c;
}

void permute(char *str, int start, int end)
{
    if (start == end)
    {
        printf("%s\n", str);
        return;
    }

    for (int i = start; i <= end; i++)
    {
        swap(&str[start], &str[i]);
        permute(str, start + 1, end);
        swap(&str[start], &str[i]);
    }
}

int main()
{
    char str[len];

    printf("Enter string: ");
    scanf("%s", str);

    int n = length(str);

    permute(str, 0, n - 1);

    return 0;
}