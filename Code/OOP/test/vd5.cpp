#include<iostream>
using namespace std;

class date
{
private:
    int ngay , thang;
public:
    void nhap()
    {
        cout<<"Nhap ngay: ";cin>>ngay;
        cout<<"Nhap thang: ";cin>>thang;
    }

    void xuat()
    {
        cout<<"Ngay: "<<ngay<<"/"<<thang;
    }

    int get_day()
    {
        return ngay;
    }

    int get_month()
    {
        return thang;
    }
};

int main()
{
    date today , bday;
    cout<<"Nhap ngay hom nay: "<<endl;
    today.nhap();
    cout<<"Nhap ngay sinh nhat: "<<endl;
    bday.nhap();
    if(today.get_day() == bday.get_day() && today.get_month() == bday.get_month())  cout<<"HPBD!!!";
    else cout<<"Hom nay ko phai sinh nhat ban ahihi!";
    return 0;
}
