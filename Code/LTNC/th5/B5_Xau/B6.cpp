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
	int n;
	cout<<"N = ";
	cin>>n;
	string a[n];
	cin.ignore();
	for (int i=0; i<n; i++)
	{
		cout<<"Ten ngon ngu lap trinh thu "<<i+1<<": ";
		getline(cin,a[i]);
	}
	for (int i=0; i<n; i++)
	{
		chuanhoa(a[i]);
	}
	string min = a[0];
	for (int i=0; i<n; i++)
	{
		if (a[i].size() <= min.size())
			min = a[i];
	}
	cout<<"Ngon ngu ngan nhat cuoi cung la: "<<min;
	return 0;
}
