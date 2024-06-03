//matrix sorting using bubble sort

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    int col;
    cout<<"Enter no.of row:";
    cin>>row;
    cout<<"Enter no.of col:";
    cin>>col;
    //matrix input
    int mat[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter the "<<i<<" th row"<<j<<" th col:";
            cin>>mat[i][j];
        }
    }
    //matrix printing
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    //sorting
    for(int k=0;k<row*col-1;k++)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(mat[i][j]>mat[i][j+1])
                {
                    swap(mat[i][j],mat[i][j+1]);
                }
            }
            if(mat[i][col-1]>mat[i+1][0])
            {
                swap(mat[i][col-1],mat[i+1][0]);
            }
        }
    }
    //after sorting
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;


}