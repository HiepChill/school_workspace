#include<iostream>
using namespace std;

int Fibo (int n)
{
	if (n == 1 || n == 2) return 1;
	if (n >= 3) return 2 * Fibo (n - 1) + Fibo (n - 2);
}

int main()
{
	int n;
	while (true)
	{
		cout << "N = ";
		cin >> n;
		if (n <= 20 && n > 5) break;
		else cout << "Moi nhap lai so lieu!" << endl;
	}
	
	cout << "So hang thu " << n << " la: " << Fibo (n);
}
