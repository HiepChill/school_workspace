#include <iostream>
using namespace std;

struct SV
{
	string masv, ten;
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

void nhapSV(SV &e)
{
	cin.ignore();
	cout<<"Nhap Ma SV: ";
	getline(cin, e.masv);
	cout<<"Nhap ten SV: ";
	getline(cin,e.ten);
	cout<<"Diem: "; 
	cin>>e.diem;
}

void xuatSV(SV &e)
{
	cout<<e.masv<<"\t"<<e.ten<<"\t"<<e.diem<<endl;
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
		while(p->next != NULL)
			p = p->next;
		p->next = v;
	}
}

void nhap(List &list)
{
	int n;
	cout<<"Cho so phan tu n = ";
	cin>>n;
	SV x;
	for (int i=0; i<n; i++)
	{
		nhapSV(x);
		themcuoi(list,x);
	}
}

void xuat(List list)
{
	cout<<"In danh sach:\n";
	node *p = list.head;
	while(p!= NULL)
	{
		xuatSV(p->elem);
		p = p->next;
	}
}

void themmoi(List &list)
{
	cout<<"Cho thong tin 1 SV:\n";
	SV x;
	cin.ignore();
	cout<<"MaSV: "; 
	getline(cin,x.masv);
	cout<<"Ten: ";
	getline(cin,x.ten);
	cout<<"Diem: ";
	cin>>x.diem;
	if (list.head == NULL)
	{
		themcuoi(list,x);
		xuat(list);
	}
	else 
	{
		node *v = new node;
		v->elem = x;
		v->next = list.head->next;
		list.head->next = v;
		cout<<"Hay them x vao vi tri thu 2!\n";
		xuat(list);
	}
}

int main()
{
	List list;
	list.head = NULL;
	nhap(list);
	xuat(list);
	themmoi(list);
	return 0;
}
