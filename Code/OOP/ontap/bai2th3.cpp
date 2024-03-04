#include<iostream>
#include<string>
using namespace std;

class SV
{
    protected:
        string ten , lop;
        int namsinh , tuoi;
    public:
        void nhap();
        void xuat();
};

void SV::nhap()
{
    cin.ignore();
    cout<<"Nhap ten: ";
    getline(cin , ten);
    cout<<"Nhap lop: ";
    getline(cin , lop);
    cout<<"Nhap nam sinh: ";
    cin>>namsinh;
    cout<<"Nhap tuoi: ";
    cin>>tuoi;
}

void SV::xuat()
{
    cout<<"Ten: "<<ten<<endl;
    cout<<"Lop: "<<lop<<endl;
    cout<<"Nam sinh: "<<namsinh<<endl;
    cout<<"Tuoi: "<<tuoi<<endl;
}

class PM : public SV
{
    private:
        string spm , ngaymuon , hantra , sohieu;
    public:
        void nhap();
        void xuat();
        string get_lop(){
            return lop;
        }
};

void PM::nhap()
{
    SV::nhap();
    cin.ignore();
    cout<<"So phieu muon: ";
    getline(cin , spm);
    cout<<"Ngay muon: ";
    getline(cin , ngaymuon);
    cout<<"Han tra: ";
    getline(cin , hantra);
    cout<<"So hieu: ";
    getline(cin , sohieu);
}

void PM::xuat()
{
    SV::xuat();
    cout<<"So phieu muon: "<<spm<<endl;
    cout<<"Ngay muon: "<<ngaymuon<<endl;
    cout<<"Han tra: "<<hantra<<endl;
    cout<<"So hieu: "<<sohieu<<endl; 
}

int main()
{
    int m;
    cout<<"Nhap so phieu muon: ";cin>>m;
    PM a[m];
    for(int i = 0 ; i < m ; i++)
    {
        cout<<"Nhap phieu muon thu "<<i + 1<<"!"<<endl;
        a[i].nhap();
        cout<<"----------------------------------------"<<endl;
    }
    
    string lop;
    int dem = 0;

    cout<<"Nhap ten lop can dem: ";
    getline(cin , lop);

    for(int i = 0 ; i < m ; i++)
    {
        if(lop == a[i].get_lop())
        {
            dem++;
        }
    }

    cout<<"So phieu muon cua lop do la: "<<dem;

    return 0;
}