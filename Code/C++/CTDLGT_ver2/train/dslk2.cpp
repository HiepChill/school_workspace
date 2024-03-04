#include<iostream>
using namespace std;

// Khai b�o ki?u ph?n t?
typedef int T;
// �?nh nghia ki?u c?a c�c n�t trong danh s�ch
struct DNode {
    T elem;       // Ph?n t?
    DNode * next; // Li�n k?t v? ph�a sau
    DNode * prev; // Li�n k?t v? ph�a tru?c
};
// �?nh nghia c?u tr�c danh s�ch li�n k?t d�i
struct DList {
    DNode * header;       // Con tr? t?i d?u danh s�ch (n�t gi?)
    DNode * trailer;      // Con tr? t?i cu?i danh s�ch (n�t gi?)
    DNode * currentPos;   // Con tr? t?i n�t hi?n h�nh
};

void dlistInit(DList & list);      // H�m kh?i t?o

void dlistDestroy(DList & list);   // H�m h?y

bool dlistIsEmpty(DList & list);   // Ki?m tra r?ng

T dlistFront(DList & list);        // L?y ph?n t? d?u danh s�ch

T dlistBack(DList & list);         // L?y ph?n t? cu?i danh s�ch

T dlistCurrent(DList & list);      // L?y ph?n t? hi?n h�nh

void dlistMoveNext(DList & list);  // Chuy?n sang n�t k? ti?p

void dlistMovePrev(DList & list);  // Chuy?n v? n�t li?n tru?c

void dlistMoveFront(DList & list); // Chuy?n v? d?u danh s�ch

void dlistMoveBack(DList & list);  // Chuy?n v? cu?i danh s�ch

void dlistPushFront(DList & list, T e); // Ch�n v�o d?u danh s�ch

void dlistPushBack(DList & list, T e);  // Ch�n v�o cu?i danh s�ch

void dlistPopFront(DList & list); // X�a ph?n t? d?u danh s�ch

void dlistPopBack(DList & list);  // X�a ph?n t? cu?i danh s�ch

// Ch�n v�o (ngay tru?c) v? tr� hi?n h�nh.
void dlistInsert(DList & list, T e);

// X�a ph?n t? ? v? tr� hi?n h�nh.
void dlistRemove(DList & list);

int main()
{
	
}

void dlistInsert(DList & list, T e) {
    DNode * v = list.currentPos; // L?y n�t hi?n h�nh
    DNode * u = new DNode;       // T?o n�t m?i
    u->elem = e;       // N�t m?i ch?a ph?n t? m?i,
    u->next = v;       // tr? t?i n�t sau v�
    u->prev = v->prev; // tr? v? n�t tru?c.
    v->prev->next = u; // N�t tru?c tr? t?i n�t m?i
    v->prev = u;       // N�t sau tr? v? n�t m?i
}

void dlistRemove(DList & list) {
   DNode * v = list.currentPos; // N�t hi?n h�nh c?n x�a
   DNode * u = v->prev;         // N�t tru?c
   DNode * w = v->next;         // N�t sau
   u->next = w; // N�t tru?c tr? t?i n�t sau 
   w->prev = u; // N�t sau tr? v? n�t tru?c
   delete v;    // X�a n�t hi?n h�nh cu
   list.currentPos = w; // Sau khi x�a, n�t sau tr?
                        // th�nh n�t hi?n h�nh m?i.
}



























