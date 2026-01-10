/*Create a base class "Shape" with methods to calculate the area and perimeter (pure virtual). 
Implement derived classes "Rectangle" 
and "Circle" that inherit from "Shape" and provide their own area and perimeter calculations. */

#include<iostream>
#include<string>
using namespace std;

class Shape{
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Rectangle:public Shape{
private:
    double l;
    double b;
public:
    Rectangle(double len,double bre){
        this->l=len;
        this->b=bre;
    }
    double area(){
        return l*b;
    }
    double perimeter(){
        return 2*(l+b);
    }
};

class Circle:public Shape{
private:
    double radius;
public:
    Circle(double r){
        this->radius=r;
    }
    double area(){
        return 3.14*radius*radius;
    }
    double perimeter(){
        return 2*3.14*radius;
    }
};

int main(){
    Rectangle r1(5,3);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    
    Circle c1(4);
    cout<<c1.area()<<endl;
    cout<<c1.perimeter()<<endl;
}