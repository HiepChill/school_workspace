#include <iostream>
using namespace std;

struct SV
{
	int SBD;
	string ten;
	double diem;
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
	cout<<"Nhap SBD: ";
	cin>>e.SBD;
	cin.ignore();
	cout<<"Nhap ten: ";
	getline(cin,e.ten);
	cout<<"Diem: ";
	cin>>e.diem;
}

void xuatSV(SV e)
{
	cout<<e.SBD<<"\t"<<e.ten<<"\t"<<e.diem<<endl;
}

void nhap(List &list)
{
	int n;
	cout<<"Cho n = ";
	cin>>n;
	SV e;
	for (int i=0; i<n; i++)
	{
		nhapSV(e);
		themcuoi(list,e);
	}
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

void themx(List &list)
{
	cout<<"Cho SV can them vao cuoi DS:\n";
	SV x;
	cout<<"SBD: ";
	cin>>x.SBD;
	cin.ignore();
	cout<<"Ten: ";
	getline(cin,x.ten);
	cout<<"Diem: ";
	cin>>x.diem;
	themcuoi(list,x);
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
