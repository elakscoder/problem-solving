/*Brute Force-Approach O(n2) O(1)

int numberOfInversions(vector<int>&a, int n) 
{
    int b=a.size();
    int count=0;
    for(int i=0;i<b;i++)
    {
        for(int j=i+1;j<b;j++)
        {
            if(a[i]>a[j])
            count++;

        }
    }
    return count;


    // Write your code here.
}

*/

/*Optimal Approach



int merge(vector<int>&arr, int l, int m, int r)
    {
        int cnt=0;
        int left=l;
    int right=m+1;
    int temp[r-l+1];
    int i=0;
    while(left<=m&&right<=r)
    {
        if(arr[left]<=arr[right])
        {
            temp[i++]=arr[left++];
        }else
        {
            cnt+=m+1-left;
           temp[i++]=arr[right++];
        }
    }
    while(left<=m)
    {
        temp[i++]=arr[left++];
    }
    while(right<=r)
    {
        temp[i++]=arr[right++];
    }
    for(int i=l;i<=r;i++)
    {
        arr[i]=temp[i-l];
    }
    return cnt;
         // Your code here
    }
    
    int mergeSort(vector<int>&arr, int l, int r)
    {
        int cnt=0;
         if(l>=r)return cnt; ;
    int mid=(l+r)/2;
    cnt+=mergeSort(arr,l,mid);
    cnt+=mergeSort(arr,mid+1,r);
    cnt+=merge(arr,l,mid,r);
    return cnt;
        //code here
    }

int numberOfInversions(vector<int>&a, int n) 
{
    return mergeSort(a,0,n-1);
   
    
    // Write your code here.
}




*/