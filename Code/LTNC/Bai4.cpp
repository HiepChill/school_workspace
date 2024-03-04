#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	float tong = 0;
	cout << "N = ";
	cin >> n;
	
	for (int i = n ; i > 0 ; i --)
	{
		tong = sqrt(tong + i);
	}
	cout << "F(n) = " << tong;
}
