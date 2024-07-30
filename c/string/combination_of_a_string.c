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

void print(char *comb, int size, int *cnt)
{
    printf("%d: ", (*cnt)++);
    for (int i = 0; i < size; i++)
    {
        printf("%c", comb[i]);
    }
    printf("\n");
}

void combi(char *str, int start, int end, char *comb, int size, int *cnt, int req)
{
    /* if (size > 0)
    {
        print(comb, size, cnt);
        printf("\n");
    } */
    if (size == req)
    {
        print(comb, size, cnt);
    }
    if (size < req)
    {
        for (int i = start; i < end; i++)
        {
            comb[size] = str[i];
            combi(str, i + 1, end, comb, size + 1, cnt, req);
        }
    }
}
int main()
{
    char str[len];
    char comb[len];
    int cnt = 1;

    printf("Enter string: ");
    scanf("%s", str);

    int n = length(str);
    int i = 1;
    while (i <= n)
    {
        combi(str, 0, n, comb, 0, &cnt, i++);
    }

    return 0;
}