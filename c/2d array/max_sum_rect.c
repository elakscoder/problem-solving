#include<stdio.h>
#include<string.h>

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

int max_sum(int row,int col,int mat1[][col],int *rows,int *rowe,int *cols,int *cole)
{
    int arr[row];
    int csum = 0;
    int maxr_sum = 0;
    int start = 0;
    int ans_start = 0;
    int ans_end = 0;
    int maxi=0;
    

    for(int l=0;l<col;l++)
    {
        memset(arr,0,sizeof(arr));
    
        for(int r=l;r<col;r++)
        {
            csum = 0;

            for(int k=0;k<row;k++)
            {
                arr[k] += mat1[k][r];
                csum += arr[k];
                if(csum<0)
                {
                    csum = 0;
                    start = k + 1;
                }
                if(csum > maxr_sum)
                {
                    maxr_sum = csum;
                    ans_start = start;
                    ans_end = k;

                }
            }
            if(maxr_sum > maxi)
            {
                maxi = maxr_sum;
                *rows = ans_start;
                *rowe = ans_end;
                *cols = l;
                *cole = r;
            }
        }
    }

    return maxi;
}

int main()
{
    int row1;
    int col1;
    int rows=0,rowe=0;
    int cols=0,cole=0;

    printf("Enter the no of rows: ");
    scanf("%d",&row1);

    printf("Enter the no of cols: ");
    scanf("%d",&col1);

    int mat1[row1][col1];

    scan(col1,row1,mat1);

    printf("The first matrix is: \n");
    print(col1,row1,mat1);

    int sum = max_sum(row1,col1,mat1,&rows,&rowe,&cols,&cole);

    printf("The maximum sum is: %d\n",sum);

    printf("rows: %d\n",rows);
    printf("rowe: %d\n",rowe);
    printf("cols: %d\n",cols);
    printf("cole: %d\n",cole);


    for(int i=rows;i<=rowe;i++)
    {
        for(int j=cols;j<=cole;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}