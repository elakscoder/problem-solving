/*Given an array arr[] of N positive integers which can contain integers from 1 to P where elements can be repeated or can be absent from the array. Your task is to count the frequency of all numbers from 1 to N. Make in-place changes in arr[], such that arr[i] = frequency(i). Assume 1-based indexing.
Note: The elements greater than N in the array can be ignored for counting and do modify the array in-place. 

Example 1:

Input:
N = 5
arr[] = {2, 3, 2, 3, 5}
P = 5
Output:
0 2 2 0 1
Explanation: 
Counting frequencies of each array element
We have:
1 occurring 0 times.
2 occurring 2 times.
3 occurring 2 times.
4 occurring 0 times.
5 occurring 1 time.

SOLUTION:


BRUTE FORCE APPROACH O(n*n)

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of elements: \n";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the "<<i+1<<" element: \n";
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[j]==i)
			{
				count++;
			}
		}
		cout<<"Number of "<<i<<" s: "<<count<<" \n";
	}
	return 0;
	
}*/

/* USING HASHING

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//precompute
	int hash[13]={0};
	for(int i=0;i<n;i++)
	{
		hash[arr[i]]++;
	}
	int q;
	cin>>q;
	while(q--)
	{
		int number;
		cin>>number;
		cout<<"Frequency of "<<number<<" is : "<<hash[number]<<endl;
	}

}
*/

/*USING MAP
unordered_map<int,int>m;
       
        for(int i=0;i<N;i++)
          m[arr[i]]++;
         
       for(int i=1;i<=N;i++)
        {
            arr[i-1]=m[i];
        }
		*/

/* MOST OPTIMIZED SOLUTION



    void frequencyCount(vector<int>& arr,int N, int P)
    {
        //step 1: Ignoring the elements that are greater than 0
        for(int i=0;i<N;i++)
        {
            if(arr[i]>N)
            arr[i]=0;
        }
        //step 2: Encoding
        for(int i=0;i<N;i++)
        {
            if(arr[i]%(N+1)>0)
            {
                arr[(arr[i]%(N+1))-1]+=(N+1);
            }
        }
        //Step 3: Decoding
        for(int i=0;i<N;i++)
        {
            arr[i]/=(N+1);
        }
        
        // code here
    }
};




*/