#include<iostream>
using namespace std;
int main()
{
    string str="PROGRAM";
    int n=str.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                cout<<str[i];
                cout<<" ";        
            }
            else if(j==n-1-i)
            {
                //cout<<str[i];//type 1;
                cout<<str[n-1-i];//type 2
                cout<<" ";
            }else
            {
                cout<<" ";
            }            
        }
        cout<<endl;
    }

}