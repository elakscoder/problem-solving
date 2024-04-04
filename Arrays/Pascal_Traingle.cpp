/*Brute - Formula nCr


Optimal


class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        int n=numRows;
        vector<vector<int>>res;
        long long sol=1;
        for(int i=1;i<=n;i++)
        {
            vector<int>ans;
            ans.push_back(1);


            for(int j=1;j<i;j++)
            {
                
                    sol*=i-j;
                    sol/=j;
                    ans.push_back(sol);
                
            }
            res.push_back(ans);
        }
        return res;

        
    }
};


*/