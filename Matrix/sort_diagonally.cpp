#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    int col;
    cout<<"Enter the no.of rows: ";
    cin>>row;
    cout<<"Enter the no.of col: ";
    cin>>col;
    int mat[row][col];
    //input matrix
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"enter the "<<i<<" th row "<<j<<" th col :";
            cin>>mat[i][j];
        }
    }
    //diagonal sorting
    for(int k=0;k<=row*col-1;k++)
    {
        int r=0;int c=0;
        for(int i=0;i<row*2-1;i++)
        {
            if(i<row)
            {
            
            for(int j=0;j<=i;j++)
            {
                if(mat[i-j][j]<mat[r][c])
                {
                    swap(mat[i-j][j],mat[r][c]);
                    
                }
                r=i-j;
                c=j;
            }
            }else{
            
            for(int j=row-1;j>i-row;j--)
            {
                if(mat[j][i-j]<mat[r][c])
                {
                    swap(mat[j][i-j],mat[r][c]);
                   
                }
                 r=j;
                c=i-j;
            }
        }
    }

    }
 


    
    //print matrix
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<mat[i][j]<<" ";

        }
        cout<<endl;
    }


    
    
}












