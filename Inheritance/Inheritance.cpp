#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    Person(){
        cout<<"Parent Constructor\n";
    }
    ~Person(){
        cout<<"Parent Destructor\n";
    }
};

class Student:public Person{
    
public:
    int rollno;
    Student(){
        cout<<"Child Constructor\n";
    }
    void getinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Rollno:"<<rollno<<endl;
    }
    
    ~Student(){
        cout<<"Child Destructor\n";
    }
    
};

int main(){
    Student s1;
    s1.name="LCR SAIKIRAN";
    s1.age=21;
    s1.rollno=153;
    s1.getinfo();
    return 0;
}