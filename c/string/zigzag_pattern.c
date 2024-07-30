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

void print(char *str, int n, int rows)
{
    int cnt = 0;
    for (int i = 0; i < rows; i++)
    {
        int j = i;
        cnt = 0;
        while (j < n)
        {
            if (i == 0 || i == rows - 1)
            {
                printf("%c", str[j]);
                j += (rows * 2) - 2;
            }
            else
            {
                if (cnt == 0)
                {
                    printf("%c", str[j]);
                    j += ((2 * (rows - 1)) - (2 * i));
                    cnt = 1;
                }
                else
                {
                    printf("%c", str[j]);
                    j += 2 * i;
                    cnt = 0;
                }
            }
        }
    }
}

int main()
{
    char str[len];
    int rows = 0;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter number: ");
    scanf("%d", &rows);

    int n = length(str);

    print(str, n, rows);

    return 0;
}
