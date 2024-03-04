#include<iostream>
#include<cmath>
using namespace std;

void nhap(int a[] , int &n)
{
	do{
		cout << "So phan tu n = "; cin >> n;
	}while(n <= 0);
	
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
	int max = 0;
	for (int i = 0 ; i < n ; i ++)
	{
		if (dem == 0)
		{
			if (checkSCP(a[i]))
			{
				max = a[i];
				dem ++;	
			}	
		}
		
		if (checkSCP(a[i]))
		{
			if (a[i] > max)
				max = a[i];
		}
			
	}
	if (dem == 0)
	{
		cout << "Day khong co so chinh phuong!";
	}
	else cout << "So chinh phuong lon nhat la: " << max;
}


int main()
{
	int n , a[100];
	nhap(a , n);
	cout << endl;
	xuat(a , n);
	cout << endl;
	SCP(a , n);
	
	return 0;
}
