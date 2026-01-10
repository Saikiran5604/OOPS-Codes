/*Create a class "Person" 
with a static member variable "count" that 
keeps track of the number of instances created.*/

#include<iostream>
#include<string>
using namespace std;

class Person{
private:
    string name;
    static int count;
public:
    Person(string n){
        this->name=n;
        count++;
    }
    
    static int getCount(){
        return count;
    }
    string getName(){
        return name;
    }
};
int Person::count = 0;
int main(){
    Person person1("Alice");
    Person person2("Bob");
    cout<<Person::getCount()<<endl;
    cout<<person1.getName()<<endl;
    cout<<person2.getName()<<endl;
    
    
    return 0;
}