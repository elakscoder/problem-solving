/*Given a set of numbers like <10, 36, 54,89,12> we want to find sum of weights based on the following conditions
    1. 5 if a perfect square
    2. 4 if multiple of 4 and divisible by 6
    3. 3 if even number

And sort the numbers based on the weight and print it as follows

<10,its_weight>,<36,its weight><89,its weight>

Should display the numbers based on increasing order.
*/
#include<bits/stdc++.h>
using namespace std;
bool isPerfectSq(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            return 1;
        }
    }
    return 0;
}
void sort(int arr[],int n)
{
    unordered_map<int,int>mp;
   
    for(int i=0;i<n;i++)
    {
        
        if(isPerfectSq(arr[i]))
        {
            mp[arr[i]]=5;
            
        }else if(arr[i]%4==0&&arr[i]%6==0)
        {
            mp[arr[i]]=4;
          
        }else if(arr[i]%2==0)
        {
            mp[arr[i]]=3;
           
        }else{
            mp[arr[i]]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==0)
        cout<<mp[arr[i]]<<" "<<arr[i]<<endl;
    }

    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==3)
        cout<<mp[arr[i]]<<" "<<arr[i]<<endl;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==4)
        cout<<mp[arr[i]]<<" "<<arr[i]<<endl;
    }
     for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==5)
        cout<<mp[arr[i]]<<" "<<arr[i]<<endl;
    }

}
int main()
{
    int n;
    while(1)
    {
        cout<<"Enter n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    }
    
 
    return 0;
}