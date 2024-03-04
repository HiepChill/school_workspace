#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a , b , c , x , y;
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	cout << "C = "; cin >> c;
	x = max(a , b);
	y = min(a , b);
	cout << "X = " << a + b + c - max(x , c) - min(y , c);
}
