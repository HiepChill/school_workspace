#include<iostream>
using namespace std;

class ngaySinh
{
private:
    int ngay , thang , nam;
public:
    void nhap(){
        cout<<"Nhap ngay: ";
        cin>>ngay;
        cout<<"Nhap thang: ";
        cin>>thang;
        cout<<"Nhap nam: ";
        cin>>nam;
    }
    void xuat()
    {
        cout<<"Ngay sinh: "<<ngay<<"/"<<thang<<"/"<<nam<<endl;
    }
};

class sv
{
private:
    string masv , hoten , quequan;
    float diem;
    ngaySinh ns;
public:
    void nhap();
    void xuat();
    int get_diem()
    {
        return diem;
    }
    string get_tinh(){
        return quequan;
    }
};

void sv::nhap()
{
    cin.ignore();
    cout<<"Nhap ma sinh vien: ";getline(cin , masv);
    cout<<"Nhap ten sinh vien: ";getline(cin , hoten);
    ns.nhap();
    cin.ignore();
    cout<<"Que quan: ";
    getline(cin , quequan);
    cout<<"Nhap diem trung tuyen: ";
    cin>>diem;
}

void sv::xuat()
{
    cout<<"Ma sinh vien: "<<masv<<endl;
    cout<<"Ten sinh vien: "<<hoten<<endl;
    ns.xuat();
    cout<<"Que quan: "<<quequan<<endl;
    cout<<"Diem trung truyen: "<<diem<<endl;
    cout<<"***********************************"<<endl;
}

int main()
{
    sv a[10];
    int n , j;
    cout<<"Nhap so luong sinh vien: ";
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        a[i].nhap();
        cout<<"------------------------------------------"<<endl;
    }
    int max = a[0].get_diem();
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i].get_diem() > max)
        {
            max = a[i].get_diem();
            j = i;
        }
    }
    cout<<"Sinh vien co diem trung tuyen cao nhat la: "<<endl;
    a[j].xuat();
    string tinh;
    int dem = 0;
    cout<<"Nhap tinh can tim: ";
    cin.ignore();
    getline(cin , tinh);
    for (int i = 0; i < n; i++)
    {
        if(tinh == a[i].get_tinh())
        {
            dem++;
        }
    }
    cout<<"So luong sinh vien thuoc tinh do la: "<<dem<<endl;
    return 0;
}