#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int nodigits(int n)
{
    int ans=(int)(log10(n)+1);//using logarthmic formulae
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<nodigits(n);
    return 0;
}