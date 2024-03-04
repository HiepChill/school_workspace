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

void xoacuoi(List &list)
{
	if (list.head == NULL) {}
	else if (list.head->next == NULL)
	{
		list.head == NULL;
	}
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
		cout<<"Cho so phan tu n = ";
		cin>>n;
	}
	while (n<=4);
	double x; int i=0;
	while (i<n)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>x;
		themcuoi(list,x);
		i++;
	}
}

int xuat(List &list)
{
	int dem = 0;
	cout<<"\nHien thi danh sach:";
	node *p = list.head;
	while(p != NULL)
	{
		cout<<" "<<p->elem;
		p = p->next;
		dem ++;
	}
	return dem;
}

void themx(List &list)
{
	double x;
	cout<<"\nCho x = ";
	cin>>x;
	cout<<"Hay them x vao dau va cuoi danh sach.";
	themdau(list,x);
	themcuoi(list,x);
	xuat(list);
}

void xoax(List &list)
{
	cout<<"\nHay xoa o cuoi danh sach:";
	xoacuoi(list);
	int dem = xuat(list);
	cout<<"\nDo dai cua DS = "<<dem;
}

int main()
{
	List list;
	list.head = NULL;
	nhap(list);	
	xuat(list);
	themx(list);
	xoax(list);
	return 0;
}

