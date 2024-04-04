/*Brute-Force Approach TIME : O(n logn) SPACE: O(n)*/

#include<bits/stdc++.h>
using namespace std;
int removeDup(int n,int arr[])
{
   set < int > set;
  for (int i = 0; i < n; i++) {
    set.insert(arr[i]);
  }
  int k = set.size();
  int j = 0;
  for (int x: set) {
    arr[j++] = x;
  }
  return k;

    

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Number of unique Elemnets: "<<removeDup(n,arr)<<endl;
    int index=removeDup(n,arr);
    for(int i=0;i<index;i++)
    {
        cout<<arr[index]<<" ";
    }

    return 0;
}


/*Efficient Approach TIME:O(N) SPACE: O(1)


    int removeDuplicates(int nums[],int n) 
    {
        int i=0;
        for(int j=1;j<n;j++)
        {
            if(nums[j]!=nums[i])
            {
                nums[i+1]=nums[j];
                i++;
            }

        }
        return i+1;
    }

        
*/