#include<iostream>
#include<cmath>
using namespace std;

void nhap(int a[] , int &n)
{
	cout << "Nhap n = "; cin >> n;
	for (int i = 0 ; i < n ; i ++)
	{
		cout << "So thu " << i <<": ";
		cin >> a[i];
	}
	
}

void xuat(int a[] , int n)
{
	cout << "Day so:";
	for (int i = 0 ; i < n ; i ++)
	{
		cout << " " << a[i];
	}
	cout << endl;
}
void innguoc (int a[] , int n)
{
	cout << "Dao nguoc day so:";
	for (int i = n - 1 ; i >= 0 ; i --)
	{
		cout << " " << a[i];
	}
	cout << endl;
}

void chiaHetCho3(int a[] , int n)
{
	int dem = 0;
	for (int i = 0 ; i < n ; i ++)
	{
		if (a[i] % 3 == 0)
			dem ++;
	}
	cout << "Day co " << dem << " so chia het cho 3.";
	cout << endl;
}

bool checkSCP(int n)
{
	for (int i = 0 ; i <= n; i ++)
	{
		if (i * i == n)
		{
			return true;
		}
	}
	return false;
}

void SoChinhPhuong(int a[] , int n)
{
	int dem = 0;
	for (int i = 0 ; i < n ; i ++)
	{
		if (checkSCP(a[i]))
			dem ++;
	}
	cout << "Day co " << dem << " so chinh phuong.";
}

int main()
{
	int n , a[100];
	nhap(a , n);
	cout << endl;
	xuat(a , n);
	cout << endl;
	innguoc(a , n);
	chiaHetCho3(a , n);
	SoChinhPhuong(a , n);
	
	return 0;
}
