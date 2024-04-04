#include<iostream>
using namespace std;
void numberCrown(int n) {
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i+1;j++)
        {
            cout<<j<<" ";
        }
        for(int k=1;k<=n*2-(2*i);k++)
        {
            cout<<" "<<" ";
        }
        for(int l=i;l>0;l--)
        {
            cout<<l<<" ";
        }
        cout<<endl;
        
    }
    // Write your code here.
}
int main()
{
    int n;
    cin>>n;
    numberCrown(n);
    return 0;
    
}