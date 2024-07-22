#include<stdio.h>

void scan(int col,int row,int mat[][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
}

void print(int col,int row,int mat[][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

void dfs(int i,int j,int row,int col,int mat1[][col])
{
    printf("i: %d\n",i);

    if(i>=row||i<0||j<0||j>=col)
    return ;
    if(mat1[i][j] == 0)
    return;
    mat1[i][j] = 0;

    dfs(i+1,j,row,col,mat1);//b
    dfs(i+1,j+1,row,col,mat1);//br
    dfs(i,j+1,row,col,mat1);//r
    dfs(i-1,j+1,row,col,mat1);//tr
    dfs(i-1,j,row,col,mat1);//t
    dfs(i-1,j-1,row,col,mat1);//tl
    dfs(i,j-1,row,col,mat1);//l
    dfs(i+1,j-1,row,col,mat1);//bl
    

}

int numIslands(int row,int col,int mat1[][col]) 
{
    int count = 0;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(mat1[i][j] == 1)
            {
                dfs(i,j,row,col,mat1);
                count++;
                printf("matrix : \n");
                print(col,row,mat1);
            }
        }
    }

    return count;
}

int main()
{
    int row1;
    int col1;

    int row2;
    int col2;

    printf("Enter the no of rows: ");
    scanf("%d",&row1);

    printf("Enter the no of cols: ");
    scanf("%d",&col1);

    int mat1[row1][col1];

    scan(col1,row1,mat1);

    printf("The first matrix is: \n");
    print(col1,row1,mat1);

    int ans = numIslands(row1,col1,mat1);

    printf("Number of islands: %d",ans);

    return 0;
    
}