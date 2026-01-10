#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    Student(){
        cout<<"Non-Parameterised"<<endl;
    }
    Student(string name){
        this->name=name;
        cout<<"parameterised"<<endl;
    }
};

int main(){
    Student s1("LCR");
    return 0;
}

#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    
    Student(){
        cout<<"Default-constructor"<<endl;
    }
    Student(string s ){
        cout<<"Parameterised-constructor"<<endl;
        this->name=s;
    }
    
    int add(){
        return 0;
    }
    int add(int a ,int b){
        return a+b;
    }
};

int main(){
    Student s1("SAIKIRAN");
    cout<<s1.add()<<endl;
    cout<<s1.add(3,4)<<endl;
    return 0;
}