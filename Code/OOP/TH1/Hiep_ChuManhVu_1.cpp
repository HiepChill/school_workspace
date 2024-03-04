#include<iostream>
using namespace std;

class library
{
private:
    string idcard , name , classes;
    int year;
public:
    void input()
    {
        cout<<"Nhap ma the: ";getline(cin , idcard);
        cout<<"Nhap ten: ";getline(cin , name);
        cout<<"Nhap lop: ";getline(cin , classes);
        cout<<"Nhap nam het han: ";cin>>year;
        cin.ignore();
        cout<<"***********************************"<<endl;
    }

    void output()
    {
        cout<<"Ma the: "<<idcard<<endl;
        cout<<"Ten: "<<name<<endl;
        cout<<"Lop: "<<classes<<endl;
        cout<<"Nam het han: "<<year<<endl;
        cout<<"***********************************"<<endl;
    }

    string get_class()
    {
        return classes;
    }
};

int main()
{
    library sv1 , sv2;
    sv1.input();
    sv2.input();
    sv1.output();
    sv2.output();
    if(sv1.get_class() == sv2.get_class())  cout<<"2 sinh vien cung lop.";
    else cout<<"2 sinh vien khac lop.";
    return 0;
}

