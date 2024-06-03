//diagonal traversing in matrix

#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int row;
    int col;
    cout<<"Enter no.of rows: ";
    cin>>row;
    cout<<"Enter no.of columns: ";
    cin>>col;
    //matrix input
    int mat[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter "<<i<<" th row"<<j<<" th col: ";
            cin>>mat[i][j];
        }
    }
    //matrix printing
    cout<<"The input matrix is: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    //diagonal traversing
    int val=0;
    for(int i=0;i<=row-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<mat[val-j][j]<<" ";
        }
        val++;
    }
    for(int i=0;i<row-1;i++)
    {
        for(int j=row-1;j>=i+1;j--)
        {
            if(i==row-2)
            {
                cout<<mat[j][j]<<" ";
            }else
            {
                cout<<mat[j][row-j+i]<<" ";
            }
        }
    }
   


}