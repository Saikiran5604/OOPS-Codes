//Virtual Functions-> member functions that you expect to be redefined in derived class
//vf are dynamic in nature
//called during runtime
//defined using virtual keyword in base class
#include<iostream>
#include<string>
using namespace std;

class parent{
public:
    void show(){
        cout<<"Parent Class"<<endl;
    }
    virtual void hello(){
        cout<<"Hello from par\n";
    }
};

class Child:public parent{
public:
    void show(){
        cout<<"Child Class"<<endl;
    }
    void hello(){
        cout<<"Hello from ch\n";
    }
};

int main(){
    Child ch;
    parent p;
    
    p.hello();
    ch.hello();
    return 0;
} 