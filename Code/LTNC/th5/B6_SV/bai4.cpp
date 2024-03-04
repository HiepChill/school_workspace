#include<iostream>
#include<iomanip>
using namespace std;

struct SinhVien
{
	int sbd;
	string ten;
	double diem;
};

void ChuanHoa(string &w)
{
	while(w[0] == ' ')
	{
		w.erase(0,1);
	}
	while(w[w.size()-1] == ' ')
		w.erase(w.size()-1,1);
	for (int i=0; i<w.size(); i++)
	{
		if (w[i] == ' ' && w[i+1] == ' ')
		{
			w.erase(i,1);
			i-=1;
		}
	}
}

int main()
{
	int n;
	do
	{
		cout << "Nhap n = "; cin >> n;
	}
	while(n <= 0);
	SinhVien sv[n];
	for (int i = 0 ; i < n ; i++)
	{
		cout << "SBD: ";
		cin >> sv[i].sbd;
		cin.ignore();		
		cout << "Ho va ten: ";
		getline(cin , sv[i].ten);
		cout << "Diem: ";
		cin >> sv[i].diem;
		ChuanHoa(sv[i].ten);
	}
	
	cout << "Danh sach SV:" << endl;			
	for (int i = 0 ; i < n ; i++)
	{
		cout << sv[i].sbd << "\t" << sv[i].ten << "\t" << sv[i].diem << endl;
	}

	
	return 0;
}
