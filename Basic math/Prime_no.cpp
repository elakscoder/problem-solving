//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    string isPrime(int N)
    {
        if(N==1)
        return "NO";
        for(int i=1;i*i<=N;i++)
        {
            if(i!=1&&i!=N&&(N%i==0))
            return "NO";
        }
        return "YES";
        // code here
    }
};


//{ Driver Code Starts.
int main() 
{ 
    
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    
    return 0; 
}
// } Driver Code Ends