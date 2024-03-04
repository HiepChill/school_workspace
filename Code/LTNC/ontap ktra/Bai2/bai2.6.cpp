#include<iostream>
using namespace std;

int F (int n)
{
	if (n == 1 || n == 2) return 1;
	if (n == 3) return 3;
	if (n >= 3) return 2 * F(n - 1) + F(n - 2);
}

int main()
{
	int n;
	
	while(true)
	{
		cout << "N = ";
		cin >>n;
		if (n <= 5 || n > 20) 
			cout << "Moi nhap lai so lieu!" << endl;
		else 
			break;
	}
	
	cout << "So hang thu " << n << " la: " << F(n);
	
	return 0;
}
