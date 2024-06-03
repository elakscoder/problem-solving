#include<bits/stdc++.h>
using namespace std;

int findnthterm(int n)
{
    unordered_map<int,string>mp;
    mp[1]="3";
    mp[2]="4";
    while(true)
    {
        
    int index=3;
    for(int i=1;i<index;i++)
    {
        string current=mp[i];
        mp[index++]=current+"3";
        mp[index++]=current+"4";
        if(index>n)
        {
            string str=mp[n];
            int value=stoi(str);
            return value;
        }
    }

    }
    
}

int main()
{
    int n;
    while(1)
    {
        cout<<"Enter n";
    cin>>n;
    int ans=findnthterm(n);
    cout<<ans;
    }
    
    return 0;

}