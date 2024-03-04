#include <iostream>
using namespace std;

struct node
{
	int elem;
	node *next;
};

struct List
{
	node *head;
};

void themdau(List &list, int e)
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

void themcuoi(List &list, int e)
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

void nhap(List &list)
{
	int n;
	do
	{
		cout<<"Cho n = ";
		cin>>n;
	}
	while (n<5);
	int x = 0, a;
	while (x<n)
	{
		cout<<"Nhap phan tu: ";
		cin>>a;
		themcuoi(list,a);
		x++;
	}
}

void xuat(List list)
{
	cout<<"In danh sach:";
	node *p = list.head;
	while(p!= NULL)
	{
		cout<<" "<<p->elem;
		p = p->next;
	}
}

void xoacuoi(List &list)
{
	cout<<endl<<"Hay xoa phan tu o cuoi danh sach!";
	node *p = list.head;
	while(p->next->next != NULL)
		p = p->next;
	p->next = NULL;
	cout<<endl;
	xuat(list);
}

void themx(List &list)
{
	int x;
	cout<<"\nCho x = ";
	cin>>x;
	cout<<"Hay them x vao dau danh sach!\n";
	themdau(list,x);
	xuat(list);
}

void insochan(List list)
{
	node *p = list.head;
	cout<<"\nIn so chan trong danh sach:";
	while(p!= NULL)
	{
		if (p->elem % 2 == 0)
			cout<<" "<<p->elem;
		p = p->next;
	}
	cout<<endl;
}

int main()
{
	List list;
	list.head = NULL;
	nhap(list);
	xuat(list);
	xoacuoi(list);
	themx(list);
	insochan(list);
	return 0;
}
	
