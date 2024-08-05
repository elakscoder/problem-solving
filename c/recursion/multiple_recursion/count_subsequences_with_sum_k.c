#include <stdio.h>

int count(int start, int end, int arr[], int k, int sum)
{
    if (start == end)
    {
        if (sum == k)
        {
            return 1;
        }
        return 0;
    }

    int cnt = count(start + 1, end, arr, k, sum + arr[start]);

    int cnt1 = count(start + 1, end, arr, k, sum);

    return cnt + cnt1;
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

    printf("%d", count(0, n, arr, k, 0));

    return 0;
}