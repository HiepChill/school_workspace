// Thuc hanh hang doi uu tien (danh cho giang vien)

#include <iostream>
#include <queue>

using namespace std;

int main()
{ 
	// Tao hang doi uu tien chua cac so nguyen
	priority_queue<int> pq;
	
	// Chen lan luot vao dong: 8, 3, 9, 1, 7, 5, 6, 4
	pq.push(8);
	pq.push(3);
	pq.push(9);
	pq.push(1);
	pq.push(7);
	pq.push(5);
	pq.push(6);
	pq.push(4);
	
	// Rut cac phan tu ra khoi hang doi uu tien va in len man hinh
	cout << "Noi dung cua hang doi uu tien:" << endl;
	while (!pq.empty()) // Trong khi hang doi khac rong
	{
		cout << pq.top() << " "; // Lay phan tu va in len man hinh
		pq.pop();                // Xoa phan tu
	}
	
	return 0;
}

