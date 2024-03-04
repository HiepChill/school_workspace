#include<iostream>
#include<string>
#include<vector>
using namespace std;


// San Pham
class SanPham{
    protected:
        string ten,nhasx;
    public:
        SanPham(){
            ten = "";
            nhasx = "";
        }
        SanPham(string t,string nsx){
            ten = t;
            nhasx = nsx;
        }
        virtual void Nhap();
        virtual void Hienthi();
        virtual float Thanhtoan()=0;
        virtual string get_ten(){
            return ten;
        }
        virtual void hoadon() = 0;
};

void SanPham::Nhap(){
    cout<<"Nhap ten san pham: ";getline(cin,ten);
    cout<<"Nhap nha san xuat: ";getline(cin,nhasx);
}

void SanPham::Hienthi(){
    cout<<"Ten san pham: "<<ten<<endl;
    cout<<"Ten nha san xuat: "<<nhasx;
}


// Ban le
class Banle:public SanPham{
    protected:
        float giaban;
        int soluong;
    public:
        Banle(){
            giaban = 0;
            soluong = 0;
        }
        Banle(string t,string nsx,float g,int s):SanPham(t,nsx){
            giaban = g;
            soluong = s;
        }
        void Nhap();
        void Hienthi();
        float Thanhtoan();
        string get_ten(){
            return ten;
        }
        void hoadon();
};

void Banle::Nhap(){
    cout<<"Nhap ten san pham: ";getline(cin,ten);
    cout<<"Nhap nha san xuat: ";getline(cin,nhasx);
    cout<<"Nhap gia ban: ";cin>>giaban;
    while(true){
        cout<<"Nhap so luong: ";cin>>soluong;
        if(soluong<10) break;
        else cout<<"So luong phai nho hon 10.\n";
    }
    
    cin.ignore();
}

void Banle::Hienthi(){
    SanPham::Hienthi();
    cout<<endl<<"So luong san pham: "<<soluong<<endl;
    cout<<"Gia ban: "<<giaban;
    cout<<"\nBan le";
}

float Banle::Thanhtoan(){
    return giaban * soluong;
}

void Banle::hoadon(){
    cout<<"Ten san pham: "<<ten<<endl;
    cout<<"So luong: "<<soluong;
    cout<<"Tien thanh toan: "<<Banle::Thanhtoan();
}

// Ban si
class Bansi:public SanPham{
    protected:
        float giaban;
        int soluong;
    public:
        Bansi(){
            giaban = 0;
            soluong = 0;
        }
        Bansi(string t,string nsx,float g,int s):SanPham(t,nsx){
            giaban = g;
            soluong = s;
        }
        void Nhap();
        void Hienthi();
        float Thanhtoan();
        string get_ten(){
            return ten;
        }
        void hoadon();
};

void Bansi::Nhap(){
    cout<<"Nhap ten san pham: ";getline(cin,ten);
    cout<<"Nhap nha san xuat: ";getline(cin,nhasx);
        cout<<"Nhap gia ban: ";cin>>giaban;
    while(true){
        cout<<"Nhap so luong: ";cin>>soluong;
        if(soluong>100) break;
        else cout<<"So luong phai lon hon 100.\n";
    }
    
    cin.ignore();
}

void Bansi::Hienthi(){
    SanPham::Hienthi();
    cout<<endl<<"So luong san pham: "<<soluong<<endl;
    cout<<"Gia ban: "<<giaban;
    cout<<"\nBan si";
}

float Bansi::Thanhtoan(){
    return giaban * soluong;
}

void Bansi::hoadon(){
    cout<<"Ten san pham: "<<ten<<endl;
    cout<<"So luong: "<<soluong;
    cout<<"Tien thanh toan: "<<Bansi::Thanhtoan();
}

float MinThanhtoan(vector<SanPham*> Sp);

int main(){
    vector<SanPham*> Sp;
    SanPham *sp;
    // Banle l;
    // Bansi s;
    int n;
    string chon;
    while(true){
        cout<<"Nhap 1 de them san pham 0 de dung lai: ";cin>>n;
        cin.ignore();
        if(n==0) break;
        cout<<"Ban le chon l , Ban si chon s: ";cin>>chon;
        cin.ignore();
        if(chon=="l"){
            sp = new Banle;
            sp->Nhap();
            Sp.push_back(sp);
        }else{
            sp = new Bansi;
            sp->Nhap();
            Sp.push_back(sp);
        }
    }

    // cau 2
    cout<<"Danh sach cac san pham la:\n";
    for(int i=0;i<Sp.size();i++){
        cout<<"San pham thu "<<i+1<<endl;
        Sp[i]->Hienthi();
        cout<<endl<<"------------------\n";
    }

    // cau 3
    float Min = MinThanhtoan(Sp);
    cout<<"Cac san pham co thanh toan it nhat trong danh sach la:\n";
    for(int i=0;i<Sp.size();i++){
        if(Sp[i]->Thanhtoan()==Min){
            Sp[i]->Hienthi();
            cout<<endl;
        }
    }
    // cau 4
    string tentim;
    cout<<"Nhap ten san pham can tim: ";getline(cin,tentim);
    for(int i=0;i<Sp.size();i++){
        cout<<"Hoa don "<<i+1<<endl;
        Sp[i]->hoadon();
        cout<<"\n----------------\n";
    }
    return 0;
}


float MinThanhtoan(vector<SanPham*> Sp){
    float Min = 0;
    for(int i=0;i<Sp.size();i++){
        if(Sp[i]->Thanhtoan()<Min) Min = Sp[i]->Thanhtoan();  
    }
    return Min;
}