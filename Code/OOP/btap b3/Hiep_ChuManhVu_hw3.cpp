#include<bits/stdc++.h>
using namespace std;
class MonHoc {
	private:
		string tenMonHoc;
		int soTinChi;
		int hocPhi;
	public:
		void nhap(){
            cin.ignore();
            cout<<"Nhap ten mon hoc: ";
            fflush(stdin);
            getline(cin, tenMonHoc);
            cout<<"Nhap so tin chi: ";
            cin>>soTinChi;
            hocPhi = 335000;
		}
		
		void xuat(){
			cout << setw(20) << left << tenMonHoc<< setw(10) << right << soTinChi << setw(15) << right << hocPhi*soTinChi << endl;
		}
		
		int getHocPhi() {
			return hocPhi;
		}
		
		int getTinChi() {
			return soTinChi;
		}
};

class Student
{
private:
    string hoten;
    int somonhoc;
public:
    void input();
    void output();
    int get_somon();
};

void Student::input()
{
    cout<<"Nhap ten sinh vien: ";
    getline(cin , hoten);
    cout<<"Nhap so mon hoc: ";
    cin>>somonhoc;
}

void Student::output()
{
    cout<<"Sinh vien: "<<hoten<<endl;
    cout<<"So mon hoc: "<<somonhoc<<endl;
    cout<<"Gom: "<<endl;
}

int Student::get_somon()
{
    return somonhoc;
}

int main() {
	MonHoc a[1000];
	int n, dem=0;
    Student b;
    b.input();
	for(int i = 0; i < b.get_somon() ; i++) {
		cout<<"Stt "<<i+1<<endl;
		a[i].nhap();
	}
    b.output();
	cout <<setiosflags(ios::left) <<setprecision(2);
	cout << setw(5) << "Stt: "<< setw(20) << left << "Ten mon hoc: "<< setw(10) << right << "So Tin Chi: "<<setw(15) << right << "Hoc phi: "<<endl;
	for(int i = 0; i < b.get_somon() ; i++){
		cout << setw(5) << left << i+1;
		a[i].xuat();		
	} 
	int sumtc , sumhp;
	for(int i=0; i<n; i++){
		sumhp += a[i].getHocPhi()*a[i].getTinChi();
		sumtc += a[i].getTinChi();
	}
	cout<<"Sum: "<<setw(30)<<right<<sumtc<<setw(15)<<right<<sumhp;
	return 0;
}
