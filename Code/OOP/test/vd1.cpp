#include<iostream>
using namespace std;

struct sinhvien
{
    string hoten , lop;
    double dtb;
};

void input(sinhvien &sv)
{
    cout<<"Nhap ten sinh vien: ";
    getline(cin , sv.hoten);
    cin.ignore();
    cout<<"/Nhap lop: ";
    getline(cin , sv.lop);
    cout<<"Nhap diem trung binh :";
    cin>>sv.dtb;
}

void output(sinhvien sv)
{
    cout<<sv.hoten<<"-"<<sv.lop<<"-"<<sv.dtb<<endl;
}

void check(sinhvien sv1 , sinhvien sv2)
{
    if(sv1.lop == sv2.lop)  cout<<"2 nguoi cung lop";
    else cout<<"Sinh vien khac lop";
}

int main()
{
    sinhvien sv1 , sv2;
    input(sv1);
    output(sv1);
    input(sv2);
    output(sv2);
    check(sv1 , sv2);
}