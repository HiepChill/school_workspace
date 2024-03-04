#include<iostream>
#include<cmath>
using namespace std;

void nhap(int a[] , int &n)
{
	do{
		cout << "So phan tu n = "; cin >> n;
	}while(n <= 0 || n >= 20);
	
	for (int i = 0 ; i < n ; i ++)
	{
		cout << "Phan tu thu " << i + 1 <<": ";
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

void max(int a[] , int n)
{
	int max = a[0];
	for (int i = 0 ; i < n ; i ++)
	{
		if (a[i] > max)
			max = a[i];
	}
	cout << "So max = " << max;
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

void SCPMax(int a[] , int n)
{
	int max = a[0];
	for (int i = 0 ; i < n ; i ++)
	{
		if (checkSCP(a[i]))
			if (a[i] > max)
				max = a[i];
	}
	cout << "So chinh phuong lon nhat: " << max;
}

int main()
{
	int n , a[100];
	nhap(a , n);
	cout << endl;
	xuat(a , n);
	cout << endl;
	max(a , n);
	SCPMax(a , n);
	return 0;
}
