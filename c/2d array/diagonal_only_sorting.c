#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
void print(int n, int arr[][n])
{
    for (int k = 0; k < n * n; k++)
    {
        int r = 0;
        int c = 0;
        for (int i = 0; i < 2 * n - 1; i++)
        {
            int start = (i < n) ? i : n - 1;
            int end = (i < n) ? 0 : i - (n - 1);

            while (start >= 0 && end < n)
            {
                if (arr[start][end] < arr[r][c])
                {
                    swap(&arr[start][end], &arr[r][c]);
                }
                r = start;
                c = end;
                start--;
                end++;
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}