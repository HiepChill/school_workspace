#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "N = "; cin >> n;
	if (n <= 50)
		cout << "So tien phai nop: " << n * 1484;
	else if (n <= 100)
		cout << "So tien phai nop: " << 50 * 1484 + (n - 50) * 1533;
	else if (n <= 200)
		cout << "So tien phai nop: " << 50 * 1484 + 50 * 1533 + (n - 100) * 1786;
	else if (n <= 300)
		cout << "So tien phai nop: " << 50 * 1484 + 50 * 1533 + 50 * 1786 + (n - 150) * 2242;
	else if (n <= 400)
		cout << "So tien phai nop: " << 50 * 1484 + 50 * 1533 + 50 * 1786 + 50 * 2242 + (n - 200) * 2503;
	else
		cout << "So tien phai nop: " << 50 * 1484 + 50 * 1533 + 50 * 1786 + 50 * 2242 + 50 * 2503 + (n - 250) * 2587;
		
}
