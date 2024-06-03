#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat[9][9];
    //matrix input
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {

            cin>>mat[i][j];
        }
    }
    //matrix output
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {

            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }




}