#include <stdio.h>

void print(int n, int arr[][n])
{
    for (int i = 0; i < n * 2 - 1; i++)
    {
        if (i < n)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%d ", arr[i - j][j]);
            }
        }
        else
        {
            for (int j = n - 1; j > i - n; j--)
            {
                printf("%d ", arr[j][i - j]);
            }
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