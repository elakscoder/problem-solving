//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int modulo(string b)
  {
     int res= 0;
      for( int i = 0; i < b.length();i++)
      {
          res = (res*10 + (b[i] - '0'))%4;
      }

      return res;

  }

int getLastDigit(string a, string b) 
{

    if(b.length() == 1 && b == "0" )

        {return 1;}

    if(a == "1")

        {return 1; }

    

    int exp;

    int mod = modulo(b);

     if(mod == 0){

         exp = 4 ; 

     }else {exp = mod;}

     

     int result = pow(a[a.length() - 1] - '0' , exp );

       

        

        return result%10;

} 
};

//{ Driver Code Starts.
int main() {
    
        string a,b;
        
        cin>>a>>b;

        Solution ob;
        cout << ob.getLastDigit(a,b) << endl;
    
    return 0;
}
// } Driver Code Ends