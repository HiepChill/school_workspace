#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "N = "; cin >> n;
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
	{
		cout << n << " la nam nhuan";
	}
	else
	{
		cout << n << " khong phai nam nhuan";
	}
}
