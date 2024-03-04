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
	while(n<=0);
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
	
	cout << "Danh sach SV:" << endl;			
	for (int i = 0 ; i < n ; i++)
	{
		cout << sv[i].msv << "\t" << sv[i].ten << "\t" << sv[i].diem << endl;
	}
	
	double max = sv[0].diem;
	for (int i = 0 ; i < n ; i++)
	{
		if(sv[i].diem >= max)
			max = sv[i].diem;
	}
	
	cout << "Cac Sinh vien co diem cao nhat:" << endl;
	for (int i = 0 ; i < n ; i++)
	{
		if(sv[i].diem == max)
			cout << sv[i].msv << "\t" << sv[i].ten << "\t" << sv[i].diem << endl;
	}
	
	return 0;
}
