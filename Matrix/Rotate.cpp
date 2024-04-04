//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void rotate(int i,int j,int row,vector<vector<int>> &Mat)
  {
      while(i<j)
      {
          int temp=Mat[row][i];
          Mat[row][i]=Mat[row][j];
          Mat[row][j]=temp;
          i++;
          j--;
      }
  }
    vector<vector<int>> rotateMatrix(int N, int M, int K,
                                     vector<vector<int>> Mat) 
    {
        K=K%M;
        for(int i=0;i<N;i++)
        {
            rotate(0,K-1,i,Mat);
             rotate(K,M-1,i,Mat);
              rotate(0,M-1,i,Mat);
        }
        
        
        // code here
        return Mat;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> N >> M >> K;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(N, M, K, Mat);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends