#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void ChuanHoa(string &w)
{
	while (w[0] == ' ')
		w.erase(0 , 1);
	while (w[w.size() - 1] == ' ')
		w.erase(w.size() - 1 , 1);
	for (int i = 0 ; i < w.size() ; i++)
	{
		if (w[i] == ' ' && w[i + 1] == ' ')
		{
			w.erase(i , 1);
			i -= 1;
		}
	}
}

int demTu (string &w)
{
	int dem = 0;
	for (int i = 0 ; i < w.size() ; i++)
	{
		if (isspace(w[i]))
			dem ++;
	}
	if (dem == w.size()) return 0;
	else return dem + 1;
}

int main()
{
	string w;
	int dem = 0;
	cout << "Nhap xau:";
	getline (cin , w);
	
	if (w.size() == 0) cout << "Xau rong!";
	else {
		ChuanHoa(w);
		cout << "Chuan hoa:" << w << endl;
		cout << "So tu:" << demTu(w);
	}

	
}
