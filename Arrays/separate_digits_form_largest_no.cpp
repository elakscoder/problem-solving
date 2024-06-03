#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>ans;
    int n;
    int sol=0;
    cout<<"Enter the digits: ";
    cin>>n;
    int count=0;
    while(n!=0)
    {
        int r=n%10;
        ans.push_back(r);
        n=n/10;
        count++;
    }
    sort(ans.begin(),ans.end());
    for(int i=count-1;i>=0;i--)
    {
        //cout<<ans[i]<<endl;
        sol=(sol*10)+ans[i];
        
        cout<<sol<<endl;
    }
    cout<<endl;
    cout<<sol;
    
    return 0;


}