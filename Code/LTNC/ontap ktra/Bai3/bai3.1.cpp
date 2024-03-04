#include<iostream>
#include<vector>
using namespace std;

//struct node
//{
//	int elem;
//	node *next;
//};
//
//struct List
//{
//	node *head;
//};
//
//void themdau(List &list, int e)
//{
//	node *v = new node;
//	v->elem = e;
//	v->next = NULL;
//	if (list.head == NULL)
//		list.head = v;
//	else
//	{
//		v->next = list.head;
//		list.head = v;
//	}
//}
//
//void themcuoi(List &list, int e)
//{
//	node *v = new node;
//	v->elem = e;
//	v->next = NULL;
//	if (list.head == NULL)
//		list.head = v;
//	else
//	{
//		node *u;
//		u = list.head;
//		while(u->next != NULL)
//			u = u->next;
//		u->next = v;
//	}
//}

int main()
{
//	List list;
//	list.head = NULL;
//	int n , a;
//	do {
//		cout << "Nhap n = "; cin >> n;
//	} while (n <= 0 || n >= 50);
//	
//	for (int i = 0 ; i < n ; i ++)
//	{
//		cout << "So thu " << i + 1 << ": ";
//		cin >> a;
//		themcuoi(list , a);
//	}
//	
//	cout << "Cho x = ";
//	cin >> a;
//	themdau(list , a);
//	
//	node *p = list.head;
//	cout << "Day so:";
//	while(p != NULL)
//	{
//		cout << " " << p->elem;
//		p = p->next;
//	}
	vector<int> v;
	int n , a;
	do {
		cout << "Nhap n = "; cin >> n;
	} while (n <= 0 || n >= 50);
	
	for (int i = 0 ; i < n ; i ++)
	{
		cout << "So thu " << i + 1 << ": ";
		cin >> a;
		v.push_back(a);
	}
	
	cout << "Cho x = ";
	cin >> a;
	v.insert(v.begin() , a);
	
	cout << "Day so:";
	for (auto i : v)
	{
		cout << " " << i;
	}
	
}
