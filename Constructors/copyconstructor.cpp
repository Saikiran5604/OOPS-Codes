#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Basic{
public:
    int x;
    Basic(int i){
        x=i;
    }
    Basic(Basic &a1){
        x=a1.x;
    }
};
int main(){
    Basic a1(20);
    Basic a2(a1);
    cout<<a2.x<;
    return 0;
}


#include<iostream>
#include<string>
using namespace std;

class b{
public:
    string s;
    b(string str){
        this->s=str;
    }
};

class C{
public:
    string s;
    C(b *ptr){
        this->s=ptr->s;
    }
};


int main(){
    b s1("SAikiran");
    C s2(&s1);
    cout<<s2.s<<endl;
    return 0;
}