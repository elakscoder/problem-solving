#include<bits/stdc++.h>
using namespace std;
bool check(string a,string b)
{
    
    int i=0;int n=a.size();
    int j=0;int m=b.size();
    while(i<n)
    {
        while(a[i]==b[j])
        {
            
            i++;
            j++;
            if(j>=m)return true;
        }
        i++;
    }
    return false;

}
int main()
{
    string a;
    string b;
    cout<<"Enter string a:";
    cin>>a;
    cout<<"Enter string b:";
    cin>>b;
    
    return 0;
}