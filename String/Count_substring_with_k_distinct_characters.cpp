#include<iostream>
using namespace std;

int countSubStrings(string str, int k) 
{
    int n=str.size();
    
    int ans=0;int distinct=0;
    for(int i=0;i<n;i++)
    { 
        int freq[26]={0};
        distinct=0;

      
      for (int j = i; j < n; j++) {
        if (freq[str[j] - 'a'] == 0) {
          distinct++;
          freq[str[j] - 'a']++;
        } else {
          freq[str[j] - 'a']++;
        }
        if (distinct == k)
          ans++;
      }
    }
    return ans;
    // Write your code here.
}
int main()
{
    string a;
    int k;
    cout<<"Enter the string: ";
    cin>>a;
    cout<<"Enter the k: ";
    cin>>k;
    cout<<countSubStrings(a,k);
    return 0;

}