//Constructor 
//A method invoked Automatically at time of object creation
//used for Initialisation


//Object Oriented Programming System in C++
//ojects ->entities in the real world
//classes->blueprint of the entities

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
    //custom copy constructor 
    Teacher(Teacher &Orgobj){//pass by reference
        cout<<"This is a Custom copy constructor"<<endl;
        this->name =Orgobj.name;
        this->subject=Orgobj.subject;
        this->salary=Orgobj.salary;
        this->dept=Orgobj.dept;
    }
    //non-parameterised
    /*Teacher() {
        cout<<"Hi I am the default Constructor"<<endl;
    }*/
    //parameterised-constructor 
    /*Teacher(string n,string s,double sal,string d){
        subject = s;
        name = n;
        salary = sal;
        dept = d;
    }*/
    
    //use of this 
    Teacher(string name,string subject,double salary,string dept){
        this->subject = subject;
        this->name = name;
        this->salary = salary;
        this->dept = dept;
    }
    
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
    
    void getinfo(){
        cout<< "Name:" << name<<endl;
        cout<< "Dept:" << dept<<endl;
        cout<< "Salary:" << salary<<endl;
        cout<< "Subject:" << subject<<endl;
    }
};
int main(){
    Teacher obj1("LCR SAIKIRAN","CSE",50000,"CS");
    //Teacher obj2;
    // obj1.name="Lcr Saikiran";

    //cout<< obj1.dept <<endl;
    //cout<< obj1.salary <<endl;
    //obj1.getinfo();
    
    //copy constructor
    //Teacher obj2(obj1);// default copy constructor 
    //obj2.getinfo();
    
    Teacher obj2(obj1);
    obj2.getinfo();
    return 0;
}


#include<iostream>
#include<string>

using namespace std;

class Teacher{
private:
        double salary;
        int password;
public:
        string name;
        string dept;
        
        
        Teacher(){
            cout<<"Non-parameterised"<<endl;
        }
        
        Teacher(string name,string dept,double salary){
            this->name = name;
            this->dept = dept;
            this->salary = salary;
        }
        
        Teacher(Teacher* ptr){
            this->name= ptr->name;
            this->dept= ptr->dept;
            this->salary = ptr->salary;
        }
        
        void changedept(string Newdept){
            dept=Newdept;
        }
        
        void setsalary(int s){
            salary=s;
        }
        
        int getsalary(){
            return salary;
        }
        
        void print(){
            cout<<"Name:"<<name<<endl;
            cout<<"Dept:"<<dept<<endl;
            cout<<"Salary:"<<salary<<endl;
        }
        
    
};
int main(){
    //Teacher t1;
    Teacher t1("SAIKIRAN","CSE",60);
    /*t1.name="Saikiran";
    t1.dept = "CSE";
    
    t1.setsalary(90);
    cout<<t1.getsalary()<<endl;
    
    t1.setsalary(90);
    t1.print();
    */
    
    Teacher t2(t1);
    t2.print();
    
    
    
    return 0;
}
