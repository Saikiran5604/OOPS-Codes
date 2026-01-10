
//parent->parent->child
#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class Student:public Person{
public:
    int rollno;
    
};

class GradStud : public Student{
public:
    string researchArea;

    void getinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;
        cout<<"ReseachArea:"<<researchArea<<endl;
    }
    
};

int main(){
    GradStud s1;
    s1.name="LCR SAIKIRAN";
    s1.rollno=153;
    s1.researchArea="IRS";

    return 0;
}



#include<iostream>
#include<string>

using namespace std;

class Person{
public:
    int age;
    string name;
    
    Person(int a,string n){
        this->age =a;
        this->name=n;
    }
    ~Person(){
        cout<<"Parent-de-constructor"<<endl;
    }
};

class Student : public Person{
public:
    int rollno;
    
    Student(int a , string n,int r):Person(a,n){
        this->rollno=r;
    }
    ~Student(){
        cout<<"Child"<<endl;
    }
    void print(){
        cout<<age<<endl;
        cout<<name<<endl;
        cout<<rollno<<endl;
    }
};

class GradStudent: public Student{
public:
    int gradno;
    GradStudent(int a ,string n,int r,int g):Student(a,n,r){
        this->gradno=g;
    }
    
    ~GradStudent(){
        cout<<"Grand-child"<<endl;
    }
    
    void print(){
        cout<<age<<endl;
        cout<<name<<endl;
        cout<<rollno<<endl;
        cout<<gradno<<endl;
    }
};

int main(){
    Student s1(21,"Saikiran",153);
    s1.print();
    
    GradStudent g1(21,"Saikiran",153,2026);
    g1.print();
    
    return 0;
}