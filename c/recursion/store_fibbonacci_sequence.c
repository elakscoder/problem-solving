#include <stdio.h>

void store(int n, int arr[], int start)
{
    if (start > n)
    {
        return;
    }
    arr[start] = arr[start - 1] + arr[start - 2];
    store(n, arr, start + 1);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n + 1];
    arr[0] = 0;
    arr[1] = 1;

    store(n, arr, 2);

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}