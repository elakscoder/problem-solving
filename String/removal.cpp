#include<iostream>
using namespace std;

int main()
{
    string a,b;
    int flag=0;string ans="";
    cout<<"Enter string a:";
    cin>>a;
    cout<<"Enter string b:";
    cin>>b;
    for(int i=0;i<a.size();i++)
    {
        flag=0;
        for(int j=0;j<b.size();j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
                break;
            } else{
                continue;
            }
        }
        if(flag==0)
        {
            ans+=a[i];
        }
        

    }
    cout<<"The ans is "<<ans<<endl;
    return 0;
    
}