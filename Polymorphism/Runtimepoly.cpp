//Function Overriding
#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    void show(){
        cout<<"Parent Class"<<endl;
    }
};

class Child:public Parent{
public:
    void show(){
        cout<<"Child Class"<<endl;
    }
};

int main(){
    Child ch;
    Parent p;
    p.show();
    ch.show();
    return 0;
}