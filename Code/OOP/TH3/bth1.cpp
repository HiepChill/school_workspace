#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class SinhVien
{
	protected:
		string msv , hoten;
		int tuoi;
	public:
		void nhap(){
			cin.ignore();
			cout<<"Nhap ma sinh vien: ";
			getline(cin , msv);
			cout<<"Nhap ho va ten: ";
			getline(cin , hoten);
			cout<<"Nhap tuoi: ";
			cin>>tuoi;
		}
		void xuat(){
			cout<<setw(10)<<left<<"Ma sinh vien: "<<setw(5)<<msv<<endl;
			cout<<setw(10)<<left<<"Ho va ten: "<<setw(5)<<hoten<<endl;
			cout<<setw(10)<<left<<"Tuoi"<<setw(5)<<tuoi<<endl;
		}
};

class DTK : public SinhVien
{
	protected:
		float toan , ly , hoa;
	public:
		void nhap(){
			SinhVien::nhap();
			cout<<"Nhap diem toan ly hoa: ";cin>>toan>>ly>>hoa;
			cout<<"---------------------------------------------"<<endl;
		}
		void xuat(){
			SinhVien::xuat();
			cout<<setw(10)<<"Diem toan: "<<setw(5)<<toan<<endl;
			cout<<setw(10)<<"Diem ly: "<<setw(5)<<ly<<endl;
			cout<<setw(10)<<"Diem hoa: "<<setw(5)<<hoa<<endl;
			cout<<"---------------------------------------------"<<endl;
		}
		double dtb(){
			return (toan + ly + hoa) / 3;
			
		}
		string xeploai()
		{
			double d = dtb();
			if(d >= 9){
				return "Xuat sac";
			}
			else if(d >= 8){
				return "Gioi";
			}
			else if(d >= 7){
				return "Kha";
			}
			else if(d >= 5){
				return "Trung binh";
			}
			else if(d >= 4){
				return "Yeu";
			}
			else return "Kem";

			return 0;
		}
		
};

int main()
{
	int n;
	DTK a[100];
	cout<<"Nhap so sinh vien can nhap: ";
	cin>>n;
	
	for(int i = 1 ; i <= n ; i++)
	{
		a[i].nhap();
	}
	cout<<"Nhưng sinh vien co diem trung binh lon hon 8 la: "<<endl;
	for(int i = 1 ; i <= n ; i++)
	{
		if(a[i].dtb() >= 8)
		{
			a[i].xuat();
		}
	}
	int dem = 0;
	for(int i = 1 ; i <= n ; i++)
	{
		if(a[i].xeploai() == "Kha")
		{
			dem++;
		}
	}
	cout<<"So sinh vien xep loai kha la: "<<dem<<endl;
	return 0;
}