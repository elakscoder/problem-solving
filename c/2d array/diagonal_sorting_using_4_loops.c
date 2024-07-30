#include <stdio.h>
// descending order

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
        for (int i = 0; i < n * 2 - 1; i++)
        {
            if (i < n)
            {
                for (int j = 0; j <= i; j++)
                {
                    /* printf("%d ", arr[i - j][j]); */
                    if (arr[i - j][j] > arr[r][c])
                    {
                        swap(&arr[i - j][j], &arr[r][c]);
                    }

                    r = i - j;
                    c = j;
                }
            }
            else
            {
                for (int j = n - 1; j > i - n; j--)
                {
                    /* printf("%d ", arr[j][i - j]); */
                    if (arr[j][i - j] > arr[r][c])
                    {
                        swap(&arr[j][i - j], &arr[r][c]);
                    }
                    r = j;
                    c = i - j;
                }
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