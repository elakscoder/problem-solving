/*  3. Save the string “WELCOMETOZOHOCORPORATION” in a two dimensional array and search for substring like “too” in the two dimensional string both from left to right and from top to bottom.

W    E    L    C    O
M    E    T    O    Z
O    H    O    C    O
R    P    O    R    A
T    I    O    N

And print the start and ending index as Start index : <1,2> End index: <3, 2>
 */
#include <stdio.h>

#define rows 100
#define cols 5

int range(int row, int col, int n)
{
    if (row >= 0 && row < n && col >= 0 && col < n)
    {
        return 1;
    }

    return 0;
}

int search(int row, int col, int i, int j, char mat[][cols], char *str, int *start, int *end)
{
    int index = 0;
    int s = row;
    int e = col;

    while (range(row, col, cols) && str[index] != '\0')
    {
        if (mat[row][col] == str[index])
        {

            index++;
            if (str[index] != '\0')
            {
                row = row + i;
                col = col + j;
            }
        }
        else
        {
            return 0;
        }
    }

    if (str[index] == '\0')
    {
        printf("start: [%d , %d]\n end: [%d , %d]", s, e, row, col);
        *start = row;
        *end = col;
        return 1;
    }
}

void find(int *startrow, int *startcol, int *endrow, int *endcol, int n, char mat[][cols], char *str)
{
    int index = 0;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            if (mat[row][col] == str[index])
            {
                search(row, col, 0, -1, mat, str, endrow, endcol);
                search(row, col, -1, -1, mat, str, endrow, endcol);
                search(row, col, -1, 0, mat, str, endrow, endcol);
                search(row, col, -1, 1, mat, str, endrow, endcol);
                search(row, col, 0, 1, mat, str, endrow, endcol);
                search(row, col, 1, 1, mat, str, endrow, endcol);
                search(row, col, 1, 0, mat, str, endrow, endcol);
                search(row, col, 1, -1, mat, str, endrow, endcol);
            }
        }
    }
}

int main()
{
    int row = 0;
    int col = 0;

    int startrow = 0;
    int startcol = 0;

    int endrow = 0;
    int endcol = 0;

    char ch;
    char str[cols];

    char mat[rows][cols];

    printf("Enter the string: ");

    while (1)
    {
        ch = getchar();

        mat[row][col++] = ch;

        if (col == cols)
        {
            col = 0;
            row++;
        }

        if (ch == '\n')
        {
            break;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Enter the string to search: ");
    scanf("%s", str);

    find(&startrow, &startcol, &endrow, &endcol, row, mat, str);

    /*     printf("start: [%d , %d]\n end: [%d , %d]", startrow, startcol, endrow, endcol);
     */
    return 0;
}
