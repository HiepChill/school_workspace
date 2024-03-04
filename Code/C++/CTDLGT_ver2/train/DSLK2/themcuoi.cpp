#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

struct Node
{
	int elem;
	Node *next;
};

struct List
{
	Node *head;
};

void themcuoi(List &list , int e)
{
	Node *v = new Node;
	v->elem = e;
	v->next = NULL;
	if (list.head == NULL)
		list.head = v;
	else {
		Node *u = list.head;
		while (u->next != NULL)
			u = u->next;
		u->next = v;
	}
}

void themdau(List &list , int e)
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
void xoadau(List &list)
{
	if (list.head == NULL) {}
	else
	{
		Node *old = list.head;
		list.head = list.head->next;
		delete old;
	}
}

void xoacuoi(List &list)
{
	if (list.head == NULL) {}
	else
	{
		Node *p = list.head;
		while(p->next->next != NULL)
			p = p->next;
		p->next = NULL;
	}
}

bool SNT (int n)
{
	if (n < 2) return false;
	for (int i = 2 ; i <= sqrt(n) ; i++)
		if (n % i == 0) 
			return false;
	return true;
}

int main ()
{
	List list;
	list.head = NULL;
	int n;
	int a;
//	do {
//		cout << "Cho N = ";
//		cin >> n;
//	} while (n < 0 || n >= 100);
//	
//	for (int i = 0 ; i < n ; i++)
//	{
//		cout << "Phan tu thu " << i + 1 << ": ";
//		cin >> a;
//		themcuoi(list , a);
//	}
	
//	cout << "Danh sach:";
	
//	cout << endl;
//	cout << "Cho x = ";
//	cin >> a;
//	themcuoi(list , a);
//	xoadau(list);
//	xoacuoi(list);
//	Node *v = list.head;
	int tong = 0;
//	while (v != NULL)
//	{
//		if (v->elem % 2 == 0)
//			tong += v->elem;
//		v = v->next;                                               
//	}
//	cout << "Tong chan: " << tong;
//	int dem = 0;
//	Node *p = list.head;
//	while (p != NULL)
//	{
//		cout << " " << p->elem;
//		p = p->next;                                                  
//	}
//	Node *p = list.head;
//	while (p != NULL)
//	{
//		dem++;
//		p = p->next;                                                  
//	}
//	cout << "Do dai: " << dem;

	cout << "Cho n = ";
	cin >> n;
	for (int i = 1 ; i <= n ; i ++)
	{
		if (i % 2 == 0)
			themcuoi(list , i);
	}
	cout << "Hien thi danh sach:";
	Node *p = list.head;
	while (p != NULL)
	{
		cout << " " << p->elem;
		p = p->next;                                                  
	}
	
	cout << "Nhap x = ";
	cin >> a;
	if (SNT(a))
	{
		themdau(list , a);
		cout << "Them x vao dau!";
	}
	else {
		cout << "X ko p la SNT!";
	}

	cout << "Hien thi danh sach:";
	Node *v = list.head;
	while (v != NULL)
	{
		cout << " " << v->elem;
		tong += v->elem;
		v = v->next;                                                  
	}
	cout << "Tong cac phan tu: " << tong;



















}
