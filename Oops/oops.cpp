#include<iostream>
using namespace std;
 class employee{
    //attributes
    private:
    string Name;
    string Company;
    int Age;
    //encapsulated
    public:

    //setters//getters
    void setName(string name)
    {
        Name=name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company=company;
    }
    string getCompany()
    {
        return Company;

    }
    void setAge(int age)
    {
        if(age>=18)
        Age=age;

    }
    int getAge()
    {
        return Age;
    }
  
    //methods
    void IntroduceYourself()
    {
        cout<<"Name - "<<Name<<endl;
        cout<<"Age- "<<Age<<endl;
        cout<<"Company- "<<Company<<endl; 
    }
    //constructor
    employee(string name,string company,int age)
    {
        Name=name;
        Company=company;
        Age=age;
    }



};
int main()
{
    employee employee1("Elakkiya","Zoho",21);//class object
   /* employee1.Name="Elakkiya";
    employee1.Company="Zoho";
    employee1.Age=21;*/
    employee1.IntroduceYourself();

    employee employee2("John","Amazon",35);
    /*employee2.Name="John";
    employee2.Company="Amazon";
    employee2.Age=35;*/
    employee2.IntroduceYourself();

    employee1.setAge(15);
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old"<<endl;


    
}
