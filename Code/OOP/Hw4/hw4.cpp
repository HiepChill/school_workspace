#include<iostream>
using namespace std;

class Time
{
    private:
        int h , m , s;
    public:
        friend istream &operator >>(istream &in , Time &a);
        friend ostream &operator <<(ostream &out , Time &a);
        operator int ();
};

istream &operator >>(istream &in , Time &a)
{
    cout<<"Nhap gio: ";in>>a.h;
    cout<<"Nhap phut: ";in>>a.m;
    cout<<"Nhap giay: ";in>>a.s;
    return in;
}

ostream &operator <<(ostream &out , Time &a)
{
    out<<a.h<<" gio "<<a.m<<" phut "<<a.s<<" giay!";
    return out;
}

Time::operator int()
{
    return h * 3600 + m * 60 + s;
}

int main()
{
    Time a;
    cin>>a;
    cout<<a<<endl;
    cout<<int(a);
}

