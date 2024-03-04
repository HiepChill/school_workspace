#include<iostream>
using namespace std;

class dtk
{
    private:
        float toan , ly , hoa;
    public:
        void nhap();
        void xuat();
        // int dtb();
        // bool xeploai();
};

void dtk::nhap()
{
    cout<<"Nhap diem Toan: ";cin>>toan;
    cout<<"Nhap diem Ly: ";cin>>ly;
    cout<<"Nhap diem Hoa: ";cin>>hoa;
}

void dtk::xuat()
{
    cout<<"Diem Toan: "<<toan<<"\nDiem Ly: "<<ly<<"\nDiem Hoa: "<<hoa<<endl;
}

class sv : dtk
{
    private:
        int msv, tuoi;
        string ht;
    public:
        sv();
};

void sv::nhap()
{
    cout<<"Nhap msv: ";
    cin>>msv;
    cin.ignore();
    cout<<"Nhap ho ten: ";
    getline(cin, ht);
    cout<<"Nhap tuoi: ";
    cin>>tuoi;
}

void sv::xuat()
{
    cout<<"Msv: "<<msv;
}
int main()
{
    sv a;
    a.nhap();
    a.xuat();
    return 0;
}
