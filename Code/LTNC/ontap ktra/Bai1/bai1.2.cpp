#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "N = ";
	cin >> n;
	if (n <= 2 || n >= 20) cout << "n khong thoa man!";
	else {
		int tong = 1;
		for (int i = 2 ; i <= n ; i++)
		{
			tong += (i - 1) * i * (i + 1);
		}
		cout << "Tong A = " << tong;
	}
}
