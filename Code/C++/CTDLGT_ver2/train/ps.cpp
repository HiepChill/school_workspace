#include <iostream>
#include <cmath>
using namespace std;

struct PS
{
	int ts,ms;
};

int UCLN(int a, int b)
{
	while(a!=b)
	{
		if (a>b)
			a = a-b;
		else
			b=b-a;
	}
	return a;
}

void chuanhoa(PS &a)
{
	if (a.ts==0) a.ms = 1;
	else
	{
		int ucln = UCLN(abs(a.ts),abs(a.ms));
		a.ts = a.ts/ucln;
		a.ms = a.ms/ucln;
		if (a.ms<0)
		{
			a.ts = -a.ts;
			a.ms = -a.ms;
		}
	}
}

int main()
{
	PS a;
	cout<<"Tu so = ";
	cin>>a.ts;
	cout<<"Mau so = ";
	cin>>a.ms;
	if (a.ms == 0)
		cout<<"Mau so khong hop le!";
	else
	{
		chuanhoa(a);
		cout<<"PS: "<<a.ts<<"/"<<a.ms;
	}
	return 0;
}
	

