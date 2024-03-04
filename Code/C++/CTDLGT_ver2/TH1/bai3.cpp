#include<iostream>
using namespace std;

struct NhanVien {
    string id , hoten;
    int hs , luong , tuoi;

    int monthlySalary() {
        return hs * luong;
    }

    void input() {
        cout << "Nhap ma nhan vien: ";
        cin >> id;
        cin.ignore();
        cout << "Nhap ho va ten cua nhan vien: ";
        getline(cin , hoten);
        cout << "Nhap he so luong: ";
        cin >> hs;
        cout << "Nhap luong cua nhan vien: ";
        cin >> luong;
        cout << "Nhap tuoi nhan vien: ";
        cin >> tuoi;
    }

    void output() {
        cout << "Ma nhan vien: " << id << endl;
        cout << "Ten nhan vien: " << hoten << endl;
        cout << "He so luong: " << hs << endl;
        cout << "Luong nhan vien: " << luong << endl;
        cout << "Tuoi nhan vien: " << tuoi << endl;
        cout << "Luong hang thang: " << monthlySalary() << endl;
    }
};

int main() {
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    NhanVien *nv = new NhanVien[n];

    cout << "****Nhap sinh vien****" << endl;
    for (int i = 0 ; i < n ; i ++)
    {
        cout << "Nhap nhan vien thu " << i + 1 << ": "<<endl;
        (nv + i) -> input();
        cout << "--------------------------------------------" << endl;
    }
    

    cout << "****Danh sach nhan vien****" << endl;
    for (int i = 0 ; i < n ; i ++)
    {
        cout << "Nhap nhan vien thu " << i + 1 << ": "<<endl;
        (nv + i) -> output();
        cout << "--------------------------------------------" << endl;
    }

    
}