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

bool nguyento(int n)
{
	if (n==1) return false;
	if (n==2) return true;
	for (int i=2; i<n; i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}

void nhap(List &list)
{
	int n;
	do
	{
		cout<<"Cho n = ";
		cin>>n;
	}
	while (n<10 || n>100);
	for (int i=2; i<=n; i++)
	{
		if(nguyento(i))
			themdau(list,i);
	}
}

void xuat(List list)
{
	cout<<"Hien thi lai danh sach:";
	node *p = list.head;
	while (p != NULL)
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
	if (nguyento(x))
	{
		cout<<"x la so nguyen to. Hay them x vao dau danh sach.\n";
		themdau(list,x);
		xuat(list);
		cout<<endl;
	}
	else 
	{
		cout<<"x khong phai la so nguyen to!\n";
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


