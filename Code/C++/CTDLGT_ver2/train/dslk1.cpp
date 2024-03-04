#include<iostream>
using namespace std;

struct SV
{
	string ten;
	int luong , tuoi;
};

struct Node
{
	SV elem;
	Node *next;
};

struct List
{
	Node *head;
};

void nhapSV(SV &e)
{
	cout << "Ho va ten: ";
	cin.ignore();
	getline(cin , e.ten);
	cout << "Tuoi: ";
	cin >> e.tuoi;
	cout << "Luong: ";
	cin >> e.luong;
}

void xuat(SV &e)
{
	cout << "Ho va ten: " << e.ten << "\t" << "Tuoi: " << e.tuoi << "\t" << "Luong: " << e.luong << endl;
}

void themdau(List &list , SV e)
{
	Node *v = new Node;
	v->elem = e;
	v->next = NULL;
	if (list.head == NULL)
		list.head = v;
	else {
		v->next = list.head;
		list.head = v;
	}
}

void themcuoi(List &list , SV e)
{
	Node *v = new Node;
	v->elem = e;
	v->next = NULL;
	if (list.head == NULL)
		list.head = v;
	else {
		Node *p = list.head;
		while (p->next != NULL)
			p = p->next;
		p->next = v;
	}
}


int main()
{
	List list;
	list.head = NULL;
	SV e;
	int n;
	cout << "Nhap so sinh vien: ";
	cin >> n;
	for (int i = 0 ; i < n ; i++)
	{
		cout << "Sinh vien thu " << i + 1 << ": " << endl;
		nhapSV(e);
		themcuoi(list , e);
	}
	
	Node *p;
	p = list.head;
	cout << "Danh sach sinh vien: "<< endl;
	if (p != NULL)
	{
		cout << xuat(p->elem) << " ";
		p = p->next;
	}
	
	
}
