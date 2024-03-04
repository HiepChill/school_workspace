#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;

bool SNT (int n)
{
	if (n < 2) return false;
	for (int i = 2 ; i <= sqrt(n) ; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	do {
		cout << "Nhap n = ";
		cin >> n;
	} while	(n <= 0 || n >= 10);
	
	int dem = 0 , a[n][n];
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			cout << "A[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
	
	cout << "Ma tran A:" << endl;
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			cout << " " << a[i][j];
		}
		cout << endl;
	}
	
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			if (SNT(a[i][j]))
				dem ++;
		}
	}
	cout << "Co " << dem << " so nguyen to!";
}
