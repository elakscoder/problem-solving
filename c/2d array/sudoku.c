/* 4. Given a 9×9 sudoku we have to evaluate it for its correctness. We have to check both the sub matrix correctness and the whole sudoku correctness. */
#include <stdio.h>
#include <stdbool.h> // for bool type

#define SIZE 9

bool isValidSudoku(int sudoku[SIZE][SIZE])
{
    bool checkRow[SIZE][SIZE + 1] = {false}; // To check each row
    bool checkCol[SIZE][SIZE + 1] = {false}; // To check each column
    bool checkBox[SIZE][SIZE + 1] = {false}; // To check each 3x3 sub-grid

    // Check each element in the sudoku grid
    for (int r = 0; r < SIZE; r++)
    {
        for (int c = 0; c < SIZE; c++)
        {
            int num = sudoku[r][c];
            int boxIndex = (r / 3) * 3 + (c / 3);

            // Check if the number is already present in current row, column, or sub-grid
            if (checkRow[r][num] || checkCol[c][num] || checkBox[boxIndex][num])
            {
                return false; // Invalid Sudoku
            }

            // Mark this number as seen in current row, column, and sub-grid
            checkRow[r][num] = true;
            checkCol[c][num] = true;
            checkBox[boxIndex][num] = true;
        }
    }

    return true; // Valid Sudoku
}

int main()
{
    int sudoku[SIZE][SIZE] = {
        {5, 3, 4, 6, 7, 8, 9, 1, 2},
        {6, 7, 2, 1, 9, 5, 3, 4, 8},
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3},
        {4, 2, 6, 8, 5, 3, 7, 9, 1},
        {7, 1, 3, 9, 2, 4, 8, 5, 6},
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {2, 8, 7, 4, 1, 9, 6, 3, 5},
        {3, 4, 5, 2, 8, 6, 1, 7, 9}};

    if (isValidSudoku(sudoku))
    {
        printf("Valid Sudoku\n");
    }
    else
    {
        printf("Invalid Sudoku\n");
    }

    return 0;
}
