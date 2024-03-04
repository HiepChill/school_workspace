#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "N = ";
	cin >> n;
	if (n <= 2 || n >= 100) cout << "n khong thoa man!";
	else {
		double tong = 1;
		for (int i = 2 ; i <= n ; i++)
		{
			tong += 1.0 / ((i - 1) * i);
		}
		cout << "Tong S = " << (double)tong;
	}
}
