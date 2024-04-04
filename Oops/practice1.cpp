#include<iostream>
using namespace std;
//1
class Employee
{
    
    int salary;
    string Employee_name;
    public:
    void set_salary(int a)
    {
        salary=a;
    }
    int get_salary()
    {
        return salary;
    }
    void set_name(string name)
    {
        Employee_name=name;

    }
    string get_name()
    {
        return Employee_name;
    }

};
//2
class cellphone
{
    public:
    void ring()
    {
        cout<<"ringing..."<<endl;
    }
    void vibrate()
    {
        cout<<"vibrating..."<<endl;
    }
    void callFriend()
    {
        cout<<"Calling ..."<<endl;
    }

};
//3
class square
{
    int sidesq;
    public:
    void side(int a)
    {
        sidesq=a;
    }
    int area()
    {
        return sidesq*sidesq;
       

    }
    int perimeter()
    {
        return 4*sidesq;

    }
    
};
//4
class Rectangle
{
    public:
    int a,b;
    
    int area()
    {
        return a*b;
    }
    int perimeter()
    {
        return (a+b)*2;
    }

};



int main()
{
    //1
    /*Employee elak;
    elak.set_name("Elakkiya");
    cout<<elak.get_name()<<endl;
    elak.set_salary(1000);
    cout<<elak.get_salary()<<endl;
    //2
    cellphone redmi;
    redmi.ring();
    redmi.vibrate();
    redmi.callFriend();
    return 0;
   //3
   square no1;
   no1.side(10);
   cout<<no1.area()<<endl;
  cout<< no1.perimeter()<<endl;
   return 0;
    */
   //4
   Rectangle no1;
   no1.a=10;
   no1.b=5;
   cout<<no1.area()<<endl;
   cout<<no1.perimeter()<<endl;
   return 0;



   


}