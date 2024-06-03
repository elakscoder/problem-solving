/*Giventwonon-negativeintegersn1andn2,wheren1<n2.
Thetaskistofindthetotalnumberofintegersintherange[n1,n2](bothinclusive)whichhavenorepeateddigits.
Forexample:
Supposen1=11andn2=15.
Thereisthenumber11,whichhasrepeateddigits,but12,13,14and15havenorepeateddigits.So,theoutput
is4.
Example1:
Input:
11---Valueofn1
15--valueofn2
Output:
4
Example2:
Input:
101--valueofn1
200--valueofn2
Output:
72*/
#include<bits/stdc++.h>
using namespace std;
bool hasdigits(int n)
{
    string num=to_string(n);
    unordered_set<char> seen;
    for(char digit:num)
    {
        if(seen.count(digit))
        {
            return false;
        }
        seen.insert(digit);
    }
    return true;


}
int counttotal(int n1,int n2)
{
    int count=0;
    for(int i=n1;i<=n2;i++)
    {
        if(hasdigits(i))
        {
            count++;
        }
    }
    return count;

}
int main()
{
    int num1,num2;
    cout<<"Enter the num1:";
    cin>>num1;
    cout<<"Enter the num1:";
    cin>>num2;
    cout<<counttotal(num1,num2);
    return 0;
    

}