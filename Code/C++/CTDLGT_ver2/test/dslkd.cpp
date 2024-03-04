#include <iostream>
using namespace std;

typedef int T;

struct DNode {
    T elem;      
    DNode * next; 
    DNode * prev; 
};


struct DList {
    DNode * header;  
    DNode * trailer;     
    DNode * currentPos;  
};


void dlistInsert(DList & list, T e);


void dlistRemove(DList & list);

void dlistInsert(DList & list, T e) {
    DNode * v = list.currentPos;
    DNode * u = new DNode;
    u->elem = e;    
    u->next = v;       
    u->prev = v->prev;
    v->prev->next = u;
    v->prev = u;      
}


void dlistRemove(DList & list) {
    DNode * v = list.currentPos; 
    DNode * u = v->prev;       
    DNode * w = v->next;      
    u->next = w; 
    w->prev = u; 
    delete v;    
    list.currentPos = w; 
                        
}

