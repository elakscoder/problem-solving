#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Function to print a submatrix
void printSubmatrix(int matrix[MAX_ROWS][MAX_COLS], int startRow, int endRow, int startCol, int endCol) {
    for (int i = startRow; i <= endRow; ++i) {
        for (int j = startCol; j <= endCol; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Function to print all submatrices of a matrix
void printAllSubmatrices(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    // Iterate over all possible starting points (top-left corner) of submatrices
    for (int startRow = 0; startRow < rows; ++startRow) {
        for (int startCol = 0; startCol < cols; ++startCol) {
            // Iterate over all possible ending points (bottom-right corner) of submatrices
            for (int endRow = startRow; endRow < rows; ++endRow) {
                for (int endCol = startCol; endCol < cols; ++endCol) {
                    // Print the submatrix defined by startRow, endRow, startCol, endCol
                    printSubmatrix(matrix, startRow, endRow, startCol, endCol);
                }
            }
        }
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    // Input the dimensions of the matrix
    printf("Enter number of rows and columns of the matrix (max 10 each): ");
    scanf("%d %d", &rows, &cols);

    // Input the matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print all submatrices
    printf("All submatrices of the matrix:\n");
    printAllSubmatrices(matrix, rows, cols);

    return 0;
}
