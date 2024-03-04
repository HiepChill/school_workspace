#include <iostream>
using namespace std;

struct SV
{
	string masv, ten;
	int nam;
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

void themdau(List &list, SV e)
{
	node *v = new node;
	v->elem = e;
	if (list.head == NULL)
		list.head = v;
	else 
	{
		v->next = list.head;
		list.head = v;
	}
}

void themcuoi(List &list, SV e)
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

void nhapSV(SV &e)
{
	cout<<"Nhap MaSV: ";
	getline(cin,e.masv);
	if (e.masv == "");
	else
	{
		cout<<"Nhap ten: ";
		getline(cin,e.ten);
		cout<<"Nam sinh: ";
		cin>>e.nam;
		cin.ignore();
	}
}

void nhap(List &list)
{
	SV e;
	do
	{
		nhapSV(e);
		if (e.masv == "") break;
		themcuoi(list,e);
	}
	while(true);
}

void xuatSV(SV e)
{
	cout<<e.masv<<"\t"<<e.ten<<"\t"<<e.nam<<endl;
}

void xuat(List list)
{
	cout<<"Hien thi danh sach:\n";
	node *p = list.head;
	while(p != NULL)
	{
		xuatSV(p->elem);
		p = p->next;
	}
}

void themx(List list)
{
	SV x;
	cout<<"Cho SV can them vao dau DS:\n";
	cout<<"MaSV: ";
	getline(cin, x.masv);
	cout<<"Ten: ";
	getline(cin, x.ten);
	cout<<"Nam sinh: ";
	cin>>x.nam;
	themdau(list,x);
	xuat(list);
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
