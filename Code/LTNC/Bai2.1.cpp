#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x;
	cout << "Nhap x = ";
	cin >> x;
	float kq = (1 + sqrt (x)) / (x - 3);
	if(x != 3 && x >= 0)
	{
		cout << "Ket qua: " << kq;
	}
	else
	{
		cout << "Bieu thuc khong xac dinh";
	}
}
