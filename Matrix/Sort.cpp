#include<stdio.h>

int main()
{
	int arr[3][4]={{9,8,7,6},{6,5,4,5},{4,3,2,1}};
	//sort rows
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			for(int k=j+1;k<4;k++)
			{
				if(arr[i][j]>arr[i][k])
				{
					int temp=arr[i][k];
					arr[i][k]=arr[i][j];
					arr[i][j]=temp;
				}
				
				
			}
		}
	}
	//sort columns
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=j+1;k<3;k++)
			{
				if(arr[j][i]>arr[k][i])
				{
					int temp=arr[k][i];
					arr[k][i]=arr[j][i];
					arr[j][i]=temp;
				}
				
				
			}
		}
	}
	
	
	
	//printing arrays
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
			
	}
}