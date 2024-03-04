
// Thuc hanh ngan xep

#include <iostream>

using namespace std;

typedef int T;

struct Stack
{
	T * theArray;   // Con tro toi mang chua cac phan tu
	int topOfStack;	// Vi tri cua phan tu nam o dinh ngan xep
};

// Ham khoi tao (capacity la dung luong cua ngan xep)
void stackInit(Stack & stack, int capacity = 100);

// Ham huy
void stackDestroy(Stack & stack);

// Kiem tra ngan xep rong
bool stackIsEmpty(Stack & stack);

// Tra ve kich thuoc cua ngan xep (so phan tu hien co)
int stackGetSize(Stack & stack);

// Chen phan tu e vao dinh ngan xep
void stackPush(Stack & stack, T e);

// Xoa phan tu o dinh ngan xep
void stackPop(Stack & stack);

// Tra ve phan tu o dinh ngan xep (nhung khong xoa)
T stackTop(Stack & stack);

// YEU CAU THUC HANH
//   1. Khai bao ham in tat ca cac phan tu trong ngan xep len man hinh
//   2. Khai bao ham kiem tra xem mot gia tri x co trong ngan xep hay khong

// VIET CODE CUA BAN O DAY
// ...

void output(Stack & stack);

void check(Stack & stack , int x);

int main()
{	
	Stack s;
	stackInit(s);
	
	// YEU CAU THUC HANH
	//   1. Viet code kiem tra ngan xep co dang rong hay khong
	//   2. Viet code chen vao ngan xep mot so phan tu
	//   3. Viet code in tat ca cac phan tu trong ngan xep len man hinh
	//   4. Viet code nhap vao x roi kiem tra x co trong ngan xep hay khong
	//   5. Viet code rut tung phan tu ra khoi ngan xep cho den khi ngan xep rong
	//   6. Viet code kiem tra xem ngan xep da rong hay chua
	
	// VIET CODE CUA BAN O DAY
	// ...

	if (stackIsEmpty(s)) cout << "Ngan xep rong";
	else cout << "Trong ngan xep co phan tu";

	cout << endl;
	int n;
	int a;

	cout << "Nhap so phan tu can nhap: ";
	cin >> n;

	for (int i = 0 ; i < n ; i ++)
	{
		cout << "Nhap phan tu: ";
		cin >> a;
		stackPush(s , a);
	}

	output(s);
	

	int x;
	cout << "Nhap x de kiem tra: ";
	cin >> x;

	check(s , x);

	while (s.topOfStack != -1) 
	{
		stackPop(s);
	}
	
	if (stackIsEmpty(s)) cout << "Ngan xep rong";
	else cout << "Trong ngan xep co phan tu";
	
	stackDestroy(s);
	
	return 0;
}

void stackInit(Stack & stack, int capacity)
{
	stack.theArray = new T[capacity]; // Tao mang chua cac phan tu
	stack.topOfStack = -1;            // "= -1" nghia la ban dau ngan xep rong
}

void stackDestroy(Stack & stack)
{
	delete[] stack.theArray; // Xoa mang da duoc cap phat dong trong ham khoi tao
}

bool stackIsEmpty(Stack & stack)
{
	return (stack.topOfStack == -1);
}

int stackGetSize(Stack & stack)
{
	return (stack.topOfStack + 1);
}

void stackPush(Stack & stack, T e)
{
	stack.topOfStack++;
	stack.theArray[stack.topOfStack] = e;
}

void stackPop(Stack & stack)
{
	stack.topOfStack--;
}

T stackTop(Stack & stack)
{
	return stack.theArray[stack.topOfStack];
}

// YEU CAU THUC HANH
//   1. Dinh nghia ham in tat ca cac phan tu trong ngan xep len man hinh
//   2. Dinh nghia ham kiem tra xem mot gia tri x co trong ngan xep hay khong

// VIET CODE CUA BAN O DAY
// ...
void output(Stack & stack)
{
	cout << "Ngan xep: ";
	for(int i = 0 ; i <= stack.topOfStack ; i ++)
	{
		cout << " " << stack.theArray[i];
	}
	cout << endl;
}

void check(Stack & stack , int x)
{
	int counter = 0;
	for(int i = 0 ; i < stack.topOfStack ; i++)
	{
		if(x = stack.theArray[i])
		{
			counter++;
		}
	}
	if(counter = 0) cout << "Khong tim thay phan tu trong ngan xep" << endl;
	else cout << "Co phan tu trong ngan xep" << endl;
}