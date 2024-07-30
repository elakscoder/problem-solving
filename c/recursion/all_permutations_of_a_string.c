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

void permute(char *arr, int start, int end)
{
    if (start == end)
    {
        printf("%s\n", arr);
        return;
    }
    for (int i = start; i <= end; i++)
    {
        swap(&arr[start], &arr[i]);
        permute(arr, start + 1, end);
        swap(&arr[start], &arr[i]);
    }
}

void genall(char *str, int start, int end, char *arr, int index)
{
    for (int i = start; i < end; i++)
    {
        arr[index] = str[i];
        permute(arr, 0, index - 1);
        genall(str, start + 1, end, arr, index + 1);
    }
}

int main()
{
    char str[len];
    char arr[len] = {0};

    printf("Enter string: ");
    scanf("%s", str);

    int n = length(str);

    genall(str, 0, n, arr, 0);

    return 0;
}