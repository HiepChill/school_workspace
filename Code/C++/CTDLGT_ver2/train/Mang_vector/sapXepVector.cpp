#include<iostream>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n , a;
	do {
		cout << "Nhap n = ";
		cin >> n;
	} while (n <= 0 || n >= 20);
	
	vector<int> v;
	for (int i = 0 ; i < n ; i ++)
	{
		cout << "So thu " << i + 1 << ": ";
		cin >> a;
		v.push_back(a);
	}
	
	sort(v.begin() , v.end() , greater<int>());
	
	cout << "In day so:";
	for (auto i : v)
	{
		cout << " " << i;
	}
	
	
	
}
