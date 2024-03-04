#include<iostream>
#include<iomanip>
using namespace std;

struct SinhVien
{
	string msv , ten;
	double dtt;
};

void Swap(SinhVien &sv1 , SinhVien &sv2)
{
	SinhVien tmp = sv1;
	sv1 = sv2;
	sv2 = tmp;
}

int main()
{
	int n;
	cout << "Nhap so sinh vien n = "; cin >> n;
	SinhVien sv[n];
	for (int i = 0 ; i < n ; i++)
	{
		cin.ignore();
		cout << "Nhap Ma SV: ";
		getline(cin,sv[i].msv);
		cout << "Nhap Ten SV: ";
		getline(cin , sv[i].ten);
		cout << "Nhap Diem: ";
		cin >> sv[i].dtt;
	}
	
	for (int i = 0 ; i < n - 1 ; i++)
		for (int j = i + 1 ; j < n ; j++)
			if (sv[i].dtt > sv[j].dtt)
				Swap(sv[i] , sv[j]);
	
	cout << "Danh sach Sinh vien:" << endl;			
	for (int i = 0 ; i < n ; i++)
	{
		cout << sv[i].msv << "\t" << sv[i].ten << "\t" << sv[i].dtt << endl;
	}
	
	return 0;
}
