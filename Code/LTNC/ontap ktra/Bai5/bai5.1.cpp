#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s , w;
	cout << "Nhap xau S: ";
	getline(cin , s);
	cout << "Nhap xau W: ";
	cin >> w;
	int n = s.find(w , 0);
	if (n != -1) cout << "W xuat hien trong S o vi tri " << n;
	else cout << "W khong xuat hien trong S";
}
