#include <stdio.h>

void printSubseq(int subseq[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", subseq[i]);
    }

    printf("\n");
}

void genSubseq(int arr[], int start, int end, int subseq[], int size)
{
    if (size >= 0)
    {
        printSubseq(subseq, size);
    }

    for (int i = start; i < end; i++)
    {
        subseq[size] = arr[i];
        genSubseq(arr, i + 1, end, subseq, size + 1);
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    int subseq[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    genSubseq(arr, 0, n, subseq, 0);

    /* for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    } */

    return 0;
}