#include<bits/stdc++.h>
using namespace std;
string multiply(string num1, string num2) 
    {
        if(num1=="0"||num2=="0")
        {
            return "0";
        }
        int n1=num1.size();
        int n2=num2.size();
        int carry=0;int p,ap=0;
        int digit=0;long long int sum=0;long long int ans=0;
        string s;
        for(int i=n2-1;i>=0;i--)
        {
            p=0;
            for(int j=n1-1;j>=0;j--)
            {
                int value=(num2[i]-'0')*(num1[j]-'0');
                value=value+carry;
                if(j!=0)
                {
                    string val=to_string(value);
                    if(val.size()==2)
                    { 
                        carry=val[0]-'0';
                        digit=val[1]-'0';
                        sum+=digit*pow(10,p);

                    }else{
                        carry=0;
                        sum+=value*pow(10,p);
                    }
                   
                   
                }else{
                    sum+=value*pow(10,p);
                }
                cout<<sum<<endl;
                p++;
            }
             
            ans+=(sum*pow(10,ap));
            cout<<ap<<endl;
            cout<<ans<<endl;
            ap++;carry=0;sum=0;
          

        }
         s=to_string(ans);
        
        return s;
    }
    int main()
    {
        string num1;
        string num2;
        while(1)
        {
        cout<<"Enter string 1:";
        cin>>num1;
        cout<<"Enter string 2:";
        cin>>num2;
        cout<<multiply(num1,num2);
        cout<<endl;
        }
        
        
        return 0;

    }