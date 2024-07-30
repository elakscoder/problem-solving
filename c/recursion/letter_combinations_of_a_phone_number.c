#include <stdio.h>
#define len 1000

int convertstoi(char *num, int arr[])
{
    int i;
    for (i = 0; num[i] != '\0'; i++)
    {
        arr[i] = num[i] - '0';
    }
    return i;
}

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

void phone(char str[][10], int arr[], int start, int end, int cnt, char *subseq, int size)
{
    if (cnt == end)
    {
        printf("%s\n", subseq);
        return;
    }

    for (int i = start; i < length(str[arr[cnt]]); i++)
    {
        subseq[size] = str[arr[cnt]][i];
        subseq[size + 1] = '\0';
        phone(str, arr, start, end, cnt + 1, subseq, size + 1);
    }
}

int main()
{
    char num[len];
    int arr[len];

    char str[20][10] = {"0", "0", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    printf("Enter number: ");
    scanf("%s", num);

    int n = convertstoi(num, arr);
    char subseq[n];
    phone(str, arr, 0, n, 0, subseq, 0);

    /* for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    } */

    return 0;
}