#include <stdio.h>

void diagonal(int n, int mat[][n])
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int start = i < n ? i : n - 1;
        int end = i < n ? 0 : i - (n - 1);

        while (start >= 0 && end < n)
        {
            printf("%d", mat[start][end]);
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

    int mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The input natrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", mat[i][j]);
        }

        printf("\n");
    }

    diagonal(n, mat);

    return 0;
}