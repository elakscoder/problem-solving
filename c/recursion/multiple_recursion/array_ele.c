#include <stdio.h>

int count(int start, int end, int arr[], int k, int cnt)
{
    if (start == end)
    {
        return cnt;
    }
    cnt = count(start + 1, end, arr, k, cnt);
    if (arr[start] == k)
    {
        return cnt + 1;
    }
    else
    {
        return cnt;
    }
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

    int val = count(0, n, arr, k, 0);

    printf("%d ", val);

    return 0;
}