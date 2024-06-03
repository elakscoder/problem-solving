#include<bits/stdc++.h>
using namespace std;

    bool strongPasswordCheckerII(string password) 
    {
        int lower=0;
        int upper=0;
        int digit=0;
        int special=0;
        int n=password.size();
        bool flag=true;
        if(n<8)
        {
            flag=false;
            return flag;
        }
        for(int i=0;i<n;i++)
        {
            if(password[i]==password[i+1]&&i<n-1)
            {
                flag=false;
                return flag;
            }
            if(password[i]>='a'&&password[i]<='z')
            {
                lower=1;
            }
            if(password[i]>='A'&&password[i]<='Z')
            {
                upper=1;
            }
            if(password[i]>='0'&&password[i]<='9')
            {
                digit=1;
            }
            if(password[i]=='!'||password[i]=='@'||password[i]=='#'||password[i]=='$'||password[i]=='%'||password[i]=='^'||password[i]=='&'||password[i]=='*'||password[i]=='('||password[i]==')'||password[i]=='-'||password[i]=='+')
            {
                special=1;
            }
        }
        if(!lower||!upper||!digit||!special)
        {
            flag=false;
        }
        return flag;
    }

int main()

{
    string pass;
    while(1)
    {
    cout<<"Enter Password: ";
    cin>>pass;
    if(strongPasswordCheckerII(pass))
    {
        cout<<"Strong password"<<endl;
    }else{
        cout<<"Not a strong password"<<endl;
    }
    }
    
    return 0;

}