#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int n;
	double x;
	cout << "n = ";
	cin >> n;
	cout << "x = ";
	cin >> x;
	if (n <= 1 || n >= 20) cout << "n khong thoa man!";
	else {
		double tong = 0;
		for (int i = 2 ; i <= n ; i ++)
		{
			tong += pow(x , i - 1) / i;
		}
		cout << "Tong S = " << tong + 1;
	}
	
}
