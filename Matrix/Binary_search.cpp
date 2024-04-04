 /*
 bool searchMatrix(vector<vector<int>>& v, int target) 
    {
          int row = v.size();
  int col = v[0].size();
  int start= 0, end = row * col - 1,mid;
 
 while(start<=end)
     {
          mid=start+(end-start)/2;
          int row=mid/v[0].size();
          int col=mid%v[0].size();
          if(v[row][col]==target)
          {
              return true;
          }
           if(v[row][col]<target)
          start=mid+1;
          else
          end=mid-1;
     }
 
  return false;
    }
    */