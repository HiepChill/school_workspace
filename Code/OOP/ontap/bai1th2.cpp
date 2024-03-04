#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Box
{
    private:
        float cd , cr , cc;
    public:
        friend istream &operator >>(istream &in , Box &a);
        friend ostream &operator <<(ostream &out , Box &a);
        friend void operator ==(Box a , Box b);
};

istream &operator >>(istream &in , Box &a)
{
    cout<<"Nhap chieu dai: ";in>>a.cd;
    cout<<"Nhap chieu rong: ";in>>a.cr;
    cout<<"Nhap chieu cao: ";in>>a.cc;
    return in;
}

ostream &operator <<(ostream &out , Box &a)
{
    out<<"Khoi hop co: \nChieu dai = "<<a.cd<<"\nChieu rong = "<<a.cr<<"\nChieu cao = "<<a.cc<<endl;
    cout<<"--------------------------"<<endl;
    return out;
}

void operator ==(Box &a , Box &b)
{
    if(a.cd == b.cd && a.cr == b.cr && a.cc == b.cc) cout<<"2 Hinh hop bang nhau!";
    else cout<<"2 hinh hop khong bang nhau!";
}

int main()
{
    Box a , b;
    cout<<"Nhap do dai cho khoi hop thu nhat!"<<endl;
    cin>>a;
    cout<<"------------------------"<<endl;
    cout<<"Nhap do dai cho khoi hop thu hai!"<<endl;
    cin>>b;
    cout<<a<<b;
    cout<<(a == b);
}