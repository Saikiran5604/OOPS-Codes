//static variables created inside the fn & initilsed once for a lifetime of the program
#include<iostream>
#include<string>
using namespace std;

void fun(){
    //int x=0;//init run-1 time
    static int x=0;
    cout<<"Value of x:"<<x<<endl;
    x++;
}


int main(){
    fun();
    fun();
    fun();
    return 0;
}

#include<iostream>
#include<string>
using namespace std;

void fun(){
    static int a = 0;
    cout<<a<<endl;
    a++;
}


int main(){
    fun();
    fun();
    fun();
    fun();
    return 0;
}