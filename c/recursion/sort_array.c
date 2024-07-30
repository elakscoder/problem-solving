#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n, int arr[])
{
    if (n == 1)
    {
        return;
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(&arr[j], &arr[j + 1]);
        }
    }

    sort(n - 1, arr);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(n, arr);

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}