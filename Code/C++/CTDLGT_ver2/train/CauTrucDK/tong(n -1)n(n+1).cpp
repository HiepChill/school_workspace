#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "N = ";
	cin >> n;
	if (n <= 2 || n >= 20) cout << "n khong thoa man!";
	else {
		int tong = 0;
		for (int i = 0 ; i <= n ; i ++)
		{
			tong += (i - 1) * i * (i + 1);
		}
		cout << "Tong A = " << tong + 1;
	}
	
}
