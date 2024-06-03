#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=1;
    string a;
    cout<<"Enter the string: ";
    cin>>a;
    unordered_map<char,int>mp;
    for(int i=0;i<a.size();i++)
    {
        mp[a[i]]++;
    }
    for(int i=0;i<mp.size();i++)
    {
        if(mp[a[i]]!=(a[i]-'a')+1)
        flag=0;
        if(flag==0)
        break;
    }
    cout<<flag<<endl;
    return 0;
}
