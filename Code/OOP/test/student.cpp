#include<iostream>
using namespace std;
class Date
{
private:
    int ngay , thang , nam ;
public:
    void input();
    void output();
};

class Student
{
private:
    string tensv , lop , masv;
    Date ngaysinh;
public:
    void input();
    void output();
};

void Date::input()
{
    cout<<"Nhap ngay sinh: ";
    cin>>ngay;
    cout<<"Nhap thang: ";
    cin>>thang;
    cout<<"Nhap nam: ";
    cin>>nam;
}

void Date::output()
{
    cout<<"Ngay sinh: "<<ngay<<"-"<<thang<<"-"<<nam;
}

void Student::input()
{
    cout<<"Nhap ma sinh vien: ";getline(cin , masv);
    cout<<"Nhap ten sinh vien: ";getline(cin , tensv);
    cout<<"Nhap lop sinh vien: ";getline(cin , lop);
    ngaysinh.input();
}

void Student::output()
{
    cout<<"Ma sinh vien: "<<masv<<endl;
    cout<<"Ten sinh vien: "<<tensv<<endl;
    cout<<"Lop: "<<lop<<endl;
    ngaysinh.output();
}

int main()
{
    Student a;
    a.input();
    cout<<"***************************************"<<endl;
    a.output();
}