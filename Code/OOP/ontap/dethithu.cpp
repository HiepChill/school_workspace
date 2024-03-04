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
		SANPHAM(string t,string n){
			ten = t;
			nsx = n;
		}		

        virtual void nhap(){
            cout<<"Nhap ten san pham: ";
            getline(cin , ten);
            cout<<"Nha san xuat: ";
            getline(cin , nsx);
        }

        virtual void xuat()
        {
            cout<<"Ten san pham: "<<ten<<endl;
            cout<<"Nha san xuat: "<<nsx<<endl;
        }

        virtual int thanhtoan() = 0;
};

class BANLE : public SANPHAM
{
    private:
        int giale , soluong;
    public:
        BANLE(){
			giale = 0;
			soluong = 0;
		}
		BANLE(string t,string n , int g,int s):SANPHAM(t,n){
			giale = g;
			soluong = s;
		}

        void nhap()
        {
            SANPHAM::nhap();
            cout<<"Nhap gia ban le: ";
            cin>>giale;
            do{
                cout<<"Nhap so luong: ";
                cin>>soluong;
            }while(soluong >= 10);
        }

        void xuat()
        {
            SANPHAM::xuat();
            cout<<"Gia ban le: "<<giale<<endl;
            cout<<"So luong: "<<soluong<<endl;
        }

        int thanhtoan(){
            return giale * soluong;
        }
};

class BANSI : public SANPHAM
{
    private:
        int giasi , soluong;
    public:
        BANSI(){
			giasi = 0;
			soluong = 0;
		}
		BANSI(string t,string n,int g,int s):SANPHAM(t,n){
			giasi = g;
			soluong = s;			
		}

        void nhap()
        {
            SANPHAM::nhap();
            cout<<"Nhap gia si: ";
            cin>>giasi;
            do{
                cout<<"Nhap so luong: ";
                cin>>soluong;
            }while(soluong <= 100);
        }

        void xuat()
        {
            SANPHAM::xuat();
            cout<<"Gia si: "<<giasi<<endl;
            cout<<"So luong: "<<soluong<<endl;
        }

        int thanhtoan(){
            return giasi * soluong;
        }
};

int main()
{
    int n;
    cout<<"Nhap so san pham: ";
    cin>>n;
    SANPHAM *a[n];
    int chon;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"San pham thu "<<i + 1<<": "<<endl;
        cout<<"Chon 1 de ban le , 2 de ban si: ";cin>>chon;
        cin.ignore();
        if(chon == 1) a[i] = new BANLE;
        if(chon == 2) a[i] = new BANSI;
        a[i]->nhap();
    }
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Thong tin san pham: "<<endl;
    int min = a[0]->thanhtoan();
    for(int  i = 0 ; i < n ; i++)
    {
        cout<<"San pham thu "<<i + 1<<": "<<endl;
        a[i]->xuat();
        cout<<"-----------------------"<<endl;
        if(min > a[i]->thanhtoan()) min = a[i]->thanhtoan();
    }
    cout<<"-----------------------------\n";
	cout<<"San pham thanh toan it nhat la:\n";
    for(int  i = 0 ; i < n ; i++)
    {
        if(a[i]->thanhtoan() == min)
        {
            a[i]->xuat();
            break;
        }
    }

}
