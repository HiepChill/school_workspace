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
		node *u;
		u = list.head;
		while(u->next != NULL)
			u = u->next;
		u->next = v;
	}
}
void xoacuoi(List &list)
{
	if (list.head == NULL)
	{}
	else
	{
		node *u;
		u = list.head;
		while(u->next != NULL)
			u = u->next;
		u->next = NULL;
	}
}
	
void nhap(List &list)
{
	double n;
	do
	{
		cout<<"Nhap phan tu: ";
		cin>>n;
		themcuoi(list,n);
	}
	while(n!=0);
	xoacuoi(list);
}

int in(List list)
{
	int dem = 0;
	cout<<"In danh sach:";
	node *v;
	v = list.head;
	while(v!=NULL)
	{
		cout<<" "<<v->elem;
		v = v->next;
		dem++;
	}
	return dem;
}

void themx(List &list)
{
	double x;
	cout<<"\nCho x = ";
	cin>>x;
	cout<<"Hay them x vao dau va cuoi danh sach:\n";
	themdau(list,x);
	themcuoi(list,x);
	int dem = in(list);
	cout<<"\nDo dai cua DS = "<<dem;
}

int main()
{
	List list;
	list.head = NULL;
	nhap(list);
	cout<<endl;
	in(list);
	themx(list);
	return 0;
}
