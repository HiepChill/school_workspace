#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class The_Thu_Vien
{
    private:
        string ma_the , ten , lop;
        int nam_het_han;
    public:
        void nhap();
        void xuat();
        string get_lop(){
            return lop;
        }
};

void The_Thu_Vien::nhap()
{
    cout<<"Nhap ma the: ";
    getline(cin , ma_the);
    cout<<"Nhap ten: ";
    getline(cin , ten);
    cout<<"Nhap lop: ";
    getline(cin , lop);
    cout<<"Nhap nam het han: ";
    cin>>nam_het_han;
    cin.ignore();
}

void The_Thu_Vien::xuat()
{
    cout<<"Ma the: "<<setw(7)<<left<<ma_the<<endl;
    cout<<"Ho va ten: "<<setw(7)<<left<<ten<<endl;
    cout<<"Lop: "<<setw(7)<<left<<lop<<endl;
    cout<<"Nham het han: "<<setw(7)<<left<<nam_het_han<<endl;
}

int main()
{
    The_Thu_Vien a , b;
    cout<<"Nhap the thu nhat: "<<endl;
    a.nhap();
    cout<<"Nhap the thu hai: "<<endl;
    b.nhap();
    cout<<"Thong tin cua the: "<<endl;
    a.xuat();
    cout<<"---------------------------------"<<endl;
    b.xuat();
    cout<<"---------------------------------"<<endl;
    if(a.get_lop() == b.get_lop())
    {
        cout<<"2 sinh vien cung lop!";
    }
    else cout<<"2 sinh vien khac lop!";
    return 0;
}