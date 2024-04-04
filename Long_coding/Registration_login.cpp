#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>
#include<sstream>

using namespace std;

class login
{
    string userID,userPW;
    public:
    //constructor-if nothing is passed the default values is set like this
    login():userID(" "),userPW(" "){}
    void setID(string id)
    {
        userID=id;
    }
    void setPW(string pw)
    {
        userPW=pw;
    }
    string getID()
    {
        return userID;
    }
    string getPW()
    {
        return userPW;
    }
};
void registration(login log)
{
    string id,password;
    cout<<"------Register Yourself-------"<<endl;
    cout<<"Enter USER ID: ";
    cin>>id;
    log.setID(id);
    start:
    cout<<"Enter USER PW: ";
    cin>>password;
    if(password.size()>=8)
    {
         log.setPW(password);
    }else 
    {
        cout<<"Enter minimum of 8 characters..."<<endl;
        goto start;
    }

   
    ofstream out("outfile.text",ios::app);
    if(!out)
    {
        cout<<"File error - File cannot be opened."<<endl;
    }else
    {
        out<<log.getID()<<" : "<<log.getPW()<<endl;
        cout<<"User successfully registered"<<endl;
        Sleep(2000);
        system("cls");
        cout<<"Redirecting to main menu";
        for(int i=0;i<5;i++)
        {
            cout<<'.';
            Sleep(200);
        }
        system("cls");
         cout<<"Redirecting to main menu";
        for(int i=0;i<5;i++)
        {
            cout<<'.';
            Sleep(200);
        }
        Sleep(2000);

    }
    out.close();
    

}
void loginF()
{
    string id,pw;
    string line;
    bool found=false;
    cout<<"----------Login Page------------"<<endl;
    cout<<"Enter USER_Id: ";
    cin>>id;
    cout<<"Enter USER_Pasword: ";
    cin>>pw;
    ifstream in("outfile.text");
    if(!in)
    {
        cout<<"File error"<<endl;
    }else{
        while(getline(in,line))
        {
            stringstream ss;
            ss<<line;
            string userid,userpass;
            char a;
            
            ss>>userid>>a>>userpass;
            if(userid==id&&userpass==pw)
            {
                found=true;
                system("cls");
                cout<<"---------Welcome to the Page---------"<<endl;
                Sleep(2000);
                cout<<"Please wait";
        for(int i=0;i<5;i++)
        {
            cout<<'.';
            Sleep(200);
        }
                Sleep(3000);

            }
           


        }
         if(!found){
                cout<<"Incorrect userID or userPassword"<<endl;
                system("cls");
        cout<<"Redirecting to main menu";
        for(int i=0;i<5;i++)
        {
            cout<<'.';
            Sleep(200);
        }
        system("cls");
         cout<<"Redirecting to main menu";
        for(int i=0;i<5;i++)
        {
            cout<<'.';
            Sleep(200);
        }
                Sleep(2000);
            
            }
    }
    in.close();


}
void menu()
{
    login log;
    int val;
    bool exit=false;
    while(!exit)
    {
        cout<<"---------Welcome------------"<<endl;
        cout<<"--------1.SignUp------------"<<endl;
        cout<<"--------2.SignIn------------"<<endl;
        cout<<"--------3.Exit--------------"<<endl;
        cout<<"\n";
        cout<<"Enter the value to choose: ";
        cin>>val;
        system("cls");
    if(val==1)
    {
        registration(log);
        system("cls");
    }else if(val==2)
    {
        loginF();
        system("cls");
    }else if(val==3)
    {
        system("cls");
        cout<<"Exiting";
        for(int i=0;i<5;i++)
        {
            cout<<'.';
            Sleep(200);
        }

        Sleep(2000);
        exit=true;
    }else{
        cout<<"Invalid input! Redirecting to main menu";
       /* Sleep(1000);
        for(int i=0;i<5;i++)
        {
            cout<<'.';
        }
        
        system("cls");
        */
        menu();
    }

    }
}




int main()
{
    menu();
    //cout<<"Hello World"<<endl;
    return 0;
}