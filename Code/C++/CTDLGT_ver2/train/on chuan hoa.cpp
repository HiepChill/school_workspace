#include<iostream>
#include<string>
using namespace std;

void chuanhoa (string &w)
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

int main()
{
	string w;
	cout << "Nhap xau: ";
	getline(cin , w);
	chuanhoa(w);
	cout << w;
}
