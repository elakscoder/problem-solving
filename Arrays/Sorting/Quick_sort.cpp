#include<bits/stdc++.h>
using namespace std;
int partitionArray(int input[], int start, int end) 
{
	int i=start;
	int j=end;
	int pivot=input[start];
	while(i<j)
	{
		/*if(i!=start)
		{
			swap(input[i],input[j]);
			
		}*/
		while(input[i]<=pivot&&i<end)
		{
			i++;
		}
		while(input[j]>pivot&&j>start)
		{
			j--;
		}
		if(i<j)
		{
			swap(input[i],input[j]);
		}
		

	}
	swap(input[start],input[j]);
	return j;

	// Write your code here
}

void quickSort(int input[], int start, int end) 
{
	if(start<end)
	{
		int partition=partitionArray(input,start,end);
		quickSort(input, start, partition-1);
		quickSort(input, partition+1, end);

	}
	

	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
}
int main()
{
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    //before quick sort
    for(int i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
    cout<<endl;
    quickSort(input,0,n-1);
    //after quickSort
    for(int i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
    return 0;


    //after quick sort
}
