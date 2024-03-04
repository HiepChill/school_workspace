#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class SINHVIEN
{
    private:
        string msv , ten , lop;
        float diem;
    public:
        void nhap();
        void xuat();
        float get_diem(){
            return diem;
        }
};

void SINHVIEN::nhap()
{
    cout<<"Nhap ma sinh vien: ";
    getline(cin , msv);
    cout<<"Nhap ten sinh vien: ";
    getline(cin , ten);
    cout<<"Nhap lop cua sinh vien: ";
    getline(cin , lop);
    cout<<"Nhap diem cua sinh vien: ";
    cin>>diem;
    cin.ignore();
}

void SINHVIEN::xuat()
{
    cout<<"Ma sinh vien: "<<msv<<endl;
    cout<<"Ten sinh vien: "<<ten<<endl;
    cout<<"Lop hoc phan: "<<lop<<endl;
    cout<<"Diem cua sinh vien: "<<diem<<endl;
}

int main()
{
    SINHVIEN a[10];
    int n , j;
    do{
        cout<<"Nhap so luong hoc sinh can nhap: ";
        cin>>n;
    }while(n < 1 || n > 10);
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Nhap sinh vien thu "<<i + 1<<": "<<endl;
        a[i].nhap();
        cout<<"----------------------------------------"<<endl;
    }
    float max = a[0].get_diem();
    for(int i = 0 ; i < n ; i++)
    {
        if(max < a[i].get_diem())
        {
            max = a[i].get_diem();
            j = i;
        }
    }
    cout<<"Sinh vien co diem cao nhat trong danh sach: "<<endl;
    a[j].xuat();
    return 0;
}

