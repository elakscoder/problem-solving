#include<bits/stdc++.h>
using namespace std;
int secondlargest(int n, vector<int> &a)
{
    int max=a[0];
    int sec_max=-1;
     for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            sec_max=max;
            max=a[i];
        }
        else if (a[i] != max && a[i] > sec_max) {
            sec_max = a[i];
        }
        
     }
     return sec_max;
}
int secondsmallest(int n, vector<int> &a)
{
    int min=a[0];
    int sec_min=INT_MAX;
     for(int i=1;i<n;i++)
    {
         if(a[i]<min)
        {
            sec_min=min;
            min=a[i];
         }
         else if (a[i] != min && a[i] < sec_min) {
            sec_min = a[i];
         }
        
     }
      return sec_min;
}
vector<int> getSecondOrderElements(int n, vector<int> a) 
{
    
   int slargest=secondlargest(n,a);
   int ssmallest=secondsmallest(n,a);
   return {slargest,ssmallest};
   // Write your code here.
}
int main()
{
    int n;
    cin>>n;vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    getSecondOrderElements(n,arr);
    
    
}

