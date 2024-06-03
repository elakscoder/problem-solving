#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="WELCOMETOZOHOCORPORATION";
    int index=0;
    int mat[5][5];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<a[index]<<" ";
            mat[i][j]=a[index];
            index++;
        }
        cout<<endl;
    }
    int rsr=0;int rsc=0;
    int rer=0;int rec=0;
    int csr=0;int csc=0;
    int cer=0;int cec=0;
    int row=0;
    int col=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(mat[i][j]=='T'&&mat[i][j+1]=='O'&&mat[i][j+2]=='O')
            {
                rsr=i;rsc=j;
                rer=i;rec=j+2;
                row=1;

            }
            if(mat[j][i]=='T'&&mat[j+1][i]=='O'&&mat[j+2][i]=='O')
            {
                 csr=j;csc=i;
                cer=j+2;cec=i;
                col=1;
            }
        }
    }
    if(row==1&&col==1)
    {
        cout<<"The row contains the substring: "<<endl;
        cout<<"Row start: "<<rsr<<endl;
        cout<<"Column start: "<<rsc<<endl;
        cout<<"Row end: "<<rer<<endl;
        cout<<"Column end: "<<rec<<endl;

         cout<<"The column contains the substring: ";
        cout<<"Row start: "<<csr<<endl;
        cout<<"Column start: "<<csc<<endl;
        cout<<"Row end: "<<cer<<endl;
        cout<<"Column end: "<<cec<<endl;
    }else if(row==1)
    {
        cout<<"The row contains the substring: "<<endl;
        cout<<"Row start: "<<rsr<<endl;
        cout<<"Column start: "<<rsc<<endl;
        cout<<"Row end: "<<rer<<endl;
        cout<<"Column end: "<<rec<<endl;


    }else if(col==1)
    {
        cout<<"The column contains the substring: "<<endl;
        cout<<"Row start: "<<csr<<endl;
        cout<<"Column start: "<<csc<<endl;
        cout<<"Row end: "<<cer<<endl;
        cout<<"Column end: "<<cec<<endl;

    }
    return 0;


}