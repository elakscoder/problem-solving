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

int check(int start, int end, char *str)
{
    if (start + 1 == end)
    {
        return 1;
    }

    if (str[start] == 'a' && str[start + 1] == 'b' && str[start + 2] == 'b')
    {
        return check(start + 2, end, str);
    }
    else if (str[start] == 'b' && str[start + 1] == 'a')
    {
        return check(start + 1, end, str);
    }
    else
    {
        return 0;
    }
}
int main()
{
    char str[len];
    int index = 0;
    printf("Enter a string: ");
    scanf("%s", str);

    int n = length(str);

    if (str[0] == 'a')
    {
        index = 0;
    }
    else
    {
        index = 1;
    }

    if (check(index, n, str))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}