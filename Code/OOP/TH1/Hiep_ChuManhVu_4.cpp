#include<iostream>
using namespace std;

class Time
{
private:
    int hours , minutes , seconds;
public:
    Time(){
        hours = minutes = seconds= 0;
    }
    void standardize()
    {
        while(seconds >= 60)
        {
            minutes += 1;
            seconds -= 60;
        }

        while(minutes >= 60)
        {
            hours +=1;
            minutes -= 60;
        }

        while(hours >= 24)
        {
            hours -= 24;
        }
    }
    void input();
    void output();
};

void Time::input()
{
    cout<<"Nhap thoi gian:"<<endl;
    cout<<"Gio: ";cin>>hours;
    cout<<"Phut :";cin>>minutes;
    cout<<"Giay :";cin>>seconds;
}

void Time::output()
{
    cout<<"Thoi gian chuan hoa: "<<hours<<":"<<minutes<<":"<<seconds;
}
int main()
{
    Time a;
    a.input();
    a.standardize();
    a.output();
    return 0;
}

