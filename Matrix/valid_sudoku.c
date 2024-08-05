#include <stdio.h>

int isvalid(int board[][9])
{
    int box[9][10] = {0};
    for (int i = 0; i < 9; i++)
    {
        int row[9] = {0};
        int col[9] = {0};
        for (int j = 0; j < 9; j++)
        {
            if (row[board[i][j]] || col[board[j][i]] || box[(i / 3) * 3 + (j / 3)][board[i][j]])
            {
                return 0;
            }
            row[board[i][j]] = 1;
            col[board[j][i]] = 1;
            box[(i / 3) * 3 + (j / 3)][board[i][j]] = 1;
        }
    }

    return 1;
}

int main()
{
    int board[9][9] = {{7, 9, 2, 1, 5, 4, 3, 8, 6},
                       {6, 4, 3, 8, 2, 7, 1, 5, 9},
                       {8, 5, 1, 3, 9, 6, 7, 2, 4},
                       {2, 6, 5, 9, 7, 3, 8, 4, 1},
                       {4, 8, 9, 5, 6, 1, 2, 7, 3},
                       {3, 1, 7, 4, 8, 2, 9, 6, 5},
                       {1, 3, 6, 7, 4, 8, 5, 9, 2},
                       {9, 7, 4, 2, 1, 5, 6, 3, 8},
                       {5, 2, 8, 6, 3, 9, 4, 1, 7}};

    printf("ans: %d", isvalid(board));

    return 0;
}