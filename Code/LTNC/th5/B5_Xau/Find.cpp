#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s,w;
	cout<<"Nhap xau S: ";
	getline(cin,s);
	cout<<"Nhap xau W: ";
	getline(cin,w);
	if (w.size()>0 && s.size()>0 && s.size()>w.size())
	{
		int check = s.find(w,0);
		if (check != -1)
			cout<<"W xuat hien trong S o vi tri "<<check<<endl;
		else
			cout<<"W khong xuat hien trong S";
	}
	return 0;
}
