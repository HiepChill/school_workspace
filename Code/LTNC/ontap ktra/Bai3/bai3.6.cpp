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
	} while (n <= 0 || n >= 100);
	
	double a;
	
	vector<double> v;
	
	for (int i = 0 ; i < n ; i ++)
	{
		cout << "A[" << i + 1 << "] = ";
		cin >> a;
		v.push_back(a);
	}
	cout << "Cho so x = ";
	cin >> a;
	v.push_back(a);
	
	cout << "Day so:";
	for (auto i : v)
	{
		cout << " " << i;
	}
	cout << endl;
	
	sort(v.begin() , v.end() , greater<double>());
	cout << "Day sap xep:";
	for (auto i : v)
	{
		cout << " " << i;
	}
}
