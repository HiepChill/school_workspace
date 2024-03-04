#include<iostream>
using namespace std;

int Fibo (int n)
{
	if (n == 1) return 0;
	if (n == 2) return 1;
	if (n > 2) return Fibo (n - 1) + Fibo (n - 2);
}

int main()
{
	int n;
	do {
		cout << "N = ";
		cin >> n;
	} while (n <= 0 || n >= 20);
	
	cout << "So Fibonacci thu " << n << " la: " << Fibo (n);
}
