#include<iostream>
using namespace std;

int main()
{
	int n , tong = 0;
	cout << "N = ";
	cin >> n;
	for (int i = 0 ; i <= n ; i ++)
	{
		tong += (i - 1) * i * (i + 1);
	}
	cout << "A = " << tong;
	return 0;
}
