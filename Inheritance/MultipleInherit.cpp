/*parent  parent
     \  /
     child */

#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int rollno;
    
};

class Teacher{
public:
    string subject; 
    double salary;
};

class TA:public Student,public Teacher{

};

int main(){
    TA t1;
    t1.name ="LCR SAIKIRAN";
    t1.subject="CNS";
    
    cout<<"Name:"<<t1.name<<endl;
    cout<<"Subject:"<<t1.subject<<endl;
    return 0;
}

#include<iostream>
#include<string>

using namespace std;

class Student{
public:
    string name;
    int age;
    
    Student(string n,int a){
        this->name=n;
        this->age =a;
    }
    ~Student(){
        cout<<"Student -decons"<<endl;
    }
};

class Teacher{
public:
    string rollno;
    Teacher(int r){
        this->rollno=r;
    }
    ~Teacher(){
        cout<<"Teacher- deconst"<<endl;
    }
};

class TA:public Student,Teacher{
public:
    int id;
    
    TA(string s, int a,int r,int id):Student(s,a),Teacher(r){
        this->id=id;
    }
    
    ~TA(){
        cout<<"TA-deconst"<<endl;
    }
    void print(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollno<<endl;
        cout<<id<<endl;
    }
};


int main(){
    TA t1("Saikiran",21,153,5604);
    t1.print();
    return 0;
}