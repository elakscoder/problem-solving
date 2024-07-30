#include <stdio.h>

void print(int n, int arr[][n])
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int start = (i < n) ? i : n - 1;
        int end = (i < n) ? 0 : i - (n - 1);

        while (start >= 0 && end < n)
        {
            printf("%d ", arr[start][end]);
            start--;
            end++;
        }
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The input array is: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal traversing: \n");

    print(n, arr);

    return 0;
}