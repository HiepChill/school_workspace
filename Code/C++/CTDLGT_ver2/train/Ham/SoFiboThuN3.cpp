#include<iostream>
#include<cmath>
using namespace std;

int Fibo (int n)
{
	if (n == 1 || n == 2) return 1;
	if (n > 2) return Fibo (n - 1) + Fibo (n - 2);
}

int main()
{
	int n;
	cout << "N = ";
	cin >> n;
	cout << "So Fibonacci thu " << abs(n) << " la: " << Fibo (abs(n));
}
