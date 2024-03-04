#include<iostream>
using namespace std;

struct nhanvien
{
    string hoten , manv , master;
    int namsinh , bacluong;
};

void input(nhanvien &nv)
{
    cin.ignore();
    cout<<"Nhap ten nhan vien: ";
    getline(cin , nv.hoten);
    cout<<"Nhap ma nhan vien: ";
    getline(cin , nv.manv);
    cout<<"Nhap chuyen mon: ";
    getline(cin , nv.master);
    cout<<"Nhap nam sinh: ";
    cin>>nv.namsinh;
    cout<<"Nhap bac luong: ";
    cin>>nv.bacluong;
}

void output(nhanvien nv)
{
    cout<<"Nhan vien co bac luong cao nhat la: "<<endl;
    cout<<nv.manv<<"\n"<<nv.hoten<<"\n"<<nv.master<<"\n"<<nv.namsinh<<"\n"<<nv.bacluong<<"\n";
}

int main()
{
    int n , j;
    double max ;
    do{
        cout<<"Nhap n: ";
        cin>>n;
    }while(n < 0 || n > 5);
    nhanvien a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Nhan vien thu "<<i+1<<": "<<endl;
        input(a[i]);
        cout<<"*****************************"<<endl;
    }
    max = a[0].bacluong;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i].bacluong > max)
        {
            max = a[i].bacluong;
            i = j;
        }
    }
    output(a[j]);
}