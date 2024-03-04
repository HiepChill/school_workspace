#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

struct PS
{
	int tu , mau;
};

int UCLN (int a ,int b)
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

int main()
{
	PS a;
	cout << "Cho phan so a:" << endl;
	cout << "Tu: "; cin >> a.tu;
	cout << "Mau: "; cin >> a.mau;
	
	if (a.mau == 0) cout << "Phan so khong hop le!";
	else {
		if (a.tu == 0)
		{
			a.mau = 1;
			cout << "Chuan hoa phan so: " << a.tu << "/" << a.mau;
		}
		else {
			if (a.mau < 0)
			{
				a.tu = -a.tu;
				a.mau = -a.mau;
			}
			int ucln = UCLN(abs(a.tu) , abs(a.mau));
			cout << "Chuan hoa phan so: " << a.tu / ucln << "/" << a.mau / ucln;
		}
	}
}
