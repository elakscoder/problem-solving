#include<iostream>
using namespace std;
class Test 
{
    public:
    //default
    Test()
    {
        cout<<"Default\n";
    }
    //parametrized
    Test(int x)
    {
        cout<<"Parametrized\n";
    }

};
class Main
{
    Test t;
    public:
    Main():t(10)//initialiser list
    {
        
       
    }

};
int main()
{
    Main m;
    return 0;

}