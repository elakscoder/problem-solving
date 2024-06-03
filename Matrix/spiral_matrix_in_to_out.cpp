#include<bits/stdc++.h>
using namespace std;
vector<int> spiral(vector<vector<int>>& matrix)
{
    int row=matrix.size();
    int col=matrix[0].size();
    int n=row*col;
    int right,left,top,bottom;
    if(row%2==0)
    {
    right=col/2;
     left=right-1;
   bottom=row/2;
     top=bottom-1;
    }
    else
    {
        right=col/2;
        left=right-1;
         top=row/2;
         bottom=top+1;
    }
    vector<int>ans;
    
    while(left>=0&&top>=0&&right<col&&bottom<row)
    {
        for(int i=right;i>=left;i--)
        {
            ans.push_back(matrix[top][i]);
        }
        right++;
        for(int i=top+1;i<=bottom;i++)
        {
            ans.push_back(matrix[i][left]);
        }
        left--;
        
        
            for(int i=left+2;i<right;i++)
        
            ans.push_back(matrix[bottom][i]);
        
        bottom++;
        if(right<col)
        {
            for(int i=bottom-1;i>=top;i--)
            {
                ans.push_back(matrix[i][right]);
            }
            top--;
        }

        
        
    }
    if(row%2!=0)
    {
        for(int i=right;i>left;i--)
        {
            ans.push_back(matrix[top][i]);
        }
    }

    return ans;

}
int main()
{
    int row;
    int col;
    cout<<"Enter no of rows:";
    cin>>row;
    cout<<"Enter no of columns:";
    cin>>col;
    vector<vector<int>>matrix(row,vector<int>(col));
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter the matrix "<<i<<" th row and "<<j<<" th col: ";
            cin>>matrix[i][j];
        }
    }
    cout<<"The input matrix is given by:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int> ans=spiral(matrix);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;


}