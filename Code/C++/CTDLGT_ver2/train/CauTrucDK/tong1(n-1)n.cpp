#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "N = ";
	cin >> n;
	if (n <= 2 || n >= 100) cout << "n khong thoa man!";
	else {
		double tong = 0;
		for (int i = 2 ; i <= n ; i ++)
		{
			tong += 1.0 / ((i - 1) * i);
		}
		cout << "Tong S = " << tong + 1;
	}
	
}
