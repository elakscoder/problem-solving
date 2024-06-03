#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
void rationalTomixed(float n)
{
    int whole=(int)n;
    cout<<whole<<endl;
    float rational=n-whole;
    cout<<rational<<endl;
    int den=100;
    int num=(int)(round(rational*100));
    cout<<num<<endl;

    int gcdvalue=gcd(num,den);
    cout<<gcdvalue<<endl;
    int numerator=num/gcdvalue;
    int denominator=den/gcdvalue;
    cout<<whole<<" "<<numerator<<"/"<<denominator<<endl;


}

int main()
{
    while(1)
    {
    float n;
    cout<<"Enter the number: ";
    cin>>n;
    rationalTomixed(n);
    
    }
    return 0;
    

}