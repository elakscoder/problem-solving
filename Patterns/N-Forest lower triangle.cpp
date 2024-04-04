#include<iostream>
using namespace std;
void nStarTriangle(int n) {
    for(int i=0;i<n;i++)
    {
         for(int k=n-1;k>i;k--)
            {
                cout<<" ";
            }
        for(int j=0;j<2*i+1;j++)
        {
           
            cout<<"*";
        }
        cout<<endl;
    }
   
    // Write your code here.
}
int main()
{
    int n;
    cin>>n;
    nStarTriangle(n);
    return 0;
}
