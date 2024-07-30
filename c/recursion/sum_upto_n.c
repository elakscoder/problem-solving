#include <stdio.h>
#define len 1000

void print(int n, int start, int sum, int arr[], int index)
{
    if (sum == n)
    {
        for (int i = 0; i < index; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    for (int i = start; i > 0; i--)
    {
        if ((sum + i) <= n)
        {
            arr[index] = i;
            int startind = i > n - i ? n - i : i;
            print(n, startind, sum + i, arr, index + 1);
        }
    }
}

int main()
{
    int n;
    int sum = 0;
    int arr[len];

    printf("Enter n: ");
    scanf("%d", &n);

    print(n, n, sum, arr, 0);

    return 0;
}