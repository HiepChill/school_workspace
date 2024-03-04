#include<iostream>
#include<string>
#include<vector>
using namespace std;

class SANPHAM
{
    protected:
        string ten , nsx;
    public:
        SANPHAM(){
            ten = "";
            nsx = "";
        }
        SANPHAM(string t , string n){
            ten = t;
            nsx = n;
        }
        virtual void nhap();
        virtual void xuat();
        virtual int thanhtoan() = 0; 
};

void SANPHAM::nhap()
{
    cout<<"Nhap ten: ";
    getline(cin , ten);
    cout<<"Nhap nsx: ";
    getline(cin , nsx);
}

void SANPHAM::xuat()
{
    cout<<"Ten: "<<ten<<endl;
    cout<<"NSX: "<<nsx<<endl;
}

class BanLe : public SANPHAM
{
    private:
        int giale , soluong;
    public:
        BanLe(){
            giale = 0;
            soluong = 0;
        }
        BanLe(int l , int s , string t , string n) : SANPHAM(t , n)
        {
            giale = l;
            soluong = s;
        }
        void nhap();
        void xuat();
        int thanhtoan(){
            return giale * soluong;
        }
};

void BanLe::nhap()
{
    SANPHAM::nhap();
    cout<<"Gia le: ";
    cin>>giale;
    do{
        cout<<"So luong: ";
        cin>>soluong;
    }while(soluong >= 10);
    cin.ignore();
}

void BanLe::xuat()
{
    SANPHAM::xuat();
    cout<<"Gia le: "<<giale<<endl;
    cout<<"So luong: "<<soluong<<endl;
}

class BanSi : public SANPHAM
{
    private:
        int giasi , soluong;
    public:
        BanSi(){
            giasi = 0;
            soluong = 0;
        }
        BanSi(int g , int s , string t , string n) : SANPHAM(t , n)
        {
            giasi = g;
            soluong = s;
        }
        void nhap();
        void xuat();
        int thanhtoan(){
            return giasi * soluong;
        }
};

void BanSi::nhap()
{
    SANPHAM::nhap();
    cout<<"Nhap gia si: ";
    cin>>giasi;
    cout<<"Nhap so luong: ";
    cin>>soluong;
    cin.ignore();
}

void BanSi::xuat()
{
    SANPHAM::xuat();
    cout<<"Gia si: "<<giasi<<endl;
    cout<<"So luong: "<<soluong<<endl;
}

int main()
{
    vector<SANPHAM*> SP;
    SANPHAM *sp;
    int n;
    cout<<"Nhap so luong san pham can nhap: ";
    cin>>n;
    int chon;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Chon 1 Ban le , 2 Ban si!";
        cin>>chon;
        cin.ignore();
        if(chon == 1) sp = new BanLe;
        if(chon == 2) sp = new BanSi;
        sp->nhap();
        SP.push_back(sp);
    }   
    cout<<"Danh sach san pham: ";
    for(int i = 0 ; i < SP.size() ; i++)
    {
        cout<<"San pham thu "<<i +1<<endl;
        SP[i]->xuat();
    }
}
