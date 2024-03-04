#include<iostream>
using namespace std;

class nhanvien
{
private:
    string hoten , manv , chuyenmon;
    int namsinh , bacluong;
public:
    void nhap();
    void xuat();
    string get_ma();
    int get_bacluong();
    void set_ma(string s);
};

string nhanvien::get_ma()
{
    return manv;
}

int nhanvien::get_bacluong()
{
    
}