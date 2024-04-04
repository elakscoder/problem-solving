/*Brute Force 

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) 
    {
        int n=arr.size();
        set<vector<int>> st;
        for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }

    //store the set elements in the answer:
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
        
    }
};


*/


/*Optimal approach

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) 
    {
        vector<vector<int>>ans;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            if(i>0&&arr[i]==arr[i-1])
            continue;
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
            
            int sum=arr[i]+arr[j]+arr[k];
            if(sum>0)
            {
                k--;


            }else if(sum<0)
            {
                j++;

            }else
            {
                vector<int>temp={arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                k--; //k is in the last index so 
              
                while(j<k&&arr[j]==arr[j-1])j++;
                while(j<k&&arr[k]==arr[k+1])k--;

            }      

            }
              
        }
        return ans;



    }
       


        
    
};

        
    



*/