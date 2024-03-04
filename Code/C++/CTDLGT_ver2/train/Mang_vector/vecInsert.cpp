#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n , a;
	do {
		cout << "Nhap n = ";
		cin >> n;
	} while (n <= 0 || n >= 50);
	
	vector<int> v;
	for (int i = 0 ; i < n ; i ++)
	{
		cout << "So thu " << i + 1 << ": ";
		cin >> a;
		v.push_back(a);
	}
	
	cout << "Cho x = ";
	cin >> a;
	v.insert(v.begin() , a);
	
	cout << "Day so:";
	for (int i = 0 ; i < v.size() ; i ++)
	{
		cout << " " << v[i];
	}
}
