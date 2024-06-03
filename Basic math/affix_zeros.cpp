#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter starting value:";
    cin>>m;
    cout<<"Enter ending value:";
    cin>>n;
    for(int i=m;i<=n;i++)
    {
        if(n>=100)
        {
            printf("%03d ",i);
        }else if(n>=10)
        {
            printf("%02d ",i);
        }else{
            printf("%d ",i);
        }
    }
}