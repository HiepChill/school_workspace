#include<iostream>
#include<vector>
using namespace std;

// Khai báo kiểu phần tử
typedef int T;
// Định nghĩa cấu trúc Vector
struct Vector {
    int size;
    int capacity;
    T * array;
};

int main()
{

}

void vecInit(Vector & vec, int initCapacity = 16) {
    vec.size = 0; // Ban đầu chưa có phần tử nào
    vec.capacity = initCapacity; // Khởi tạo dung lượng
    vec.array = new T[vec.capacity]; // Tạo mảng chứa phần tử
}

void vecDestroy(Vector & vec) {
    delete[] vec.array; // Xóa mảng (giải phóng bộ nhớ)
}

void vecCopy(Vector & vec, Vector & vec2) {
    if (&vec != &vec2) { // Ngăn cản tự sao chép
        vec.size = vec2.size; // Đặt kích thước mới
        vec.capacity = vec2.capacity; // Đặt dung lượng mới
        delete[] vec.array; // Xóa mảng cũ
        vec.array = new T[vec.capacity]; // Tạo mảng mới
        // Sao chép các phần tử từ vec2 sang vec
        for (int i = 0; i < vec.size; i++)
            vec.array[i] = vec2.array[i];
    }
}

// Lấy kích thước vector (số phần tử hiện có).
int vecGetSize(Vector & vec) {
    return vec.size;
}
// Kiểm tra vector có đang rỗng hay không.
bool vecIsEmpty(Vector & vec) {
    return (vec.size == 0);
}
// Truy nhập một phần tử thông qua chỉ số (index) của nó.
T vecGetElem(Vector & vec, int index) {
    return vec.array[index];
}
// Cập nhật một phần tử.
void vecSetElem(Vector & vec, int index, T newValue) {
    vec.array[index] = newValue;
}

void vecExpand(Vector & vec, int newCapacity) { 
    if (newCapacity <= vec.size)
        return; // Thoát ra nếu dung lượng mới không đủ lớn
    T * old = vec.array; // Giữ lại địa chỉ mảng cũ
    vec.array = new T[newCapacity]; // Tạo mảng có chiều dài mới
    for (int i = 0; i < vec.size; i++)
        vec.array[i] = old[i]; // Sao chép mảng cũ sang mảng mới
    delete[] old; // Xóa mảng cũ
    vec.capacity = newCapacity; // Đặt dung lượng mới
}



