#include<iostream>
using namespace std;

class nhanvien
{
private:
    
public:
    void nhap();
    void xuat();
    string hoten , manv , chuyenmon;
    float bacluong;
    int namsinh;
};

void nhanvien::nhap()
{
    cout<<"Nhap ma nhan vien: ";getline(cin , manv);
    cout<<"Nhap ho ten: ";getline(cin , hoten);
    cout<<"Nhap chuyen mon: ";getline(cin , chuyenmon);
    cout<<"Nhap bac luong: ";cin>>bacluong;
    cout<<"Nhap nam sinh: ";cin>>namsinh;
    cin.ignore();
}

void nhanvien::xuat()
{
    cout<<"Ma nhan vien: "<<manv;
    cout<<"\nHo ten nhan vien: "<<hoten;
    cout<<"\nChuyen mon: "<<chuyenmon;
    cout<<"\nBac luong: "<<bacluong;
    cout<<"\nNam sinh: "<<namsinh<<endl;
}

int main()
{
    nhanvien nv1 , nv2;
    nv1.nhap();
    nv2.nhap();
    nv1.xuat();
    nv2.xuat();
    return 0;
}
