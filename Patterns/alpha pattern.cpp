#include<iostream>
using namespace std;
void alpha(int n)
{
    char value='A';
    for(int i=0;i<n;i++)
    {
        for(int j=i;j>=0;j--)
        {
            cout<<(char)(value+n-1-j)<<" ";
        }
        cout<<endl;
        value='A';
    }

}
void symmetry(int n) 
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++){
        cout<<"*";
        }
        for(int k=0;k<2*i;k++)
        {
        cout<<" ";
        }
        for(int l=0;l<n-i;l++)
        {
        cout<<"*";
        }
        cout<<endl;
    

    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<n-i;j++){
        cout<<"*";
        }
        for(int k=0;k<2*i;k++)
        {
        cout<<" ";
        }
        for(int l=0;l<n-i;l++)
        {
        cout<<"*";
        }
        cout<<endl;
    

    }
   
    // Write your code here.
}
void unsymmetry(int n) {
    int stars=1;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<stars;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<2*i;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        stars++;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<2*(i+1);k++)
        {
            cout<<" ";
        }
        for(int j=i;j<n-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }    // Write your code here.
}
int main()
{
    int n;
    cin>>n;
    unsymmetry(n);
    return 0;

}