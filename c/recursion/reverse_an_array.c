#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rev(int n, int arr[], int i)
{
    if (i > n / 2)
    {
        return;
    }

    swap(&arr[i], &arr[n - 1 - i]);
    rev(n, arr, i + 1);
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

    rev(n, arr, 0);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}