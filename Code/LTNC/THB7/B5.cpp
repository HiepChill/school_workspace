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
		while (p->next != NULL)
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
	while(n<20);
	for (int i=1; i<=n; i++)
	{
		if (i%2 ==0)
			themcuoi(list,i);
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
	int x;
	cout<<"\nCho so nguyen x = ";
	cin>>x;
	if (x%2 == 0)
	{
		cout<<"Them x vao dau danh sach!\n";
		themdau(list,x);
		xuat(list);
		cout<<endl;
	}
	else 
	{
		cout<<"Them x vao cuoi danh sach!\n";
		themcuoi(list,x);
		xuat(list);
		cout<<endl;
	}
}

int main()
{
	List list;
	list.head = NULL;
	nhap(list);
	xuat(list);
	themx(list);
	return 0;
}
