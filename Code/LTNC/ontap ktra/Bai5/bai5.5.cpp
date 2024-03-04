#include<iostream>
#include<string>
using namespace std;

int main()
{
	string w , s;
	cout << "Nhap W = ";
	getline(cin , w);
	int n = w.size();
	
	s = w + w + w;
	string a[n];
	int k = 0;
	for (int i=0; i<n; i++)
	{
		a[i] = s.substr(k,3);
		k+=3;
	}
	cout<<"Cac xau con la:"<<endl;
	for (int i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
}
