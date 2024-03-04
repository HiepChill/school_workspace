#include<iostream>
using namespace std;

struct SV
{
	string ten , masv;
	int ns;
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

void themdau(List &list , SV e)
{
	node *v = new node;
	v->elem = e;
	v->next = NULL;
	if (list.head == NULL)
		list.head = v;
	else {
		v->next = list.head;
		list.head = v;
	}
}


void xuat(SV e)
{
	cout << e.masv << "\t" << e.ten << "\t" << e.ns << endl;
}

int main()
{
	List list;
	list.head = NULL;
	SV e;
	
	while (true)
	{
		cout << "Nhap MaSV: ";
		cin.ignore();
		getline(cin , e.masv);
		if (e.masv == "") break;
		cout << "Nhap ten: ";
		getline(cin , e.ten);
		cout << "Nam sinh: ";
		cin >> e.ns;
		themcuoi(list , e);
	}
	
	cout << "Hien thi danh sach:" << endl;
	node *p = list.head;
	while(p != NULL)
	{
		xuat(p->elem);
		p = p->next;
	}
	
	cout << "Cho SV can them vao dau DS:" << endl;
	cout << "MaSV: ";
	cin.ignore();
	getline(cin , e.masv);
	cout << "Ten: ";
	getline(cin , e.ten);
	cout << "Nam sinh: ";
	cin >> e.ns;
	themdau(list , e);
	
	cout << "Hien thi danh sach:" << endl;
	node *v = list.head;
	while(v != NULL)
	{
		xuat(v->elem);
		v = v->next;
	}
	
}













