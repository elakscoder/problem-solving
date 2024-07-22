#include <stdio.h>

void scan(int col, int row, int mat[][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix(int row, int col, int mat[][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void matSearch(int row, int col, int mat1[][col],int *rowa,int *cola,int target)
{
    int i = 0;
    int j = col - 1;

    while(i < row && j >= 0)
    {
        if(mat1[i][j] == target)
        {
            *rowa = i;
            *cola = j;
            break;
        }
        else if(mat1[i][j] <  target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}

int main()
{
    int row1;
    int col1;
    int target;
    int i;int j;

    printf("Enter the no of rows: ");
    scanf("%d", &row1);

    printf("Enter the no of cols: ");
    scanf("%d", &col1);

    int mat1[row1][col1];

    scan(col1, row1, mat1);

    printf("The entered matrix is: \n");
    printMatrix(row1, col1, mat1);

    printf("Enter the target: ");
    scanf("%d", &target);

    matSearch(row1, col1, mat1,&i,&j,target);

    printf("THe element is found at row - %d and column - %d",i,j);
    
    return 0;
    
}
