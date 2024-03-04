#include <iostream>
#include <string>
using namespace std;

int main()
{
	int p,q;
	string w,s;
	cout<<"Nhap W = ";
	getline(cin,w);
	cout<<"Nhap S = ";
	getline(cin,s);
	cout<<"P = "; cin>>p;
	cout<<"Q = "; cin>>q;
	if (p<= w.size() || q<=w.size())
	{
		if (p<q)
		{
			w.insert(p,s);
			w.insert(q+s.size(),s);
		}
		else
		{
			w.insert(q,s);
			w.insert(p+s.size(),s);
		}
		cout<<"Ket qua: "<<w;
	}
	return 0;
}
