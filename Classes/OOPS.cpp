//Object Oriented Programming System in C++
//ojects ->entities in the real world
//classes->blueprint of the entities

//by default the method and mem fun are private inside the class

#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;
public:    
    string name;
    string dept;
    string subject;
    
    void changeDept(string NewDept){
        dept=NewDept;
    }
    
    //setter 
    void Setsalary(double s){
        salary=s;
    }
    //getter
    double Getsalary(){
        return salary;
    }
};
int main(){
    Teacher obj1;
    obj1.name="Lcr Saikiran";
    obj1.dept="Science";
    obj1.changeDept("Maths");

    cout<< obj1.name <<endl;
    cout<< obj1.dept <<endl;
    //cout<< obj1.salary <<endl;
    
    obj1.Setsalary(50000);
    cout<< obj1.Getsalary() <<endl;
    
    return 0;
}