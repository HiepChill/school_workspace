#include<iostream>
#include<vector>
using namespace std;

void xuat (vector<int> &vec)
{
	for (int i : vec)
	{
		cout << " " << i;
	}
	cout << endl;
}

int main()
{
	vector<int> vec;
	int a , pos;
	
	
	cout << "----Menu----" << endl;
	cout << "1.Chen du lieu." << endl;
	cout << "2.Xoa phan tu." << endl;
	cout << "3.Hien thi vector theo chieu thuan." << endl;
	cout << "4.Hien thi vector theo chieu nguoc." << endl;
	cout << "0.Dung" << endl;
	while (true)
	{
		int chon;
		cout << "Chon: ";
		cin >> chon;
		if (chon == 0) break;
		switch(chon)
		{
			case 1:
			{
				cout << "Nhap gia tri: ";
				cin >> a;
				cout << "Nhap vi tri chen: ";
				cin >> pos;
				if (pos >= 0 && pos <= vec.size())
				{
					vec.insert(vec.begin() + pos , a);
					cout << "Chen thanh cong!" << endl;
				}
				else cout << "Vi tri chen khong hop le!";
				break;		
			}
			
			case 2:
			{
				cout << "Nhap vi tri can xoa: ";
				cin >> pos;
				if (pos >= 0 && pos <= vec.size())
				{
					vec.erase(vec.begin() + pos);
					cout << "Xoa thanh cong!" << endl;
				}
				else cout << "Vi tri xoa khong hop le!";
				break;
			}
			
			case 3:
			{
				cout << "Day vector theo chieu thuan:";
				xuat(vec);
				break;
			}
			
			case 4:
			{
				cout << "Day vector theo chieu nguoc:";
				vec.erase(vec.begin());
				for (int i = vec.size() ; i >= 0 ; i --)
				{
					cout << " " << vec[i];
				}
				cout << endl;
				break;
			}
			
			default:
			{
				cout << "Chon dung yeu cau!" << endl;
				break;
			}
		}
		
	
	}
}
