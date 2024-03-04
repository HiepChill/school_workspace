#include<iostream>
using namespace std;

int F (int n)
{
	if (n <= 2) return 1;
	return F(n - 1) + F(n - 2);
}

int main()
{
	int n;
	do {
		cout << "N = ";
		cin >> n;
	} while (n <= 0 || n >= 20);
	
	cout << "So Fibonacci thu " << n << " la: " << F(n);
}
