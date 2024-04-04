#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>

using namespace std;
void menu();
class Managemenu
{
    protected:
    string username;//hide admin name
    public:
    Managemenu()
    {
        system("color 0D");
        cout<<"\n\n\n\n\n\n\n\n\t Enter your name to continue as Admin: ";
        cin>>username;
        system("CLS");
        if(username=="Elakkiya")
        {
            menu();
        }else
        {
            cout<<"Oops!!!  You do not have access to this page!!!!!";
        }
        


    }
    ~Managemenu(){}


};

class customers
{
    public:
    string gender,address;
    int age;
    long long mobileNo;
    static int cusID;
    char all[999];
    static string name;

    void getDetails()
    {
        ofstream out("old-customers.txt",ios::app);
        {
        cout<<"Enter Customer ID:  ";
        cin>>cusID;
        cout<<"Enter Name:  ";
        cin>>name;
        cout<<"Enter Age:  ";
        cin>>age;
        cout<<"Enter Mobile no:   ";
        cin>>mobileNo;
        cout<<"Enter address: ";
        cin>>address;
        cout<<"Enter Gender: ";
        cin>>gender;

        }
        
        out<<"\nCustomer ID: "<<cusID<<"\nName:  "<<name<<"\nAge: "<<age<<"\nMobileno: "<<mobileNo<<"\nAddress: "<<address<<"\nGender: "<<gender<<endl;
        out.close();
        cout<< "\nWe Saved your details successfully for future purpose\n"<<endl;
    }
    void showDetails()
    {
        ifstream in("old-customers.txt");
        {
            if(!in)
            {
                cout<<"File error!"<<endl;
            }
            while(!(in.eof()))
            {
                in.getline(all,999);
                cout << all <<endl;

            }
            in.close();
        }
    }
};
int customers::cusID;
string customers::name;

class cabs
{
    public:
    int cabChoice;
    int kilometre;
    float cabcost;
    static float finalcabcost;

    void cabDetails()
    {
        cout<<"We collabprated with fastest, safest, and smartest cab service around the country"<<endl;
        cout<<"-----------ABC Cabs---------------"<<endl;
        cout<<"1.Rent a Standard Cab - Rs.15 for 1KM"<<endl;
        cout<<"2.Rent a Luxury Cab - Rs.25 per KM"<<endl;
    //Calculating the cost of journey 
        cout<<"\nTo calculate the cost of your journey: "<<endl;
        cout<<"Enter the choice of cab: ";
        cin>>cabChoice;
        cout<<"Enter Kilometeres to travel: "<<endl;
        cin>>kilometre;
        int hirecab;

        if(cabChoice==1)
        {
            cabcost=15*kilometre;
            cout<<"Cost of travel :"<<cabcost<<" rupees for a Standard cab" <<endl;
            cout<<"Press 1 to hire this cab: or";
            cout<<"Press 2 to select another cab: ";
            cin>>hirecab;

            //close these things from terminal
            system("CLS");
           if(hirecab==1)
           {
            finalcabcost=cabcost;
            cout<<"You have successfully hired a standarad car"<<endl;
            cout<<"Goto Menu and take the receipt"<<endl;

           }
           else if(hirecab==2)
           {
            cabDetails();
           }
           else{
            cout<<" Invalid input ! Redirecting to main menu \nPlease wait"  <<endl;
            Sleep(999);
            system("CLS");
            cabDetails();
           }
              

        }else if(cabChoice==2)
        {
            cabcost=25*kilometre;
            cout<<"Cost of travel:"<<cabcost<<" rupees for a Luxur cab" <<endl;
            cout<<"Press 2 to hire this cab: or";
            cout<<"Press 1 to select another cab: ";
            cin>>hirecab;
            system("CLS");
           if(hirecab==1)
           {
             cabDetails();
          
           }
           else if(hirecab==2)
           {
            finalcabcost=cabcost;
            cout<<"You have successfully hired a Luxury car"<<endl;
            cout<<"Goto Menu and take the receipt"<<endl;

           
           }
           else{
            cout<<" Invalid input ! Redirecting to main menu \nPlease wait"  <<endl;
            Sleep(999);
            system("CLS");
            cabDetails();
           }

        }else 
        {
            cout<<" Invalid input ! Redirecting to main menu \nPlease wait"  <<endl;
            Sleep(999);
            system("CLS");
            menu();

        }
        cout<<"\nPress 1 to Redirect main menu: ";
        cin>>hirecab;
        system("CLS");
       if(hirecab==1)
        {
            menu();
        }else
        {
            menu();
        }
        
    }

};
float cabs::finalcabcost;
class booking
{
    public:
    int choiceHotel;
    int packchoice;
    //checking...........
    static float hotelcost;

    void hotels()
    {
        string hotelNo[]={"Avendra","ChoiceYou","Elephantbay"};
        for(int i=0;i<3;i++)
        {
            cout<<(i+1)<<" . Hotel"<<hotelNo[i]<<endl;
        }
        cout<<"\nCurrently we collborated with above hotels"<<endl;
        cout<<"Press any key to back or\nEnter number of the hotel you want to book: ";
        cin>>choiceHotel;
        system("CLS");
        //1

        if(choiceHotel==1)
        {
            cout<<"------------WELCOME TO HOTEL AVENDRA---------\n"<<endl;
            cout<<"Standard Pack - Rs. 5000.00"<<endl;
            cout<<"Premium Pack - Rs.10000.00"<<endl;
            cout<<"Luxury Pack - Rs.15000.00"<<endl;

            cout<<"\nPress another key to back or\nEnter package number: ";
            cin>>packchoice;

            if(packchoice==1)
            {
                hotelcost=5000.00;
                cout<<"\nYou have successfully booked standard Pack at Avendra"<<endl;
                cout<<"Goto Menu and take the receipt"<<endl;
            }else if(packchoice==2)
            {
                hotelcost=10000.00;
                cout<<"\nYou have successfully booked Premium Pack at Avendra"<<endl;
                cout<<"Goto Menu and take the receipt"<<endl;
            }else if(packchoice==3)
            {
                hotelcost=15000.00;
                cout<<"\nYou have successfully booked Luxury Pack at Avendra"<<endl;
                cout<<"Goto Menu and take the receipt"<<endl;
            }else 
            {
                cout<<"Invalid Input! Redirecting to Previous menu \nPlease wait"<<endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotomenu;
            cout<<"\nPress 1 to redirect to main menu: ";
            cin>>gotomenu;
            if(gotomenu==1)
            {
                menu();
            }else{
               menu();
            }
            //2
        }else if(choiceHotel==2)
        {
            cout<<"------------WELCOME TO ChoiceYou---------\n"<<endl;
            cout<<"Standard Pack - Rs. 5000.00"<<endl;
            cout<<"Premium Pack - Rs.10000.00"<<endl;
            cout<<"Luxury Pack - Rs.15000.00"<<endl;

            cout<<"\nPress another key to back or\nEnter package number: ";
            cin>>packchoice;

            if(packchoice==1)
            {
                hotelcost=5000.00;
                cout<<"\nYou have successfully booked standard Pack at Avendra"<<endl;
                cout<<"Goto Menu and take the receipt"<<endl;
            }else if(packchoice==2)
            {
                hotelcost=10000.00;
                cout<<"\nYou have successfully booked Premium Pack at Avendra"<<endl;
                cout<<"Goto Menu and take the receipt"<<endl;
            }else if(packchoice==3)
            {
                hotelcost=15000.00;
                cout<<"\nYou have successfully booked Luxury Pack at Avendra"<<endl;
                cout<<"Goto Menu and take the receipt"<<endl;
            }else 
            {
                cout<<"Invalid Input! Redirecting to Previous menu \nPlease wait"<<endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotomenu;
             cout<<"\nPress 1 to redirect to main menu: ";
            cin>>gotomenu;
            if(gotomenu==1)
            {
                menu();
            }else{
               menu();
            }
            //3
        }else if(choiceHotel==3)
        {
            cout<<"------------WELCOME TO Elephantbay----------\n"<<endl;
            cout<<"Standard Pack - Rs. 5000.00"<<endl;
            

            cout<<"\nPress another key to back or\nEnter package number: ";
            cin>>packchoice;

            if(packchoice==1)
            {
                hotelcost=5000.00;
                cout<<"\nYou have successfully booked standard Pack at Avendra"<<endl;
                cout<<"Goto Menu and take the receipt"<<endl;
            }else 
            {
                cout<<"Invalid Input! Redirecting to Previous menu \nPlease wait"<<endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotomenu;
             cout<<"\nPress 1 to redirect to main menu: ";
            cin>>gotomenu;
            if(gotomenu==1)
            {
                menu();
            }else{
                menu();
            }
        }


    }

};
float booking::hotelcost;


class charges:public booking,cabs,customers
{
    public:
    void printbill()
    {
        ofstream outf("receipt.txt");
        {
            outf<<"------------ABC Travel Agency-----------"<<endl;
            outf<<"----------Receipt----------"<<endl;
            outf<<"_________________________________"<<endl;

            outf<<"Customer ID: "<<customers::cusID<<endl;
            outf<<"Name: "<<customers::name<<endl;
            outf<<"Description\t\t Total"<<endl;
            outf<<"Hotel cost:\t\t"<<fixed<<setprecision(2)<<booking::hotelcost<<endl;
            outf<<"Travel cab cost:\t\t"<<fixed<<setprecision(2)<<cabs::finalcabcost<<endl;

            outf<<"____________________________________"<<endl;
            outf<<"Total charge:\t\t"<<fixed<<setprecision(2)<<booking::hotelcost+cabs::finalcabcost<<endl;
            outf<<"___________________________________"<<endl;
            outf<<"------------THANK YOU---------------"<<endl;




        }
        outf.close();



    }
    void showbill()
    {
        ifstream inf("receipt.txt");
        {
            if(!inf)
            {
                cout<<"File error!"<<endl;
            }
            while(!(inf.eof()))
            {
                inf.getline(all,999);
                cout<<all<<endl;

            }
        }
        inf.close();
    }


};
void menu()
{
    int mainChoice;
    int inchoice;
    int gotoMenu;

    cout<<"\t\t *ABC Travels* \n"<<endl;
    cout<<"---------------Main Menu--------------"<<endl;

    cout<<"\t_________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t\t\t"<<endl;
    cout<<"\t|\tCustomer Management -> 1\t"<<endl;
    cout<<"\t|\tCabs Manaagement    -> 2\t"<<endl;
    cout<<"\t|\tBookings Management-> 3\t"<<endl;
    cout<<"\t|\tCharges & Bill     -> 4\t"<<endl;
    cout<<"\t|\tExit                -> 5\t"<<endl; 
    cout<<"\t|\t\t\t\t\t\t\t\t\t"<<endl;
    cout<<"\t_________________________________"<<endl;

    cout<<"\nEnter Your Choice: ";
    cin>>mainChoice;
    customers a2;
    cabs a3;
    booking a4;
    charges a5;   

    system("CLS");
    switch(mainChoice)
    {
        case 1:
        {
            cout<<"--------Customers-------\n"<<endl;
            cout<< "1.Enter New Customer: "<<endl;
            cout<< "2.See Old Customers:  "<<endl;

            cout<<"\nEnter Choice: ";
            cin>>inchoice;

            system("CLS");

            if(inchoice==1)
            {
                a2.getDetails();
            }else if(inchoice==2)
            {
                a2.showDetails();
            }else 
            {
                cout<<"Invalid Input!Redirecting to Previous Menu \nPlease Wait!"<<endl;
                Sleep(1100);
                system("CLS");
                menu();
                
            }
            cout<<"\nPress 1 to redirect to main menu: ";
            cin>>gotoMenu;
            system("CLS");
            if(gotoMenu==1)
            {
                menu();
            }else 
            {
                menu();
            }
            break;
        }
        case 2:
        {
            cout<<"----------------Cabs---------------"<<endl;
            cout<<" 1.Enter Cab details: "<<endl;
            a3.cabDetails();
            break;
            
        }
        case 3:
        {
            cout<<"-------------------Bookings------------"<<endl;
            cout<<" 2.Enter Hotel Booking details: "<<endl;
            a4.hotels();
            break;
        }
        case 4:
        {
            cout<<"-----------Get your Receipt bills------------"<<endl;
            a5.printbill();
            cout<<"Your reciept is already printed you can get it from file path\n"<<endl;
            cout<<"To display your receipt in the screen,Enter 1: or Enter another key to back main menu: ";
            cin>>gotoMenu;
            if(gotoMenu==1)
            {
                system("CLS");
                a5.showbill();
                cout<< "\nPress 1 to redirect to main menu: ";
                cin>>gotoMenu;
                system("CLS");
                if(gotoMenu==1)
                {
                    menu();
                }else
                {
                    menu();
                }
            }else{
                system("CLS");
                menu();
            }
            break;

            
        }
        case 5:
        {
            cout<<"--Good Bye--"<<endl;
            Sleep(999);
            system("CLS");
            //menu();
            break;
           
        }
        default:
        {
            cout<<"Invalid input! Redirecting to main menu";
            Sleep(999);
            system("CLS");
            menu();
            break;
        }
        
    }


}
int main()
{
    Managemenu startobj;
    //cout<<"Hello world"<<endl;
    return 0;
}


