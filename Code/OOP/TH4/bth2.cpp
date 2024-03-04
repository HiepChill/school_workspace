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
            string ten , nsx;
        }
        virtual void nhap();
        virtual void xuat();
        virtual float thanhtoan() = 0;
};

void SANPHAM::nhap()
{
    cout<<"Nhap ten san pham: ";
    getline(cin , ten);
    cin.ignore();
    cout<<"Nhap nha san xuat: ";
    getline(cin , nsx);
    
}

void SANPHAM::xuat()
{
    cout<<"Ten san pham: "<<ten<<"\tNha san xuat: "<<nsx<<endl;
}

class BANLE : public SANPHAM
{
    private:
        int giale , soluong;
    public:
        BANLE(){
            string ten , nsx;
            int giale , soluong;
        }
        void nhap();
        void xuat();
        float thanhtoan(){
            return giale * soluong;
        }
};

void BANLE::nhap()
{
    SANPHAM::nhap();
    cout<<"Gia ban le san pham: ";cin>>giale;
    while(true){
        cout<<"Nhap so luong: ";cin>>soluong;
        if(soluong > 100) break;
        else cout<<"So luong phai lon hon 100.\n";
    }
    cin.ignore();
}

void BANLE::xuat()
{
    SANPHAM::xuat();
    cout<<"Gia ban le: "<<giale<<endl;
    cout<<"So luong: "<<soluong<<endl;
}

class BANSI : public SANPHAM
{
    private:
        int giasi , soluong;
    public:
        BANSI(){
            string ten , nsx;
            int giasi , soluong;
        }
        void nhap();
        void xuat();
        float thanhtoan(){
            return giasi * soluong;
        }
};

void BANSI::nhap()
{
    SANPHAM::nhap();
    
    cout<<"Gia ban si san pham: ";cin>>giasi;
    while(true){
        cout<<"Nhap so luong: ";cin>>soluong;
        if(soluong > 100) break;
        else cout<<"So luong phai lon hon 100.\n";
    }   
    cin.ignore();
}

void BANSI::xuat()
{
    SANPHAM::xuat();
    cout<<"Gia ban si: "<<giasi<<endl;
    cout<<"So luong: "<<soluong<<endl;
}

float timspmin(vector<SANPHAM*> SP);

int main()
{
    int chon;
    SANPHAM *sp;
    // BANLE l;
    // BANSI s;
    // vector<BANLE> L;
    // vector<BANSI> S;
    vector<SANPHAM*> SP;
    while(true)
    {
        cout<<"Nhap 2 de them ban si , 1 de them ban le , 0 de dung nhap: ";cin>>chon;
        cin.ignore();
        if(chon == 0) break;
        if(chon == 1){
            sp = new BANLE;
            sp -> nhap();
            SP.push_back(sp);
        }
        if(chon == 2){
            sp = new BANSI;
            sp -> nhap();
            SP.push_back(sp);
        }
    }
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Danh sach cac san pham:"<<endl;
    for(int i = 0 ; i < SP.size() ; i++)
    {
        cout<<"San pham thu "<<i+1<<endl;
        SP[i] -> xuat();
        cout<<endl<<"------------------\n";
    }
    
    float Min = timspmin(SP);
    cout<<"Cac san pham co thanh toan it nhat trong danh sach la:\n";
    for(int i = 0 ; i < SP.size() ; i++){
        if(SP[i] -> thanhtoan() == Min){
            SP[i] -> xuat();
            cout<<endl;
        }
    }
    return 0;
}