//shallow constructor ->used to copy the members of an object to another
#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    //double cgpa;
    double *cgpaptr;
    //custom constructor 
    /*Student(string name,double cgpa){
        this->name=name;
        this->cgpa=cgpa;
    }*/
    //copy constructor
    /*Student(Student &s1){
        cout<<"custom Copy constructor "<<endl;
        this->name=s1.name;
        this->cgpa=s1.cgpa;
    }*/
    
    /*void getinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Double:"<<cgpa<<endl;
    }*/
    Student(string name,double cgpa){
        this->name=name;
        cgpaptr = new double;//declartion 
        *cgpaptr=cgpa;
    }
    
    
    /*Student(Student &s1){
        cout<<"custom Copy constructor deep "<<endl;
        this->name=s1.name;
        this->cgpaptr=s1.cgpaptr;
    }*/
    //deep copy
    Student(Student &s1){
        cout<<"custom Copy constructor deep "<<endl;
        this->name=s1.name;
        cgpaptr =new double;
        *cgpaptr=*(s1.cgpaptr);
    }
    
     void getinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Double:"<<*cgpaptr<<endl;
    }
};

int main(){
    Student s1("LCR SAIKIRAN",8.41);
    //s1.getinfo();
    Student s2(s1);
    
    /*s1.getinfo();
    *(s2.cgpaptr) = 9.1;
    s1.getinfo();*/
    
    s1.getinfo();
    s2.name ="Kiran";
    *(s2.cgpaptr) = 9.1;//deep copy
    s2.getinfo();
    
    return 0;
}