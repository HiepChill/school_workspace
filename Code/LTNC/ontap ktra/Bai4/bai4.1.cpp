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
		
	int max_vl = a[0][0];
	int min_vl = a[0][0];
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			if (a[i][j] > max_vl)
			{
				max_vl = a[i][j];
			}
			if (a[i][j] < min_vl)
			{
				min_vl = a[i][j];
			}
			if (a[i][j] % 3 == 0)
			{
				dem ++;
			}
		}
	}
	
	cout << "Min: " << min_vl << endl;
	cout << "Max: " << max_vl << endl;
	cout << "So chia het cho 3: " << dem;
	return 0;
}
