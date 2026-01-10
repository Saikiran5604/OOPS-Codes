/*Operator Overloading
Operator overloading allows you to give 
special meaning to operators (+, -, *, ==, etc.) when they are used with user-defined data types (classes).

Create a class "Employee" with attributes name and salary. Implement overloaded operators + and - to combine and compare employees based on their salaries.
C++:
*/

#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
    string name;
    double salary;
public:
    Employee(string n,double s){
        this->name=n;
        this->salary=s;
    }
    
    double getSalary(){
        return salary;
    }
    
    bool operator<(const Employee &obj){
        return salary < obj.salary;
    }
    
    bool operator>(const Employee &obj){
        return salary > obj.salary;
    }
    
    Employee operator+(const Employee &obj){
        return Employee("Combined",salary+obj.salary);
    }
    Employee operator-(const Employee &obj){
        return Employee("Difference",salary-obj.salary);
    }
};

int main(){
    
    Employee emp1("Saikiran",60000);
    Employee emp2("Reddy",100000);
    
    if(emp1<emp2){
        cout<<"Reddy has a higher salary"<<endl;
    }else{
        cout<<"Saikiran has a higher salary"<<endl;
    }
    
    Employee combined = emp1+emp2;
    cout<<"Combined salary:"<<combined.getSalary()<<endl;
    
    Employee difference = emp1-emp2;
    cout<<"Difference salary:"<<difference.getSalary()<<endl;
    return 0;
}