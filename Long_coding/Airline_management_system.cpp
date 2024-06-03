#include<iostream>
#include<fstream>
#include<sstream>
#include<windows.h>

using namespace std;

class flight
{
    private:
    string seat;
    public:
    void setseat(string a)
    {
        seat=a;
    }
    string getseat()
    {
        return seat;
    }

};
class seat
{
    private:
    string no,name,country;
    int seat;
    public:
    void setno(string n)
    {
        no=n;
    }
    void setname(string Name)
    {
        name=Name;
    }
    void setCountry(string Country)
    {
        country=Country;
    }
    void setseat(int seats)
    {
        seat=seats;
    }
    string getno()
    {
        return no;
    }
    string getname()
    {
        return name;
    }
    string getcountry()
    {
        return country;
    }
    int getseat()
    {
        return seat;
    }


};
void reserve()
{


}
void menu()
{
    int val;
    bool exit=false;
    cout<<"Welcome to Airline Management System"<<endl;
    cout<<"*************************************"<<endl;
    cout<<"1.Reserve a seat"<<endl;
    cout<<"2.Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>val;
    system("cls");
    while(!exit)
    {
        if(val==1)
        {
            reserve();
            Sleep(2000);
            system("cls");
        }else if(val==2)
        {
            exit=true;
            system("cls");
            Sleep(2000);
        }else
        {
            cout<<"Invalid input!!!"<<endl;
            cout<<"Redirecting to main menu";
            for(int i=0;i<5;i++)
            {
                cout<<'.';
                Sleep(200);
            }
            Sleep(3000);
            system("cls");
        }
            
    }
}





int main()
{
    menu();
   // cout<<"Hello world"<<endl;
    return 0;
}