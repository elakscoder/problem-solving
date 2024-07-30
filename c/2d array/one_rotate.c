#include <stdio.h>

void one(int row, int col, int mat[][col])
{
    int top = 0;
    int left = 0;
    int bottom = row - 1;
    int right = col - 1;
    int prev = 0;
    int curr = 0;

    while (top <= bottom && left <= right)
    {
        prev = mat[top + 1][left];

        for (int i = left; i <= right; i++)
        {
            curr = mat[top][i];
            mat[top][i] = prev;
            prev = curr;
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            curr = mat[i][right];
            mat[i][right] = prev;
            prev = curr;
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            curr = mat[bottom][i];
            mat[bottom][i] = prev;
            prev = curr;
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            curr = mat[i][left];
            mat[i][left] = prev;
            prev = curr;
        }
        left++;
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
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    one(row, col, mat);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}