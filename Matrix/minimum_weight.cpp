/*Problem Statement:
In the amusement park at Looney
s amusement, there is Weighted Maze Challenge ””. This
consists of a set of East West roads (referred as left to right roads) and North South
roads (referred as up down roads). Each intersection has a block of iron bar, the weight
of which is given. You enter the maze at top left corner with 1 kg in cart. The exit from
the maze is at the bottom right corner. Movement at any intersection is to the right or
down provided a road exists in that direction.
At each intersection you pass through, you must exchange the weight in your cart with
the weight of the bar at intersection if it is heavier than the weight you have in the
cart.
The objective is to determine a path through the maze along the roads so that one can
exit the maze with the minimum weight in the cart.
For example, in the maze shown below, the least weight one can exit the maze is
22 kg.
Input:
Input:
1
8 21 7 1 3 6
19
17 10 20 4 5 1
2
18 23 22 3 7 4
14
25 4 13
Output:
22 
Output: 5*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the number of rows:";
    cin>>row;
     cout<<"Enter the number of colums:";
    cin>>col;
    int mat[row][col];
    //input matrix elements
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter "<<i+1<<j+1<<" element:";
            cin>>mat[i][j];
        }
    }
    //output matrix elements
    cout<<"The matrix elements are:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    //minimum weight in the cart
    int i=0,j=0;
    int val=mat[i][j];
    while(i<row-1&&j<col-1)
    {
       
        if(mat[i][j+1]>mat[i+1][j])
        {
            if(val<mat[i+1][j])
            {
                val=mat[i+1][j];
            }
            i++;
        }else if(mat[i+1][j]>mat[i][j+1])
        {
            if(val<mat[i][j+1])
            {
                val=mat[i][j+1];
            }
            j++;
        }
        
    }
    while(i==row-1&&j!=col-1)
    {
        if(val<mat[i][j+1])
        {
            val=mat[i][j+1];
        }
        j++;
    }
    while(j==row-1&&i!=col-1)
    {
        if(val<mat[i+1][j])
        {
            val=mat[i+1][j];
        }
        i++;
    }
    cout<<"Output:"<<val<<endl;
    return 0;



}