#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	int n , j;
	do {
		cout << "N = ";
		cin >> n;
		cin.ignore();
	} while (n <= 0 || n >= 10);
	
	string a[n];
	for (int i = 0 ; i < n ; i++)
	{
		cout << "Ho ten thu " << i + 1 << ": ";
		getline (cin , a[i]);
	}
	
	int min = a[0].length();
	for (int i = 0 ; i < n ; i++)
	{
		if (a[i].length() < min)
		{
			min = a[i].length();
			j = i;
		}
	}
	
	cout << "Ho ten ngan nhat (dau tien): " << a[j];
}
