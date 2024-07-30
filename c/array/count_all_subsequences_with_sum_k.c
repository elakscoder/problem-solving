#include <stdio.h>

void print(int subseq[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", subseq[i]);
    }
    printf("\n");
}

void sub(int arr[], int start, int end, int subseq[], int size, int target, int sum)
{

    if (sum == target)
    {
        print(subseq, size);
    }

    for (int i = start; i < end; i++)
    {
        subseq[size] = arr[i];
        sub(arr, i + 1, end, subseq, size + 1, target, sum + arr[i]);
    }
}

int main()
{
    int n;
    int target;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    int subseq[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &target);

    sub(arr, 0, n, subseq, 0, target, 0);

    return 0;
}