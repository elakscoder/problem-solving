 #include<bits/stdc++.h>
 using namespace std; 
 bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int row=matrix.size();
        int col=matrix[0].size();
        int n=row*col;
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int r=mid/col;
            int c=mid%col;
            if(matrix[r][c]==target)
            {
                return 1;
            }else if(matrix[r][c]<target)
            {
                low=mid+1;
            }else
            {
                high=mid-1;
            }
        }
        return 0;
    }