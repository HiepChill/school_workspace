#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool CP (int n)
{
	if (sqrt (n) == floor (sqrt (n)))
		return true;
}

int main()
{
	int n , a;
	do {
		cout << "Nhap n = ";
		cin >> n;
	} while (n <= 0 || n >= 20);
	
	vector<int> v;
	for (int i = 0 ; i < n ; i ++)
	{
		cout << "So thu " << i + 1 << ": ";
		cin >> a;
		v.push_back(a);
	}
	
	cout << "In day so:";
	for (auto i : v)
	{
		cout << " " << i;
	}
	
	int dem = 0 , max;
	
	for (auto i : v)
	{
		if (dem == 0)
		{
			if (CP(i))
			{
				dem ++;
				max = i;
			}
		}
		
		if (dem != 0)
		{
			if (CP(i))
				if (i > max)
					max = i;
		}
	}
	
	if (dem == 0) cout << "Day khong co so chinh phuong!";
	else cout << "So chinhs phuong lon nhat la: " << max;
	
}
