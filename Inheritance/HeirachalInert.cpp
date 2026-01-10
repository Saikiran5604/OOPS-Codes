//  parent
//   /    \
// child child

#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    
};

class Student:public Person{
public:
    int rollno;
};

class Teacher:public Person{
public:
    string subject;

};


int main(){
    Student s1;
    Teacher t1;
    
    s1.name="LCR SAIKIRAN";
    s1.rollno=153;
    
    t1.name="LCR";
    t1.subject="ML";
    
    cout<<"Name:"<<s1.name<<endl;
    cout<<"Rollno:"<<s1.rollno<<endl;
    cout<<"Name:"<<t1.name<<endl;
    cout<<"Subject:"<<t1.subject<<endl;
    
    return 0;
}


#include<iostream>
#include<string>

using namespace std;

class Person{
public:
    string name;
    
    Person(string n){
        this->name=n;
    }
    ~Person(){
        cout<<"parent-deconst"<<endl;
    }
};

class Student: public Person{
public:
    int age;
    
    Student(string n,int a):Person(n){
        this->age =a;
    }
    ~Student(){
        cout<<"Student -decons"<<endl;
    }
    void print(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};

class Teacher:public Person{
public:
    string rollno;
    Teacher(string n,int r):Person(n){
        this->rollno=r;
    }
    ~Teacher(){
        cout<<"Teacher- deconst"<<endl;
    }
    void print(){
        cout<<name<<endl;
        cout<<rollno<<endl;
    }
};

/*class TA:public Student,Teacher{
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
*/

int main(){
    Student s1("Saikiran",21);
    Teacher t1("Reddy",153);
    s1.print();
    t1.print();
    return 0;
}