#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool SNT (int n)
{
	int dem = 0;
	if (n < 2) return false;
	else {
		for (int i = 2 ; i < n / 2 ; i ++)
		{
			if (n % i == 0)
			{
				dem ++;
			}
		}
		if (dem != 0) return false;
		else return true;
	}
}


int main()
{
	int n , a;
	do {
		cout << "Nhap n = ";
		cin >> n;
	} while (n <= 0 || n >= 100);
	
	vector<int> v;
	
	for (int i = 0 ; i < n ; i ++)
	{
		cout << "So thu " << i + 1 << ": ";
		cin >> a;
		v.push_back(a);
	}
	
	cout << "x = ";
	cin >> a;
	v.push_back(a);
	
	cout << "In day so:";
	for (auto i : v)
	{
		cout << " " << i;
	}
	cout << endl;
	
	int dem = 0;
	for (auto i : v)
	{
		if (SNT(i))
			dem ++;
	}
	cout << "Day co " << dem << " so nguyen to.";
	
}
