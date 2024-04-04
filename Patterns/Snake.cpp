#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int var=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%2==0)
            {
                cout<<var++<<" ";
            }else
            {
                cout<<var--<<" ";
            }
            
            
            

        }
        cout<<endl;
        if(i%2==0)
         var+=n-1;
         else 
         var+=n+1;
    }
    return 0;
    

}