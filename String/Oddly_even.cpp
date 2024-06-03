#include<iostream>
using namespace std;

int main()
{
    int evensum=0,oddsum=0;
    string val;
    cout<<"Enter the value:";
    cin>>val;
    for(int i=0;i<val.size();i++)
    {
        int n=val[i]-'0';
        if((i+1)%2==0)
        {
            evensum+=n;
        }
        else{
            oddsum+=n;
        }
    }
    cout<<abs(evensum-oddsum)<<endl;
    return 0;
}