#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

string ChuanHoa(string w)
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
	
	return w;
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
	string s;
	cout << "Nhap xau S:";
	getline (cin , s);
	string w = ChuanHoa(s);
	cout << "So tu cua S:" << demTu(w) << endl;
	for (int i = 0 ; i < s.size() ; i++)
	{
		if (isdigit(s[i]))
		{
			s.erase(i , 1);
			i -= 1;
		}
	}
	
	cout << "Xau S sau khi xoa:" << s;
}
