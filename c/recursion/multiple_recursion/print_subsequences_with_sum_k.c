#include <stdio.h>

void print(int start, int end, int arr[], int ans[], int depth, int sum, int k)
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
        }

        return;
    }

    ans[depth] = arr[start];

    print(start + 1, end, arr, ans, depth + 1, sum + ans[depth], k);

    print(start + 1, end, arr, ans, depth, sum, k);
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

    print(0, n, arr, ans, 0, 0, k);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    return 0;
}