#include <stdio.h>

void print(int start, int end, int depth, int arr[], int ans[])
{
    if (start == end)
    {
        for (int i = 0; i < depth; i++)
        {
            printf("%d ", ans[i]);
        }
        printf("\n");
        return;
    }

    ans[depth] = arr[start];

    print(start + 1, end, depth + 1, arr, ans);

    print(start + 1, end, depth, arr, ans);
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

    print(0, n, 0, arr, ans);

    return 0;
}