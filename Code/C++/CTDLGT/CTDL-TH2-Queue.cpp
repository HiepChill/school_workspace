
// Thuc hanh hang doi (dung danh sach lien ket don)

#include <iostream>

using namespace std;

// Kieu phan tu
typedef int T;

// Kieu cua cac nut trong danh sach lien ket don
struct Node
{
	T elem;      // Phan tu
	Node * next; // Con tro sang nut tiep theo
};

// Hang doi kieu danh sach lien ket don
struct Queue
{
	Node * front; // Con tro toi nut dau danh sach
	Node * back;  // Con tro toi nut cuoi danh sach
	int size;     // Kich thuoc cua hang doi
};

// Khoi tao hang doi
void queueInit(Queue & q);

// Huy hang doi
void queueDestroy(Queue & q);

// Kiem tra hang doi co dang rong hay khong
bool queueIsEmpty(Queue & q);

// Lay kich thuoc (so phan tu hien co) cua hang doi
int queueGetSize(Queue & q);

// Them phan tu e vao cuoi hang doi
void enqueue(Queue & q, T e);

// Xoa phan tu o dau hang doi va tra ve phan tu do
T dequeue(Queue & q);

// YEU CAU THUC HANH
//   1. Khai bao ham in tat ca cac phan tu trong hang doi len man hinh
//   2. Khai bao ham kiem tra xem mot gia tri x co trong hang doi hay khong
void output(Queue & q);

void check(Queue & q , int x);

// VIET CODE CUA BAN O DAY
// ...

int main()
{
	Queue q;
	queueInit(q);
	
	// YEU CAU THUC HANH
	//   1. Viet code kiem tra hang doi co dang rong hay khong
	//   2. Viet code chen vao hang doi mot so phan tug
	// ...
	if(queueIsEmpty(q) == true) cout << "Hang doi xung rong" << endl;
	else cout << "Hang dang co phan tu" << endl;

	int n;
	int a;
	cout << "Nhap so phan tu can nhap: ";
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		cout << "Nhap phan tu: ";
		cin >> a;
		enqueue(q , a);
	}

	output(q);

	int x;
	cout << "Nhap phan tu can tim: ";
	cin >> x;
	check(q , x);

	int size = q.size;
	for(int i = 0 ; i <= size ; i++)
	{
		dequeue(q);
	}

	if(queueIsEmpty(q) == true) cout << "Hang doi xung rong" << endl;
	else cout << "Hang dang co phan tu" << endl;

	queueDestroy(q);
		
	return 0;
}

void queueInit(Queue & q)
{
	// Ban dau hang doi rong
	q.front = NULL;
	q.back = NULL;
	q.size = 0;
}

void queueDestroy(Queue & q)
{
	while (!queueIsEmpty(q)) // Trong khi hang doi chua rong,
		dequeue(q);          // xoa phan tu nam o dau hang doi.
}

bool queueIsEmpty(Queue & q)
{
	return (q.size == 0);
}

int queueGetSize(Queue & q)
{
	return q.size;
}

void enqueue(Queue & q, T e)
{
	Node * v = new Node;      // Tao nut moi
	v->elem = e;              // Dat phan tu moi vao nut moi
	v->next = NULL;           // Nut moi se tro thanh nut cuoi nen con tro next bang NULL
	
	if (q.size == 0)          // Truong hop danh sach dang rong
		q.front = q.back = v; // Nut moi tro thanh nut duy nhat
	else                      // Truong hop co it nhat mot nut trong danh sach (tuc la ton tai nut cuoi)
	{
		q.back->next = v;     // Lien ket nut cuoi voi nut moi
		q.back = v;           // Nut moi tro thanh nut cuoi
	}
	
	q.size++;                   // Cap nhat kich thuoc
}

T dequeue(Queue & q)
{
	T e = q.front->elem;         // Giu lai phan tu dau de tra ve sau khi xoa
	
	Node * v = q.front;          // Giu lai dia chi cua nut dau
	
	if (q.size == 1)             // Truong hop danh sach dang co mot nut duy nhat
		q.front = q.back = NULL; // Danh sach rong sau khi xoa
	else                         // Truong hop danh sach co tu 2 nut tro len
		q.front = q.front->next; // Nut thu hai (q.front->next) tro thanh nut dau sau khi xoa
	delete v;                    // Xoa nut dau
	
	q.size--;                    // Cap nhat kich thuoc
	
	return e;
}

void output(Queue & q)
{
	for(Node *p = q.front ; p != NULL ; p = p -> next)
	{
		cout << p -> elem << " ";
	}
	cout << endl;
}
void check(Queue & q , int x)
{
	int count = 0;
	for(Node *p = q.front ; p != NULL ; p = p -> next)
	{
		if(x == p -> elem)
		{
			count++;
		}
	}
	if(count != 0) cout << "Co phan tu trong Queue" << endl;
	else cout << "Khong co x trong Queue" << endl;
}
// YEU CAU THUC HANH
//   1. Dinh nghia ham in tat ca cac phan tu trong hang doi len man hinh
//   2. Dinh nghia ham kiem tra xem mot gia tri x co trong hang doi hay khong

// VIET CODE CUA BAN O DAY
// ...

