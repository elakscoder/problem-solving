#include <stdio.h>
#define len 1000

int compareStr(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }

    return !(*s1 - *s2);
}

int check(int i, int c_len, int count[][2], char str[][len])
{
    for (int j = 0; j < c_len; j++)
    {
        if (compareStr(str[count[j][0]], str[i]))
        {
            count[j][1]++;
            return 0;
        }
    }

    return 1;
}

void swaprow(int r1, int r2, int count[][2], int n)
{
    int temp0 = 0;
    temp0 = count[r1][0];
    count[r1][0] = count[r2][0];
    count[r2][0] = temp0;

    int temp1 = 0;
    temp1 = count[r1][1];
    count[r1][1] = count[r2][1];
    count[r2][1] = temp1;
}

void sort(int n, int count[][2])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (count[j][1] > count[j + 1][1])
            {
                swaprow(j, j + 1, count, n);
            }
        }
    }
}

void countFreq(int n, char str[][len], int count[][2])
{
    int c_len = 1;
    count[0][0] = 0;
    count[0][1] = 1;

    for (int i = 1; i <= n; i++)
    {
        if (check(i, c_len, count, str))
        {
            count[c_len][0] = i;
            count[c_len][1] = 1;
            c_len++;
        }
    }

    sort(c_len, count);

    for (int i = 0; i < c_len; i++)
    {
        printf("%s - %d\n", str[count[i][0]], count[i][1]);
    }
}

int main()
{
    char str[len][len];
    int count[len][2];

    printf("Enter the string: ");

    int i = 0;

    while (1)
    {
        scanf("%s", str[i]);
        if (getchar() == '\n')
        {
            break;
        }

        i++;
    }

    countFreq(i, str, count);

    return 0;
}