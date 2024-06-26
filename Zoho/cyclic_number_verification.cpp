#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n1,n2;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"Enter n2: ";
    cin>>n2;
    int power=1;
    int nod=0;
    while(n1/power){
        power*=10;
        nod++;
    }
    power/=10;
    int rotate=n1;
    while(rotate!=n2&&nod)
    {
        rotate=(rotate%10)*power+(rotate/10);
        nod--;
    }
    if(rotate==n2)cout<<"True";
    else cout<<"False";
    return 0;
}