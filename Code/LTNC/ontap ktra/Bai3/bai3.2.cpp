#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool CP(int n)
{
	if (sqrt(n) == floor(sqrt(n)))
		return true;
	else 
		return false;
}

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
		v.insert(v.begin() , a);
	}
	
	cout << "Dao nguoc day so:";
	for (auto i : v)
	{
		cout << " " << i;
	}
	cout << endl;
	
	int dem = 0;
	for (auto i : v)
	{
		if (CP(i))
			dem ++;
	}
	cout << "Day co " << dem << " so chinh phuong." << endl;
	
	int tong = 0;
	for (auto i : v)
	{
		if (CP(i))
			tong += i;
	}
	cout << "Tong cac so chinh phuong S = " << tong;
	
	
	
	
}
