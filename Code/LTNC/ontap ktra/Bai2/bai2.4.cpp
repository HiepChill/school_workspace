#include<iostream>
#include<cmath>
using namespace std;

int F (int n)
{
	if (n == 1 || n == 2) return 1;
	if (n > 2) return F(n - 1) + F(n - 2);
}

int main()
{
	int n;
	cout << "N = ";
	cin >> n;
	
	cout << "So Fibonacci thu " << abs(n) << " la: " << F(abs(n));
}
