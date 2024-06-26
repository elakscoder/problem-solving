#include<bits/stdc++.h>
using namespace std;
//0 to 999
string numtoword(int a)
{
    string val=to_string(a);int n=val.size();int size=n;
    string ans="";
    if(val =="0")
    {
        return "Zero";
    }
    string ones [9]={"one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};
    string tens[10]={"ten ","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};
    
    while(n)
    {
        if(n==3)
        {
            int b=val[size-n]-'0';
            ans+=ones[b-1]+"hundred and ";
        }else if(n==2)
        {
            int b=val[size-n]-'0';
            ans+=tens[b-1];
        }else{
            int b=val[size-n]-'0';
            ans+=ones[b-1];
        }
        
        n--;
        

    }
        
        return ans;


}
int main()
{
    int a;
    cout<<"Enter the no: ";
    cin>>a;
    string value=numtoword(a);
    cout<<value<<endl;
    return 0;

}