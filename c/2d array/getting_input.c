#include <stdio.h>

void pass(int row, int col, int mat[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
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

    pass(row, col, mat);

    return 0;
}