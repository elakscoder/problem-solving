#include<iostream>
#include<fstream>
#include<sstream>
#include<windows.h>

using namespace std;
//getline
class student
{
    private:
    string name;
    int rollno;
    string address;
    public:
    void setname(string Name)
    {
        name=Name;
    }
    void setroll(int roll)
    {
        rollno=roll;
    }
    void setad(string add)
    {
        address=add;
    }
    string getname()
    {
        return name;
    }
    int getroll()
    {
        return rollno;
    }
    string getad()
    {
        return address;
    }

};
class hostel
{
    private:
    string hname;
    int hrent;
    int hbed;
    public:
    hostel(string name,int rent,int bed)
    {
        hname=name;
        hrent=rent;
        hbed=bed;
    }
    string getname()
    {
        return hname;
    }
    int getrent()
    {
        return hrent;
    }
    int getbed()
    {
        return hbed;
    }
};

void reserve()
{
    student s;
   

    string Name;
    int Roll;
    string Address;
    string line;
    cout<<"Enter Name of Student: ";
    cin>>Name;
    s.setname(Name);
    cout<<"Enter Rollno of student: ";
    cin>>Roll;
    s.setroll(Roll);
    cout<<"Enter Address of Student: ";
    cin>>Address;
    s.setad(Address);


        ifstream in("hostel.txt");
        ofstream out("student.txt",ios::app);
        ofstream outf("hostel_temp.txt");
        
        while(getline(in,line))
        {
            stringstream ss;
            ss<<line;
            string n;int r,b;
           
            char delimiter;
            ss>>n>>delimiter>>r>>delimiter>>b;
            if(b>0)
            {
                 if(!out)
                {
                    cerr<<"File error...."<<endl;
                }else
                {
                    b=b-1;
                    outf<<n<<" : "<<r<<" : "<<b<<endl;
                    out<<s.getname()<<" : "<<s.getroll()<<" : "<<s.getad()<<endl;
                    cout<<"Bed reserved succesffully...."<<endl;
                    Sleep(5000);
                }

            }else if(b==0)
            {
                cout<<"Sorry, there is no vacancy!!!"<<endl;
            }


        }
        out.close();
        outf.close();
        in.close();
        remove("hostel.txt");
        rename("hostel_temp.txt","hostel.txt");



    /*else if(h.getbed()==0)
    {
        cout<<"Sorry, Bed not available!"<<endl;
    }*/

   
    /*ifstream in("hostel.txt");
    ofstream outf("hostel_temp.txt");
    if(!in)
    {
        cerr << "Error opening student file!" << endl;
    }
    else
    {
        while(getline(in,line))
        {
        stringstream ss;
        ss<<line;
        string hn;
        int hr,hb;
        char delimiter;
        ss>>hn>>delimiter>>hr>>delimiter>>hb;
        
        if(hb>0)
        {
            if(!out)
        {
            cerr << "Error opening student file!" << endl;
        }
        else 
        {
            out<<s.getname()<<" : "<<s.getroll()<<" : "<<s.getad()<<endl;
            hb-=1;
            if(!outf)
            {
                cerr << "Error opening student file!" << endl;

            }else{
                outf<<hn<<" : "<<hr<<" : "<<hb<<endl;

            }
            
            Sleep(3000);
            system("cls");
            
            
            cout<<"Bed Reserved Successfully"<<endl;
            Sleep(3000);
        }
        }else if(hb==0)
        {
            cout<<"Sorry , no vacancy"<<endl;
            Sleep(3000);
        }
       
        }
        out.close();
        in.close();
        outf.close();
        remove("hostel.txt");
        rename("hostel_temp.txt","hostel.txt");

    }
    */
   
}
void menu()
{
    int choice;
    bool exit=false;
    while(!exit)
    {
    cout<<"Welcome to Hostel Accomodation System"<<endl;
    cout<<"*************************************"<<endl;
    cout<<"1.Reserve a bed"<<endl;
    cout<<"2.Exit"<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
    system("cls");
        if(choice==1)
        {
            reserve();
            Sleep(2000);
            system("cls");
            

        }else if(choice==2)
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
    hostel h("3star",5,3);
    ofstream out("hostel.txt");
    if(!out)
    {
        cerr<<"File error!!!"<<endl;
    }else
    {
        out<<h.getname()<<" : "<<h.getrent()<<" : "<<h.getbed()<<endl;
        cout<<"Hostel data saved"<<endl;
        system("cls");
    }
    out.close();

    menu();
    return 0;
}