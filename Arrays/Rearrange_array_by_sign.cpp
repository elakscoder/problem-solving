/*Brute Force Approach O(2N) O(2N)


vector<int> alternateNumbers(vector<int>&a) 
{
    int n=a.size();
    vector<int>pos;
    vector<int>neg;
    vector<int>b;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0){
            pos.push_back(a[i]);
        }else{
            neg.push_back(a[i]);
        }

    }
    for(int i=0;i<n/2;i++)
    {
        a[2*i]=pos[i];
        a[2*i+1]=neg[i];
    }
    return a;
    // Write your code here.
}

        
        
    }
};
*/

/*Optimal O(N) O(N)
Variety 1: 
vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.

        int n=nums.size();
        int pos=0;
        int neg=0;
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                b[2*pos]=nums[i];
                pos++;
                
            }else {
                b[2*neg+1]=nums[i];
                neg++;

            }

        }
        return b;
    }

}

*/
/*Variety 2: 





*/