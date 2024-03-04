#include<iostream>
#include<string>


using namespace std;

class SanPham{
	protected:
		string ten,nsx;
	public:
		SanPham(){
			ten = "";
			nsx = "";
		}
		SanPham(string t,string n){
			ten = t;
			nsx = n;
		}		
		virtual void Nhap();
		virtual void HienThi();
		virtual float ThanhToan()=0;
};

void SanPham::Nhap(){
	cout<<"Nhap ten mat hang: ";getline(cin,ten);
	cout<<"Nhap nha san xuat: ";getline(cin,nsx);
}

void SanPham::HienThi(){
	cout<<"Ten mat hang: "<<ten<<endl;
	cout<<"Nha san xuat: "<<nsx<<endl;
}

// class Ban Le
class BanLe:public SanPham{
	private:
		float giale;
		int soluong;
	public:
		BanLe(){
			giale = 0;
			soluong = 0;
		}
		BanLe(string t,string n,float g,int s):SanPham(t,n){
			giale = g;
			soluong = s;
		}
		void Nhap();
		void HienThi();
		float ThanhToan();
};

void BanLe::Nhap(){
	SanPham::Nhap();
	cout<<"Nhap gia ban le: ";cin>>giale;
	while(1){
		cout<<"Nhap so luong: ";cin>>soluong;cin.ignore();
		if(soluong>=10) cout<<"So luong phai < 10.\n";
		else break;
	}
}

void BanLe::HienThi(){
	cout<<"San pham ban le:\n";
	SanPham::HienThi();
	cout<<"Gia ban le: "<<giale<<endl;
	cout<<"So luong: "<<soluong<<endl;
}

float BanLe::ThanhToan(){
	return giale * soluong;
}

// class Ban si
class BanSi:public SanPham{
	private:
		float giasi;
		int soluong;
	public:
		BanSi(){
			giasi = 0;
			soluong = 0;
		}
		BanSi(string t,string n,float g,int s):SanPham(t,n){
			giasi = g;
			soluong = s;			
		}
		void Nhap();
		void HienThi();
		float ThanhToan();
};

void BanSi::Nhap(){
	SanPham::Nhap();
	cout<<"Nhap gia ban si: ";cin>>giasi;
	while(1){
		cout<<"Nhap so luong: ";cin>>soluong;cin.ignore();
		if(soluong<=100) cout<<"So luong phai > 100.\n";
		else break;
	}
}

float BanSi::ThanhToan(){
	return giasi * soluong;
}

void BanSi::HienThi(){
	cout<<"San pham ban si:\n";
	SanPham::HienThi();
	cout<<"Gia ban si: "<<giasi<<endl;
	cout<<"So luong: "<<soluong<<endl;
}



int main(){
	SanPham *a[20];
	int n,chon;
	cout<<"Nhap so luong san pham: ";cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		cout<<"\nSan pham thu "<<i+1<<".\n";
		cout<<"Chon 1 de ban le , 0 de ban si: ";cin>>chon;cin.ignore();
		if(chon==1) a[i] = new BanLe;
		if(chon==0) a[i] = new BanSi;
		a[i]->Nhap();
	}
	cout<<"----------------------------\n";
	float min = a[0]->ThanhToan();
	cout<<"Danh sach san pham:\n";
	for(int i=0;i<n;i++){
		cout<<"San pham thu "<<i+1<<":\n";
		a[i]->HienThi();
		if(min>a[i]->ThanhToan()) min = a[i]->ThanhToan();
	}
	cout<<"-----------------------------\n";
	cout<<"San pham thanh toan it nhat la:\n";
	for(int i=0;i<n;i++){
		if(a[i]->ThanhToan()==min){
			a[i]->HienThi();
			break;
		}
	}
	
	return 0;
}














