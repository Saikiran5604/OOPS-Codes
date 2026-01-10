//shallow constructor ->used to copy the members of an object to another
#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    //double cgpa;
    double *cgpaptr;
    Student(string name,double cgpa){
        this->name=name;
        cgpaptr = new double;//declartion 
        *cgpaptr=cgpa;
    }
    
    ~Student(){
        cout<<"I am the destructor\n";
        delete cgpaptr;//to remove the deep cpy-can lead to mem leak
    }
    
     void getinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Double:"<<*cgpaptr<<endl;
    }
};

int main(){
    Student s1("LCR SAIKIRAN",8.41);
    s1.getinfo();

    return 0;
}