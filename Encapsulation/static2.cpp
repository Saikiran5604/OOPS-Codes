//static variables created inside the fn & initilsed once for a lifetime of the program
#include<iostream>
#include<string>
using namespace std;

class ABC{
public:
   ABC(){
       cout<<"constructor\n";
   }
   ~ABC(){
       cout<<"descontructor\n";
   }
};

int main(){
    if(true){
        //ABC obj1;
        static ABC obj1;
    }
    cout<<"Main fn"<<endl;
    return 0;
}
/*
local object
constructor
descontructor
Main fn

Static local object
constructor
Main fn
descontructor
*/