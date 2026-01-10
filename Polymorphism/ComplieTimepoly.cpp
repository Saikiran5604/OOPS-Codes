#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    void print(int x){
        cout<<"Integar: "<<x<<endl;
    }
    void print(char ch){
        cout<<"Char: "<<ch<<endl;
    }
};

int main(){
    Student s1;
    s1.print('#');
    return 0;
}