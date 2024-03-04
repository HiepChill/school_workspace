#include<iostream>
using namespace std;

int C (int k , int n)
{
	if (k == 0 || k == n) return 1;
	return C (k , n - 1) + C (k - 1 , n - 1);
}

int main()
{
	int k , n;
	cout << "n = ";
	cin >> n;
	cout << "k = ";
	cin >> k;
	if (k >= 0 && k <= n)
	{
		cout << "C(" << k << "," << n << ") = " << C (k , n);
	}
	else cout << "So lieu khong hop le!";
}
