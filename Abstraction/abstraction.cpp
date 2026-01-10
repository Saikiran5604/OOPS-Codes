//Abstraction
#include<iostream>
#include<string>
using namespace std;

class Shape{//if it has pure virtual fn then it becomes abstract class
    virtual void draw()=0;//pure virtual function
};

class Circle:public Shape{
public:
    void draw(){
        cout<<"Circle is drawn\n";
    }
};


int main(){
    //Shape sh;//not possible to define objects
    Circle cr;
    cr.draw();
    return 0;
}

#include<iostream>
#include<string>
using namespace std;

class Shape{
public:
    virtual double area() = 0; //pure virtual->abstract class
};

class Circle:public Shape{
    double d;
public:
    Circle(double d){
        this->d=d;
    }
    double area(){
       return 3.14*d*d; 
    }
};

class Rectangle:public Shape{
    double l,b;
public:
    Rectangle(double l,double b){
        this->l=l;
        this->b=b;
    }
    double area(){
        return l*b;
    }
};


int main(){
    Circle c1(5);
    cout<<c1.area()<<endl;
    Rectangle r1(5,10);
    cout<<r1.area()<<endl;
    return 0;
}