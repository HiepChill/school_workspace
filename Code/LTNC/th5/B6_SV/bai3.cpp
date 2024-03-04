#include<iostream>
#include<iomanip>
using namespace std;

struct SinhVien
{
	string msv , ten;
	double diem;
};

int main()
{
	int n;
	do
	{
		cout << "Nhap so sinh vien n = "; cin >> n;
	}
	while(n <= 0);
	SinhVien sv[n];
	for (int i = 0 ; i < n ; i++)
	{
		cin.ignore();
		cout << "Nhap Ma SV: ";
		getline(cin , sv[i].msv);		
		cout << "Nhap Ten SV: ";
		getline(cin , sv[i].ten);
		cout << "Nhap Diem: ";
		cin >> sv[i].diem;
	}
	
	cout << "Danh sach SV da nhap:" << endl;			
	for (int i = 0 ; i < n ; i++)
	{
		cout << sv[i].msv << "\t" << sv[i].ten << "\t" << sv[i].diem << endl;
	}
	
	cout << "Cac Sinh vien co Hoc luc Kha:" << endl;
	for (int i = 0 ; i < n ; i++)
	{
		if (sv[i].diem >= 2.5 && sv[i].diem < 3.2)
			cout << sv[i].msv << "\t" << sv[i].ten << "\t" << sv[i].diem << endl;
		
	}
	
	cout << "Cac Sinh vien co Hoc luc Gioi/Xuat sac:" << endl;
	for (int i = 0 ; i < n ; i++)
	{
		if (sv[i].diem >= 3.2)
			cout << sv[i].msv << "\t" << sv[i].ten << "\t" << sv[i].diem << endl;		
	}
	
	
	
	return 0;
}
