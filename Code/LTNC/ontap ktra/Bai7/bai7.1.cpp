#include<iostream>
using namespace std;

struct Node 
{
	double elem;
	Node *next;
};

struct List
{
	Node *head;
};

void AddFront (List &list , double e)
{
	Node *v = new Node;
	v->elem = e;
	v->next = list.head;
	list.head = v;
}

void AddBack (List &list , double e)
{
	Node *v = new Node;
	v->elem = e;
	v->next = list.head;
	if (list.head == NULL)
		list.head = v;
	else {
		Node *u = new Node;
		u = list.head;
		while (u->next != NULL)
			u = u->next;
		u->next = v;
	}
}

void DeleteBack (List &list)
{
	if (list.head == NULL)
	{
	}
	else {
		Node *u;
		u = list.head;
		while (u != NULL)
			u = u->next;
		u->next = NULL;
	}
}

int main()
{
	List list;
	list.head = NULL;
	double a;
	
	do {
		cout << "Nhap phan tu: ";
		cin >> a;
		AddBack(list , a);
	} while (a != 0);
	
	cout << "In danh sach:";
	Node *p = new Node;
	int dem = 0;
	p = list.head;
	while (p != NULL)
	{
		cout << " " << p->elem;
		p = p->next;
		dem ++;
	}
	
	cout << endl;
	
	cout << "Cho x = ";
	cin >> a;
	AddFront(list , a);
	AddBack(list , a);
	
	cout << "Hay them x vao dau va cuoi danh sach:" << endl;
	cout << "In danh sach:";
	while (p != NULL)
	{
		cout << " " << p->elem;
		p = p->next;
	}
	
	cout << endl;
	
	cout << "Do dai cua DS = " << dem;
}
