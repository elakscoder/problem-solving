#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void odiag(int row, int col, int mat[][col])
{
    int count = 0;
    for (int i = 0; i < col + (row - 1); i++)
    {
        count = i < row ? i + 1 : count--;
        for (int j = 0; j < count - 1; j++)
        {
            int start = i < row ? i : row - 1;
            int end = i < row ? 0 : i - (row - 1);
            while (start > 0 && end < col - 1)
            {
                if (mat[start][end] > mat[start - 1][end + 1])
                {
                    swap(&mat[start][end], &mat[start - 1][end + 1]);
                }
                start--;
                end++;
            }
        }
    }
}

int main()
{
    int row;
    int col;
    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter col: ");
    scanf("%d", &col);
    int mat[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }

    odiag(row, col, mat);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}