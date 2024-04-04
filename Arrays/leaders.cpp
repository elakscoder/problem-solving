/*vector<int> superiorElements(vector<int>&a) 
{
    int n=a.size();
    int max=a[n-1];
    vector<int> ans;
    ans.push_back(a[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>max)
        {
            max=a[i];
            ans.push_back(max);

        }
    }
    return ans;
    // Write your code here.
}
*/