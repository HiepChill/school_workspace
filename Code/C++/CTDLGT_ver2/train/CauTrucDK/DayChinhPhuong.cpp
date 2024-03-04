#include<iostream>
#include<cmath>
using namespace std;

bool CP (int n)
{
	if (sqrt (n) == floor (sqrt (n)))
		return true;
}

int main ()
{
	int n;
	cout << "Nhap N = ";
	cin >> n;
	if (n <= 0) cout << "n khong duong!";
	else {
		cout << "So chinh phuong:";
		for (int i = 0 ; i < n ; i ++)
		{
			if (CP (i))
				cout << " " << i;
		}
	}
	
}
