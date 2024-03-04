#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool CP (int n)
{
	if (sqrt (n) == floor (sqrt (n)))
		return true;
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
	
	int dem = 0 , tong = 0;
	
	cout << "Dao nguoc day so:";
	for (auto i : v)
	{
		
		cout << " " << i;
		if (CP (i))
		{
			tong += i;
			dem ++;
		}
	}
	cout << endl;
	cout << "Day so co " << dem << " so chinh phuong." << endl;
	cout << "Tong cac so chinh phuong S = " << tong;
	
}
