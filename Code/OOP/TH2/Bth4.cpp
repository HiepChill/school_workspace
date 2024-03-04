#include<iostream>
using namespace std;

int n;
class MonHoc
{
private:
    string tenmon;
    int sotin;
public:
    friend istream &operator >>(istream &in , MonHoc a);
    friend ostream &operator <<(ostream &out , MonHoc a);
};

istream &operator >>(istream &in , MonHoc a)
{
    cout<<"Nhap ten mon hoc: ";
    cin.ignore();
    getline(cin , a.tenmon);
    cout<<"Nhap so tin chi: ";cin>>a.sotin;
    return in;
}

ostream &operator <<(ostream &out , MonHoc a)
{
    out<<"Mon hoc: "<<a.tenmon<<" - So tin: "<<a.sotin<<endl;
    return out;
}

class SinhVien
{
private:
    string hoten;
    MonHoc a;
public:
    friend istream &operator >>(istream &in , SinhVien sv);
    friend ostream &operator <<(ostream &out , SinhVien sv);
};

istream &operator >>(istream &in , SinhVien sv)
{
    cout<<"Nhap ten sinh vien: ";
    cin.ignore();
    getline(cin , sv.hoten);
    cout<<"Nhap so mon hoc: ";cin>>n;
    for(int i = 0 ; i < n ; i++)
        cin>>sv.a;
    return in;
}

ostream &operator <<(ostream &out , SinhVien sv)
{
    cout<<"Ten sinh vien: "<<sv.hoten<<endl;
    for(int i = 0 ; i < n ; i++)
        cout<<sv.a;
    return out;
}

int main()
{
    SinhVien sv1;
    cin>>sv1;
    cout<<sv1;
}