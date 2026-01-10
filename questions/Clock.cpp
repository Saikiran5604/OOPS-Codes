/*Create a class "Time" with attributes hours and minutes. Implement the << operator to display time in the format "hh:mm".
C++:*/

#include<iostream>
#include<string>
using namespace std;

class Time{
private:
    int hour;
    int minutes;
public:
    Time(int hr,int min){
        this->hour=hr;
        this->minutes=min;
    }
    friend ostream& operator<<(ostream& os,const Time &time){
        os << time.hour <<":"
           << (time.minutes < 10 ? "0":"")
           << time.minutes;
        return os;
    }
    
};
int main(){
    Time t1(14,30);
    cout<<t1<<endl;
    return 0;
}