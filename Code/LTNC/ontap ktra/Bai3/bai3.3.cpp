#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool CP(int n)
{
	if (sqrt(n) == floor(sqrt(n)))
		return true;
	else 
		return false;
}

int main()
{
	int n , a;
	do {
		cout << "N = ";
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
	cout << endl;
	
	int max , dem = 0;
	for (auto i : v)
	{
		if (dem == 0)
		{
			if (CP(i))
			{
				max = i;
				dem ++;
			}
		}
		
		if (dem != 0)
		{
			if (CP(i))
			{
				if(i > max)
					max = i;
			}
		}
	}
	
	if (dem == 0) cout << "Day khong co so chinh phuong!";
	else cout << "So chinh phuong lon nhat: " << max;
	
	
	
	
}
