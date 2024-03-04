#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vt{1, 2, 3, 4, 5}; 
    int s1 = vt.size(); 
    int c1 = vt.capacity();

    int c2 = 10; 

    if (c2 > c1) {
        vt.reserve(c2); 
        cout << "Dung luong sau khi tang: " << vt.capacity() << endl; 
        cout << "Kich thuoc vector: " << vt.size() << endl; 
    } else {
        cout << "Khong the tang dung luong, c2 phai lon hon c1." << endl;
    }

    return 0;
}
