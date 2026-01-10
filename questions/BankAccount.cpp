/*Create a class "BankAccount" with attributes account number and balance. 
Implement methods to deposit and withdraw funds, 
and a display method to show the account details.*/
#include<iostream>
#include<string>
using namespace std;

class BankAccount{
private:
    string acc_number;
    double balance;
public:
    BankAccount(string acc,double bal){
        this->acc_number=acc;
        this->balance=bal;
    }
    
    void deposit(double amount){
        balance+=amount;
    }
    void withdraw(double amount){
        if(balance<amount){
            cout<<"Insuffisient-fund"<<endl;
        }
        else{
            balance-=amount;
        }
    }
    void display(){
        cout<<balance<<endl;
    }
};

int main(){
    BankAccount b1("123456",1000);
    b1.withdraw(500);
    b1.display();
}