#include <stdio.h>
int index=0;

	int ans[100];
void BoundaryTraversal(int matrix[][10],int ans[])
{
	
	
	for (int i = 0; i < 4; i++)
        ans[index++] = matrix[0][i];
    
    for (int i = 0; i < 4 ; i++)
        ans[index++] = matrix[i][4 - 1];
    
    

    for (int i = 4 - 1; i >= 0; i--)
        ans[index++] = matrix[4 - 1][i];

    

    for (int i = 4 - 1; i >= 0; i--)
        ans[index++] = matrix[i][0];

    
}


int main()
{
	
	int matrix[10][10];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("Enter the %d th row and %d th column: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	BoundaryTraversal(matrix,ans);
	
	for(int i=0;i<index;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
	
	
}