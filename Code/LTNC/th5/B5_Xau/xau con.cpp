#include <iostream>
#include <string>
using namespace std;

void chuanhoa(string &w)
{
	while(w[0] == ' ')
	{
		w.erase(0,1);
	}
	while(w[w.size()-1] == ' ')
		w.erase(w.size()-1,1);
	for (int i=0; i<w.size(); i++)
	{
		if (w[i] == ' ' && w[i+1] == ' ')
		{
			w.erase(i,1);
			i-=1;
		}
	}
}
int main()
{
	string w,s;
	cout<<"Nhap W = ";
	getline(cin,w);
	chuanhoa(w);
	{
		int n = w.size();
		s = w+w+w;
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
	return 0;
}
