#include <iostream>
using namespace std;

struct SV
{
	string msv , ten;
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

void them(List &list, SV e)
{
	node *v = new node;
	v->elem = e;
	v->next = NULL;
	if (list.head == NULL)
		list.head = v;
	else 
	{
		node *p = list.head;		
		p = p->next;
		p->next = v;
	}
}

void nhapSV(SV &e)
{
	cout<<"Nhap MSV: ";
	cin>>e.msv;
	cin.ignore();
	cout<<"Nhap ten: ";
	getline(cin,e.ten);
	cout<<"Diem: ";
	cin>>e.diem;
}

void xuatSV(SV e)
{
	cout<<e.msv<<"\t"<<e.ten<<"\t"<<e.diem<<endl;
}

int main()
{
	List list;
	list.head = NULL;
	int n;
	cout<<"Cho n = ";
	cin>>n;
	SV e;
	for (int i=0; i<n; i++)
	{
		nhapSV(e);
		them(list,e);
	}
	
	cout<<"Hien thi danh sach:\n";
	node *p = list.head;
	while(p!= NULL)
	{
		xuatSV(p->elem);
		p = p->next;
	}
	
	cout << "Cho thong tin 1 SV" << endl;
	nhapSV(e);
	them(list , e);
	
	cout<<"Hien thi danh sach:\n";
	while(p!= NULL)
	{
		xuatSV(p->elem);
		p = p->next;
	}
}

