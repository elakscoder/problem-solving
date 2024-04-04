/*
void selectionSort(vector<int>&arr) 
{
    int n=arr.size();
    int min;
    int index=0;
    for(int i=0;i<n;i++)
    {
        min=INT_MAX;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;

        
    }
    
    // Write your code here.
}
*/