#include <iostream>
#include <string>
using namespace std;

int main()
{
	string w;
	cout<<"Nhap W = ";
	getline(cin,w);
	for (int i=0; i<w.size(); i++)
	{
		if (isdigit(w[i]))
		{
			w.erase(i,1);
			i-=1;
		}
			
	}
	cout<<"W sau khi xoa cac chu so = "<<w;
	return 0;
}
