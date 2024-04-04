//Using Binary search
#include<bits/stdc++.h>
using namespace std;
long long int floorSqrt(long long int x) 
    {
        long long int low=1;
        long long int high=x;
        while(low<=high)
        {
            long long int mid=(low+high)/2;
            if(mid*mid==x)
            return mid;
            else if(mid*mid<x)
            low=mid+1;
            else
            high=mid-1;
            
        }
        return high;
    }
    int main()
    {
        int n;
        cin>>n;
        cout<<floorSqrt(n);
        return 0;
    }