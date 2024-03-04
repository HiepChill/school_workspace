#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;

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
			if (a[i][j] % 3 == 0)
				dem ++;
		}
	}
	cout << "So chia het cho 3: " << dem;
}
