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

void print(char subseq[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c", subseq[i]);
    }
    printf("\n");
}

void sub(char *str, int start, int end, char *subseq, int size)
{
    if (size >= 0)
    {
        print(subseq, size);
    }

    for (int i = start; i < end; i++)
    {
        subseq[size] = str[i];
        sub(str, i + 1, end, subseq, size + 1);
    }
}

int main()
{
    char str[len];
    char subseq[len];

    printf("Enter string: ");
    scanf("%s", str);
    int n = length(str);
    sub(str, 0, n, subseq, 0);

    return 0;
}