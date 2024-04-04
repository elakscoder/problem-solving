#include<iostream>
using namespace std;
//1
class circle
{
    protected:
    double radius;
    public:
    circle(int r):radius(r){}
    double getRadius()
    {
        return radius;
    }
    double getArea()
    {
        return 3.14*radius*radius;//pir2
    }
    double volumeC()
    {
        return (4/3)*getArea()*radius;
    }

   

};
class cylinder:public circle
{
    private:
    double height;
    public:
    cylinder(int r, int h):circle(r),height(h){};
    double getheight()
    {
        return height;
    }
    double Area()
    {
        return 2*3.14*radius*(radius+height);
    }
    double volumeCy()
    {
        return getArea()*height;
        

    }

};
//2
class rectangle
{
    protected:
    double l;
    double b;
    public:
    //rectangle(double length,double breadth):l(length),b(breadth){}
    void setLength(double length)
    {
        l=length;
    }
    void setBreadth(double breadth)
    {
        b=breadth;
    }
    double getLength()
    {
        return l;
    }
    double getBreadth()
    {
        return b;
    }
    double getRectArea()
    {
        return l*b;
    }


};
class cuboid:public rectangle
{
    private:
    double h;
    public:
    //cuboid(double length,double breadth,double height):rectangle(length,breadth),h(height){}
    
    void setHeight(double height)
    {
        h=height;
    }
    double getHeight()
    {
        return h;
    }
    double getCuboidArea()
    {
        return 2*(getRectArea()+l*h+b*h);
    }
    double getCuboidVolume()
    {
        return l*b*h;
    }



};
//3


int main()
{
    //1
    /*
    cylinder obj(10,10);
    cout<<obj.getRadius()<<endl;
    cout<<obj.getheight()<<endl;
    cout<<obj.Area()<<endl;
    cout<<obj.volumeCy()<<endl;
    */

    
    //2
    
    cuboid obj;
    obj.setLength(10.00);
    obj.setBreadth(10.00);
    obj.setHeight(10.00);
    cout<<obj.getLength()<<endl;
    cout<<obj.getBreadth()<<endl;
    cout<<obj.getHeight()<<endl;
    cout<<obj.getCuboidArea()<<endl;
    cout<<obj.getCuboidVolume()<<endl;
    
    //3




}