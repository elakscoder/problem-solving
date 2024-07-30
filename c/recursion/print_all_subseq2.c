#include <stdio.h>
#define len 1000

int length(char *str)
{
    int cnt = 0;
    while (*str)
    {
        str++;
        cnt++;
    }
    return cnt;
}

void print(char *subseq, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c", subseq[i]);
    }
    printf("\n");
}

void swap(char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b = c;
}

void permute(char *subseq, int start, int end)
{
    if (start == end - 1)
    {
        print(subseq, end);
        return;
    }

    for (int i = start; i < end; i++)
    {
        swap(&subseq[start], &subseq[i]);
        permute(subseq, start + 1, end);
        swap(&subseq[start], &subseq[i]);
    }
}

void genall(char *str, int start, int end, char *subseq, int size)
{
    if (size > 0)
    {
        /*  print(subseq, size); */
        permute(subseq, 0, size);
    }

    for (int i = start; i < end; i++)
    {
        subseq[size] = str[i];
        genall(str, i + 1, end, subseq, size + 1);
    }
}

int main()
{
    char str[len];
    char subseq[len] = {0};

    printf("Enter string: ");
    scanf("%s", str);

    int n = length(str);

    genall(str, 0, n, subseq, 0);

    return 0;
}