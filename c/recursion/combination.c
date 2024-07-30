#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void comb(int arr[], int start, int end, int subseq[], int size, int target, int sum)
{

    if (sum == target)
    {
        printf("Found valid subsequence: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", subseq[i]);
        }
        printf("\n");
    }

    if (sum > target)
    {
        return;
    }

    for (int i = start; i < end; i++)
    {
        if (sum < target)
        {
            subseq[size] = arr[i];
            comb(arr, i + 1, end, subseq, size + 1, target, sum + arr[i]);
            while (arr[i] == arr[i + 1])
            {
                i++;
            }
        }
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

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    sort(n, arr);

    printf("Starting combination search...\n");
    comb(arr, 0, n, subseq, 0, target, 0);

    return 0;
}
