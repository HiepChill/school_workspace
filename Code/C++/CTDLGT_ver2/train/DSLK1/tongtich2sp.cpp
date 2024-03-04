#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

struct SP
{
	double pt , pa;
};

void TongSP (SP a , SP b)
{
	SP c;
	c.pt = a.pt + b.pt;
	c.pa = a.pa + b.pa;
	cout << "z1 + z2 = " << c.pt << " + " << c.pa << "i";
}

void TichSP (SP a , SP b)
{
	SP c;         //(2 + 1i) * (1 + 2i) = 2 + 4i + 1i + 2i^2
	c.pt = a.pt * b.pt + (a.pa * b.pa) * (-1);
	c.pa = a.pt * b.pa + a.pa * b.pt;
	cout << "z1 * z2 = " << c.pt << " + " << c.pa << "i";
}

int main()
{
	SP a , b;
	cout << "Cho so phuc z1:" << endl;
	cout << "Phan thuc: "; cin >> a.pt;
	cout << "Phan ao: "; cin >> a.pa;
	cout << "Cho so phuc z2:" << endl;
	cout << "Phan thuc: "; cin >> b.pt;
	cout << "Phan ao: "; cin >> b.pa;
	TongSP (a , b);
	cout << endl;
	TichSP (a , b);
}
