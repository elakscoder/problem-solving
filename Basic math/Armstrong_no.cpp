#include<bits/stdc++.h>
using namespace std;



bool checkArmstrong(int n){
	int num1=n;
	int num=n;

        int sum=0;
		int count=0;
		while(num1!=0)
		{
			count++;
			num1=num1/10;
		}
        while(num!=0)
        {
            int rem=num%10;
            sum=sum+pow(rem,count);
            num=num/10;
        }
        if(n==sum)
        return 1;
        return 0;
	//Write your code here
}
int main()
{
    int n;
    cin>>n;
    cout<<checkArmstrong(n);
    return 0;
}
