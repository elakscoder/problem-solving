#include <stdio.h>

int index(int start, int end, int arr[], int k, int ind)
{

    if (arr[end] == k)
    {
        return end;
    }

    if (end == start)
    {
        return -1;
    }

    ind = index(start, end - 1, arr, k, ind);

    return ind;
}

int main()
{
    int n;
    int k;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    printf("index: %d", index(0, n, arr, k, -1));

    return 0;
}