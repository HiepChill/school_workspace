#include<iostream>
using namespace std;

int main()
{
	int n , tong = 0 , tmp;
	cout << "N = ";
	cin >> n;
	for (int i = 0 ; i < n ; i ++)
	{
		if (tong < n)
		{
			tong += i;
			tmp = i - 1;
		}
	}
	if (tmp < 0)
	{
		tmp = 0;
	}
	
	cout << "m lon nhat = " << tmp;
	return 0;
}
