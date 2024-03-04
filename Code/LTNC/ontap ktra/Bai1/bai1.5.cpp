#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double e , max;
	int n;
	cout << "Sai so e = ";
	cin >> e;
	for (double i = 1.0 / e - 1 ; i <= 1.0 / e ; i++)
	{
		if (i >= max)
			max = i;
	}
	n = floor(max);
	if (e <= 0 || e >= 1) cout << "e khong thoa man!";
	else {
		double tong = 0;
		for (int i = 1 ; i <= n ; i++)
		{
			tong += 1.0 / i;
		}
		cout << "Tong S = " << tong;
	}
}
