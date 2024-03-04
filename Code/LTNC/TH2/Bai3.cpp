#include<iostream>
#include<cmath>
using namespace std;

void nhap(int a[] , int &n)
{
	do{
		cout << "Nhap n = "; cin >> n;
	}while(n <= 0 || n >= 100);
	
	for (int i = 0 ; i < n ; i ++)
	{
		cout << "So thu " << i + 1 <<": ";
		cin >> a[i];
	}
	
}

void xuat(int a[] , int n)
{
	cout << "In day so:";
	for (int i = 0 ; i < n ; i ++)
	{
		cout << " " << a[i];
	}
	cout << endl;
}

void max_min(int a[] , int n)
{
	int max = a[0];
	int min = a[0];
	for (int i = 0 ; i < n ; i ++)
	{
		if (a[i] > max)
			max = a[i];
	}
	
	for (int i = 0 ; i < n ; i ++)
	{
		if (a[i] < min)
			min = a[i];
	}
	cout << "So max = " << max << ", so min = " << min;
	cout << endl;
}

bool checkSNT(int n)
{
	int check = 0;
	for (int i=1; i<=n; i++)
	{
		if (n%i == 0) check++;
	}
	if (check == 2) return true;
	else return false;
}

void snt(int a[] , int n)
{
	int dem = 0;
	for (int i = 0 ; i < n ; i ++)
	{
		if (checkSNT(a[i]))
			dem ++;
	}
	cout << "Day co " << dem << " so nguyen to.";
	cout << endl;
}

void TBC(int a[] , int n)
{
	double tong = 0;
	for (int i = 0 ; i < n ; i ++)
	{
		tong += a[i];	
	}
	cout << "TBC day so: " << tong / n;
}

int main()
{
	int n , a[100];
	nhap(a , n);
	cout << endl;
	xuat(a , n);
	cout << endl;
	max_min(a , n);
	snt(a , n);
	TBC(a , n);
	
	return 0;
}
