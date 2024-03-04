#include<iostream>
using namespace std;

struct SV {
	string msv , ten;
};

struct Node {
	SV elem;
	Node *next;
};

struct List {
	Node *head;
};

void themdau(List &list , SV &e)
{
	Node *p = new Node;
	p->elem = e;
	p->next = NULL;
	if (list.head = NULL)
		list.head = p;
	else {
		p->next = list.head;
		list.head = p;
	}
}

void themcuoi(List &list , SV &e)
{
	Node *v = new Node;
	v->elem = e;
	v->next = NULL;
	if (list.head == NULL)
		list.head = v;
	else
	{
		Node *p = list.head;
		while (p->next != NULL)
			p = p->next;
		p->next = v;
	}
}

void nhap(SV &e)
{
	cin.ignore();
	cout << "Nhap ma sinh vien: ";
	getline(cin , e.msv);
	cout << "Nhap ten sinh vien: ";
	getline(cin , e.ten);
}

void xuat(SV e)
{
	cout << e.msv << "\t" << e.ten << endl;
}

int main()
{
	int n;
	List list;
	list.head = NULL;
	SV a;
	do {
		cout << "Nhap so sinh vien: ";
		cin >> n;
	} while (n <= 0 || n >= 10);
	
	for (int i = 0 ; i < n ; i ++)
	{
		cout << "Sinh vien " << i + 1 << ":" <<endl;
		nhap(a);
		themcuoi(list , a);
	}
	
	Node *p = list.head;
	
	
	cout << "Danh sach sinh vien:" << endl;
	while (p != NULL)
	{
		xuat(p->elem);
		p = p->next;
	}
	
	cout << "Nhap them sinh vien: " <<endl;
	nhap(a);
	themdau(list , a);
	
	Node *q = list.head;
	cout << "Danh sach sinh vien:" << endl;
	while (q != NULL)
	{
		xuat(q->elem);
		q = q->next;
	}
	
	
	
	
	
	
	
	
	
}
