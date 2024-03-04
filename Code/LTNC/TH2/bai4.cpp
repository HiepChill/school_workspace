#include<iostream>
#include<cmath>
using namespace std;

void nhap(int a[] , int &n)
{
	do{
		cout << "Nhap n = "; cin >> n;
	}while(n <= 4 || n >= 20);
	
	for (int i = 0 ; i < n ; i ++)
	{
		cout << "a[" << i << "] = ";
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

void SoChan(int a[] , int n)
{
	int dem = 0;
	cout << "In so chan:";
	for (int i = 0 ; i < n ; i ++)
	{
		if (a[i] % 2 == 0)
		{
			cout << " " << a[i];
			dem ++;
		}
	}
	cout << endl;
	cout << "Day co " << dem << " so chan!";
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

void SCP(int a[] , int n)
{
	int dem = 0;
	cout << "In so chinh phuong:";
	for (int i = 0 ; i <= n; i ++)
	{
		if (checkSCP(a[i]))
		{
			cout << " " << a[i];
			dem ++;
		}
	}
	cout << endl;
	cout << "Day co " << dem << " so chinh phuong!";
}


int main()
{
	int n , a[100];
	nhap(a , n);
	cout << endl;
	xuat(a , n);
	cout << endl;
	SoChan(a , n);
	SCP(a , n);
	return 0;
}
