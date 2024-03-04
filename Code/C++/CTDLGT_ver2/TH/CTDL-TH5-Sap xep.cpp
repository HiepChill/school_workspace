// Thuc hanh sap xep (danh cho giang vien)

#include <iostream>
#include <iomanip> // De can chinh viec in an tren man hinh
#include <vector>
#include <string>

using namespace std;

// Dao gia tri cua hai bien x va y (dung trong sap xep chon va noi bot).
template <typename T>
void doiCho(T & x, T & y)
{
	T temp = x;
	x = y;
	y = temp;
}

// Sap xep day xau a tang dan dung thuat toan sap xep chon.
void sapXep(vector<string> & a)
{
	for (int i = 0; i < a.size() - 1; i++)
	{
        int vtmin = i; // Vi tri cua min
        for (int j = i + 1; j < a.size(); j++)
            if (a[vtmin] > a[j])
                vtmin = j; // Cap nhat vi tri cua min
        if (vtmin != i)
			doiCho(a[vtmin], a[i]); // Doi cho min va phan tu dau tien
    }
}

// Sap xep day xau b theo thu tu giam dan cua cac gia tri (so lan xuat hien) trong day f.
void sapXepGiam(vector<string> & b, vector<int> & f)
{
    for (int i = 0; i < f.size() - 1; i++)
	{
        int vtmax = i; // Vi tri cua max
        for (int j = i + 1; j < f.size(); j++)
            if (f[vtmax] < f[j])
                vtmax = j; // Cap nhat vi tri cua max
        if (vtmax != i)
		{
            doiCho(f[vtmax], f[i]); // Doi cho max va phan tu dau tien trong day f
            doiCho(b[vtmax], b[i]); // Doi cho hai phan tu tuong ung trong day b
        }
    }
}

int main()
{
	// Khai bao cac day a, b, f
	vector<string> a;
	vector<string> b;
	vector<int> f;
	
	// So xau se nhap tu ban phim
	int n;
	
	cout << "Nhap so xau: ";
	cin >> n;
	cin.ignore(); // Xoa dau xuong dong trong vung dem ban phim
		
	// Dat kich thuoc vector de chua duoc n xau se nhap
	a.resize(n);
	
	for (int i = 0; i < n; i++)
	{
		cout << "Xau " << i + 1 << ": ";
		getline(cin, a[i]);
	}
	
	// Sap xep day xau sau khi nhap tu ban phim
	sapXep(a);
	
	// Them phan tu dau tien vao day b va f
	b.push_back(a[0]);
	f.push_back(1); // Vi nhin thay a[0] lan dau tien nen so lan xuat hien cua no bang 1
	
	// Quet qua cac phan tu con lai trong day a
	for (int i = 1; i < n; i++)
	{
		if (a[i] == b[b.size() - 1]) // Neu trung voi phan tu o cuoi day b
			f[f.size() - 1]++;       // thi tang so lan xuat hien len 1.
		else
		{
			b.push_back(a[i]); // Gap xau moi thi them vao cuoi day b
			f.push_back(1);    // So lan xuat hien tuong ung (cho den luc nay) la 1
		}
	}
	
	// Sap xep day b theo thu tu giam dan cua cac gia tri (so lan xuat hien) trong day f
	sapXepGiam(b, f);
	
	// In ket qua len man hinh
	cout << left; // Can le trai khi in
	for (int i = 0; i < b.size(); i++)
		cout << setw(15) << b[i] << " " << f[i] << endl; // In moi xau trong 15 vi tri
	
	return 0;
}
