#include <stdio.h>

int print(int start, int end, int arr[], int ans[], int depth, int sum, int k)
{
    if (start == end)
    {
        if (sum == k)
        {
            for (int i = 0; i < depth; i++)
            {
                printf("%d ", ans[i]);
            }
            printf("\n");
            return 1;
        }

        return 0;
    }

    ans[depth] = arr[start];

    if (print(start + 1, end, arr, ans, depth + 1, sum + ans[depth], k))
    {
        return 1;
    }
    else if (print(start + 1, end, arr, ans, depth, sum, k))
    {
        return 1;
    }

    return 0;
}

int main()
{
    int n;
    int k;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    int ans[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    int val = print(0, n, arr, ans, 0, 0, k);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    return 0;
}