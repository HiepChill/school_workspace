#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double e , max , x;
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
		cout << "x = "; cin >> x;
		double tong = 1.0;
		for (int i = 2 ; i <= n ; i++)
		{
			tong += (pow(x , i - 1) / i);
		}
		cout << "Tong S = " << tong;
	}
}
