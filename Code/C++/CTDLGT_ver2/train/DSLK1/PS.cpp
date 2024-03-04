#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

struct PS
{
	int tu , mau;
};

int UCLN (int a , int b)
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else 
			b -= a;
	}
	return a;
}

void TinhTong (PS a , PS b)
{
	PS c;
	c.tu = a.tu * b.mau + b.tu * a.mau;
	c.mau = a.mau * b.mau;
	if (c.mau < 0)
	{
		c.tu = -c.tu;
		c.mau = -c.mau;
	}
	int ucln = UCLN(abs(c.tu) , abs(c.mau));
	cout << "Tong a + b = " << c.tu / ucln << "/" << c.mau / ucln;
}

int main()
{
	PS a , b;
	cout << "Phan so a:" << endl;
	cout << "Tu: "; cin >> a.tu;
	cout << "Mau: "; cin >> a.mau;
	cout << "Phan so b:" << endl;
	cout << "Tu: "; cin >> b.tu;
	cout << "Mau: "; cin >> b.mau;
	if (a.mau == 0 || b.mau == 0) cout << "Co phan so khong hop le!";
	else {
		TinhTong(a , b);
	}
}
