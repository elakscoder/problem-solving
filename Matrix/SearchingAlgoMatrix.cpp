/*time complexity O(N)

 int i = 0;
      int j = M-1;
      
      while(i<N&&j>=0){
          
          if(mat[i][j]==X)
          return 1;
          
          else if(mat[i][j]>X)
          j--;
          
          else
          i++;
          
      }
      return 0;
      */