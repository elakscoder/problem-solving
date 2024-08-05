#include <stdio.h>

void com(int n, int depth, int start, int arr[], int ans[])
{
    if (depth == n)
    {
        for (int i = 0; i < start; i++)
        {
            printf("%d ", ans[i]);
        }
        printf("\n");
    }

    if (depth < n)
    {
        ans[start] = arr[depth];
        com(n, depth + 1, start + 1, arr, ans);
    }

    if (depth + 1 < n)
    {
        ans[start] = (arr[depth] * 10) + arr[depth + 1];
        com(n, depth + 2, start + 1, arr, ans);
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    int ans[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    com(n, 0, 0, arr, ans);

    return 0;
}