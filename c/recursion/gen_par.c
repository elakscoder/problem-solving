#include <stdio.h>

void genpar(int n, int depth, char *str, int cnt0, int cnt1)
{
    if (depth == n * 2)
    {
        for (int i = 0; i < depth; i++)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }

    if (cnt0 < n)
    {
        str[depth] = '(';
        genpar(n, depth + 1, str, cnt0 + 1, cnt1);
    }

    if (cnt1 < cnt0)
    {
        str[depth] = ')';
        genpar(n, depth + 1, str, cnt0, cnt1 + 1);
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    char str[n];

    genpar(n, 0, str, 0, 0);

    return 0;
}