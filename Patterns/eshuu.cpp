#include<iostream>
using namespace std;
int main()
{
    
    int j=1;
    int odd=11;
    while(j<=7)
    {
        if(j==7)
        {
            for(int i=0;i<13;i++)
            {
                cout<<"*";
            }
            break;
        }
        for(int i=0;i<j;i++)
        {
            cout<<"*";
        }
        
        for(int i=1;i<=odd;i++)
        {
            cout<<" ";
        }
        odd=odd-2;
        for(int i=0;i<j;i++)
        {
            cout<<"*";
        }
        j++;
        cout<<"\n";

    }
}