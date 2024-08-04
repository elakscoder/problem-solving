#include <stdio.h>
#define len 1000

int length(char *str)
{
    int cnt = 0;
    while (*str)
    {
        cnt++;
        str++;
    }
    return cnt;
}

int range(int i, int j, int rows, int cols)
{
    if (i >= 0 && i < rows && j >= 0 && j < cols)
    {
        return 0;
    }
    return 1;
}

int src(char mat[][len], char *str, int index, int i, int j, int rows, int cols, int *flag)
{
    if ((*flag) == 1)
    {
        return 1;
    }
    if (range(i, j, rows, cols))
    {
        return 0;
    }
    if (mat[i][j] != str[index])
    {
        return 0;
    }
    if (index == length(str) - 1)
    {
        *flag = 1;
        return 1;
    }
    char temp = mat[i][j];
    mat[i][j] = '#';

    src(mat, str, index + 1, i, j - 1, rows, cols, flag);
    src(mat, str, index + 1, i - 1, j - 1, rows, cols, flag);
    src(mat, str, index + 1, i - 1, j, rows, cols, flag);
    src(mat, str, index + 1, i - 1, j + 1, rows, cols, flag);
    src(mat, str, index + 1, i, j + 1, rows, cols, flag);
    src(mat, str, index + 1, i + 1, j + 1, rows, cols, flag);
    src(mat, str, index + 1, i + 1, j, rows, cols, flag);
    src(mat, str, index + 1, i + 1, j - 1, rows, cols, flag);
    mat[i][j] = temp;
    return *flag;
}

int find(int rows, int cols, char mat[][len], char *str)
{
    int index = 0;
    int flag = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (str[index] == mat[i][j])
            {
                if (src(mat, str, index, i, j, rows, cols, &flag))
                {
                    return 1;
                }
            }
        }
    }

    return 0;
}

int main()
{
    int rows;
    int cols;

    printf("Enter rows: ");
    scanf("%d", &rows);

    printf("Enter cols: ");
    scanf("%d", &cols);

    char mat[rows][len];
    char str[len];

    printf("Enter the matrix: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %c", &mat[i][j]);
        }
    }

    printf("Enter the string: ");
    scanf("%s", str);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }

    printf("ans: %d", find(rows, cols, mat, str));

    return 0;
}