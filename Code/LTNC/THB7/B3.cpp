#include <iostream>
using namespace std;

struct node
{
	double elem;
	node *next;
};

struct List
{
	node *head;
};

void themdau(List &list, double e)
{
	node *v = new node;
	v->elem = e;
	v->next = NULL;
	if (list.head == NULL)
		list.head = v;
	else
	{
		v->next = list.head;
		list.head = v;
	}
}

void themcuoi(List &list, double e)
{
	node *v = new node;
	v->elem = e;
	v->next = NULL;
	if (list.head == NULL)
		list.head = v;
	else
	{
		node *p = list.head;
		while(p->next != NULL)
			p = p->next;
		p->next = v;
	}
}

void xoadau(List &list)
{
	if (list.head == NULL) {}
	else
	{
		node *old = list.head;
		list.head = list.head->next;
		delete old;
	}
}

void xoacuoi(List &list)
{
	if (list.head == NULL) {}
	else
	{
		node *p = list.head;
		while(p->next->next != NULL)
			p = p->next;
		p->next = NULL;
	}
}

void nhap(List &list)
{
	int n;
	do
	{
		cout<<"Cho n = ";
		cin>>n;
	}
	while(n>10 || n<5);
	double x;
	int i = 0;
	while(i<n)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>x;
		themcuoi(list,x);
		i++;
	}
}

void xuat(List list)
{
	cout<<"Hien thi danh sach:";
	node *p = list.head;
	while(p!= NULL)
	{
		cout<<" "<<p->elem;
		p = p->next;
	}
}

void themx(List &list)
{
	double x;
	cout<<"\nCho x = "; cin>>x;
	cout<<"Hay them x vao dau va cuoi danh sach!\n";
	themdau(list,x);
	themcuoi(list,x);
	xuat(list);
}

void xoa(List &list)
{
	cout<<"\nHay xoa phan tu o dau va cuoi danh sach!\n";
	xoadau(list);
	xoacuoi(list);
	xuat(list);
	cout<<endl;
}

int main()
{
	List list;
	list.head = NULL;
	nhap(list);
	xuat(list);
	themx(list);
	xoa(list);
	return 0;
}
