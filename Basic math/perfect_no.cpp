#include<bits/stdc++.h>
using namespace std;



int isPerfectNumber(long long N) 
    {
        long long sum=0;
        for(long long i=1;i*i<=N;i++)
        {
            if(N%i==0)
            {
                sum+=i;
                if((N/i)!=i)
                {
                    sum+=(N/i);
                }
            }
        }
        sum-=N;
        if(N==sum)return 1;
       
        return 0;
        // code here
    }
int main()
{
    int n;
    cin>>n;
    cout<<isPerfectNumber(n);
    return 0;
}