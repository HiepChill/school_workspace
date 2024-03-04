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
	    cout<<"Nhap hoc phi: ";
	    cin>>hocPhi;
	   
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

int main() {
	MonHoc a[1000];
	int n, dem=0;
	cout<<"Nhap so mon: ";
	cin>>n;
	for(int i=0; i<n; i++) {
		cout<<"Stt "<<i+1<<endl;
		a[i].nhap();
	}
	cout <<setiosflags(ios::left) <<setprecision(2);
	cout << setw(5) << "Stt: "<< setw(20) << left << "Ten mon hoc: "<< setw(10) << right << "So Tin Chi: "<<setw(15) << right << "Hoc phi: "<<endl;
	for(int i=0; i<n; i++){
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
