#include <stdio.h>

void print(int n, char *ans, int cnt0, int cnt1, int depth)
{
    if (depth == 2 * n)
    {
        for (int i = 0; i < depth; i++)
        {
            printf("%c", ans[i]);
        }
        printf("\n");
        return;
    }

    if (cnt0 < n)
    {
        ans[depth] = '(';
        print(n, ans, cnt0 + 1, cnt1, depth + 1);
    }
    if (cnt1 < cnt0)
    {
        ans[depth] = ')';
        print(n, ans, cnt0, cnt1 + 1, depth + 1);
    }
}

int main()
{
    int n;
    char s[2];
    s[0] = '(';
    s[1] = ')';
    int cnt0 = 0;
    int cnt1 = 0;

    int index = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    char ans[n * 2];

    print(n, ans, cnt0, cnt1, 0);

    return 0;
}