#include <stdio.h>

void sub(int arr[], int start, int end, int subseq[], int size)
{
    if (size >= 0)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d", subseq[i]);
        }
        printf("\n");
    }

    for (int i = start; i < end; i++)
    {
        subseq[size] = arr[i];
        sub(arr, i + 1, end, subseq, size + 1);
        while (arr[i] == arr[i + 1])
        {
            i++;
        }
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

    sub(arr, 0, n, subseq, 0);
    return 0;
}