#include<iostream>
using namespace std;

struct SV
{
	string ten;
	double diem;
};

struct node
{
	SV elem;
	node *next;
};

struct List
{
	node *head;
};


void themcuoi(List &list , SV e)
{
	node *v = new node;
	v->elem = e;
	v->next = NULL;
	if (list.head == NULL)
		list.head = v;
	else {
		node *u = list.head;
		while (u->next != NULL)
			u = u->next;
		u->next = v;
	}
}

void nhap(SV &e)
{
	cout << "Ho va ten: ";
	cin.ignore();
	getline(cin , e.ten);
	while (true)
	{
		cout << "Diem: ";
		cin >> e.diem;
		if (e.diem < 0 || e.diem > 10) cout << "Nhap lai diem thi!" << endl;
		else break;
	}
}

void xuat(SV e)
{
	cout << e.ten << "\t" << e.diem << endl;
}

int main()
{
	int n;
	List list;
	list.head = NULL;
	SV e;
	do {
		cout << "Cho N = ";
		cin >> n;
	} while (n <= 0 || n >= 100);
	
	for (int i = 0 ; i < n ; i++)
	{
		nhap(e);
		themcuoi(list , e);
	}
	
	cout << "Tong tin sinh vien them vao DS:" << endl;
	nhap(e);
	themcuoi(list , e);
	
	cout << "In lai danh sach:" << endl;
	node *p = list.head;
	while(p != NULL)
	{
		xuat(p->elem);
		p = p->next;
	}
	
}













