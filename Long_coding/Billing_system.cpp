#include<iostream>
#include<fstream>
#include<windows.h>
#include<sstream>

using namespace std;

void menu();
int amount=0;

class bill
{
    private:
    string entity;
    int rate;
    int quantity;
    public:
    //default values
    bill():entity(" "),rate(0),quantity(0){}
    void setEntity(string value)
    {
        entity=value;
    }
    void setRate(int cost)
    {
        rate=cost;
    }
    void setQuantity(int n)
    {
        quantity=n;
    }
    string getEntity()
    {
        return entity;
    }
    int getRate()
    {
        return rate;
    }
    int getQuantity()
    {
        return quantity;
    }
};

void add(bill a)
{
    
    int choice;
    string entity;
    int rate;
    int quantity;
    cout<<"-----ADD ITEM-----"<<endl;
    cout<<"1.Add item"<<endl;
    cout<<"2.Close section"<<endl;
    cout<<"---------------"<<endl;
    cout<<"Enter choice: "<<endl;
    cin>>choice;
    system("cls");
    if(choice==1)
    {
        cout<<"----ADD ITEM----"<<endl;
        cout<<"Enter item to add: ";
        cin>>entity;
        a.setEntity(entity);
        cout<<"Enter cost of the item: ";
        cin>>rate;
        a.setRate(rate);
        cout<<"Enter Quantity(in no's): ";
        cin>>quantity;
        a.setQuantity(quantity);
        ofstream out("item.txt",ios::app);
        if(!out)
        {
            cout<<"File error!!!"<<endl;
        }else
        {
            out<<a.getEntity()<<" : "<<a.getRate()<<" : "<<a.getQuantity()<<endl<<endl;
            cout<<"Item successfully added";

        }
        Sleep(3000);
        system("cls");
        out.close();
    }else if(choice==2)
    {
        system("cls");
        cout<<"Redirecting to main menu";
        for(int i=0;i<5;i++)
        {
            cout<<'.';
            Sleep(200);
        }
        system("cls");
        menu();

    }else
    {
        cout<<"Invalid input!!!!"<<endl;
        Sleep(2000);
        system("cls");
        Sleep(3000);
        cout<<"Redirecting to add item menu";
        for(int i=0;i<5;i++)
        {
            cout<<'.';
            Sleep(200);
        }
    }
}
void print()
{
    int choose;
    string item;
    int quantity,rate;
    string line;
   
    cout<<"-----ADD Bill-----"<<endl;
    cout<<"\t\t\t\t1.Add Bill"<<endl;
    cout<<"\t\t\t\t2.Close session"<<endl;
    cout<<"Enter choice: ";
    cin>>choose;
    if(choose==1)
    {
        cout<<"Add Bill"<<endl;
        cout<<"Enter item: ";
        cin>>item;
        cout<<"Enter no. of Quantity: ";
        cin>>quantity;
        ifstream in("item.txt");
        ofstream out("item_bill.txt");
       
       /* if(!in)
        {
            cout<<"File error!!!"<<endl;
        }else 
        {*/
            bool found=false;
        while(getline(in,line))
        {
            
            stringstream ss;
            ss<<line;
            string itemname;
            int itemrate,itemquantity;
            char a;
            ss>>itemname>>a>>itemrate>>a>>itemquantity;
            if(item==itemname)
            {
                found=true;
                if(quantity<=itemquantity)
                {
                    rate=quantity*itemrate;
                    itemquantity-=quantity;
                    
                    cout<<"Item | Rate | Quantity | Amount "<<endl;
                    cout<<itemname<<"\t"<<itemrate<<"\t"<<quantity<<"\t"<<rate<<endl;
                    //cout<<"Bill successfully printed"<<endl;
                    Sleep(8000);
                    system("cls");
                    amount+=rate;
                    out<<"\t"<<itemname<<" : "<<itemrate<<" : "<<itemquantity<<endl<<endl;

                }else
                {
                    cout<<"Sorry! "<<itemname<<" ended"<<endl;
                    Sleep(2000);
                    system("cls");
                   
                }

            }else 
            {
                out<<line<<endl;
            }
        }
        if(!found)
        {
            cout<<item<<" not found"<<endl;
            Sleep(2000);
        }
        out.close();
        in.close();
        remove("item.txt");
        rename("item_bill.txt","item.txt");
    }else if(choose==2)
    {
        system("cls");
        Sleep(3000);
        cout<<"Counting Total Bill";
        for(int i=0;i<5;i++)
        {
            cout<<'.';
            Sleep(200);
        }
        system("cls");
        cout<<"\t\t\t\t\t\t Total Bill---------: "<<amount<<endl;
        cout<<"Thanks for shopping!!!"<<endl;
        Sleep(5000);
        system("cls");
        cout<<endl<<endl;
        cout<<"\t";
        menu();
    }
   /*else
    {
        cout<<"Invalid input!!!!"<<endl;
        Sleep(2000);
        system("cls");
        Sleep(3000);
        cout<<"Redirecting to main menu";
        for(int i=0;i<5;i++)
        {
            cout<<'.';
            Sleep(200);
        }
        menu();

    }*/
}

void menu()
{
    int val;
    bill a;
    boolean exit=false;
    cout<<"Welcome To Super Market Billing System"<<endl;
    cout<<"**************************************"<<endl;
    cout<<"\t\t\t\t1.Add Item."<<endl;
    cout<<"\t\t\t\t2.Print Bill."<<endl;
    cout<<"\t\t\t\t3.Exit."<<endl;
    cout<<"Enter choice: ";
    cin>>val;
    system("cls");
    while(!exit)
    {
        if(val==1)
        {
            add(a);
            system("cls");

        }else if(val==2)
        {
            print();
            system("cls");

        }else if(val==3)
        {
            system("cls");
            Sleep(2000);
            cout<<"exiting"<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<'.';
                Sleep(200);
            }
            exit=true;
        }else
        {
            system("cls");
            Sleep(2000);
            menu();
        }
    }
}
int main()
{
    menu();
    //cout<<"Hello world"<<endl;
    return 0;
}