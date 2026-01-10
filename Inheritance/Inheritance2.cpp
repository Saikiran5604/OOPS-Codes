#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    Person(string name,int age){
        this->name =name;
        this->age= age;
    }
    ~Person(){
        cout<<"Parent Destructor\n";
    }
};

class Student:public Person{
    
public:
    int rollno;
    Student(string name,int age,int rollno):Person(name,age){
        this->rollno=rollno;
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
    Student s1("LCR SAIKIRAN",21,153);
    s1.getinfo();
    return 0;
}