#include<iostream>
using namespace std;

// Khai báo ki?u ph?n t?
typedef int T;
// Ð?nh nghia ki?u c?a các nút trong danh sách
struct DNode {
    T elem;       // Ph?n t?
    DNode * next; // Liên k?t v? phía sau
    DNode * prev; // Liên k?t v? phía tru?c
};
// Ð?nh nghia c?u trúc danh sách liên k?t dôi
struct DList {
    DNode * header;       // Con tr? t?i d?u danh sách (nút gi?)
    DNode * trailer;      // Con tr? t?i cu?i danh sách (nút gi?)
    DNode * currentPos;   // Con tr? t?i nút hi?n hành
};

void dlistInit(DList & list);      // Hàm kh?i t?o

void dlistDestroy(DList & list);   // Hàm h?y

bool dlistIsEmpty(DList & list);   // Ki?m tra r?ng

T dlistFront(DList & list);        // L?y ph?n t? d?u danh sách

T dlistBack(DList & list);         // L?y ph?n t? cu?i danh sách

T dlistCurrent(DList & list);      // L?y ph?n t? hi?n hành

void dlistMoveNext(DList & list);  // Chuy?n sang nút k? ti?p

void dlistMovePrev(DList & list);  // Chuy?n v? nút li?n tru?c

void dlistMoveFront(DList & list); // Chuy?n v? d?u danh sách

void dlistMoveBack(DList & list);  // Chuy?n v? cu?i danh sách

void dlistPushFront(DList & list, T e); // Chèn vào d?u danh sách

void dlistPushBack(DList & list, T e);  // Chèn vào cu?i danh sách

void dlistPopFront(DList & list); // Xóa ph?n t? d?u danh sách

void dlistPopBack(DList & list);  // Xóa ph?n t? cu?i danh sách

// Chèn vào (ngay tru?c) v? trí hi?n hành.
void dlistInsert(DList & list, T e);

// Xóa ph?n t? ? v? trí hi?n hành.
void dlistRemove(DList & list);

int main()
{
	
}

void dlistInsert(DList & list, T e) {
    DNode * v = list.currentPos; // L?y nút hi?n hành
    DNode * u = new DNode;       // T?o nút m?i
    u->elem = e;       // Nút m?i ch?a ph?n t? m?i,
    u->next = v;       // tr? t?i nút sau và
    u->prev = v->prev; // tr? v? nút tru?c.
    v->prev->next = u; // Nút tru?c tr? t?i nút m?i
    v->prev = u;       // Nút sau tr? v? nút m?i
}

void dlistRemove(DList & list) {
   DNode * v = list.currentPos; // Nút hi?n hành c?n xóa
   DNode * u = v->prev;         // Nút tru?c
   DNode * w = v->next;         // Nút sau
   u->next = w; // Nút tru?c tr? t?i nút sau 
   w->prev = u; // Nút sau tr? v? nút tru?c
   delete v;    // Xóa nút hi?n hành cu
   list.currentPos = w; // Sau khi xóa, nút sau tr?
                        // thành nút hi?n hành m?i.
}



























